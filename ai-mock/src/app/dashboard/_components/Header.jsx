'use client'
import React from 'react'
import Image from 'next/image'
import { UserButton } from '@clerk/nextjs'
import { usePathname } from 'next/navigation'
import { useEffect } from 'react'

function Header() {

  const path = usePathname();
  useEffect(() => {
    console.log(path);
  }, []);

  return (
    <div className='flex p-4 items-center justify-between bg-gradient-to-r from-blue-500 to-purple-600 shadow-lg border-b-2 border-purple-700'>
      {/* Added gradient background, shadow, and border */}
      <Image src="logo.svg" alt="Logo" height={80} width={40} className="rounded-lg"/>
      {/* Adjusted logo size and added rounded corners */}
      <ul className='hidden md:flex gap-8 font-sans'>
        {/* Changed font to sans-serif for a modern look */}
        <li className={`
        hover:text-primary hover:font-semibold transition-all duration-300 cursor-pointer 
        transform hover:scale-105
          ${path=='/dashboard' && 'text-yellow-300 font-semibold' }`} >Dashboard</li>
        {/* Added scale transform on hover and changed active color to yellow */}
        <li className={`
        hover:text-primary hover:font-semibold transition-all duration-300 cursor-pointer 
        transform hover:scale-105
          ${path=='/dashboard/questions' && 'text-yellow-300 font-semibold' }`}>Questions</li>
        <li className={`
        hover:text-primary hover:font-semibold transition-all duration-300 cursor-pointer 
        transform hover:scale-105
          ${path=='/dashboard/upgrade' && 'text-yellow-300 font-semibold' }`}>Upgrade</li>
        <li className={`
        hover:text-primary hover:font-semibold transition-all duration-300 cursor-pointer 
        transform hover:scale-105
          ${path=='/dashboard/how' && 'text-yellow-300 font-semibold' }`}>How it works?</li>
      </ul>
      <UserButton appearance={{
        elements: {
          userButtonAvatarBox: "h-12 w-12 border-2 border-white"
        }
      }} />
      {/* Styled the UserButton to have a larger avatar with a white border */}
    </div>
  )
}

export default Header