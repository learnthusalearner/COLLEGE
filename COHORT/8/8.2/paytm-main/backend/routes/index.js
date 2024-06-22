const express = require('express');
const UserRouter = require('./user')

const router = express.Router();
router.use("/user",UserRouter)

module.exports = router;