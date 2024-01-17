using System.Data.SqlClient;
using Microsoft.Extensions.Configuration;


var builder = new ConfigurationBuilder();
builder.AddJsonFile("appsettings.json");
var config = builder.Build();
var connectionString = config.GetConnectionString("Default");
using SqlConnection conn = new(connectionString);
conn.Open();
using SqlCommand command = new("select * from People", conn);
var reader = command.ExecuteReader();
while (reader.Read()){
    var id = reader.GetInt32(0);
    Console.WriteLine($"{reader[0]}\t{reader[1]}");

}