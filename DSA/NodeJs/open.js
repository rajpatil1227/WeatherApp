/*const fs = require("fs");

// fs.writeFileSync('read.txt',"Welcome");

// fs.appendFileSync('read.txt'," How are You");

// const data = fs.readFileSync("read.txt");
// console.log(data.toString());

const data = fs.readFileSync("read.txt","utf8");
console.log(data); */

// const os = require("os");

// console.log(os.arch());

const add = (a,b) =>{
    return a+b;
}

const name = "Raj Patil";

// module.exports.add= add;
// module.exports.name= name;

module.exports= {add , name};

 