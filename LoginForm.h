#pragma once
#include "User.h"

namespace loginpassword {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Сводка для LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llRegister;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пароль";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(113, 9);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(260, 30);
			this->tbEmail->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(113, 45);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(260, 30);
			this->tbPassword->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(113, 100);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(110, 36);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Войти";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &LoginForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(250, 100);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 36);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Отмена";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Location = System::Drawing::Point(246, 146);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(120, 23);
			this->llRegister->TabIndex = 7;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"Регистрация";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked_1);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(385, 178);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"LoginForm";
			this->Text = L"Вход в систему";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Пожалуйста введите Email и пароль", "Email или пароль пусты", MessageBoxButtons::OK);
			return;
		}
	
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myelectronic;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@pwd;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@pwd", password);

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
				MessageBox::Show("Email или пароль не верны",
					"Неверный Email или пароль", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Ошибка подключения к БД",
				"Database Connection Error", MessageBoxButtons::OK);
		}

	}
		public: bool switchToRegister = false;

	private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}

private: System::Void llRegister_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
