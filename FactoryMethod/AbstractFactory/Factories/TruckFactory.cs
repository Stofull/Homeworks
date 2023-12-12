public class TruckFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new Truck();
    }
}