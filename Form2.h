#pragma once

#include "User.h"

namespace CppWinFormProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form2 class represents the Registration Window
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::Form^ parentForm;

	public:
		Form2(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			this->parentForm = parent;
			// Add Jins items
			this->cbJins->Items->AddRange(gcnew array<System::Object^>(2) { L"Erkak", L"Ayol" });
			this->cbJins->SelectedIndex = 0;
		}

	protected:
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblIsm;
	private: System::Windows::Forms::Label^ lblFamiliya;
	private: System::Windows::Forms::Label^ lblTelefon;
	private: System::Windows::Forms::Label^ lblTugilganYil;
	private: System::Windows::Forms::Label^ lblViloyat;
	private: System::Windows::Forms::Label^ lblJins;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblParol;

	private: System::Windows::Forms::TextBox^ txtIsm;
	private: System::Windows::Forms::TextBox^ txtFamiliya;
	private: System::Windows::Forms::TextBox^ txtTelefon;
	private: System::Windows::Forms::TextBox^ txtTugilganYil;
	private: System::Windows::Forms::TextBox^ txtViloyat;
	private: System::Windows::Forms::ComboBox^ cbJins;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtParol;

	private: System::Windows::Forms::Button^ btnSaqlash;
	private: System::Windows::Forms::Button^ btnOrqaga;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblIsm = (gcnew System::Windows::Forms::Label());
			this->lblFamiliya = (gcnew System::Windows::Forms::Label());
			this->lblTelefon = (gcnew System::Windows::Forms::Label());
			this->lblTugilganYil = (gcnew System::Windows::Forms::Label());
			this->lblViloyat = (gcnew System::Windows::Forms::Label());
			this->lblJins = (gcnew System::Windows::Forms::Label());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblParol = (gcnew System::Windows::Forms::Label());
			this->txtIsm = (gcnew System::Windows::Forms::TextBox());
			this->txtFamiliya = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefon = (gcnew System::Windows::Forms::TextBox());
			this->txtTugilganYil = (gcnew System::Windows::Forms::TextBox());
			this->txtViloyat = (gcnew System::Windows::Forms::TextBox());
			this->cbJins = (gcnew System::Windows::Forms::ComboBox());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtParol = (gcnew System::Windows::Forms::TextBox());
			this->btnSaqlash = (gcnew System::Windows::Forms::Button());
			this->btnOrqaga = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(85)), 
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTitle->Location = System::Drawing::Point(130, 15);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(182, 37);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Registratsiya";
			// 
			// lblIsm
			// 
			this->lblIsm->AutoSize = true;
			this->lblIsm->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblIsm->Location = System::Drawing::Point(40, 70);
			this->lblIsm->Name = L"lblIsm";
			this->lblIsm->Size = System::Drawing::Size(41, 23);
			this->lblIsm->TabIndex = 1;
			this->lblIsm->Text = L"Ism:";
			// 
			// lblFamiliya
			// 
			this->lblFamiliya->AutoSize = true;
			this->lblFamiliya->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblFamiliya->Location = System::Drawing::Point(40, 110);
			this->lblFamiliya->Name = L"lblFamiliya";
			this->lblFamiliya->Size = System::Drawing::Size(76, 23);
			this->lblFamiliya->TabIndex = 2;
			this->lblFamiliya->Text = L"Familiya:";
			// 
			// lblTelefon
			// 
			this->lblTelefon->AutoSize = true;
			this->lblTelefon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblTelefon->Location = System::Drawing::Point(40, 150);
			this->lblTelefon->Name = L"lblTelefon";
			this->lblTelefon->Size = System::Drawing::Size(68, 23);
			this->lblTelefon->TabIndex = 3;
			this->lblTelefon->Text = L"Telefon:";
			// 
			// lblTugilganYil
			// 
			this->lblTugilganYil->AutoSize = true;
			this->lblTugilganYil->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblTugilganYil->Location = System::Drawing::Point(40, 190);
			this->lblTugilganYil->Name = L"lblTugilganYil";
			this->lblTugilganYil->Size = System::Drawing::Size(104, 23);
			this->lblTugilganYil->TabIndex = 4;
			this->lblTugilganYil->Text = L"Tug'ilgan yil:";
			// 
			// lblViloyat
			// 
			this->lblViloyat->AutoSize = true;
			this->lblViloyat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblViloyat->Location = System::Drawing::Point(40, 230);
			this->lblViloyat->Name = L"lblViloyat";
			this->lblViloyat->Size = System::Drawing::Size(65, 23);
			this->lblViloyat->TabIndex = 5;
			this->lblViloyat->Text = L"Viloyat:";
			// 
			// lblJins
			// 
			this->lblJins->AutoSize = true;
			this->lblJins->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblJins->Location = System::Drawing::Point(40, 270);
			this->lblJins->Name = L"lblJins";
			this->lblJins->Size = System::Drawing::Size(42, 23);
			this->lblJins->TabIndex = 6;
			this->lblJins->Text = L"Jins:";
			// 
			// lblLogin
			// 
			this->lblLogin->AutoSize = true;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblLogin->Location = System::Drawing::Point(40, 310);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(56, 23);
			this->lblLogin->TabIndex = 7;
			this->lblLogin->Text = L"Login:";
			// 
			// lblParol
			// 
			this->lblParol->AutoSize = true;
			this->lblParol->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->lblParol->Location = System::Drawing::Point(40, 350);
			this->lblParol->Name = L"lblParol";
			this->lblParol->Size = System::Drawing::Size(52, 23);
			this->lblParol->TabIndex = 8;
			this->lblParol->Text = L"Parol:";
			// 
			// txtIsm
			// 
			this->txtIsm->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtIsm->Location = System::Drawing::Point(180, 67);
			this->txtIsm->Name = L"txtIsm";
			this->txtIsm->Size = System::Drawing::Size(200, 29);
			this->txtIsm->TabIndex = 9;
			// 
			// txtFamiliya
			// 
			this->txtFamiliya->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtFamiliya->Location = System::Drawing::Point(180, 107);
			this->txtFamiliya->Name = L"txtFamiliya";
			this->txtFamiliya->Size = System::Drawing::Size(200, 29);
			this->txtFamiliya->TabIndex = 10;
			// 
			// txtTelefon
			// 
			this->txtTelefon->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtTelefon->Location = System::Drawing::Point(180, 147);
			this->txtTelefon->Name = L"txtTelefon";
			this->txtTelefon->Size = System::Drawing::Size(200, 29);
			this->txtTelefon->TabIndex = 11;
			// 
			// txtTugilganYil
			// 
			this->txtTugilganYil->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtTugilganYil->Location = System::Drawing::Point(180, 187);
			this->txtTugilganYil->Name = L"txtTugilganYil";
			this->txtTugilganYil->Size = System::Drawing::Size(200, 29);
			this->txtTugilganYil->TabIndex = 12;
			// 
			// txtViloyat
			// 
			this->txtViloyat->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtViloyat->Location = System::Drawing::Point(180, 227);
			this->txtViloyat->Name = L"txtViloyat";
			this->txtViloyat->Size = System::Drawing::Size(200, 29);
			this->txtViloyat->TabIndex = 13;
			// 
			// cbJins
			// 
			this->cbJins->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbJins->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->cbJins->FormattingEnabled = true;
			this->cbJins->Location = System::Drawing::Point(180, 267);
			this->cbJins->Name = L"cbJins";
			this->cbJins->Size = System::Drawing::Size(200, 31);
			this->cbJins->TabIndex = 14;
			// 
			// txtLogin
			// 
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtLogin->Location = System::Drawing::Point(180, 307);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(200, 29);
			this->txtLogin->TabIndex = 15;
			// 
			// txtParol
			// 
			this->txtParol->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->txtParol->Location = System::Drawing::Point(180, 347);
			this->txtParol->Name = L"txtParol";
			this->txtParol->Size = System::Drawing::Size(200, 29);
			this->txtParol->TabIndex = 16;
			this->txtParol->UseSystemPasswordChar = true;
			// 
			// btnSaqlash
			// 
			this->btnSaqlash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->btnSaqlash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaqlash->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnSaqlash->ForeColor = System::Drawing::Color::White;
			this->btnSaqlash->Location = System::Drawing::Point(80, 410);
			this->btnSaqlash->Name = L"btnSaqlash";
			this->btnSaqlash->Size = System::Drawing::Size(120, 38);
			this->btnSaqlash->TabIndex = 17;
			this->btnSaqlash->Text = L"Saqlash";
			this->btnSaqlash->UseVisualStyleBackColor = false;
			this->btnSaqlash->Click += gcnew System::EventHandler(this, &Form2::btnSaqlash_Click);
			// 
			// btnOrqaga
			// 
			this->btnOrqaga->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), static_cast<System::Int32>(static_cast<System::Byte>(76)), 
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->btnOrqaga->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOrqaga->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnOrqaga->ForeColor = System::Drawing::Color::White;
			this->btnOrqaga->Location = System::Drawing::Point(230, 410);
			this->btnOrqaga->Name = L"btnOrqaga";
			this->btnOrqaga->Size = System::Drawing::Size(120, 38);
			this->btnOrqaga->TabIndex = 18;
			this->btnOrqaga->Text = L"Orqaga";
			this->btnOrqaga->UseVisualStyleBackColor = false;
			this->btnOrqaga->Click += gcnew System::EventHandler(this, &Form2::btnOrqaga_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(430, 480);
			this->Controls->Add(this->btnOrqaga);
			this->Controls->Add(this->btnSaqlash);
			this->Controls->Add(this->txtParol);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->cbJins);
			this->Controls->Add(this->txtViloyat);
			this->Controls->Add(this->txtTugilganYil);
			this->Controls->Add(this->txtTelefon);
			this->Controls->Add(this->txtFamiliya);
			this->Controls->Add(this->txtIsm);
			this->Controls->Add(this->lblParol);
			this->Controls->Add(this->lblLogin);
			this->Controls->Add(this->lblJins);
			this->Controls->Add(this->lblViloyat);
			this->Controls->Add(this->lblTugilganYil);
			this->Controls->Add(this->lblTelefon);
			this->Controls->Add(this->lblFamiliya);
			this->Controls->Add(this->lblIsm);
			this->Controls->Add(this->lblTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registratsiya Oynasi";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnOrqaga_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		parentForm->Show();
	}

	private: System::Void btnSaqlash_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ ism = txtIsm->Text->Trim();
		String^ familiya = txtFamiliya->Text->Trim();
		String^ telefon = txtTelefon->Text->Trim();
		String^ tugilganYil = txtTugilganYil->Text->Trim();
		String^ viloyat = txtViloyat->Text->Trim();
		String^ jins = cbJins->SelectedItem != nullptr ? cbJins->SelectedItem->ToString() : L"";
		String^ login = txtLogin->Text->Trim();
		String^ parol = txtParol->Text;

		if (String::IsNullOrEmpty(ism) || String::IsNullOrEmpty(familiya) || 
			String::IsNullOrEmpty(telefon) || String::IsNullOrEmpty(tugilganYil) ||
			String::IsNullOrEmpty(viloyat) || String::IsNullOrEmpty(jins) || 
			String::IsNullOrEmpty(login) || String::IsNullOrEmpty(parol)) {
			MessageBox::Show(L"Iltimos, barcha maydonlarni to'ldiring!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Check if login already exists
		for each (User^ u in SharedData::Users) {
			if (u->Login->Equals(login, System::StringComparison::OrdinalIgnoreCase)) {
				MessageBox::Show(L"Bu login allaqachon mavjud! Iltimos, boshqa login tanlang.", L"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		// Save user info
		User^ newUser = gcnew User(ism, familiya, telefon, tugilganYil, viloyat, jins, login, parol);
		SharedData::Users->Add(newUser);

		MessageBox::Show(L"Foydalanuvchi muvaffaqiyatli ro'yxatdan o'tkazildi!", L"Muvaffaqiyat", MessageBoxButtons::OK, MessageBoxIcon::Information);

		this->Close();
		parentForm->Show();
	}
};
}
