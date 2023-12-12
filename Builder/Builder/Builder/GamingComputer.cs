public class GamingComputer : IComputerBuilder
{
    private Computer computer;

    public GamingComputer()
    {
        computer = new Computer("Office Computer");
    }
    public void Processor()
    {
        computer.Processor = "Intel Core i9";
    }
    public void Ram()
    {
        computer.Ram = "32GB RAM";
    }
    public void GraphicsCard()
    {
        computer.GraphicCard = "GeForce RTX 4090";
    }
    public Computer GetComputer()
    {
        return computer;
    }
}