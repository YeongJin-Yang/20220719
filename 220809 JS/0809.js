class Hero {
  constructor(hp) {
    this.hp = hp;
  }
  walk() {
    console.log("조금 빠르게 걷기");
  }
  run() {
    this.hp = this.hp - 10;
  }
}

class SuperMan extends Hero {
  constructor(hp, mp) {
    super(hp);             //hp,mp 둘다 쓰려고 (부모에 있는거 싹다 가져오기)
    this.mp = mp;          
  }
  walk() {            //위에 walk랑 다른 walk
    super.walk();
    console.log("완전 빠르게 걷기");
  }
  fly() {
    console.log("fly");
    console.log(this.hp);
  }
}

const superman = new SuperMan(100, 100);

superman.run();
superman.walk();
superman.fly();