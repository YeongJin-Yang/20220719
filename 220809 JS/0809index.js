const URL = "https://jsonplaceholder.typicode.com/todos/";

const getData = async () => {
  try {
    const response = await axios.get(URL);
    console.log(response.data);
  } catch (error) {   ///캐치에서 에러를 잡게 됨 (구문에러는 아니고 통신과정에서 에러 발생시 사용자에게 알려주려고)
    console.log(error);
  }
};

getData();