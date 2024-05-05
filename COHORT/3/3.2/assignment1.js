const express = require("express");
const jwt = require("jsonwebtoken");//npm i jsonwebtoken for running in vs code
const jwtPassword = "123456";

const app = express();
app.use(express.json());

const ALL_USERS = [
  {
    username: "harkirat@gmail.com",
    password: "123",
    name: "harkirat singh",
  },
  {
    username: "raman@gmail.com",
    password: "123321",
    name: "Raman singh",
  },
  {
    username: "priya@gmail.com",
    password: "123321",
    name: "Priya kumari",
  },
];

function userExists(username, password) {
  let userExists=false;
    for(let i=0;i<ALL_USERS.length;i++){
      if(ALL_USERS[i].username==username && ALL_USERS[i].password==password){
        userExists=true;
      }
      return userExists;
    }  
  }
app.post("/signin", function (req, res) {
  const username = req.body.username;
  const password = req.body.password;

  if (!userExists(username, password)) {
    return res.status(403).json({
      msg: "User doesnt exist in our in memory db",
    });
  }

  var token = jwt.sign({ username: username },jwtPassword);//this 3 lines a library of jwt for getting token
  return res.json({//we can say encryption is being done here
    token,
  });
});

app.get("/users", function (req, res) {
  const token = req.headers.authorization;
    const decoded = jwt.verify(token, jwtPassword);//decryption
    const username = decoded.username;
    res.json({
      users:ALL_USERS.filter(function(value){
        if(value.username==username){
          return false;
        }else{
          return true;
        }
      })
    })
  }
);

app.listen(3000);
