const mongoose = require('mongoose');

// Connect to MongoDB
mongoose.connect('mongodb+srv://kunalsrivastava0405:dgTIyDvloks4LFmI@cluster0.yqaacpj.mongodb.net/test2');

// Define schemas
const AdminSchema = new mongoose.Schema({
    // Schema definition here
    username:
});

const UserSchema = new mongoose.Schema({
    // Schema definition here
});

const CourseSchema = new mongoose.Schema({
    // Schema definition here
});

const Admin = mongoose.model('Admin', AdminSchema);
const User = mongoose.model('User', UserSchema);
const Course = mongoose.model('Course', CourseSchema);

module.exports = {
    Admin,
    User,
    Course
}