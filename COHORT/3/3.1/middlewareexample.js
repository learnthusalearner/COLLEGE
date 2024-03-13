const express = require("express");
const app = express();

app.listen(3000);

let requestNumber = 0;

function calculateNumberOfRequests(req, res, next) {
  requestNumber++;
  console.log(requestNumber);
  next();
}

app.get("/request", calculateNumberOfRequests, function (req, res) {
  res.send("Hello from the server! You are request number " + requestNumber++);
});
