class MediaFacade
{
    private Audio audioProcessor;
    private Video videoProcessor;
    private Coding codecSystem;

    public MediaFacade()
    {
        audioProcessor = new Audio();
        videoProcessor = new Video();
        codecSystem = new Coding();
    }

    public void PlayMedia()
    {
        Console.WriteLine("Playing multimedia:");
        Console.WriteLine(audioProcessor.Audioprocessing());
        Console.WriteLine(videoProcessor.Videoprocessing());
    }

    public void EncodeDecodeData()
    {
        Console.WriteLine("Encoding and decoding data:");
        Console.WriteLine(codecSystem.MaterialCreation());
        Console.WriteLine(codecSystem.DeMaterialCreation());
    }
}