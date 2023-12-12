public class Director
{
    private IComputerBuilder builder;

    public Director(IComputerBuilder builder)
    {
        this.builder = builder;
    }
    public void ComputerAssembling()
    {
        builder.Processor();
        builder.Ram();
        builder.GraphicsCard();
    }
}