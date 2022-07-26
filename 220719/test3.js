function showAlert(){
  alert("야호");
}

const sampleBtn =document.querySelector(".sample-btn");

sampleBtn.addEventListener("click", showAlert);
// 내가 가져온 HTML을 가져오는거...  클릭을 했을 때 작동할 함수 이름을 적기..
//여기서 showAlert가 이벤트 핸들러입니다~

// console.log(sampleBtn);