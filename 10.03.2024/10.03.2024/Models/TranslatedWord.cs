
using System.Text.Json.Serialization;

public class TranslatedWordInfo
{
    [JsonPropertyName("responseData")]
    public Responsedata ResponseData { get; set; }

    [JsonPropertyName("quotaFinished")]
    public bool QuotaFinished { get; set; }

    [JsonPropertyName("mtLangSupported")]
    public object MtLangSupported { get; set; }

    [JsonPropertyName("responseDetails")]
    public string ResponseDetails { get; set; }

    [JsonPropertyName("responseStatus")]
    public int ResponseStatus { get; set; }

    [JsonPropertyName("responderId")]
    public object ResponderId { get; set; }

    [JsonPropertyName("exception_code")]
    public object Exception_code { get; set; }

    [JsonPropertyName("matches")]
    public Match_[] Matches { get; set; }
}

public class Responsedata
{
    [JsonPropertyName("translatedText")]
    public string TranslatedText { get; set; }

    [JsonPropertyName("match")]
    public float Match { get; set; }
}

public class Match_
{
    [JsonPropertyName("id")]
    public string Id { get; set; }

    [JsonPropertyName("segment")]
    public string Segment { get; set; }

    [JsonPropertyName("translation")]
    public string Translation { get; set; }

    [JsonPropertyName("source")]
    public string Source { get; set; }

    [JsonPropertyName("target")]
    public string Target { get; set; }

    [JsonPropertyName("quality")]
    public object Quality { get; set; }

    [JsonPropertyName("reference")]
    public object Reference { get; set; }

    [JsonPropertyName("usagecount")]
    public int Usagecount { get; set; }

    [JsonPropertyName("subject")]
    public string Subject { get; set; }

    [JsonPropertyName("createdby")]
    public string Createdby { get; set; }

    [JsonPropertyName("lastupdatedby")]
    public string Lastupdatedby { get; set; }

    [JsonPropertyName("createdate")]
    public string Createdate { get; set; }

    [JsonPropertyName("lastupdatedate")]
    public string Lastupdatedate { get; set; }

    [JsonPropertyName("match")]
    public float Match { get; set; }
}

