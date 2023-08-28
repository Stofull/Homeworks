#region Task1
/*
Console.WriteLine("Enter your number from 1 to 1000");
int number = Convert.ToInt32(Console.ReadLine());
if (0 >= number || number >= 1000) Console.WriteLine($"Number ({number}) doesn't fit");
else if (number % 3 == 0 || number % 5 == 0)
{
    if (number % 3 == 0) Console.WriteLine("Fizz");
    if (number % 5 == 0) Console.WriteLine("Buzz");
}
else Console.WriteLine($"Number {number} is not divisible by 3 and 5");
*/
#endregion
#region Task2
/*
Console.WriteLine("Enter your number");
float number = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Enter your procent");
float percent = Convert.ToInt32(Console.ReadLine());
Console.WriteLine($"Result: {(number / 100) * percent}");
*/
#endregion
#region Task3
/*
Console.WriteLine("Enter your first number");
int firstnumber = Convert.ToInt32(Console.ReadLine()) * 1000;
Console.WriteLine("Enter your second number");
int secondnumber = Convert.ToInt32(Console.ReadLine()) * 100;
Console.WriteLine("Enter your third number");
int thirdnumber = Convert.ToInt32(Console.ReadLine()) * 10;
Console.WriteLine("Enter your fourth number");
int fourthnumber = Convert.ToInt32(Console.ReadLine());
Console.WriteLine($"Result: {firstnumber+secondnumber+ thirdnumber + fourthnumber}");
*/
#endregion
#region Task4
/*
Console.WriteLine("Enter a six-digit number");
int sixNum = Convert.ToInt32(Console.ReadLine());
if (sixNum < 100000) Console.WriteLine("Error");
else
{
    string tmp = sixNum.ToString();
    char[] charArray = tmp.ToCharArray();
    Console.WriteLine("Select the index of the first number");
    int firstNum = Convert.ToInt32(Console.ReadLine()) - 1;
    Console.WriteLine("Select the index of the second number");
    int secondNum = Convert.ToInt32(Console.ReadLine()) - 1;
    char temp = charArray[firstNum];
    charArray[firstNum] = charArray[secondNum];
    charArray[secondNum] = temp;
    tmp = new string(charArray);
    Console.WriteLine(tmp);
}
*/
#endregion
#region Task5
/*
Console.WriteLine("Enter dd.mm.yyyy:");
string input = Console.ReadLine();
if (DateTime.TryParseExact(input, "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out DateTime date))
{
    string dayOfWeek = date.DayOfWeek.ToString();
    Console.WriteLine($"Day of week: {dayOfWeek}");
    int season = date.Month;
    if (season == 12 || season == 1 || season == 2) Console.WriteLine("Winter");
    else if (season == 3 || season == 4 || season == 5) Console.WriteLine("Spring");
    else if (season == 6 || season == 7 || season == 8) Console.WriteLine("Summer");
    else Console.WriteLine("Autumn");
}
else Console.WriteLine("Incorrect data");
*/
#endregion
#region Task6
/*
Console.WriteLine("1.Celsius to Fahrenheit");
Console.WriteLine("2.Fahrenheit to Celsius "); 
int turn = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Enter your number to transfer");
float number = Convert.ToInt32(Console.ReadLine());
if (turn != 1 && turn != 2) Console.WriteLine("Error");
else if (turn == 1) Console.WriteLine($"{number * 1.8 + 32} °F");
else if (turn == 2) Console.WriteLine($"{(number - 32) / 1.8} °C");
*/
#endregion
#region Task7
/*
Console.WriteLine("Enter range start");
int firstNum = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Enter range end");
int secondNum = Convert.ToInt32(Console.ReadLine());
if (firstNum > secondNum) 
    Console.WriteLine("The first number must be less than the second");
for (int i = firstNum; i !=  secondNum + 1; i++)
    if(i % 2 == 0) Console.WriteLine(i);
*/
#endregion