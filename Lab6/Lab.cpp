#include "Lab.h"
#include "gcd.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Lab6::Lab form; 
    Application::Run(% form);
}

System::Void Lab6::Lab::RecursiveAlgButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (InputBox1->Text != String::Empty && InputBox2->Text != String::Empty)
    {
        auto start = std::chrono::high_resolution_clock::now();
        RecursiveAlgValue->Text = Convert::ToString(gcd_recursive(Convert::ToUInt32(InputBox1->Text), Convert::ToUInt32(InputBox2->Text)));
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        RecursiveAlgTime->Text = Convert::ToString(elapsed.count());
    }
    
    return System::Void();
}

System::Void Lab6::Lab::IterationAlgButton_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (InputBox1->Text != String::Empty && InputBox2->Text != String::Empty)
    {
        auto start = std::chrono::high_resolution_clock::now();
        IterationAlgValue->Text = Convert::ToString(
            gcd_iteration(Convert::ToUInt32(InputBox1->Text), Convert::ToUInt32(InputBox2->Text)));
        auto finish = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> elapsed = finish - start;
        IterationAlgTime->Text = Convert::ToString(elapsed.count());
    }
        
    return System::Void();
}

System::Void Lab6::Lab::InputBox1_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
    try
    {
        int x = Convert::ToUInt32(InputBox1->Text);
    }
    catch (Exception^ err)
    {
        InputBox1->Text = "";
        MessageBox::Show("Please input unsigned integer number");
    }
    return System::Void();
}

System::Void Lab6::Lab::InputBox2_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e)
{
    try
    {
        int x = Convert::ToUInt32(InputBox2->Text);
    }
    catch (Exception^ err)
    {
        InputBox2->Text = "";
        MessageBox::Show("Please input unsigned integer number");
    }
    return System::Void();
}

System::Void Lab6::Lab::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("This app can find the greatest common divisor of two numbers. There are two algorythms: recursive and iterative. You can compare calculation times");
    return System::Void();
}
