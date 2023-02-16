const nodemailer = require("nodemailer");

const SendMail = async(req, res) => {
    let testAccount = await nodemailer. createTestAccount();

    let transporter = await nodemailer.createTransport({
        host: "smtp.ethereal.email",
        port: 587,
        auth: {
            user: 'gabrielle.thiel@ethereal.email',
            pass: '171WXS1C1makhWnD1E'
        }
    });

    let info = await transporter.sendMail({
        from: '"Raj Patil" <raj.pati20@pccoepune.org>',
        to: 'patilraj1227@gmail.com',
        subject: 'Hello ✔',
        text: 'Hello to myself!',
        html: '<p><b>Hello</b> to myself!</p>'
    });

    console.log('Message sent: %s', info.messageId);

    res.json(info);
};

module.exports = SendMail;