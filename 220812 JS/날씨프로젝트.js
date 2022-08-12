const timer = document.querySelector(".timer");

const setRenderBackground = async () => {
  const response = await axios.get("https://picsum.photos/1280/720", {
    responseType: "blob",
  });
  const imageURL = URL.createObjectURL(response.data);
  document.querySelector("body").style.backgroundImage = `url(${imageURL})`;
};

const setTime = () => {
  const date = new Date();
  timer.textContent = `${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`;
};

const getMemo = () => {
  //메모에 접근해서 메모 벨류를 가져 옴 
  const memo = document.querySelector(".memo");
  const memoValue = localStorage.getItem("todo");
  memo.textContent = memoValue;
}



const setMemo =() => {
  const memoInput = document.querySelector(".memo-input")
  memoInput.addEventListener("keyup", (evt)=> {
    if(evt.code === "Enter" && evt.currentTarget.value)
    {localStorage.setItem("todo",evt.currentTarget.value);
    getMemo();
    memoInput.value="";

    }
    //console.log(evt); 
    //addEventListener 
  })

}

setRenderBackground();
setInterval(() => setRenderBackground(), 50000);
setInterval(() => setTime(), 1000);
setMemo();
getMemo();



/*const setRenderBackground = async () => {
  const response = await axios.get("https://picsum.photos/1280/720", {
    responseType: "blob"
  });
  //console.log(response.data);
  const imageURL = URL.createObjectURL(response.data);

  document.querySelector("body").style.backgroundImage = `url(${imageURL})`;
};

const setTime = () => {
  const timer = document.querySelector(".timer");
  setInterval(()=>{
    const date = new Date();
    timer.textContent=`${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`;
  },1000);
};

setRenderBackground();
setInterval(()=>setRenderBackground(),50000)
setTime(); */