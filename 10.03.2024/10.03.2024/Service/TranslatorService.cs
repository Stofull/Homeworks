using System.Net.Http.Headers;
using System.Text.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using System.Reflection.PortableExecutable;

namespace _10._03._2024.Service;
static class TranslatorService
{

    public static async Task<string> Translate(string word)
    {

        var client = new HttpClient();
        var request = new HttpRequestMessage
        {
            Method = HttpMethod.Get,
            RequestUri = new Uri($"https://translated-mymemory---translation-memory.p.rapidapi.com/get?langpair=ru%7Cen&q={word}&mt=1&onlyprivate=0&de=a%40b.c"),
            Headers =
            {
                { "X-RapidAPI-Key", "957d084cb5msh2b879a1b6569378p17d2b7jsn12c84a71159b" },
                { "X-RapidAPI-Host", "translated-mymemory---translation-memory.p.rapidapi.com" },
           }
        };


        var response = await client.SendAsync(request);

        response.EnsureSuccessStatusCode();
        var body = await response.Content.ReadAsStreamAsync();

        TranslatedWordInfo rootobject = await JsonSerializer.DeserializeAsync<TranslatedWordInfo>(body);

        return rootobject.ResponseData.TranslatedText; 

    }


};

