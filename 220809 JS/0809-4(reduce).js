const nums = [1,2,3,4,5];

// const sum = nums.reduce((acc,cur)=>{
// console.log("acc",acc);
// console.log("cur",cur);
// return acc+ cur;
// });
// console.log(sum);

// // acc= 가산(누적되어있는 값)
// // cur= 현재 멈춰져 있는 값


// //축약
// const sum = nums.reduce((acc.cur)=> acc+cur);
// console.log(sum);


//초기값이 있을 때,
 const newNums = nums.reduce((acc, cur) => {
   console.log("acc", acc);
   console.log("cur", cur);
   acc.push(cur + 1);
   return acc;
 }, []);
 console.log(newNums);

//초기값이 없을때, 맨앞의 인덱스를 사용


// 필터 (1)....................................
  const datas =[1,2,3,4,5];
  const newDatas = datas.filter((data)=> data >3);
  console.log(newDatas);

// 필터 (2)....................................

  const nums = [1,2,3,4,5]
  const newNums = nums.reduce((acc,cur)=>{
    if(cur>3){
      acc.push(cur);
    }
    return acc;
  },[]);
  console.log(newNums);

// 응용--------------------------------------------------
 const arr = [
  "피카츄", "라이츄",
 "파이리", "꼬부기", 
 "피카츄", "파이리"
];
 const result = arr.reduce((acc, cur) => {
   if (acc[cur]) {  //.......acc,cur로 쓰면 x !! 
   acc[cur] = acc[cur] + 1;
  } else {
 acc[cur] = 1;
   }
   return acc;
 }, {});
 
 //-----------------------------------------------------
 
  const arr= [1,2,3,4,5,6,7,8,9,10,11,12,13,14];
  let count1 =0;
  let count2 =0;
  const newarr = arr.reduce((acc,cur)=>{
    if(num%2==1){
          count1++
        }
    else
  
    }

//---------------------------------------------------

    const add = (a,b) => a+b;

    console.log('답: ${add(3,4)}')


//-------------------------------------------------------

const abc= {
name : "치킨",
type : "후라이드",
};

const {name,type} =abc;
console.log(name);
console.log(type);

//Spread--------------------------------------------

const square ={
  width: 200,
  height : 200,
}
const colorSquare = {
...square,
color : 'red'
}
console.log(colorSquare)