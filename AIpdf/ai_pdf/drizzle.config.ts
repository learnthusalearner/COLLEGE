import { Config, defineConfig } from "drizzle-kit"
import * as dotenv from 'dotenv'
dotenv.config({ path: ".env" })


export default {
    dialect: 'postgresql',
    schema: "./src/lib/db/schema.ts",
    dbCredentials: {
        url: process.env.DATABASE_URL!,
    }
} satisfies Config;

// npx drizzle-kit push:pg => will make the schema
// npx drizzle-kit studio => will show the schema online