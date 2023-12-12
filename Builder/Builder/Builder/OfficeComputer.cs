public class OfficeComputer : IComputerBuilder
{
    private Computer computer; 

    public OfficeComputer()
    {
        computer = new Computer("Office Computer");
    }
    public void Processor()
    {
        computer.Processor = "Intel Core i5";
    }
    public void Ram()
    {
        computer.Ram = "8GB RAM";
    }
    public void GraphicsCard() 
    {
        computer.GraphicCard = "GeForce GTX 1050 Ti";
    }
    public Computer GetComputer()
    {
        return computer;
    }
}