const express = require("express");
const app = express();

const users = [{
    name: 'John',
    kidneys: [{
         healthy: [{
            verified:true
        },{
            verified:false
        }]
    }]
}]

app.use(express.json());//will tell later

app.get("/", function (req, res) {
    const johnkidneyhealthy=users[0].kidneys[0].healthy;
    const numberofkidney=johnkidneyhealthy.length;
    let numberofhealthykidneyverified=0;
    for(let i=0;i<numberofkidney;i++){
        if(johnkidneyhealthy[i].verified){
            let numerofhealthykidneysverified=numberofhealthykidneyverified + 1;

        }
    }
    const numberofhealthykidneynotverified=numberofkidney-numberofhealthykidneyverified;

    res.json({
        numberofkidney,
        numberofhealthykidneyverified,
        numberofhealthykidneynotverified
    })
})

app.post("/", function(req, res) {
    const isHealthyVerified = req.body.isHealthyVerified;
    userskidneyshealthy.push({
        verified: isHealthyVerified
    });
    res.json({
        msg: "Kidney health status updated"
    });
});

app.put("/", function (req, res) {
    for (let i = 0; i < users[0].kidneys[0].healthy.length; i++) {
        users[0].kidneys[i].healthy= true;
    }

    res.json({
        msg: "All kidneys marked as verified"
    });
});
app.delete("/",function(req,res){
    const newkidneys =[];
    for(let i=0;i<users[0].kidneys.length;i++){
        if(users[0].kidneys[i].healthy){
            newkidneys.push(users[0].kidneys[i]);
        }
    }
    users[0].kidneys =newkidneys;
    res.json({
        msg:"delete is done bro"
    })
})

app.listen(6000);