//using System;
//using System.Threading;

//class Program
//{
//    static readonly int busCapacity = 20;
//    static int passengers = 0;
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
//            lock (lockObj)
//            {
//                passengers += count;
//                Console.WriteLine($"Added {count} passengers. Total: {passengers}");
//            }
//            Thread.Sleep(1000);
//        }
//    }

//    static void BusService()
//    {
//        while (true)
//        {
//            lock (lockObj)
//            {
//                if (passengers >= busCapacity)
//                {
//                    Console.WriteLine($"Bus arrived and took {busCapacity} passengers.");
//                    passengers -= busCapacity;
//                }
//                else
//                {
//                    Console.WriteLine($"Bus arrived and took {passengers} passengers.");
//                    passengers = 0;
//                }
//            }
//            Thread.Sleep(5000);
//        }
//    }
//}
