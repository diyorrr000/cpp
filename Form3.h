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
	/// Form3 class represents the Data View Window
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	private:
		System::Windows::Forms::Form^ parentForm;

	public:
		Form3(System::Windows::Forms::Form^ parent)
		{
			InitializeComponent();
			this->parentForm = parent;
		}

	protected:
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::DataGridView^ dgvUsers;
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dgvUsers = (gcnew System::Windows::Forms::DataGridView());
			((System::ComponentModel::ISupportInitialize^)(this->dgvUsers))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvUsers
			// 
			this->dgvUsers->AllowUserToAddRows = false;
			this->dgvUsers->AllowUserToDeleteRows = false;
			this->dgvUsers->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvUsers->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvUsers->BackgroundColor = System::Drawing::Color::White;
			this->dgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsers->Location = System::Drawing::Point(20, 20);
			this->dgvUsers->Name = L"dgvUsers";
			this->dgvUsers->ReadOnly = true;
			this->dgvUsers->RowHeadersWidth = 51;
			this->dgvUsers->RowTemplate->Height = 24;
			this->dgvUsers->Size = System::Drawing::Size(840, 320);
			this->dgvUsers->TabIndex = 0;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(880, 360);
			this->Controls->Add(this->dgvUsers);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Foydalanuvchilar Ro'yxati";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form3::Form3_FormClosed);
			((System::ComponentModel::ISupportInitialize^)(this->dgvUsers))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		// Columns configuration
		this->dgvUsers->Columns->Clear();
		this->dgvUsers->Columns->Add(L"colIsm", L"Ism");
		this->dgvUsers->Columns->Add(L"colFamiliya", L"Familiya");
		this->dgvUsers->Columns->Add(L"colTelefon", L"Telefon");
		this->dgvUsers->Columns->Add(L"colTugilganYil", L"Tug'ilgan yil");
		this->dgvUsers->Columns->Add(L"colViloyat", L"Viloyat");
		this->dgvUsers->Columns->Add(L"colJins", L"Jins");
		this->dgvUsers->Columns->Add(L"colLogin", L"Login");
		this->dgvUsers->Columns->Add(L"colParol", L"Parol");

		// Auto fill grid
		this->dgvUsers->Rows->Clear();
		for each (User^ u in SharedData::Users) {
			this->dgvUsers->Rows->Add(gcnew array<System::String^> {
				u->Ism,
				u->Familiya,
				u->Telefon,
				u->TugilganYil,
				u->Viloyat,
				u->Jins,
				u->Login,
				u->Parol
			});
		}
	}

	private: System::Void Form3_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (this->parentForm != nullptr) {
			this->parentForm->Close();
		}
	}
};
}
