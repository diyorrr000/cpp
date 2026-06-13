#pragma once

#include "User.h"
#include "Form2.h"
#include "Form3.h"

namespace CppWinFormProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 class represents the Login Window
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblParol;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtParol;
	private: System::Windows::Forms::Button^ btnKirish;
	private: System::Windows::Forms::Button^ btnRegistratsiya;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblParol = (gcnew System::Windows::Forms::Label());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtParol = (gcnew System::Windows::Forms::TextBox());
			this->btnKirish = (gcnew System::Windows::Forms::Button());
			this->btnRegistratsiya = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTitle->Location = System::Drawing::Point(175, 36);
			this->lblTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(348, 65);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Tizimga Kirish";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblLogin->Location = System::Drawing::Point(70, 145);
			this->lblLogin->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(99, 41);
			this->lblLogin->TabIndex = 1;
			this->lblLogin->Text = L"Login:";
			// 
			// lblParol
			// 
			this->lblParol->AutoSize = true;
			this->lblParol->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblParol->Location = System::Drawing::Point(70, 236);
			this->lblParol->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lblParol->Name = L"lblParol";
			this->lblParol->Size = System::Drawing::Size(91, 41);
			this->lblParol->TabIndex = 2;
			this->lblParol->Text = L"Parol:";
			// 
			// txtLogin
			// 
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtLogin->Location = System::Drawing::Point(228, 140);
			this->txtLogin->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(347, 47);
			this->txtLogin->TabIndex = 3;
			// 
			// txtParol
			// 
			this->txtParol->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtParol->Location = System::Drawing::Point(228, 230);
			this->txtParol->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->txtParol->Name = L"txtParol";
			this->txtParol->Size = System::Drawing::Size(347, 47);
			this->txtParol->TabIndex = 4;
			this->txtParol->UseSystemPasswordChar = true;
			// 
			// btnKirish
			// 
			this->btnKirish->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btnKirish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnKirish->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnKirish->ForeColor = System::Drawing::Color::White;
			this->btnKirish->Location = System::Drawing::Point(70, 335);
			this->btnKirish->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->btnKirish->Name = L"btnKirish";
			this->btnKirish->Size = System::Drawing::Size(236, 72);
			this->btnKirish->TabIndex = 5;
			this->btnKirish->Text = L"Kirish";
			this->btnKirish->UseVisualStyleBackColor = false;
			this->btnKirish->Click += gcnew System::EventHandler(this, &Form1::btnKirish_Click);
			// 
			// btnRegistratsiya
			// 
			this->btnRegistratsiya->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->btnRegistratsiya->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegistratsiya->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnRegistratsiya->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->btnRegistratsiya->Location = System::Drawing::Point(341, 335);
			this->btnRegistratsiya->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->btnRegistratsiya->Name = L"btnRegistratsiya";
			this->btnRegistratsiya->Size = System::Drawing::Size(236, 72);
			this->btnRegistratsiya->TabIndex = 6;
			this->btnRegistratsiya->Text = L"Registratsiya";
			this->btnRegistratsiya->UseVisualStyleBackColor = false;
			this->btnRegistratsiya->Click += gcnew System::EventHandler(this, &Form1::btnRegistratsiya_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(665, 471);
			this->Controls->Add(this->btnRegistratsiya);
			this->Controls->Add(this->btnKirish);
			this->Controls->Add(this->txtParol);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->lblParol);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->lblTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kirish Oynasi";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnKirish_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = txtLogin->Text->Trim();
		String^ password = txtParol->Text;

		if (String::IsNullOrEmpty(login) || String::IsNullOrEmpty(password)) {
			MessageBox::Show(L"Iltimos, login va parolni kiriting!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		User^ foundUser = nullptr;
		for each (User^ u in SharedData::Users) {
			if (u->Login == login && u->Parol == password) {
				foundUser = u;
				break;
			}
		}

		if (foundUser != nullptr) {
			Form3^ form3 = gcnew Form3(this);
			this->Hide();
			form3->Show();
			txtLogin->Clear();
			txtParol->Clear();
		} else {
			MessageBox::Show(L"Login yoki parol noto'g'ri!", L"Xato", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void btnRegistratsiya_Click(System::Object^ sender, System::EventArgs^ e) {
		Form2^ form2 = gcnew Form2(this);
		this->Hide();
		form2->Show();
		txtLogin->Clear();
		txtParol->Clear();
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
