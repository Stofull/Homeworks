public class HighPowerState : IGeneratorState
{
    public void TurnOn()
    {
        Console.WriteLine("Generator is already on at high power.");
    }

    public void TurnOff()
    {
        Console.WriteLine("Turning the generator off.");
    }

    public void IncreasePower()
    {
        Console.WriteLine("Generator power is already at maximum.");
    }

    public void DecreasePower()
    {
        Console.WriteLine("Decreasing generator power to medium.");
    }
}