const EventEmitter = require("events");

const event = new EventEmitter();

event.on('sayMyName', () => {
    console.log("Your name is Raj");
})

event.on('sayMyName', (sc, msg) => {
    console.log(`Your name is Patil and status code is ${sc} and page is ${msg}`);
})

event.emit("sayMyName", 200, "ok");