// const flip = (location) => {
//   console.log(location);
// };

const cardArray = [
{
  name : "1",
  img : "./public/1.png",
  id : null,
  done: false,
},


{
  name : "2",
  img : "./public/2.png",
  id : null,
  done: false,

},

{
  name : "3",
  img : "./public/3.png",
  id : null,
  done: false,

},

{
  name : "4",
  img : "./public/4.png",
  id : null,
  done: false,

},

{
  name : "5",
  img : "./public/5.png",
  id : null,
  done: false,
},

{
  name : "6",
  img : "./public/6.png",
  id : null,
  done: false,
},
{
  name : "1",
  img : "./public/1.png",
  id : null,
  done: false,
},


{
  name : "2",
  img : "./public/2.png",
  id : null,
  done: false,

},

{
  name : "3",
  img : "./public/3.png",
  id : null,
  done: false,

},

{
  name : "4",
  img : "./public/4.png",
  id : null,
  done: false,

},

{
  name : "5",
  img : "./public/5.png",
  id : null,
  done: false,
},

{
  name : "6",
  img : "./public/6.png",
  id : null,
  done: false,
},

]

const gameDOM=[]; //돔 정보드를 쿼리셀렉터 올로 받는 역할 
                  //document로 안받고 gameDOM에서 받음


const getGameDOM = () =>{
const rows = document.querySelectorAll(".container .row");
console.log("getGameDOM 함수 실행");
                    // console.log(rows);
                    for(let i = 0; i < rows.length; i++){
                      gameDOM[i] = rows[i].querySelectorAll(".column");
                    }
  console.log(gameDOM); 
};

const setIDtoCardArray = () => {
 // console.log(gameDOM);

  cardArray[0].id = "0-0";
  cardArray[1].id = "0-1";
  cardArray[2].id = "0-2";
  cardArray[3].id = "0-3";
  cardArray[4].id = "1-0";
  cardArray[5].id = "1-1";
  cardArray[6].id = "1-2";
  cardArray[7].id = "1-3";
  cardArray[8].id = "2-0";
  cardArray[9].id = "2-1";
  cardArray[10].id = "2-2";
  cardArray[11].id = "2-3";
}

let clickFirst = -1;
let clickSecond = -1;
let clickCount = 0;
const createBoard = () => {
  for (let i = 0; i < gameDOM.length; i++) {
    for (let j = 0; j < gameDOM[i].length; j++) {
      const card = document.createElement("img");
      card.setAttribute("src", "./public/QA.png");
      gameDOM[i][j].appendChild(card);
    }
   
  }
};




const setClickHistory = (location) => {
  if (clickFirst === -1) {
    clickFirst = location;
  } else {
    clickSecond = location;
  }
};

const backFlip = () => {
  const parsedIdFirst = cardArray[clickFirst].id.split("-");
  const parsedIdSecond = cardArray[clickSecond].id.split("-");
  setTimeout(() => {
    gameDOM[parsedIdFirst[0]][parsedIdFirst[1]].querySelector("img").src =
      "./public/QA.png";
    gameDOM[parsedIdSecond[0]][parsedIdSecond[1]].querySelector("img").src =
      "./public/QA.png";
  }, 500);
};

const isCorrect = () => {
  if (cardArray[clickFirst].name === cardArray[clickSecond].name) {
    cardArray[clickFirst].done = true;
    cardArray[clickSecond].done = true;
  } else {
    backFlip();
  }
};

const flip = (location) => {
  if (!cardArray[location].done) {
    setClickHistory(location);

    console.log(clickFirst, clickSecond); // 위치 출력 
    const parsedId = cardArray[location].id.split("-");
    gameDOM[parsedId[0]][parsedId[1]].querySelector("img").src =
      cardArray[location].img;
  
      clickCount++;
      if (clickCount == 2) {
        clickCount = 0;
        isCorrect();
      }
      console.log(clickCount);
      
      if (clickFirst !== -1 && clickSecond !== -1) {
        clickFirst = -1;
        clickSecond = -1;
      }
        }
      };

getGameDOM();
cardArray.sort(() => 0.5 - Math.random());
//console.log(cardArray);

console.log(cardArray);
createBoard(); //물음표가 가득한 게임판을 가져올 때
setIDtoCardArray(); 
//console.log(gameDOM)