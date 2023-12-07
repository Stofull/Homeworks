class FruitShop
{
    private FruitInfoFactory fruitInfoFactory = new FruitInfoFactory();
    public void DisplayFruitInfo(string fruitName, string country, string season)
    {
        FruitInfo fruitInfo = fruitInfoFactory.GetFruitInfo(country, season);
        fruitInfo.DisplayInfo(fruitName);
    }
}

