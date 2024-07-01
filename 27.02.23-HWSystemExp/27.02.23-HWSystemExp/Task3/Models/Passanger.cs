using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Task_3.Models;

internal class Passenger
{
    static public int Id { get; set; }
    public int WaitingBus { get; set; }

    public Passenger()
    {
        Random random = new Random();
        WaitingBus = random.Next(1, 3);

        Id += 1;
    }
}