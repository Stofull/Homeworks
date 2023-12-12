public interface IOrderService
{
    List<string> GetOrders();
    void PlaceOrder(string item);
    void DeleteOrder(string orderId);
}
