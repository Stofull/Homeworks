using System.Windows;
namespace MyNamespace
{
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }
        private void AddTask(object sender, RoutedEventArgs e)
        {
            string newTask = newTaskTextBox.Text;
            if (!string.IsNullOrWhiteSpace(newTask))
            {
                todoListBox.Items.Add(newTask);
                newTaskTextBox.Text = "";
            }
        }
        private void RemoveTask(object sender, RoutedEventArgs e)
        {
            if (todoListBox.SelectedItem != null)
            {
                todoListBox.Items.Remove(todoListBox.SelectedItem);
            }
        }
    }
}