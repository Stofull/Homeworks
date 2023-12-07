class FruitInfoFactory
{
    private Dictionary<string, FruitInfo> fruitInfoDictionary = new Dictionary<string, FruitInfo>();

    public FruitInfo GetFruitInfo(string country, string season)
    {
        string key = $"{country}_{season}";

        if (!fruitInfoDictionary.ContainsKey(key))
        {
            fruitInfoDictionary[key] = new FruitInfo(country, season);
        }
        return fruitInfoDictionary[key];
    }
}
