using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net.Http.Headers;
using System.Text.Json;

namespace _10._03._2024.Service;

static class SynonymsService
{

    public static async Task<List<string>> Synonyms(string word)
    {
        var client = new HttpClient();
        List<string> synonyms = new List<string>();
        var request = new HttpRequestMessage

        {
            Method = HttpMethod.Get,
            RequestUri = new Uri($"https://synonyms-word-info.p.rapidapi.com/v1/word/synonyms?str={word}"),
            Headers =
    {
        { "X-RapidAPI-Key", "957d084cb5msh2b879a1b6569378p17d2b7jsn12c84a71159b" },
        { "X-RapidAPI-Host", "synonyms-word-info.p.rapidapi.com" },
    },
        };

        var response = await client.SendAsync(request);

        response.EnsureSuccessStatusCode();
        var body = await response.Content.ReadAsStreamAsync();

        SynonymsInfo synonymsInfo = await JsonSerializer.DeserializeAsync<SynonymsInfo>(body);


        foreach (var item in synonymsInfo.Data.Synonyms)
        {
            synonyms.Add(item[0].ToString());
        }



        return synonyms;

    }

}
