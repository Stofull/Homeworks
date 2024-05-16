/*#region FirstTask
function testNum(a, b) {
  if (a < b) {
    console.log(-1);
  } else if ((a = b)) {
    console.log(0);
  } else {
    console.log(1);
  }
}

let a = 2;
let b = 5;
testNum(a, b);
*/ //#endregion
//#region SecondTask
// function factorial(a) {
//   if (a === 0 || a === 1) {
//     return 1;
//   } else {
//     return a * factorial(a - 1);
//   }
// }
// console.log(factorial(3));
//#endregion
//#region ThirdTask
// function multinum(a, b, c) {
//   return a * 100 + b * 10 + c;
// }

// console.log(multinum(2, 5, 9));
//#endregion
//#region
function square(x, y) {
  if (x > 0 && y > 0) {
    return console.log("Area of a rectangle is: " + x * y);
  } else if (x == 0 || y == 0) {
    return console.log("Area of the square is: " + (x * 4 + y * 4));
  }
}

square(3, 0);
//#endregion
