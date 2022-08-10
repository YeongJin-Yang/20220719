//1.--------------------------------
const addNum(n,m) => {
  return n+m;
}

console.log(addNum(1,2));

//2.--------------------------------

function addNumFunc(n,m) {
  return n+m;
}

function addNumArrow(n,m) {
  return n+m;
};

console.log(addNumFunc(1,2));
console.log(addNumArrow(1,2));

//3.--------------------------------

const adder = (x) => (y) => x + y;
add5 =  adder(5); 
console.log(add5(1));

//4.------------------------------