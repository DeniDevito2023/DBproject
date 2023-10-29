#pragma once
#include "User.h"

namespace DBproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// —водка дл€ LoginUI
	/// </summary>
	public ref class LoginUI : public System::Windows::Forms::Form
	{
	public:
		LoginUI(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~LoginUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ EmailUI;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ OKbutton;
	private: System::Windows::Forms::Button^ Cancelbutton;


	private: System::Windows::Forms::Button^ button3;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->EmailUI = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->OKbutton = (gcnew System::Windows::Forms::Button());
			this->Cancelbutton = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 28, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(50, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1763, 153);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 298);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			
			// 
			// EmailUI
			// 
			this->EmailUI->Location = System::Drawing::Point(329, 290);
			this->EmailUI->Name = L"EmailUI";
			this->EmailUI->Size = System::Drawing::Size(1484, 63);
			this->EmailUI->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(77, 497);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(208, 55);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(329, 474);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(1483, 63);
			this->tbPassword->TabIndex = 4;
			// 
			// OKbutton
			// 
			this->OKbutton->Location = System::Drawing::Point(329, 684);
			this->OKbutton->Name = L"OKbutton";
			this->OKbutton->Size = System::Drawing::Size(724, 81);
			this->OKbutton->TabIndex = 5;
			this->OKbutton->Text = L"OK";
			this->OKbutton->UseVisualStyleBackColor = true;
			this->OKbutton->Click += gcnew System::EventHandler(this, &LoginUI::OKbutton_Click);
			// 
			// Cancelbutton
			// 
			this->Cancelbutton->Location = System::Drawing::Point(1078, 684);
			this->Cancelbutton->Name = L"Cancelbutton";
			this->Cancelbutton->Size = System::Drawing::Size(719, 81);
			this->Cancelbutton->TabIndex = 6;
			this->Cancelbutton->Text = L"Cancel";
			this->Cancelbutton->UseVisualStyleBackColor = true;
			this->Cancelbutton->Click += gcnew System::EventHandler(this, &LoginUI::Cancelbutton_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(688, 663);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(8, 8);
			this->button3->TabIndex = 7;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// LoginUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(27, 55);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1939, 1014);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->Cancelbutton);
			this->Controls->Add(this->OKbutton);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->EmailUI);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginUI";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void Cancelbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   public: User^ user = nullptr;

private: System::Void OKbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->EmailUI->Text;
	String^ password = this->tbPassword->Text;



	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("¬ведите пароль и email", "Email or Password Empty", MessageBoxButtons::OK);
		return;
	}
	try {
		
		String^ connString = "Data Source=localhost;Initial Catalog=test_db;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@password";

		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader = command.ExecuteReader();


		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->name = reader->GetString(1);
			user->email = reader->GetString(2);
			user->phone = reader->GetString(3);
			user->address = reader->GetString(4);
			user->password = reader->GetString(5);

			this->Close();

		}
		else {
			MessageBox::Show("Email или пароль не верны", "ќшибка в Emaile или пароле", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("Ѕаза данных не найдена", "ќшибка подключени€", MessageBoxButtons::OK);
	}
}
};
}
