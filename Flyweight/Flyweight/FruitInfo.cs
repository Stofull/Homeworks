class FruitInfo
{
    public string Country { get; private set; }
    public string Season { get; private set; }
    public FruitInfo(string country, string season)
    {
        Country = country;
        Season = season;
    }
    public void DisplayInfo(string fruitName)
    {
        Console.WriteLine("Information for: " + fruitName);
        Console.WriteLine("Fruit country: " + Country);
        Console.WriteLine("Harvesting: " + Season);
    }
}

