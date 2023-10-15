using System;
using System.Collections.Generic;
using System.IO;
using System.Text.Json;
public class Product
{
    public string Id { get; set; }
    public string Name { get; set; }
    public DateTime ProductionDate { get; set; }
    public DateTime ExpiresOn { get; set; }
    public double BruttoWeight { get; set; }
    public double NettoWeight { get; set; }
}

class Program
{
    static void Main(string[] args)
    {
        List<Product> products = new()
            {
                new Product
                {
                    Id = "1332",
                    Name = "Bread",
                    ProductionDate = DateTime.Now,
                    ExpiresOn = DateTime.Now.AddMonths(6),
                    BruttoWeight = 100.0,
                    NettoWeight = 50.0
                },
                new Product
                {
                    Id = "1111",
                    Name = "Cheese",
                    ProductionDate = DateTime.Now,
                    ExpiresOn = DateTime.Now.AddMonths(6),
                    BruttoWeight = 58.0,
                    NettoWeight = 10.0
                }
            };

        string json = JsonSerializer.Serialize(products);
        File.WriteAllText("data.json", json);

        string jsonFromFile = File.ReadAllText("data.json");
        List<Product> result = JsonSerializer.Deserialize<List<Product>>(jsonFromFile);

        if (result is not null)
        {
            foreach (var product in result)
            {
                Console.WriteLine(product);
            }
        }
    }
}
