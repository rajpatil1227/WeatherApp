const fs = require ("fs");
const {add , name} = require('./open');

console.log(add(5,5));
console.log(name);

const http = require("http");

const server =http.createServer( (req,res) =>{
    if(req.url == "/")
    {
        res.end("Hello from home side");
    }
    else if(req.url == "/about")
    {
        fs.readFile("read.txt", (err, data) => {
            if(err) return console.error(err);
            res.end(data.toString()); 
        })
    }
    else{
        res.writeHead(404);
        res.end("404");
    }
});

server.listen(8000, "127.0.0.1", ()=>{
    console.log("listening to port no 8000");
})





