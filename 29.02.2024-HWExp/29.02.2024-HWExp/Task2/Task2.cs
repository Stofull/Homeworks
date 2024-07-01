//using System;
//using System.IO;
//using System.Linq;
//using System.Text.RegularExpressions;
//using System.Threading;
//using System.Threading.Tasks;

//class Program
//{
//    static CancellationTokenSource cts = new CancellationTokenSource();

//    static async Task Main(string[] args)
//    {
//        while (true)
//        {
//            Console.WriteLine("Enter your text:");
//            string inputText = Console.ReadLine();

//            Console.WriteLine("Choose: \n1. Display the report \n2. Save the report to file \n3. Stop analysis");
//            int actionChoice = int.Parse(Console.ReadLine());

//            if (actionChoice == 3)
//            {
//                cts.Cancel();
//                Console.WriteLine("Analysis has stopped.");
//                cts = new CancellationTokenSource();
//                continue;
//            }

//            try
//            {

//                var report = await AnalyzeTextAsync(inputText, cts.Token);

//                if (actionChoice == 1)
//                {
//                    Console.WriteLine(report);
//                }
//                else if (actionChoice == 2)
//                {
//                    Console.WriteLine("Enter a file name to save the report:");
//                    string fileName = Console.ReadLine();
//                    await File.WriteAllTextAsync(fileName, report);
//                    Console.WriteLine($"The report is saved to a file {fileName}");
//                }
//                else
//                {
//                    Console.WriteLine("Wrong choice of action.");
//                }
//            }
//            catch (OperationCanceledException)
//            {
//                Console.WriteLine("The analysis was canceled.");
//            }
//        }
//    }

//    static Task<string> AnalyzeTextAsync(string text, CancellationToken token)
//    {
//        return Task.Run(() =>
//        {
//            token.ThrowIfCancellationRequested();

//            int sentenceCount = text.Split(new[] { '.', '!', '?' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int charCount = text.Length;
//            int wordCount = text.Split(new[] { ' ', '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int questionSentenceCount = new Regex(@"\?").Matches(text).Count;
//            int exclamationSentenceCount = new Regex(@"!").Matches(text).Count;

//            return $"Report:\n" +
//                   $"Number of offers: {sentenceCount}\n" +
//                   $"Count characters: {charCount}\n" +
//                   $"Word count: {wordCount}\n" +
//                   $"Number of interrogative sentences: {questionSentenceCount}\n" +
//                   $"Number of exclamation sentences: {exclamationSentenceCount}";
//        }, token);
//    }
//}

