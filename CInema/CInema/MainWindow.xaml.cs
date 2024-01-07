using IMDbApiLib;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace CInema
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private async void Button_Click(object sender, RoutedEventArgs e)
        {
            var api = new ApiLib("k_615oc2eg");
            var result = await api.SearchTitleAsync(textbox11.Text);
            listbox11.DataSource = result.Result;
            listbox11.DisplayMember = "Title";
            listbox11.ValueMember = result.Result;

        }
    }
}