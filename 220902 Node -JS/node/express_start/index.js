//제이슨 서버를 만들자~

const express = require("express");
const app = express();
const PORT = 8080; //포트번호 지정 

const cors =require("cors"); 
app.use(cors());

app.get("/api/info", (req, res) => {  //url에 정확하게 들어오면 res.json을 리턴해라
  //console.log(req);
  //console.log(res.json);
  return res.json({
    name: "jony",
    job: "tutor",
  });
});

app.listen(PORT, () => console.log(`this server listening on ${PORT}`));
