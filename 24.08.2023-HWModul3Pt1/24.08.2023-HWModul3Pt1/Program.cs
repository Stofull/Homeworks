#region Task1
/*
Console.WriteLine("Enter side length of a square");
int width = int.Parse(Console.ReadLine());
Console.WriteLine("Enter symbol");
char symbol = Char.Parse(Console.ReadLine());
DrawSquare(width, symbol);
static void DrawSquare(int width, char symbol)
{
    for(int i = 0;i < width;i++)
    {
        for(int j = 0;j < width;j++)
        {
            Console.Write(symbol);
        }
        Console.WriteLine();
    }
}
*/
#endregion
#region Task2
/*
System.Console.WriteLine("Enter numbers to test for a palindrome");
string text = Console.ReadLine();
bool test = IsItPalindrome(text);
System.Console.WriteLine(test);
static bool IsItPalindrome(string text)
{
    for (int i = 0; i < text.Length / 2; i++)
    {
        if (text[i] != text[^(i + 1)]) 
        {
        return false;
        }
    }
    return true;
}
*/
#endregion
#region Task3
/*
int[] arr = new int[5];
System.Console.WriteLine("Enter numbers in array");
for (int i = 0; i < arr.Length; i++)
{
    System.Console.Write($"{i + 1}-th: ");
    arr[i] = int.Parse(Console.ReadLine());
}
System.Console.WriteLine("Enter numbers that shouldn't be in an array");
int[] arrFilter = new int[5];
for (int i = 0; i < arrFilter.Length; i++)
{
    System.Console.Write($"{i + 1}-th: ");
    arrFilter[i] = int.Parse(Console.ReadLine());
}
Filter(arr, arrFilter);
static void Filter(int[] array, int[] arrFilter)
{
    for (int i = 0; i < array.Length; i++)
    {
        for (int j = 0; j < arrFilter.Length; j++)
        {
            if (array[i] == arrFilter[j])
            {
                array[i] = 0;
                break;
            }
        }
    }
    Console.WriteLine("Filtered array:");
    foreach (int num in array)
    {
        if (num != 0)
            Console.Write(" " + num);
    }
}
*/
#endregion
#region Task4
/*
WebSite website = new ("Example", "https;//google.com", "Search engine", "192.11.11.11");
website.DisplayInfo();

website.InputInfo();
website.DisplayInfo();

class WebSite
{
    public string Name { get; set; }
    public string URL { get; set; }

    public string Description { get; set; }
    public string IP { get; set; }


    public WebSite(string name, string url, string description, string ip)
    {
        Name = name;
        URL = url;
        Description = description;
        IP = ip;
    }
    public void InputInfo()
    {
        Console.WriteLine("Enter web site name");
        Name = Console.ReadLine();
        Console.WriteLine("Enter web site url");
        URL = Console.ReadLine();
        Console.WriteLine("Enter web site description");
        Description = Console.ReadLine();
        Console.WriteLine("Enter web site ip address");
        IP = Console.ReadLine();
    }
    public void DisplayInfo()
    {
        Console.WriteLine($"Name of the site {Name}");
        Console.WriteLine($"Site Link {URL}");
        Console.WriteLine($"Description of the site {Description}");
        Console.WriteLine($"Website IP address {IP}");
    }
}
*/
#endregion
#region Task5
/*
Magazine magazine = new ("Test","2003","Description test","50-123-12-12","example@gmail.com");
magazine.ShowInfo();

magazine.InputInfo();
magazine.ShowInfo();

class Magazine
{
    public string Name { get; set; }
    public string FoundingYear { get; set; }
    public string Description { get; set; }
    public string ContactNumber { get; set; }
    public string ContactEmail { get; set; }

    public Magazine(string name, string foundingYear, string description, string contactNumber, string contactEmail)
    {
        Name = name;
        FoundingYear = foundingYear;
        Description = description;
        ContactNumber = contactNumber;
        ContactEmail = contactEmail;
    }
    public void InputInfo()
    {
        Console.WriteLine("Enter name of the journal");
        Name = Console.ReadLine();
        Console.WriteLine("Enter  year of foundation");
        FoundingYear = Console.ReadLine();
        Console.WriteLine("Enter description of the journal");
        Description = Console.ReadLine();
        Console.WriteLine("Enter contact phone number");
        ContactNumber = Console.ReadLine();
        Console.WriteLine("Enter contact e-mail");
        ContactEmail = Console.ReadLine();
    }
    public void ShowInfo()
    {
        Console.WriteLine($"Name of the journal: {Name}");
        Console.WriteLine($"Year of foundation: {FoundingYear}");
        Console.WriteLine($"Description of the journal: {Description}");
        Console.WriteLine($"Contact phone number: {ContactNumber}");
        Console.WriteLine($"Contact e-mail: {ContactEmail}");
    }
}
*/
#endregion
#region Task6
/*
Store store = new("Example", "2000", "Description", "050-000-00-00", "example@gmail.com");
store.ShowInfo();

store.InputInfo();
store.ShowInfo();

class Store
{
    public string Name { get; set; }
    public string Address { get; set; }
    public string Description { get; set; }
    public string ContactNumber { get; set; }
    public string ContactEmail { get; set; }

    public Store(string name, string address, string description, string contactNumber, string contactEmail)
    {
        Name = name;
        Address = address;
        Description = description;
        ContactNumber = contactNumber;
        ContactEmail = contactEmail;
    }
    public void InputInfo()
    {
        Console.WriteLine("Enter name of the store");
        Name = Console.ReadLine();
        Console.WriteLine("Enter store address");
        Address = Console.ReadLine();
        Console.WriteLine("Enter store profile");
        Description = Console.ReadLine();
        Console.WriteLine("Enter contact phone number");
        ContactNumber = Console.ReadLine();
        Console.WriteLine("Enter contact e-mail");
        ContactEmail = Console.ReadLine();
    }
    public void ShowInfo()
    {
        Console.WriteLine($"Name of the store: {Name}");
        Console.WriteLine($"Store address: {Address}");
        Console.WriteLine($"Store profile: {Description}");
        Console.WriteLine($"Contact phone number: {ContactNumber}");
        Console.WriteLine($"Contact e-mail: {ContactEmail}");
    }
}
*/
#endregion