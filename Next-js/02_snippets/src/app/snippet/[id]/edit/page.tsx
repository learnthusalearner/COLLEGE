import React from 'react';
import CodeEditor from '@/components/ui/editor';
import prisma from '@/lib/prisma';

const EditSnippetPage = async({params}:{params:Promise<{id:string}>}) => {//why this is used can read dynamic route slugs in nextjs  https://nextjs.org/docs/routing/dynamic-routes
    const id=parseInt((await params).id);
    const snippet=await prisma.snippet.findUnique({
        where:{
            id:id
        }
    });

    if (!snippet) {
        return <div>Snippet not found</div>;
    }

    return (
        <div>
            <div>
                <h1>Edit Snippet</h1>
            </div>
            <div>
                <CodeEditor snippet={snippet}/>
            </div>
        </div>
    )
};

export default EditSnippetPage;