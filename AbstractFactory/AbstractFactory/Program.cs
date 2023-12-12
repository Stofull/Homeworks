var cityClient = new Client(new CityFactory());
cityClient.DriveCar();
cityClient.RideBicycle();
cityClient.RideMotorcycle();

Console.WriteLine();

var OffRoadClient = new Client(new OffRoadFactory());
OffRoadClient.DriveCar();
OffRoadClient.RideBicycle();
OffRoadClient.RideMotorcycle();