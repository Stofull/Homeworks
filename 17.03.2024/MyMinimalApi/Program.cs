var builder = WebApplication.CreateBuilder(args);
var app = builder.Build();

app.MapGet("/products", () => new[]
{
    new { Id = 1, Name = "Product1", Price = 100 },
    new { Id = 2, Name = "Product2", Price = 200 }
});

app.MapGet("/products/{id}", (int id) =>
{
    var products = new[]
    {
        new { Id = 1, Name = "Product1", Price = 100 },
        new { Id = 2, Name = "Product2", Price = 200 }
    };
    return products.FirstOrDefault(p => p.Id == id);
});

app.MapPost("/products", (Product product) =>
{
    return Results.Created($"/products/{product.Id}", product);
});

app.MapDelete("/products/{id}", (int id) =>
{
    return Results.Ok($"Product with id {id} deleted");
});

app.Run();

record Product(int Id, string Name, decimal Price);
