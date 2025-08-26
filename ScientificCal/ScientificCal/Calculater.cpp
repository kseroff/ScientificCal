#include "Calculater.h"
#include "form2.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ScientificCal;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew form2());
	return 0;
}