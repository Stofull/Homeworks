using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Http.Headers;
using System.Text.Json;

namespace _10._03._2024.Service;

static class MoviesService
{

    public static async Task<List<string>> FindMovies(string word)
    {
        List<string> allmovies = new List<string>();
        var client = new HttpClient();
        var request = new HttpRequestMessage
        {
            Method = HttpMethod.Get,
            RequestUri = new Uri($"https://unogs-unogs-v1.p.rapidapi.com/search/titles?order_by=date&title={word}&type=movie"),
            Headers =
    {
        { "X-RapidAPI-Key", "957d084cb5msh2b879a1b6569378p17d2b7jsn12c84a71159b" },
        { "X-RapidAPI-Host", "unogs-unogs-v1.p.rapidapi.com" },
    },
        };



        var response = await client.SendAsync(request);

        response.EnsureSuccessStatusCode();
        var body = await response.Content.ReadAsStreamAsync();
        Console.WriteLine(body);

        Movies movies = await JsonSerializer.DeserializeAsync<Movies>(body);


        foreach (var item in movies.Results)
        {
            allmovies.Add(item.Title.ToString());
        }


        return allmovies;

    }

}
