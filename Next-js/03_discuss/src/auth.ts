import NextAuth from 'next-auth';//auth lib for verification
import { PrismaAdapter } from '@auth/prisma-adapter';//adapter to connnect both of them
import GithubProvider from 'next-auth/providers/github';//provider for github to connect with next-auth
import { prisma } from './lib';

export const {handlers:{GET, POST},auth,signIn,signOut} =NextAuth({//idhar ham signIn or SignOut me ye github provider ke pass jaega or connect karega ye sb hame GithubProvider se milta hai
    adapter: PrismaAdapter(prisma),
    providers: [
        GithubProvider({
            clientId: process.env.GITHUB_CLIENT_ID,
            clientSecret: process.env.GITHUB_CLIENT_SECRET
        })
    ],
    callbacks: { 
        async session({ user, session }) {
            if (session && user) {
                session.user.id = user.id
            }
            return session;
        }
    }
})