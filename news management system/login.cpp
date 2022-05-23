#include "login.h"
#include "News.h"
#include "AddNews.h"
#include "AdminUi.h"
#include "CommentsForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew newsmanagementsystem::login);

    
}