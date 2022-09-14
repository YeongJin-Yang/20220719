const mysql = require("mysql2/promise");

const pool = mysql.createPool({
  host: "3.38.128.25",
  user: "jony",
  password: "mynewpassword",
  database: "jony",
  waitForConnections: true,
  connectionLimit: 10,
  queueLimit: 0,
});

module.exports = {pool};