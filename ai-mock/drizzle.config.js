import { defineConfig } from 'drizzle-kit'

export default defineConfig({
  schema:"./utils/schema.js",
  dialect: "postgresql",
  dbCredentials: {
    url: "postgresql://neondb_owner:npg_9bG0oIzlwDtN@ep-broad-hat-a8rz4atb-pooler.eastus2.azure.neon.tech/neondb?sslmode=require",
  }
})