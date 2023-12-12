public class DesignerComputer : IComputerBuilder
{
    private Computer computer;

    public DesignerComputer()
    {
        computer = new Computer("Office Computer");
    }
    public void Processor()
    {
        computer.Processor = "Intel Core i9";
    }
    public void Ram()
    {
        computer.Ram = "64GB RAM";
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