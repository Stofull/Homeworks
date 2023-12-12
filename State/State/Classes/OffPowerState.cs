public class OffState : IGeneratorState
{
    public void TurnOn()
    {
        Console.WriteLine("Turning the generator on to low power.");
    }

    public void TurnOff()
    {
        Console.WriteLine("Generator is already off.");
    }

    public void IncreasePower()
    {
        Console.WriteLine("Increasing generator power to low.");
    }

    public void DecreasePower()
    {
        Console.WriteLine("Generator power cannot be decreased as it's already off.");
    }
}