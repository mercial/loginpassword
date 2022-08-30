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
	/// Сводка для RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPhone;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbAddress;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Имя";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbName->Location = System::Drawing::Point(260, 5);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(222, 30);
			this->tbName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 23);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbEmail->Location = System::Drawing::Point(260, 49);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(222, 30);
			this->tbEmail->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 23);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Телефон";
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPhone->Location = System::Drawing::Point(260, 92);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(222, 30);
			this->tbPhone->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 23);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Адрес";
			// 
			// tbAddress
			// 
			this->tbAddress->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbAddress->Location = System::Drawing::Point(260, 135);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(222, 30);
			this->tbAddress->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 23);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Пароль";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbPassword->Location = System::Drawing::Point(260, 190);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(222, 30);
			this->tbPassword->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(220, 23);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Подтверждение пароля";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbConfirmPassword->Location = System::Drawing::Point(260, 239);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(222, 30);
			this->tbConfirmPassword->TabIndex = 1;
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOK->Location = System::Drawing::Point(63, 299);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(155, 40);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"ОК";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCancel->Location = System::Drawing::Point(256, 299);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(155, 40);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Отмена";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(158, 384);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(159, 13);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Вернуться на страницу входа";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 406);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RegisterForm";
			this->Text = L"Регистрация";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	public: bool switchToLogin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}

	public: User^ user = nullptr;

	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbPhone->Text;
		String^ address = tbAddress->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;

		if (name->Length == 0 || email->Length == 0
			|| phone->Length == 0 || address->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Пожалуйста заполните все поля",
				"Не заполнены необходимые поля", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Пароль и подтверждение не совпадает",
				"Неверный пароль", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myelectronic;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(name, email, phone, address, password) VALUES " +
				"(@name, @email, @phone, @address, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@address", address);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->email = email;
			user->phone = phone;
			user->address = address;
			user->password = password;

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to register new user",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
};
}
