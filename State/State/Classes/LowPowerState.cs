public class LowPowerState : IGeneratorState
{
    public void TurnOn()
    {
        Console.WriteLine("Generator is already on at low power.");
    }

    public void TurnOff()
    {
        Console.WriteLine("Turning the generator off.");
    }

    public void IncreasePower()
    {
        Console.WriteLine("Increasing generator power to medium.");
    }

    public void DecreasePower()
    {
        Console.WriteLine("Decreasing generator power to off.");
    }
}