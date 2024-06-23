const express = require('express');
const UserRouter = require('./user')
const AccountRouter = require('./accounts')

const Router = express.Router();
Router.use("/user",UserRouter)
Router.use("/account",AccountRouter)

module.exports = Router;