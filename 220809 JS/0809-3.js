//현업에서 사용을 잘 안하지만 코테나 시험에서 쓰임

//find : 값 호출
//findindx : 인덱스 호출 


//filter 필터

const datas= [3,5,4,2];
const newDatas =datas.filter((data,idx)=> idx>2);
console.log(newDatas);


const bucketList = [

{
  id :1,
  text : "여행 가기",
  done : false,
},

{
  id :2,
  text : "치킨 먹기",
  done : true,
},

{
  id :3,
  text : "코딩 하기",
  done : true,
},

{
  id :4,
  text : "요리 가기",
  done : false,
},


];

const newbucketLists = bucketList.filter(
  (buckeList)=> bucketList.done ===false
  );


console.log(newbucketLists);