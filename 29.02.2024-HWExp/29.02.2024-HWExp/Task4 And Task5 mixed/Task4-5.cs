//using System;
//using System.Collections.Generic;
//using System.IO;
//using System.Security.Cryptography;
//using System.Text;
//using System.Threading.Tasks;

//class Program
//{
//    static async Task Main(string[] args)
//    {
//        Console.WriteLine("Enter the source directory path:");
//        string sourceDirectory = Console.ReadLine();

//        Console.WriteLine("Enter the target directory path:");
//        string targetDirectory = Console.ReadLine();

//        var report = await ProcessDuplicatesAsync(sourceDirectory, targetDirectory);

//        Console.WriteLine(report);
//        Console.WriteLine("Report saved to 'report.txt'");
//        await File.WriteAllTextAsync("report.txt", report);
//    }

//    static async Task<string> ProcessDuplicatesAsync(string sourceDirectory, string targetDirectory)
//    {
//        if (!Directory.Exists(sourceDirectory))
//            return "Source directory does not exist.";

//        if (!Directory.Exists(targetDirectory))
//            return "Target directory does not exist.";

//        var hashDictionary = new Dictionary<string, string>();
//        var reportBuilder = new StringBuilder();
//        reportBuilder.AppendLine("Action Report:");

//        await Task.Run(() =>
//        {
//            var files = Directory.GetFiles(sourceDirectory);

//            foreach (var file in files)
//            {
//                string hash = GetFileHash(file);

//                if (!hashDictionary.ContainsKey(hash))
//                {
//                    hashDictionary.Add(hash, file);
//                    reportBuilder.AppendLine($"Added file: {file}");
//                }
//                else
//                {
//                    string originalFile = hashDictionary[hash];
//                    string fileName = Path.GetFileName(file);
//                    string targetFilePath = Path.Combine(targetDirectory, fileName);

//                    try
//                    {
//                        File.Move(file, targetFilePath);
//                        reportBuilder.AppendLine($"File '{fileName}' moved to target directory.");
//                    }
//                    catch (IOException ex)
//                    {
//                        reportBuilder.AppendLine($"Failed to move file '{fileName}': {ex.Message}");
//                    }
//                }
//            }
//        });

//        return reportBuilder.ToString();
//    }

//    static string GetFileHash(string filePath)
//    {
//        using (var md5 = MD5.Create())
//        {
//            using (var stream = File.OpenRead(filePath))
//            {
//                byte[] hashBytes = md5.ComputeHash(stream);
//                return BitConverter.ToString(hashBytes).Replace("-", "").ToLowerInvariant();
//            }
//        }
//    }
//}
