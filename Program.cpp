#include "LoginUI.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DBproject::LoginUI loginForm;
	
	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		//MessageBox::Show("Successfull authentication of " + user->name, "Program.cpp", MessageBoxButtons::OK);
		DBproject::MainForm mainForm(user);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show("Authentication canseled ", "Program.cpp", MessageBoxButtons::OK);

	}







}