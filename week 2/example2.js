example2.js

var Pet = function (name, age, size, height, width){
  this.name = name
  this.age = age;
  this.size = 13;
  this.height = height;
  this.width = width;
  this.calcu = this.height & this.width;
  this.calculateAreaSize = function (sizefactor){
    return this.height * this.width * sizefactor;
  }
}

var cat = new Pet ("bigfatcat", 12, 12, 40, 20);
var factor = 4;

console.log(cat.calculateAreaSize(3));

