using System;
using EfCoreApp.Models;

using (var context = new DbContext())
{
    var employees = context.Employees.ToList();

    Console.WriteLine("Employees:");
    foreach (var employee in employees)
    {
        Console.WriteLine($"ID: {employee.EmployeeID}, Name: {employee.Name}, Position: {employee.Position}, Salary: {employee.Salary}");
    }

    var newEmployee = new Employee
    {
        Name = "Dave John",
        Position = "Manager",
        Salary = 8000
    };
    context.Employees.Add(newEmployee);
    context.SaveChanges();
    Console.WriteLine("New employee added.");

    var existingEmployee = context.Employees.First();
    existingEmployee.Salary = 9000;
    context.SaveChanges();
    Console.WriteLine("Employee salary updated.");

    var employeeToDelete = context.Employees.Last();
    context.Employees.Remove(employeeToDelete);
    context.SaveChanges();
    Console.WriteLine("Employee deleted.");
}