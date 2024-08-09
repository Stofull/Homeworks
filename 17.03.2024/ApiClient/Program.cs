using System;
using System.Net.Http;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using RestSharp;

class Program
{
    static async Task Main(string[] args)
    {
        var baseUrl = "http://localhost:5189";
        using (var httpClient = new HttpClient())
        {
            httpClient.BaseAddress = new Uri(baseUrl);
            var response = await httpClient.GetAsync("/products");
            var products = await response.Content.ReadAsStringAsync();
            Console.WriteLine("GET all products:");
            Console.WriteLine(products);
            response = await httpClient.GetAsync("/products/1");
            var product = await response.Content.ReadAsStringAsync();
            Console.WriteLine("GET single product:");
            Console.WriteLine(product);
            var newProduct = new { Id = 3, Name = "Product3", Price = 300 };
            var content = new StringContent(
                JsonSerializer.Serialize(newProduct),
                Encoding.UTF8,
                "application/json");
            response = await httpClient.PostAsync("/products", content);
            var createdProduct = await response.Content.ReadAsStringAsync();
            Console.WriteLine("POST new product:");
            Console.WriteLine(createdProduct);
            response = await httpClient.DeleteAsync("/products/3");
            var deleteMessage = await response.Content.ReadAsStringAsync();
            Console.WriteLine("DELETE product:");
            Console.WriteLine(deleteMessage);
        }
        var restClient = new RestClient(baseUrl);
        var request = new RestRequest("/products");
        var restResponse = await restClient.GetAsync(request);
        Console.WriteLine("RestSharp GET all products:");
        Console.WriteLine(restResponse.Content);
        request = new RestRequest("/products/1");
        restResponse = await restClient.GetAsync(request);
        Console.WriteLine("RestSharp GET single product:");
        Console.WriteLine(restResponse.Content);
        var restRequest = new RestRequest("/products", Method.Post);
        restRequest.AddJsonBody(new { Id = 4, Name = "Product4", Price = 400 });
        restResponse = await restClient.ExecuteAsync(restRequest);
        Console.WriteLine("RestSharp POST new product:");
        Console.WriteLine(restResponse.Content);
        request = new RestRequest("/products/4", Method.Delete);
        restResponse = await restClient.ExecuteAsync(request);
        Console.WriteLine("RestSharp DELETE product:");
        Console.WriteLine(restResponse.Content);
    }
}
