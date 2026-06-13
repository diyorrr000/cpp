#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace CppWinFormProject {

	public ref class User {
	public:
		String^ Ism;
		String^ Familiya;
		String^ Telefon;
		String^ TugilganYil;
		String^ Viloyat;
		String^ Jins;
		String^ Login;
		String^ Parol;

		User(String^ ism, String^ familiya, String^ telefon, String^ tugilganYil, 
		     String^ viloyat, String^ jins, String^ login, String^ parol) {
			Ism = ism;
			Familiya = familiya;
			Telefon = telefon;
			TugilganYil = tugilganYil;
			Viloyat = viloyat;
			Jins = jins;
			Login = login;
			Parol = parol;
		}
	};

	public ref class SharedData {
	public:
		static List<User^>^ Users;

		static SharedData() {
			Users = gcnew List<User^>();
			// Add a default user for testing and validation
			Users->Add(gcnew User(L"Ali", L"Valiyev", L"+998901234567", L"2000", L"Toshkent", L"Erkak", L"admin", L"admin123"));
		}
	};
}
