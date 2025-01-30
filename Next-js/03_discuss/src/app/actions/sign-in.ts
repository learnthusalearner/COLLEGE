'use server'
import * as auth from '@/auth';//it means importing * as auth from '@/auth' is same as importing everything from '@/auth' and assigning it to a variable called auth

export const signIn = async () =>{
    return auth.signIn();
    console.log("Sign-in action triggered");
}