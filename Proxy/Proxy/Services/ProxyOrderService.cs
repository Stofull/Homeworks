public class ProxyOrderService : IOrderService
{
    private RealOrderService realOrderService;

    public ProxyOrderService()
    {
        realOrderService = new RealOrderService();
    }

    public List<string> GetOrders()
    {
        return realOrderService.GetOrders();
    }

    public void PlaceOrder(string item)
    {
        realOrderService.PlaceOrder(item);
    }

    public void DeleteOrder(string orderId)
    {
        if (IsUserAuthenticated())
        {
            realOrderService.DeleteOrder(orderId);
        }
        else
        {
            Console.WriteLine("Error");
        }
    }

    private bool IsUserAuthenticated()
    {
        return true;
    }
}
