setTimeout(()=>{
  console.log("hi");
},2000); //2초 뒤에 실행 

//파라미터는 총 2개 ( 함수 1개, num 1개)

//2.......................................

const sayHi => "Hi";

//const sampleFunc = (Func) => 

sampleFunc(sayHi());
sampleFunc("Hi");
sampleFunc(sayHi);
sampleFunc(()=> "Hi");  //함수가 파라미터 안에 들어가는거 : 콜백함수


//3..........................................

const func = () =>console.log("Hi");

setTimeout(func,3000);           //func을 언젠간 다시 쓸거라서 함수를 정의했구나라고 파악해야함!

//-------------------위 아래 결과값 동일------------

setTimeout(() => console.log("Hi"), 3000);  //한번 쓰고 말 함수라서 함수를 정의하지 않음


//4.............................................

const nums = [3,5,4,2];
nums.forEach((num) => console.log(num));  //forEach는 단순히 순회하기 위해 존재 (리턴값을 받지 않음)

// 단수복수기법
//배열로 이루어져있으면 s를 붙이기
//복수를 각각으로 받을때는 s를 떼기  

//-----------------------------------------------------

const newNums = nums.map((num)=> num +1);  //map은 진짜 많이 씀(리턴값을 모아서 새로운 배열을 생성)
console.log(newNums);

//5...............................................

const sampleFunc = (num) => console.log(num)

const nums = [3,5,4,2];

nums.forEach((num) => console.log(num));  // 함수를 정의 
//-------------------위 아래 결과값 동일------------
nums.forEach(sampleFunc);   // 함수를 정의X



//6...........................................................

const nums = [4,3,5,1,6,5];
let count =0;

nums.forEach((num) => {
  if(num%2==1){
    count++
  }
})

console.log(count);



//7.......................................

const nums = [1,2,3,4,5];
const result1 = nums.map((num)=> num*num);

const words = ["a","bcd","ef","g"];
const result2 = words.map((word)=> word.length);



console.log( result1);

console.log( result2);