public class SedanFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new Sedan();
    }
}