//using System;
//using System.IO;
//using System.Threading;
//using System.Threading.Tasks;

//class Program
//{
//    private static readonly string numbersFile = "numbers.txt";
//    private static readonly string sumsFile = "sums.txt";
//    private static readonly string productsFile = "products.txt";
//    private static readonly ManualResetEvent generateEvent = new ManualResetEvent(false);

//    static void Main()
//    {
//        Thread t1 = new Thread(GenerateNumbers);
//        Thread t2 = new Thread(CalculateSums);
//        Thread t3 = new Thread(CalculateProducts);

//        t1.Start();
//        t2.Start();
//        t3.Start();

//        t1.Join();
//        t2.Join();
//        t3.Join();
//    }

//    static void GenerateNumbers()
//    {
//        Random random = new Random();
//        using (StreamWriter writer = new StreamWriter(numbersFile))
//        {
//            for (int i = 0; i < 10; i++)
//            {
//                int a = random.Next(1, 101);
//                int b = random.Next(1, 101);
//                writer.WriteLine($"{a},{b}");
//                Thread.Sleep(100);
//            }
//        }
//        generateEvent.Set();
//    }

//    static void CalculateSums()
//    {
//        generateEvent.WaitOne();
//        using (StreamReader reader = new StreamReader(numbersFile))
//        using (StreamWriter writer = new StreamWriter(sumsFile))
//        {
//            string line;
//            while ((line = reader.ReadLine()) != null)
//            {
//                var parts = line.Split(',');
//                int a = int.Parse(parts[0]);
//                int b = int.Parse(parts[1]);
//                int sum = a + b;
//                writer.WriteLine($"{a}+{b}={sum}");
//            }
//        }
//    }

//    static void CalculateProducts()
//    {
//        generateEvent.WaitOne();
//        using (StreamReader reader = new StreamReader(numbersFile))
//        using (StreamWriter writer = new StreamWriter(productsFile))
//        {
//            string line;
//            while ((line = reader.ReadLine()) != null)
//            {
//                var parts = line.Split(',');
//                int a = int.Parse(parts[0]);
//                int b = int.Parse(parts[1]);
//                int product = a * b;
//                writer.WriteLine($"{a}*{b}={product}");
//            }
//        }
//    }
//}
