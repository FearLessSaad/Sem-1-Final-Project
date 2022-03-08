#pragma once
#include "Main.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: MySqlConnection^ conn = gcnew MySqlConnection(L"server=localhost;user=root;password=MySql@SA64;database=sem_1_project");
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LoginMsg;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: DevExpress::XtraEditors::TextEdit^ email;


	private: DevExpress::XtraEditors::TextEdit^ password;

	private: System::Windows::Forms::Label^ label2;
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LoginMsg = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew DevExpress::XtraEditors::TextEdit());
			this->password = (gcnew DevExpress::XtraEditors::TextEdit());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->email->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password->Properties))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(173, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 64);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// LoginMsg
			// 
			this->LoginMsg->AutoSize = true;
			this->LoginMsg->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginMsg->Location = System::Drawing::Point(20, 77);
			this->LoginMsg->Name = L"LoginMsg";
			this->LoginMsg->Size = System::Drawing::Size(0, 20);
			this->LoginMsg->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Email:";
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(24, 127);
			this->email->Name = L"email";
			this->email->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->email->Properties->Appearance->Options->UseFont = true;
			this->email->Size = System::Drawing::Size(447, 34);
			this->email->TabIndex = 3;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(24, 193);
			this->password->Name = L"password";
			this->password->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->password->Properties->Appearance->Options->UseFont = true;
			this->password->Properties->UseSystemPasswordChar = true;
			this->password->Size = System::Drawing::Size(447, 34);
			this->password->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 26);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password:";
			// 
			// simpleButton1
			// 
			this->simpleButton1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simpleButton1->Appearance->Options->UseFont = true;
			this->simpleButton1->Location = System::Drawing::Point(24, 237);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(447, 41);
			this->simpleButton1->TabIndex = 6;
			this->simpleButton1->Text = L"Login";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &Form1::simpleButton1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(366, 281);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Developed By:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(228, 301);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(243, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Muhammad Saad (2021-BS-IT-019)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(247, 321);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(224, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Saqib Rasheed (2021-BS-IT-007)";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 358);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->simpleButton1);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LoginMsg);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->email->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->password->Properties))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Call Whe Form Is Loading
		private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		}
		//Call When Clicked On Login Buttion
		private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (email->Text->ToString()->Trim()->Length > 3 && password->Text->ToString()->Trim()->Length > 5) {
				try {
					conn->Open();
					String^ qurey = "SELECT * FROM users WHERE email = BINARY(@email) AND password=BINARY(@pass)";

					MySqlCommand^ cmd = gcnew MySqlCommand(qurey, conn);
					cmd->CommandType = CommandType::Text;
					
					cmd->Parameters->AddWithValue("@email", email->Text->ToString()->Trim());
					cmd->Parameters->AddWithValue("@pass", password->Text->ToString()->Trim());

					MySqlDataReader^ mdr = cmd->ExecuteReader();

					if (mdr->HasRows) {
						LoginMsg->ForeColor = ForeColor.Green;
						LoginMsg->Text = "Logged In Successfully.";

						//Opening Main Window
						Main^ mainPage = gcnew Main();
						mainPage->Show();
						this->Hide();
					}
					else {
						LoginMsg->ForeColor = ForeColor.Red;
						LoginMsg->Text = "Incorrect USername or Password!!!!!!!";
					}
					conn->Close();
				}
				catch (Exception^ e) {
					MessageBox::Show("Error >> " + e->Message);
				}
			}
			else {
				LoginMsg->ForeColor = ForeColor.Red;
				LoginMsg->Text = "Plese Enter Correct Creds!!!!";
			}

		}
};
}
