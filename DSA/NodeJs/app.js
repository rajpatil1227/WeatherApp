const express = require("express");
const app = express();
let PORT = 5000;

const SendMail = require("./SendMail");

app.get("/", (req, res) => {
    res.send("I am a Server");
});

app.get("/mail", SendMail);

const start = async () => {
    try {
        app.listen(PORT, () => {
            console.log(`Live on port ${PORT}`);
        });
    } catch (error) {}
}

start();