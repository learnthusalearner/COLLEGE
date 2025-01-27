"use client";
import React, { useState } from 'react';
import Editor from '@monaco-editor/react';
import type { Snippet } from '@prisma/client';
import { Button } from './button';
import {SaveSnippet} from '@/actions/index';

const CodeEditor = ({ snippet }: { snippet: Snippet }) => {

    const [code, setcode] = useState(snippet.code);
    const SaveSnippetAction =SaveSnippet.bind(null,snippet.id,code);

    const handleEditorChange = (value: string | undefined) => {
        if (value) {
            setcode(value);
        }
    }

    return (
        <div>
            <form action={SaveSnippetAction} className='flex justify-between'>
                <h1 className='font-bold text-xl'>Your Code Editor: </h1>
                <Button type='submit'>Save</Button>
            </form>
            <Editor
                height="90vh"
                defaultLanguage="javascript"
                theme='vs-dark'
                defaultValue={code}
                onChange={handleEditorChange}
            />
        </div>
    );
};

export default CodeEditor;