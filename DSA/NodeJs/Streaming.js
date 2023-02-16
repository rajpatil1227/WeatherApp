const fs = require("fs");

const http = require("http");

const server =http.createServer( (req,res) =>{
        
     //1st way
        // fs.readFile("read.txt", (err, data) => {
        //     if(err) return console.error(err);
        //     res.end(data.toString()); 
        // })
    
    //2nd way
        /*const rstream = fs.createReadStream("read.txt");
        
        rstream.on("data", (chunkdata) => {
            res.write(chunkdata);
        });

        rstream.on("end", () => {
            res.end();
        });

        rstream.on("error", (err) => {
            console.log(err);
            res.end("File not found");
        });  */

    //3rd way
    const rstream = fs.createReadStream("read.txt");
    rstream.pipe(res);
});

server.listen(8000, "127.0.0.1", ()=>{
    console.log("listening to port no 8000");
})





