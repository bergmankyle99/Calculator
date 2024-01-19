#include "MenuForm.h"
#include <string>
#include <array>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
void Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CalculatorProject::MenuForm form;
	Application::Run(% form);
}