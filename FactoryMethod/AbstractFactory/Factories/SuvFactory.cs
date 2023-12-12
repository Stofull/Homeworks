public class SuvFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new Suv();
    }
}