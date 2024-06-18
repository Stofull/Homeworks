//#region Task 1
/*
let shoppingList = [
    { name: 'Apple', quantity: 5, bought: false },
    { name: 'Banana', quantity: 3, bought: true },
    { name: 'Milk', quantity: 1, bought: false }
];
function displayList(list) {
    let notBought = list.filter(item => !item.bought);
    let bought = list.filter(item => item.bought);
    console.log("Not Bought Items:");
    notBought.forEach(item => console.log(`${item.name} - ${item.quantity}`));
    console.log("Bought Items:");
    bought.forEach(item => console.log(`${item.name} - ${item.quantity}`));
}
function addItem(name, quantity) {
    let item = shoppingList.find(item => item.name === name);
    if (item) {
        item.quantity += quantity;
    } else {
        shoppingList.push({ name: name, quantity: quantity, bought: false });
    }
}
function buyItem(name) {
    let item = shoppingList.find(item => item.name === name);
    if (item) {
        item.bought = true;
    }
}
displayList(shoppingList);
addItem('Apple', 2);
addItem('Orange', 4);
buyItem('Milk');
displayList(shoppingList);
*/
//#endregion

//#region Task 2
/*
let receipt = [
    { name: 'Apple', quantity: 5, pricePerUnit: 0.5 },
    { name: 'Banana', quantity: 3, pricePerUnit: 0.7 },
    { name: 'Milk', quantity: 1, pricePerUnit: 1.5 }
];
function printReceipt(receipt) {
    receipt.forEach(item => console.log(`${item.name} - ${item.quantity} x ${item.pricePerUnit} = ${item.quantity * item.pricePerUnit}`));
}
function calculateTotal(receipt) {
    return receipt.reduce((total, item) => total + item.quantity * item.pricePerUnit, 0);
}

function getMostExpensive(receipt) {
    return receipt.reduce((max, item) => (item.quantity * item.pricePerUnit > max.quantity * max.pricePerUnit) ? item : max);
}

function calculateAveragePrice(receipt) {
    let totalItems = receipt.reduce((total, item) => total + item.quantity, 0);
    let totalPrice = calculateTotal(receipt);
    return totalPrice / totalItems;
}
printReceipt(receipt);
console.log(`Total: ${calculateTotal(receipt)}`);
console.log(`Most Expensive:`, getMostExpensive(receipt));
console.log(`Average Price: ${calculateAveragePrice(receipt)}`);

*/
//#endregion

//#region  Task 3
/*
let styles = [
    { key: "style-1", value: "color:red;font-size:20px;float:right;text-decoration:underline;" },
    { key: "style-2", value: "color:green;font-size:30px;float:left;text-decoration:line-through;" },
    { key: "style-3", value: "color:blue;font-size:40px;float:none;text-decoration:overline;" }
];

document.open();
for (const style of styles) {
    document.write(`<p style="${style.value}">${style.key}</p>`)
}
document.close();
*/
//#endregion

//#region Task 4
/*
let classrooms = [
    { name: 'Room A', seats: 15, faculty: 'Physics' },
    { name: 'Room B', seats: 20, faculty: 'Mathematics' },
    { name: 'Room C', seats: 10, faculty: 'Computer Science' }
];
function displayClassrooms(classrooms) {
    classrooms.forEach(room => console.log(`${room.name} - ${room.seats} seats - ${room.faculty}`));
}
function displayClassroomsByFaculty(classrooms, faculty) {
    classrooms.filter(room => room.faculty === faculty).forEach(room => console.log(`${room.name} - ${room.seats} seats - ${room.faculty}`));
}
function displayClassroomsForGroup(classrooms, group) {
    classrooms.filter(room => room.seats >= group.students && room.faculty === group.faculty).forEach(room => console.log(`${room.name} - ${room.seats} seats - ${room.faculty}`));
}
function sortClassroomsBySeats(classrooms) {
    return classrooms.slice().sort((a, b) => a.seats - b.seats);
}
function sortClassroomsByName(classrooms) {
    return classrooms.slice().sort((a, b) => a.name.localeCompare(b.name));
}
displayClassrooms(classrooms);
displayClassroomsByFaculty(classrooms, 'Physics');
let group = { name: 'Group 1', students: 12, faculty: 'Computer Science' };
displayClassroomsForGroup(classrooms, group);
console.log('Sorted by seats:');
displayClassrooms(sortClassroomsBySeats(classrooms));
console.log('Sorted by name:');
displayClassrooms(sortClassroomsByName(classrooms));
*/
//#endregion
