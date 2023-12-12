using System.Globalization;

public class Computer
{
    public string Name { get; set; }
    public string Processor { get; set; }
    public string Ram { get; set; }
    public string GraphicCard { get; set; }

    public Computer(string name) 
    {
        Name = name; 
    }
    public void DisplayInfo()
    {
        Console.WriteLine("Computer: " + Name);
        Console.WriteLine("Processor: " + Processor);
        Console.WriteLine("RAM: " + Ram);
        Console.WriteLine("Graphics card: " + GraphicCard);

    }

}