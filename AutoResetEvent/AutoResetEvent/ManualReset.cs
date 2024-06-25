using System;
using System.Threading;

class ManualReset
{
    static ManualResetEvent manualEvent = new ManualResetEvent(false);

    static void Main()
    {
        Thread workerThread1 = new Thread(Worker);
        Thread workerThread2 = new Thread(Worker);

        workerThread1.Start();
        workerThread2.Start();

        Console.WriteLine("Main thread waiting for signal...");
        manualEvent.WaitOne();

        Console.WriteLine("Main thread received signal.");
        manualEvent.Reset();
        Console.ReadLine();
    }

    static void Worker()
    {
        Console.WriteLine("Worker thread starting...");
        Thread.Sleep(2000);
        Console.WriteLine("Worker thread sending signal.");
        manualEvent.Set();
    }
}
