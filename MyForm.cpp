#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab2JavierMorales1210219::MyForm form;
	Application::Run(% form);
	return 0;
}

