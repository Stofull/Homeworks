IAutomobileFactory sedanFactory = new SedanFactory();
IAutomobileFactory suvFactory = new SuvFactory();
IAutomobileFactory truckFactory = new TruckFactory();

IAutomobile suv = suvFactory.CreateAutomobile();
IAutomobile truck = truckFactory.CreateAutomobile();
IAutomobile sedan = sedanFactory.CreateAutomobile();

sedan.GetInfo();
truck.GetInfo();
suv.GetInfo();