#include "main.h"



using namespace System;

using namespace System::Windows::Forms;



int main(array<String^>^ arg){

Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
Application::Run(gcnew WakiSpam_CPP::main());

return 0;

}

