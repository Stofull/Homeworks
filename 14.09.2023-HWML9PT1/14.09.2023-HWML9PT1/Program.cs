/*
void odd(int[] arr)
{
    int[] tmp = new int[arr.Length];
    for (int i = 0; i < arr.Length; i++)
    {
        if (arr[i] % 2 == 0) { tmp[i] = arr[i]; }

    }
    for (int i = 0; i <= tmp.Length - 1;i++) Console.Write(tmp[i]);
}
Random random = new Random();
int[] arr = new int[5];
for (int i = 0; i <= arr.Length - 1; i++)
{
    arr[i] = random.Next(0,10);
    Console.Write(arr[i]);
}
Console.WriteLine();
odd(arr);
*/
/*
void even(int[] arr)
{
    int[] tmp = new int[arr.Length];
    for (int i = 0; i < arr.Length; i++)
    {
        if (arr[i] % 2 != 0) { tmp[i] = arr[i]; }

    }
    for (int i = 0; i <= tmp.Length - 1; i++) Console.Write(tmp[i]);
}
Random random = new Random();
int[] arr = new int[5];
for (int i = 0; i <= arr.Length - 1; i++)
{
    arr[i] = random.Next(0, 10);
    Console.Write(arr[i]);
}
Console.WriteLine();
even(arr);
*/
bool isSimple(int value)
{
    int tmp = 0;
    for (int i = 1; i <= value; i++)
    {
        if (value % i == 0)
        {
            tmp++;
        }
        if (tmp > 2) return true;
    }
    return false;
}
void simple(int[] arr)
{
    int[] tmp = new int[arr.Length];
    for (int i = 0; i < arr.Length; i++)
    {
        if ()
    }

}
