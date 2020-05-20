#include "LoadForm.h"
using namespace Calculator;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoadForm);
	return 0;
}
