'use server'
import * as auth from '@/auth';//it means importing * as auth from '@/auth' is same as importing everything from '@/auth' and assigning it to a variable called auth

export const signOut = async () =>{
    return auth.signOut();
    console.log("Sign-out action triggered");
}