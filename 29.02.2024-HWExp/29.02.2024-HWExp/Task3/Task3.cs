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
//            Console.WriteLine("Enter text:");
//            string inputText = Console.ReadLine();

//            Console.WriteLine("Select what information to include in the report (separated by commas): \n1. Number of offers\n2. Number of characters\n3. Number of words\n4. Number of interrogative sentences\n5. Number of exclamation sentences");
//            var choices = Console.ReadLine().Split(',').Select(int.Parse).ToList();

//            Console.WriteLine("Select action:\n1. Display the report \n2. Save the report to file \n3. Stop analysis");
//            int actionChoice = int.Parse(Console.ReadLine());

//            if (actionChoice == 3)
//            {
//                cts.Cancel();
//                Console.WriteLine("Analysis stopped.");
//                cts = new CancellationTokenSource();
//                continue;
//            }

//            try
//            {
//                var report = await AnalyzeTextAsync(inputText, choices, cts.Token);

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
//                Console.WriteLine("The analysis was cancelled.");
//            }
//        }
//    }

//    static Task<string> AnalyzeTextAsync(string text, List<int> choices, CancellationToken token)
//    {
//        return Task.Run(() =>
//        {
//            token.ThrowIfCancellationRequested();

//            int sentenceCount = text.Split(new[] { '.', '!', '?' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int charCount = text.Length;
//            int wordCount = text.Split(new[] { ' ', '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries).Length;
//            int questionSentenceCount = new Regex(@"\?").Matches(text).Count;
//            int exclamationSentenceCount = new Regex(@"!").Matches(text).Count;

//            string report = "Report:\n";
//            if (choices.Contains(1)) report += $"Number of offers: {sentenceCount}\n";
//            if (choices.Contains(2)) report += $"Count characters: {charCount}\n";
//            if (choices.Contains(3)) report += $"Word count: {wordCount}\n";
//            if (choices.Contains(4)) report += $"Number of interrogative sentences: {questionSentenceCount}\n";
//            if (choices.Contains(5)) report += $"Number of exclamation sentences: {exclamationSentenceCount}\n";

//            return report;
//        }, token);
//    }
//}
