#region Task1
/*
int[,] B = new int[4, 3];
Random rand = new Random();
Console.WriteLine("Your first array");
for (int i = 0; i < B.GetLength(0);i++)
{
    for (int j = 0; j < B.GetLength(1); j++)
    {
        B[i,j] = rand.Next(0, 100);
        Console.Write(B[i, j] + "\t");
    }
    Console.WriteLine();
}
int[] A = new int[5];
Console.WriteLine("Enter your numbers in second array");
for (int i = 0; i < A.Length; i++)
{
    Console.WriteLine($"Enter your {i + 1}-th number");
    A[i] = int.Parse(Console.ReadLine());
}
for (int i = 0; i < A.Length; i++)
{
    Console.Write(A[i] + "\t");
}
Console.WriteLine();
int maxNum = B[0,0];
int minNum = B[0, 0];
int numSum = 0;
int productNum = 1;
int evenIndex = 0;
int oddIndex = 0;
for (int i = 0; i < B.GetLength(0); i++)
{
    for (int j = 0; j < B.GetLength(1); j++)
    {
        if (maxNum < B[i, j]) maxNum = B[i, j];
        if (minNum > B[i, j]) minNum = B[i, j];
        if (B[i, j] % 2 != 0) oddIndex++;
        numSum += B[i, j];
        productNum *= B[i, j];
    }
}
for (int i = 0; i < A.Length; i++)
{
    if (maxNum < A[i]) maxNum = A[i];
    if (minNum > A[i]) minNum = A[i];
    if (A[i] % 2 == 0) evenIndex++;
    numSum += A[i];
    productNum *= A[i];
}
Console.WriteLine($"Max num is:{maxNum}\nMin num is: {minNum}\nSum of numbers: {numSum}");
Console.WriteLine($"Product of all elements: {productNum}");
Console.WriteLine($"Even num in A arr: {evenIndex}\nOdd num in B arr: {oddIndex}");
*/
#endregion
#region Task2
/*
int[,] arr = new int[5,5];
Random r = new Random();
for (int i = 0; i < arr.GetLength(0); i++)
{
    for (int j = 0; j < arr.GetLength(1); j++)
    {
        arr[i, j] = r.Next(0, 100);
        Console.Write(arr[i, j] + "\t");
    }
    Console.WriteLine();
}
int minNum = arr[0, 0];
int maxNum = arr[0, 0];
foreach (var nums in arr)
{
    if (nums < minNum) minNum = nums;
    if (nums > maxNum) maxNum = nums;
}
int total = 0;
bool foundMin = false;
foreach (var nums in arr)
{
    if (nums == minNum)
    {
        foundMin = true;
    }
    else if (nums == maxNum)
    {
        break;
    }
    else if (foundMin)
    {
        total += nums;
    }
}
Console.WriteLine($"Total sum: {total}"); 
*/
#endregion
#region Task3
/*
Console.WriteLine("1.Convert to Caesar cipher\n2.Convert from Caesar cipher");
int turn = int.Parse(Console.ReadLine());
Console.WriteLine("Enter a word to encrypt");
var tmp = Console.ReadLine().ToCharArray();
System.Console.WriteLine("How much to implement the shift?");
int move = int.Parse(Console.ReadLine());
switch (turn)
{
    case 1:
        for (int i = 0; i < tmp.Length; i++)
        {
            if(tmp[i] >= 65 && tmp[i] <= 90)
            {
                tmp[i] = (char)(tmp[i] + move);
                if(tmp[i] >= 91) tmp[i] = (char)(tmp[i] - 26);
            }
            if(tmp[i] >= 97 && tmp[i] <= 122)
            {
                tmp[i] = (char)(tmp[i] + move);
                if(tmp[i] >= 123) tmp[i] = (char)(tmp[i] - 26);
            }
            Console.Write(tmp[i]);
        }
            break;

    case 2:
        for (int i = 0; i < tmp.Length; i++)
        {
            if(tmp[i] >= 65 && tmp[i] <= 90)
            {
                tmp[i] = (char)(tmp[i] - move);
                if(tmp[i] <= 64) tmp[i] = (char)(tmp[i] + 26);
            }
            if(tmp[i] >= 97 && tmp[i] <= 122)
            {
                tmp[i] = (char)(tmp[i] - move);
                if(tmp[i] <= 96) tmp[i] = (char)(tmp[i] + 26);
            }
            Console.Write(tmp[i]);
        }
            break;
    default:
        break;
}

*/
#endregion
#region Task4
/*
System.Console.WriteLine("Enter the total size of the matrices (rows and columns):");
int line = int.Parse(Console.ReadLine());
int width = int.Parse(Console.ReadLine());
int[,] matrixA = new int[line, width];
int[,] matrixB = new int[line, width];
int[,] result = new int[line, width];
Random rand = new Random();
System.Console.WriteLine("First matrix:\n");
for (int i = 0; i < line; i++)
{
    for (int j = 0; j < width; j++)
    {
        matrixA[i, j] = rand.Next(0,100);
        System.Console.Write(matrixA[i, j] + " ");
    }
    System.Console.WriteLine();
}
System.Console.WriteLine("Second matrix:\n");
for (int i = 0; i < line; i++)
{
    for (int j = 0; j < width; j++)
    {
        matrixB[i, j] = rand.Next(0,100);
        System.Console.Write(matrixB[i, j] + " ");
    }
    System.Console.WriteLine();
}
System.Console.WriteLine("1.Multiplying a matrix by a number\n2.Matrix addition\n3.Product of matrices");
int option = int.Parse(Console.ReadLine());
switch (option)
{
    case 1:
        System.Console.WriteLine("Enter the number by which the matrix is multiplied");
        int num = int.Parse(Console.ReadLine());
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < width; j++)
            {
                matrixA[i, j] *= num;
                System.Console.Write(matrixA[i, j] + " ");
            }
            System.Console.WriteLine();
        }
        break;
    case 2:
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < width; j++)
            {
                result[i, j] = matrixA[i, j] + matrixB[i, j];
                System.Console.Write(result[i, j] + " ");
            }
            System.Console.WriteLine();
        }
        break;
    case 3:
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < width; j++)
            {
                result[i, j] = matrixA[i, j] * matrixB[i, j];
                System.Console.Write(result[i, j] + " ");
            }
            System.Console.WriteLine();
        }
        break;
    default:
        break;

}
*/
#endregion
#region Task5
/*
static void Main()
{
    char[] input = new char[100];
    bool valid = false;
    while (!valid)
    {
        Console.Write("Enter your expression: ");
        string inputStr = Console.ReadLine();
        input = inputStr.ToCharArray();
        CheckExpression(inputStr, out valid);
        if (!valid)
        {
            Console.WriteLine("\tWrong expression");
        }
    }
    int[] numArr = new int[100];
    char[] opArr = new char[100];
    int zero = 0;
    int tmp = 0;

    for (int i = 0; i < input.Length; i++)
    {
        if (IsNumber(input[i]))
        {
            int num = input[i] - '0';
            while (i + 1 < input.Length && IsNumber(input[i + 1]))
            {
                num = num * 10 + (input[i + 1] - '0');
                i++;
            }
            numArr[zero++] = num;
        }
        else if (input[i] == '+' || input[i] == '-')
        {
            while (tmp > 0)
            {
                int b = numArr[--zero];
                int a = numArr[--zero];
                char op = opArr[--tmp];
                numArr[zero++] = Calculate(op, a, b);
            }
            opArr[tmp++] = input[i];
        }
    }

    while (tmp > 0)
    {
        int b = numArr[--zero];
        int a = numArr[--zero];
        char op = opArr[--tmp];
        numArr[zero++] = Calculate(op, a, b);
    }

    Console.WriteLine("Result: " + numArr[0]);
}
static bool IsNumber(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

static int Calculate(char op, int a, int b)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        default:
            return 0;
    }
}

static void CheckExpression(string expression, out bool valid)
{
    valid = true;
    for (int i = 0; i < expression.Length; i++)
    {
        if ((expression[i] == '+' || expression[i] == '-') &&
            (i == 0 || !IsNumber(expression[i - 1])))
        {
            valid = false;
            break;
        }
        else if (!IsNumber(expression[i]) && expression[i] != '+' && expression[i] != '-')
        {
            valid = false;
            break;
        }
    }
}
*/
#endregion
#region Task6
/*
Console.WriteLine("Enter your text:");
        string text = Console.ReadLine();
        char[] tmp = text.ToCharArray();
        for (int i = 0; i < text.Length; i++)
        {
            if (tmp[i] == 33 || tmp[i] == 46 || tmp[i] == 63)
            {
                do
                {
                    i++ ;
                }while(tmp[i] == 32);
                if (i < text.Length && tmp[i + 1] >= 97 && tmp[i + 1] <= 122)
                {
                    tmp[i] = (char)(tmp[i] - 32);
                }
            }
        }
        text = new string(tmp);
        Console.WriteLine("Result:");
        Console.WriteLine(text);
*/
#endregion
#region Task7
/*
Console.WriteLine("Enter your text:");
string text = Console.ReadLine();
Console.WriteLine("Enter inadmissible word:");
string inadmissible  = Console.ReadLine();
text = text.Replace(inadmissible , new string('*', inadmissible.Length));
Console.WriteLine($"Edited text:\n{text}");
Console.WriteLine("Inadmissible word count: " + (text.Length - text.Replace("*", "").Length) / inadmissible.Length);
*/
#endregion