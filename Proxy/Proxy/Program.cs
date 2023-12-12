IOrderService orderService = new ProxyOrderService();

orderService.PlaceOrder("Laptop");
orderService.PlaceOrder("Mouse");
orderService.PlaceOrder("Keyboard");
orderService.PlaceOrder("Speaker");

List<string> orders = orderService.GetOrders();
Console.WriteLine("Cart: " + string.Join(", ", orders));

orderService.DeleteOrder("Speaker");
orderService.DeleteOrder("Laptop");
orderService.DeleteOrder("Keyboard");

Console.WriteLine("Cart: " + string.Join(", ", orders));
