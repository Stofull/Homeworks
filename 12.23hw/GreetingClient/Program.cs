using System;
using System.Threading.Tasks;
using Grpc.Net.Client;
using GreetingApp;

class Program
{
    static async Task Main(string[] args)
    {
        using var channel = GrpcChannel.ForAddress("https://localhost:5001");
        var client = new GreetingService.GreetingServiceClient(channel);

        Console.WriteLine("Enter your name:");
        var name = Console.ReadLine();

        var request = new HelloRequest { Name = name };
        var reply = await client.SayHelloAsync(request);

        Console.WriteLine($"Server Response: {reply.Message}");
    }
}
