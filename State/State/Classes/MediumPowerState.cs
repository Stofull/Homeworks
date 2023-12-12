public class MediumPowerState : IGeneratorState
{
    public void TurnOn()
    {
        Console.WriteLine("Generator is already on at medium power.");
    }

    public void TurnOff()
    {
        Console.WriteLine("Turning the generator off.");
    }

    public void IncreasePower()
    {
        Console.WriteLine("Increasing generator power to high.");
    }

    public void DecreasePower()
    {
        Console.WriteLine("Decreasing generator power to low.");
    }
}