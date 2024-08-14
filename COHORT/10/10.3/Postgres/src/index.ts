import { Client } from "pg";

const client = new Client({
    connectionString: 'postgresql://kunalsrivastava0405:hq6RzCvX3IVl@ep-yellow-hall-a5tg6tfn.us-east-2.aws.neon.tech/course?sslmode=require'
})


async function CreateUsertable() {
    try {
        async function createUsersTable() {
            await client.connect()
            const result = await client.query(`
                CREATE TABLE users (
                    id SERIAL PRIMARY KEY,
                    username VARCHAR(50) UNIQUE NOT NULL,
                    email VARCHAR(255) UNIQUE NOT NULL,
                    password VARCHAR(255) NOT NULL,
                    created_at TIMESTAMP WITH TIME ZONE DEFAULT CURRENT_TIMESTAMP
                );
            `)
            console.log(result)
        }
    }
    catch (err) {
        console.log("error during insertion", err);
    }
    finally {
        await client.end();
    }
    CreateUsertable();
}