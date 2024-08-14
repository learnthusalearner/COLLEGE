"use strict";
var __awaiter = (this && this.__awaiter) || function (thisArg, _arguments, P, generator) {
    function adopt(value) { return value instanceof P ? value : new P(function (resolve) { resolve(value); }); }
    return new (P || (P = Promise))(function (resolve, reject) {
        function fulfilled(value) { try { step(generator.next(value)); } catch (e) { reject(e); } }
        function rejected(value) { try { step(generator["throw"](value)); } catch (e) { reject(e); } }
        function step(result) { result.done ? resolve(result.value) : adopt(result.value).then(fulfilled, rejected); }
        step((generator = generator.apply(thisArg, _arguments || [])).next());
    });
};
Object.defineProperty(exports, "__esModule", { value: true });
const pg_1 = require("pg");
const client = new pg_1.Client({
    connectionString: 'postgresql://kunalsrivastava0405:hq6RzCvX3IVl@ep-yellow-hall-a5tg6tfn.us-east-2.aws.neon.tech/course?sslmode=require'
});
function CreateUsertable() {
    return __awaiter(this, void 0, void 0, function* () {
        try {
            function createUsersTable() {
                return __awaiter(this, void 0, void 0, function* () {
                    yield client.connect();
                    const result = yield client.query(`
                CREATE TABLE users (
                    id SERIAL PRIMARY KEY,
                    username VARCHAR(50) UNIQUE NOT NULL,
                    email VARCHAR(255) UNIQUE NOT NULL,
                    password VARCHAR(255) NOT NULL,
                    created_at TIMESTAMP WITH TIME ZONE DEFAULT CURRENT_TIMESTAMP
                );
            `);
                    console.log(result);
                });
            }
        }
        catch (err) {
            console.log("error during insertion", err);
        }
        finally {
            yield client.end();
        }
        CreateUsertable();
    });
}
