public class CityFactory : ITransportFactory
{
    public ICar CreateCar()
    {
        return new CityCar();
    }

    public IBicycle CreateBicycle()
    {
        return new CityBicycle();
    }

    public IMotorcycle CreateMotorcycle()
    {
        return new CityMotorcycle();
    }
}
