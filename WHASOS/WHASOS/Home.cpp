#include "Home.h"
using namespace System;
using namespace System::Windows::Forms;
extern "C" int AddNumbers(int a, int b);
[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    int result = AddNumbers(10, 5);
	int x = 10;
    MessageBox::Show("The result is: " + result, "Calculation Result");
    WHASOS::Home frm;
    Application::Run(% frm);
}