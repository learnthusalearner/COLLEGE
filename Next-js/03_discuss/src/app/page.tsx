import React, { useState, useEffect } from 'react';
import Image from 'next/image';
import { Button } from '@/components/ui/button';
import { signIn, signOut } from 'next-auth/react';
import { useSession } from 'next-auth/react';

const HomePage = () => {
  const { data: session } = useSession();
  const [discussion, setDiscussion] = useState('');
  const [discussions, setDiscussions] = useState([]);

  useEffect(() => {
    const fetchDiscussions = async () => {
      const res = await fetch('/api/discussions');
      const data = await res.json();
      setDiscussions(data);
    };

    fetchDiscussions();
  }, []);

  const handlePostDiscussion = async (e) => {
    e.preventDefault();
    if (!discussion) return;

    const res = await fetch('/api/discussions', {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
      },
      body: JSON.stringify({ content: discussion }),
    });

    if (res.ok) {
      const newDiscussion = await res.json();
      setDiscussions([...discussions, newDiscussion]);
      setDiscussion('');
    }
  };

  return (
    <div className="p-6 bg-gray-100 rounded-lg shadow-md max-w-4xl mx-auto mt-10">
      <h1 className="text-4xl font-bold mb-4">Welcome to Discuss</h1>
      <p className="text-lg mb-4">Discuss is a place to share knowledge and better understand the world.</p>
      <div className="flex space-x-4 mb-4">
        {session?.user ? (
          <form action={signOut}>
            <Button type="submit">Sign out</Button>
          </form>
        ) : (
          <form action={signIn}>
            <Button type="submit">Sign in</Button>
          </form>
        )}
      </div>
      <Image src="/path/to/your/image.jpg" alt="Discuss" width={600} height={400} className="mb-4" />
      {session?.user && (
        <div>
          <form onSubmit={handlePostDiscussion} className="mb-4">
            <textarea
              value={discussion}
              onChange={(e) => setDiscussion(e.target.value)}
              className="w-full p-2 border rounded mb-2"
              placeholder="Write your discussion here..."
            />
            <Button type="submit">Post Discussion</Button>
          </form>
          <div>
            {discussions.map((d) => (
              <div key={d.id} className="p-4 border rounded mb-2">
                <p>{d.content}</p>
              </div>
            ))}
          </div>
        </div>
      )}
    </div>
  );
};

export default HomePage;