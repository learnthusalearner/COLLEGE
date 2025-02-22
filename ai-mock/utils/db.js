import { neon } from '@neondatabase/serverlessl';
import { drizzle } from 'drizzle—orm/neon—http';
import * as schema from './schema'
const sql= neon(process.env.NEXT_PUBLIC_DRIZZLE_DB_URL);

export const db=drizzle(sql,{schema});

