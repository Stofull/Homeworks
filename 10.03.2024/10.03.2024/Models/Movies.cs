
using System.Text.Json.Serialization;

public class Movies
{
    [JsonPropertyName("Object")]
    public Object Object { get; set; }

    [JsonPropertyName("results")]
    public Result[] Results { get; set; }
}

public class Object
{
    [JsonPropertyName("total")]
    public int Total { get; set; }

    [JsonPropertyName("limit")]
    public int Limit { get; set; }

    [JsonPropertyName("offset")]
    public int Offset { get; set; }
}

public class Result
{
    [JsonPropertyName("title")]
    public string Title { get; set; }

    [JsonPropertyName("img")]
    public string Img { get; set; }

    [JsonPropertyName("title_type")]
    public string Title_type { get; set; }

    [JsonPropertyName("netflix_id")]
    public int Netflix_id { get; set; }

    [JsonPropertyName("synopsis")]
    public string Synopsis { get; set; }

    [JsonPropertyName("rating")]
    public string Rating { get; set; }

    [JsonPropertyName("year")]
    public string Year { get; set; }

    [JsonPropertyName("runtime")]
    public string Runtime { get; set; }

    [JsonPropertyName("imdb_id")]
    public string Imdb_id { get; set; }

    [JsonPropertyName("poster")]
    public string Poster { get; set; }

    [JsonPropertyName("top250")]
    public int Top250 { get; set; }

    [JsonPropertyName("top250tv")]
    public int Top250tv { get; set; }

    [JsonPropertyName("title_date")]
    public string Title_date { get; set; }
}
