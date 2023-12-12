public class Client
    {
        private ICar car;
        private IBicycle bicycle;
        private IMotorcycle motorcycle;

        public Client(ITransportFactory factory)
        {
            car = factory.CreateCar();
            bicycle = factory.CreateBicycle();
            motorcycle = factory.CreateMotorcycle();
        }

        public void DriveCar()
        {
            car.Drive();
        }

        public void RideBicycle()
        {
            bicycle.Ride();
        }

        public void RideMotorcycle()
        {
            motorcycle.Ride();
        }
    }
