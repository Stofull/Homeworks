//using Task_3.Models;

//class Program
//{
//    static void Main(string[] args)
//    {
//        List<Passenger> list = new List<Passenger>();

//        for (int i = 0; i < 20; i++)
//        {
//            list.Add(new Passenger());
//        }

//        CountdownEvent countdownEvent = new CountdownEvent(2);

//        Thread thread1 = new Thread(x =>
//        {
//            Bus bus = new Bus { Number = 1 };
//            Console.WriteLine($"\nFirst bus \"{bus.Number}\" arrived \n People at the station now : {list.Count}\n Capacity : {bus.Capacity} \n Passenger : {bus.Passenger}");

//            for (int i = 0; i < list.Count; i++)
//            {
//                if (bus.Passenger + 1 <= bus.Capacity && list[i].WaitingBus == bus.Number)
//                {
//                    bus.Passenger++;
//                    list.Remove(list[i]);
//                }

//            }

//            Console.WriteLine($"\nFirst bus \"{bus.Number}\" go away \n People at the station now : {list.Count}\n Capacity : {bus.Capacity} \n Passenger : {bus.Passenger} ");
//            countdownEvent.Signal();
//        });

//        Thread thread2 = new Thread(x =>
//        {
//            Bus bus = new Bus { Number = 2 };
//            Console.WriteLine($"\nSecond bus \"{bus.Number}\" arrived \n People at the station now : {list.Count}\n Capacity : {bus.Capacity} \n Passenger : {bus.Passenger}");

//            for (int i = 0; i < list.Count; i++)
//            {
//                if (bus.Passenger + 1 <= bus.Capacity && list[i].WaitingBus == bus.Number)
//                {
//                    bus.Passenger++;
//                    list.Remove(list[i]);
//                }

//            }

//            Console.WriteLine($"\nSecond bus \"{bus.Number}\" go away \n People at the station now : {list.Count}\n Capacity : {bus.Capacity} \n Passenger : {bus.Passenger}");
//            countdownEvent.Signal();
//        });



//        thread1.Start();
//        Thread.Sleep(50);
//        thread2.Start();


//        countdownEvent.Wait();
//        Console.WriteLine("\n\nEnd of main");
//    }
//}