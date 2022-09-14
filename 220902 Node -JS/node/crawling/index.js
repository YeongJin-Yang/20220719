const puppeteer = require("puppeteer");

const main = async() => {
const browser = await puppeteer.launch({
headless: true,
});

const page = await browser.newPage();

//await page.goto('https://www.naver.com');
// await page.pdf({ path: 'test.pdf',format: 'A4'})
//await page.screenshot({path: "screenshot.jpg",fullpage: true});
//await browser.close();

//===========================================================================

await page.goto("https://news.daum.net/digital#1")

const data = await page.evaluate(()=>{
//evaluate : 브라우저에서 쓸 수 있는 기능을 사용할 수 있게 해줌 
const webtoonLists = document.querySelectorAll(".box_news_major ul a")
const titles = Array.from(webtoonLists).map(li => li.textContent)

return titles;

})  

console.log(data);

await browser.close();


};

main();
