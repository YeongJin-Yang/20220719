const winston = require("winston"); // winston 그 자체를 가져온 것 

const { format } = require("winston"); // winston에서 포멧 객체를 가져온 것 

const { combine } = format; 

require("winston-daily-rotate-file");

const transport = new winston.transports.DailyRotateFile({
  level: "info",
  filename: "./logs/%DATE%.log",
  datePattern: "YYYY-MM-DD-HH",
  zippedArchive: true,
  maxSize: "20m",
  maxFiles: "1d",

  format : combine(
    format. timestamp({ format: "YYYY-MM-DD-HH:mm:ss"}),
    format.json()
  ),
});

const logger = winston.createLogger({
  transports: [transport],
});
module.exports = { logger };