//#region Task 1
/*
function task(x, y) {
  if (x > y) {
    console.log(1);
  } else if (y > x) {
    console.log(-1);
  } else {
    console.log(0);
  }
}
task(3, 5);
*/
//#endregion
//#region Task 2
/*
function fact(x) {
  let num = 1;
  for (x; x != 1; x--) {
    num *= x;
  }
  return console.log(num);
}
fact(3);
*/
//#endregion
//#region Task 3
/*
function numbers(x, y, z) {
  return console.log(x * 100 + y * 10 + z);
}
numbers(1, 4, 9);
*/
//#endregion
//#region Task 4
/*
function cube(x, y) {
  if (x != 0 && y != 0) {
    return console.log(x * y);
  } else if (x == 0) {
    return console.log(y * 4);
  } else {
    return console.log(x * 4);
  }
}

cube(0, 2);
*/
//#endregion
//#region Task 5
/*
function getDivisors(number) {
  let res = [];
  let num = 0;

  for (let i = 0; i < Math.floor(number / 2 + 1); i++) {
    if (number % i === 0) {
      res.push(i);
    }
  }

  for (let i = 0; i < res.length; i++) {
    num += res[i];
  }
  return num;
}

function perfectNum(x) {
  let newNumber = getDivisors(x);
  if (x != newNumber) {
    console.log("Is not perfect num");
  } else {
    console.log("Is perfect num");
  }
}

perfectNum(6);
*/
//#endregion
//#region Task 6
/*
const isPrime = (num) => {
    let divisor = 2;
    while (divisor <= Math.sqrt(num)) {
      if (num % divisor === 0) {
        return false;
      }
      divisor += 1;
    }
    return true;
  };
  const perfectNumbers = (start, limit) => {
    for (let i = start; i <= limit; i += 1) {
      if (isPrime(2 ** i - 1)) {
        const num = (2 ** i - 1) * 2 ** (i - 1);
        console.log(num);
      }
      continue;
    }
  };
  
  perfectNumbers(0, 100);
  */
//#endregion
//#region Task 7
/*
function time(hours = 0, minutes = 0, seconds = 0) {
  return `${hours === 0 ? "00" : hours}:${minutes === 0 ? "00" : minutes}:${
    seconds === 0 ? "00" : seconds
  }`;
}

console.log(time(6, 15, 12));
*/
//#endregion
//#region Task 8
/*
function second(h, m, s) {
  while (h != 0) {
    h--;
    m += 60;
  }
  while (m != 0) {
    m--;
    s += 60;
  }
  console.log(s);
}

second(11, 23, 20);
*/
//#endregion
//#region Task 9
/*
function secondToTime(second) {
  let h = 0;
  let m = 0;
  while (second > 60) {
    if (second >= 3600) {
      second -= 3600;
      h++;
    } else if (second >= 60) {
      second -= 60;
      m++;
    } else {
      continue;
    }
  }
  console.log(`${h}:${m}:${second}`);
}

secondToTime(41000);
*/
//#endregion
//#region Task 10
/*
function CalculateFromSeconds(seconds) {
  let minutes = Math.floor(seconds / 60);
  seconds -= minutes * 60;

  let hours = Math.floor(minutes / 60);
  minutes -= hours * 60;

  return `${hours}:${minutes}:${seconds}`;
}

function second(h, m, s) {
  while (h != 0) {
    h--;
    m += 60;
  }
  while (m != 0) {
    m--;
    s += 60;
  }
  return s;
}

function CalculateDifference(
  hours_1,
  minutes_1,
  seconds_1,
  hours_2,
  minutes_2,
  seconds_2
) {
  let inSeconds_1 = second(hours_1, minutes_1, seconds_1);
  let inSeconds_2 = second(hours_2, minutes_2, seconds_2);

  let difference = Math.abs(inSeconds_1 - inSeconds_2);

  return CalculateFromSeconds(difference);
}
console.log(`${CalculateDifference(1, 30, 15, 1, 30, 0)}`);
*/
//#endregion
