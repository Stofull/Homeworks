//using System;
//using System.IO;
//using System.Linq;
//using System.Text.RegularExpressions;
//using System.Threading.Tasks;

//    static async Task Main(string[] args)
//    {
//        Console.WriteLine("Введите текст:");
//        string inputText = Console.ReadLine();

//        Console.WriteLine("Выберите действие: \n1. Вывести отчет на экран \n2. Сохранить отчет в файл");
//        int actionChoice = int.Parse(Console.ReadLine());

//        var report = await AnalyzeTextAsync(inputText);

//        if (actionChoice == 1)
//        {
//            Console.WriteLine(report);
//        }
//        else if (actionChoice == 2)
//        {
//            Console.WriteLine("Введите имя файла для сохранения отчета:");
//            string fileName = Console.ReadLine();
//            await File.WriteAllTextAsync(fileName, report);
//            Console.WriteLine($"Отчет сохранен в файл {fileName}");
//        }
//        else
//        {
//            Console.WriteLine("Неверный выбор действия.");
//        }
//    }

//    static Task<string> AnalyzeTextAsync(string text)
//    {
//        return Task.Run(() =>
//        {
//            int sentenceCount = text.Split(new[] { '.', '!', '?' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int charCount = text.Length;
//            int wordCount = text.Split(new[] { ' ', '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int questionSentenceCount = new Regex(@"\?").Matches(text).Count;
//            int exclamationSentenceCount = new Regex(@"!").Matches(text).Count;

//            return $"Отчет:\n" +
//                   $"Количество предложений: {sentenceCount}\n" +
//                   $"Количество символов: {charCount}\n" +
//                   $"Количество слов: {wordCount}\n" +
//                   $"Количество вопросительных предложений: {questionSentenceCount}\n" +
//                   $"Количество восклицательных предложений: {exclamationSentenceCount}";
//        });
//    }
