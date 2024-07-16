using _10._03._2024.Service;

Console.WriteLine("Напишите какое-нибудь слово : ");
string word = Console.ReadLine();

Console.Clear();
Console.WriteLine($"RU - EN : \n\n{word} - {await TranslatorService.Translate(word)}\n");;

List<string> synonyms = await SynonymsService.Synonyms(await TranslatorService.Translate(word));

Console.WriteLine("Synonyms :\n");
foreach (var item in synonyms)
{
    Console.Write($"{item}, ");
}

List<string> movies = await MoviesService.FindMovies(await TranslatorService.Translate(word));
Console.WriteLine("\nMovies with this word :\n");
foreach (var item in movies)
{
    Console.Write($"{item}, ");
}