#include "Home.h"
#include "MyForm1.h"
using namespace System;
using namespace System::Windows::Forms;
extern "C" int AddNumbers(int a, int b);
[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    int result = AddNumbers(5, 5);
    WHASOS::Home frm;
    Application::Run(% frm);
}