//using System;
//using System.Collections.Generic;
//using System.Threading;

//class Program
//{
//    static readonly int busCapacity = 20;
//    static readonly Dictionary<int, int> passengers = new Dictionary<int, int>();
//    static readonly object lockObj = new object();

//    static void Main()
//    {
//        Thread passengerThread = new Thread(PassengerGenerator);
//        Thread busThread = new Thread(BusService);

//        passengerThread.Start();
//        busThread.Start();

//        passengerThread.Join();
//        busThread.Join();
//    }

//    static void PassengerGenerator()
//    {
//        Random random = new Random();
//        while (true)
//        {
//            int count = random.Next(1, 11);
//            int busNumber = random.Next(1, 4);
//            lock (lockObj)
//            {
//                if (!passengers.ContainsKey(busNumber))
//                {
//                    passengers[busNumber] = 0;
//                }
//                passengers[busNumber] += count;
//                Console.WriteLine($"Added {count} passengers for bus {busNumber}. Total: {passengers[busNumber]}");
//            }
//            Thread.Sleep(1000);
//        }
//    }

//    static void BusService()
//    {
//        Random random = new Random();
//        while (true)
//        {
//            int busNumber = random.Next(1, 4);
//            int onboardPassengers = random.Next(0, busCapacity / 2);
//            lock (lockObj)
//            {
//                int totalCapacity = busCapacity - onboardPassengers;
//                if (passengers.ContainsKey(busNumber) && passengers[busNumber] > 0)
//                {
//                    int takePassengers = Math.Min(totalCapacity, passengers[busNumber]);
//                    Console.WriteLine($"Bus {busNumber} arrived with {onboardPassengers} passengers and took {takePassengers} more.");
//                    passengers[busNumber] -= takePassengers;
//                }
//                else
//                {
//                    Console.WriteLine($"Bus {busNumber} arrived with {onboardPassengers} passengers but no additional passengers for this bus.");
//                }
//            }
//            Thread.Sleep(5000);
//        }
//    }
//}
