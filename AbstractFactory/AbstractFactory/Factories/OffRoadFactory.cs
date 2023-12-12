public class OffRoadFactory : ITransportFactory
{
    public ICar CreateCar()
    {
        return new OffRoadCar();
    }

    public IBicycle CreateBicycle()
    {
        return new OffRoadBicycle();
    }

    public IMotorcycle CreateMotorcycle()
    {
        return new OffRoadMotorcycle();
    }
}
