using System;
using System.Threading;

class AutoReset
{
    static AutoResetEvent autoEvent = new AutoResetEvent(false);

    static void Main()
    {
        Thread workerThread = new Thread(Worker);
        workerThread.Start();

        Console.WriteLine("Main thread waiting for signal...");
        autoEvent.WaitOne();

        Console.WriteLine("Main thread received signal.");
        Console.ReadLine();
    }

    static void Worker()
    {
        Console.WriteLine("Worker thread starting...");
        Thread.Sleep(2000);
        Console.WriteLine("Worker thread sending signal.");
        autoEvent.Set();
    }
}
