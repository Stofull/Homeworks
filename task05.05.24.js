//#region Task1
/*
const car = {
  manufacturer: "BMW",
  model: "320i",
  year: 2006,
  averageSpeed: 60,
};
function displayCarInfo(car) {
  console.log(`Производитель: ${car.manufacturer}`);
  console.log(`Модель: ${car.model}`);
  console.log(`Год выпуска: ${car.year}`);
  console.log(`Средняя скорость: ${car.averageSpeed} км/ч`);
}
displayCarInfo(car);

function calculateTravelTime(distance) {
  const hours = distance / car.averageSpeed;
  const restPeriods = Math.floor(hours / 4);
  const totalHours = hours + restPeriods;
  return totalHours;
}

const distanceInMiles = 200;
const travelTime = calculateTravelTime(distanceInMiles);
console.log(`Время в пути: ${travelTime.toFixed(2)} часов`);
*/
//#endregion
//#region Task2
/*
class Fraction {
  constructor(numerator, denominator) {
    this.numerator = numerator;
    this.denominator = denominator;
  }
  static add(fraction1, fraction2) {
    const numerator =
      fraction1.numerator * fraction2.denominator +
      fraction2.numerator * fraction1.denominator;
    const denominator = fraction1.denominator * fraction2.denominator;
    return Fraction.simplify(new Fraction(numerator, denominator));
  }
  static subtract(fraction1, fraction2) {
    const numerator =
      fraction1.numerator * fraction2.denominator -
      fraction2.numerator * fraction1.denominator;
    const denominator = fraction1.denominator * fraction2.denominator;
    return Fraction.simplify(new Fraction(numerator, denominator));
  }
  static multiply(fraction1, fraction2) {
    const numerator = fraction1.numerator * fraction2.numerator;
    const denominator = fraction1.denominator * fraction2.denominator;
    return Fraction.simplify(new Fraction(numerator, denominator));
  }
  static divide(fraction1, fraction2) {
    const numerator = fraction1.numerator * fraction2.denominator;
    const denominator = fraction1.denominator * fraction2.numerator;
    return Fraction.simplify(new Fraction(numerator, denominator));
  }
  static simplify(fraction) {
    const nod = Fraction.nod(fraction.numerator, fraction.denominator);
    return new Fraction(fraction.numerator / nod, fraction.denominator / nod);
  }
  static nod(a, b) {
    while (b !== 0) {
      const temp = b;
      b = a % b;
      a = temp;
    }
    return Math.abs(a);
  }
  toString() {
    return `${this.numerator}/${this.denominator}`;
  }
}

const fraction1 = new Fraction(1, 2);
const fraction2 = new Fraction(3, 4);

console.log(`Fraction 1: ${fraction1}`);
console.log(`Fraction 2: ${fraction2}`);

const added = Fraction.add(fraction1, fraction2);
console.log(`Addition: ${added}`);

const subtracted = Fraction.subtract(fraction1, fraction2);
console.log(`Subtraction: ${subtracted}`);

const multiplied = Fraction.multiply(fraction1, fraction2);
console.log(`Multiplication: ${multiplied}`);

const divided = Fraction.divide(fraction1, fraction2);
console.log(`Division: ${divided}`);
*/
//#endregion
//#region Task3
/* First
var date = new Date();
console.log(`${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`);
*/
/* Second
var date = new Date();
let changeTime = 29;
console.log(
  `${date.getHours()}:${date.getMinutes()}:${date.getSeconds() + changeTime}`
);
*/
/* Third
var date = new Date();
let changeTime = 9;
console.log(
  `${date.getHours()}:${date.getMinutes() + changeTime}:${date.getSeconds()}`
);
*/
/* Four
var date = new Date();
let changeTime = 2;
console.log(
  `${date.getHours() + changeTime}:${date.getMinutes()}:${
    date.getSeconds() + changeTime
  }`
);
*/
//#endregion
