namespace _08._10._23_CalcWinForms
{
    public partial class Form1 : Form
    {
        float result = 0;
        String operationPerf = "";
        bool isOperatorPerf = false;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if ((textBox1.Text == "0") || (isOperatorPerf))
                textBox1.Clear();
            isOperatorPerf = false;
            Button button = (Button)sender;
            if (button.Text == ".")
            {
                if (!textBox1.Text.Contains("."))
                    textBox1.Text = textBox1.Text + button.Text;
            }
            else
                textBox1.Text = textBox1.Text + button.Text;
        }

        private void operator_click(object sender, EventArgs e)
        {
            Button button = (Button)sender;

            if (result != 0)
            {
                button12.PerformClick();
                operationPerf = button.Text;
                label.Text = result + " " + operationPerf;
                isOperatorPerf = true;
            }
            else
            {
                operationPerf = button.Text;
                result = float.Parse(textBox1.Text);
                label.Text = result + " " + operationPerf;
                isOperatorPerf = true;
            }

        }

        private void delete_button(object sender, EventArgs e)
        {
            textBox1.Text = "0";
        }
        private void oper_equals(object sender, EventArgs e)
        {
            switch (operationPerf)
            {
                case "+":
                    textBox1.Text = (result + float.Parse(textBox1.Text)).ToString();
                    break;
                case "-":
                    textBox1.Text = (result - float.Parse(textBox1.Text)).ToString();
                    break;
                case "*":
                    textBox1.Text = (result * float.Parse(textBox1.Text)).ToString();
                    break;
                case "/":
                    textBox1.Text = (result / float.Parse(textBox1.Text)).ToString();
                    break;
                default:
                    break;

            }
            result = float.Parse(textBox1.Text);
            label.Text = "";
        }
    }
}