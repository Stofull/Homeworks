
using System.Text.Json.Serialization;

public class SynonymsInfo
{

    [JsonPropertyName("status")]
    public string Status { get; set; }

    [JsonPropertyName("code")]
    public int Code { get; set; }

    [JsonPropertyName("data")]
    public Data Data { get; set; }

    [JsonPropertyName("user")]

    public User User { get; set; }
    
    [JsonPropertyName("responseTime")]
    public int ResponseTime { get; set; }

    [JsonPropertyName("host")]
    public string Host { get; set; }

    [JsonPropertyName("id")]
    public string hostname { get; set; }

    [JsonPropertyName("hosttype")]
    public string Hosttype { get; set; }

    [JsonPropertyName("dev")]
    public bool Dev { get; set; }

    [JsonPropertyName("documentation")]
    public string Documentation { get; set; }
}

public class Data
{
    [JsonPropertyName("key")]
    public string Key { get; set; }

    [JsonPropertyName("str")]
    public string Str { get; set; }

    [JsonPropertyName("pos1")]
    public string Pos1 { get; set; }

    [JsonPropertyName("pos2")]
    public string Pos2 { get; set; }

    [JsonPropertyName("pos3")]
    public string Pos3 { get; set; }

    [JsonPropertyName("synonyms")]
    public object[][] Synonyms { get; set; }
}

public class User
{
    [JsonPropertyName("ip")]
    public string Ip { get; set; }

    [JsonPropertyName("expires")]
    public long Expires { get; set; }

    [JsonPropertyName("authenticated")]
    public bool Authenticated { get; set; }
}
