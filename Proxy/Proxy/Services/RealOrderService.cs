public class RealOrderService : IOrderService
{
    private List<string> orders;

    public RealOrderService()
    {
        orders = new List<string>();
    }

    public List<string> GetOrders()
    {
        return orders;
    }

    public void PlaceOrder(string item)
    {
        orders.Add(item);
        Console.WriteLine("Placed order: " + item);
    }

    public void DeleteOrder(string orderId)
    {
        orders.Remove(orderId);
        Console.WriteLine("Deleted order: " + orderId);
    }
}
