const mysql = require("mysql2/promise");

const pool = mysql.createPool({
    // aws ip
    host: "3.38.128.25",
    // mysql username
    user: "jony",
    // mysql user password
    password: "mynewpassword",
    // db name
    database: "order_system",
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0,
});

module.exports = { pool };

