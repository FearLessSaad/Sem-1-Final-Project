#pragma once

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
	public ref class AddNewStudent : public System::Windows::Forms::Form
	{
	public:
		AddNewStudent(void)
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
		~AddNewStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");

	private: DevExpress::XtraEditors::LabelControl^ labelControl1;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl1;
	private: DevExpress::XtraEditors::LabelControl^ labelControl2;
	private: DevExpress::XtraEditors::TextEdit^ fullName;
	private: DevExpress::XtraEditors::TextEdit^ fatherName;
	private: DevExpress::XtraEditors::LabelControl^ labelControl3;
	private: DevExpress::XtraEditors::TextEdit^ tel;

	private: DevExpress::XtraEditors::LabelControl^ labelControl4;
	private: DevExpress::XtraEditors::TextEdit^ bfrom;

	private: DevExpress::XtraEditors::LabelControl^ daskdasjlkdaslk;



	private: DevExpress::XtraEditors::LabelControl^ sakdjdklasdadsa;





	private: DevExpress::XtraEditors::LabelControl^ labelControl7;




	private: DevExpress::XtraEditors::SimpleButton^ simpleButton1;

	private: DevExpress::XtraGrid::GridControl^ gridControl1;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;

	private: DevExpress::XtraEditors::LabelControl^ labelControl5;
	private: System::Windows::Forms::ComboBox^ status;
	private: DevExpress::XtraEditors::LabelControl^ labelControl6;
	private: DevExpress::XtraEditors::LabelControl^ labelControl8;
	private: DevExpress::XtraEditors::LabelControl^ labelControl9;
	private: System::Windows::Forms::ComboBox^ _class;
	private: System::Windows::Forms::DateTimePicker^ dob;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: System::Windows::Forms::Label^ msg;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelControl1 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->separatorControl1 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->labelControl2 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->fullName = (gcnew DevExpress::XtraEditors::TextEdit());
			this->fatherName = (gcnew DevExpress::XtraEditors::TextEdit());
			this->labelControl3 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->tel = (gcnew DevExpress::XtraEditors::TextEdit());
			this->labelControl4 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->bfrom = (gcnew DevExpress::XtraEditors::TextEdit());
			this->daskdasjlkdaslk = (gcnew DevExpress::XtraEditors::LabelControl());
			this->sakdjdklasdadsa = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl7 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->labelControl5 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->status = (gcnew System::Windows::Forms::ComboBox());
			this->labelControl6 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl8 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl9 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->_class = (gcnew System::Windows::Forms::ComboBox());
			this->dob = (gcnew System::Windows::Forms::DateTimePicker());
			this->msg = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullName->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fatherName->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tel->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bfrom->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(9, 4);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(223, 28);
			this->labelControl1->TabIndex = 0;
			this->labelControl1->Text = L"Students > Add Student";
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-6, 29);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(995, 23);
			this->separatorControl1->TabIndex = 1;
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(56, 65);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(124, 26);
			this->labelControl2->TabIndex = 2;
			this->labelControl2->Text = L"Student Name:";
			// 
			// fullName
			// 
			this->fullName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fullName->Location = System::Drawing::Point(53, 98);
			this->fullName->Name = L"fullName";
			this->fullName->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fullName->Properties->Appearance->Options->UseFont = true;
			this->fullName->Size = System::Drawing::Size(305, 28);
			this->fullName->TabIndex = 3;
			// 
			// fatherName
			// 
			this->fatherName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fatherName->Location = System::Drawing::Point(53, 161);
			this->fatherName->Name = L"fatherName";
			this->fatherName->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->fatherName->Properties->Appearance->Options->UseFont = true;
			this->fatherName->Size = System::Drawing::Size(305, 28);
			this->fatherName->TabIndex = 5;
			// 
			// labelControl3
			// 
			this->labelControl3->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl3->Appearance->Options->UseFont = true;
			this->labelControl3->Location = System::Drawing::Point(56, 128);
			this->labelControl3->Name = L"labelControl3";
			this->labelControl3->Size = System::Drawing::Size(112, 26);
			this->labelControl3->TabIndex = 4;
			this->labelControl3->Text = L"Father Name:";
			// 
			// tel
			// 
			this->tel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tel->Location = System::Drawing::Point(53, 222);
			this->tel->Name = L"tel";
			this->tel->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tel->Properties->Appearance->Options->UseFont = true;
			this->tel->Size = System::Drawing::Size(305, 28);
			this->tel->TabIndex = 7;
			// 
			// labelControl4
			// 
			this->labelControl4->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl4->Appearance->Options->UseFont = true;
			this->labelControl4->Location = System::Drawing::Point(56, 189);
			this->labelControl4->Name = L"labelControl4";
			this->labelControl4->Size = System::Drawing::Size(132, 26);
			this->labelControl4->TabIndex = 6;
			this->labelControl4->Text = L"Phone Number:";
			// 
			// bfrom
			// 
			this->bfrom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bfrom->Location = System::Drawing::Point(53, 284);
			this->bfrom->Name = L"bfrom";
			this->bfrom->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bfrom->Properties->Appearance->Options->UseFont = true;
			this->bfrom->Size = System::Drawing::Size(305, 28);
			this->bfrom->TabIndex = 9;
			// 
			// daskdasjlkdaslk
			// 
			this->daskdasjlkdaslk->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->daskdasjlkdaslk->Appearance->Options->UseFont = true;
			this->daskdasjlkdaslk->Location = System::Drawing::Point(56, 251);
			this->daskdasjlkdaslk->Name = L"daskdasjlkdaslk";
			this->daskdasjlkdaslk->Size = System::Drawing::Size(62, 26);
			this->daskdasjlkdaslk->TabIndex = 8;
			this->daskdasjlkdaslk->Text = L"B-Form";
			// 
			// sakdjdklasdadsa
			// 
			this->sakdjdklasdadsa->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sakdjdklasdadsa->Appearance->Options->UseFont = true;
			this->sakdjdklasdadsa->Location = System::Drawing::Point(56, 312);
			this->sakdjdklasdadsa->Name = L"sakdjdklasdadsa";
			this->sakdjdklasdadsa->Size = System::Drawing::Size(110, 26);
			this->sakdjdklasdadsa->TabIndex = 10;
			this->sakdjdklasdadsa->Text = L"Date of Birth:";
			// 
			// labelControl7
			// 
			this->labelControl7->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl7->Appearance->Options->UseFont = true;
			this->labelControl7->Location = System::Drawing::Point(56, 374);
			this->labelControl7->Name = L"labelControl7";
			this->labelControl7->Size = System::Drawing::Size(47, 26);
			this->labelControl7->TabIndex = 12;
			this->labelControl7->Text = L"Class:";
			// 
			// simpleButton1
			// 
			this->simpleButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->simpleButton1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simpleButton1->Appearance->Options->UseFont = true;
			this->simpleButton1->Location = System::Drawing::Point(53, 513);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(305, 39);
			this->simpleButton1->TabIndex = 18;
			this->simpleButton1->Text = L"Add Student";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &AddNewStudent::simpleButton1_Click);
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(388, 63);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(584, 551);
			this->gridControl1->TabIndex = 20;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			this->gridControl1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddNewStudent::EditRecords);
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(4) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4
			});
			this->gridView1->GridControl = this->gridControl1;
			this->gridView1->Name = L"gridView1";
			// 
			// gridColumn1
			// 
			this->gridColumn1->Caption = L"ID";
			this->gridColumn1->FieldName = L"id";
			this->gridColumn1->Name = L"gridColumn1";
			this->gridColumn1->Visible = true;
			this->gridColumn1->VisibleIndex = 0;
			// 
			// gridColumn2
			// 
			this->gridColumn2->Caption = L"Full Name";
			this->gridColumn2->FieldName = L"full_name";
			this->gridColumn2->Name = L"gridColumn2";
			this->gridColumn2->Visible = true;
			this->gridColumn2->VisibleIndex = 1;
			// 
			// gridColumn3
			// 
			this->gridColumn3->Caption = L"Father Name";
			this->gridColumn3->FieldName = L"father_name";
			this->gridColumn3->Name = L"gridColumn3";
			this->gridColumn3->Visible = true;
			this->gridColumn3->VisibleIndex = 2;
			// 
			// gridColumn4
			// 
			this->gridColumn4->Caption = L"Class";
			this->gridColumn4->FieldName = L"class";
			this->gridColumn4->Name = L"gridColumn4";
			this->gridColumn4->Visible = true;
			this->gridColumn4->VisibleIndex = 3;
			// 
			// labelControl5
			// 
			this->labelControl5->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl5->Appearance->Options->UseFont = true;
			this->labelControl5->Location = System::Drawing::Point(56, 437);
			this->labelControl5->Name = L"labelControl5";
			this->labelControl5->Size = System::Drawing::Size(55, 26);
			this->labelControl5->TabIndex = 21;
			this->labelControl5->Text = L"Active:";
			// 
			// status
			// 
			this->status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->status->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->status->FormattingEnabled = true;
			this->status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Active", L"Non-Active" });
			this->status->Location = System::Drawing::Point(56, 470);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(302, 29);
			this->status->TabIndex = 22;
			// 
			// labelControl6
			// 
			this->labelControl6->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl6->Appearance->Options->UseFont = true;
			this->labelControl6->Location = System::Drawing::Point(54, 564);
			this->labelControl6->Name = L"labelControl6";
			this->labelControl6->Size = System::Drawing::Size(83, 17);
			this->labelControl6->TabIndex = 23;
			this->labelControl6->Text = L"Developed By:";
			// 
			// labelControl8
			// 
			this->labelControl8->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl8->Appearance->Options->UseFont = true;
			this->labelControl8->Location = System::Drawing::Point(53, 583);
			this->labelControl8->Name = L"labelControl8";
			this->labelControl8->Size = System::Drawing::Size(203, 17);
			this->labelControl8->TabIndex = 24;
			this->labelControl8->Text = L"Muhammad Saad (2021-BS-IT-019)";
			// 
			// labelControl9
			// 
			this->labelControl9->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl9->Appearance->Options->UseFont = true;
			this->labelControl9->Location = System::Drawing::Point(54, 601);
			this->labelControl9->Name = L"labelControl9";
			this->labelControl9->Size = System::Drawing::Size(187, 17);
			this->labelControl9->TabIndex = 25;
			this->labelControl9->Text = L"Saqib Rasheed (2021-BS-IT-007)";
			// 
			// _class
			// 
			this->_class->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->_class->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->_class->FormattingEnabled = true;
			this->_class->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Select Class", L"1st", L"2nd", L"3rd", L"4th", L"5th",
					L"6th", L"7th", L"8th"
			});
			this->_class->Location = System::Drawing::Point(56, 402);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(302, 29);
			this->_class->TabIndex = 26;
			// 
			// dob
			// 
			this->dob->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dob->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dob->CustomFormat = L"dd-MM-yyyy";
			this->dob->Location = System::Drawing::Point(56, 348);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(302, 20);
			this->dob->TabIndex = 27;
			// 
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->Location = System::Drawing::Point(56, 51);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(0, 15);
			this->msg->TabIndex = 28;
			// 
			// AddNewStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 633);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl9);
			this->Controls->Add(this->labelControl8);
			this->Controls->Add(this->labelControl6);
			this->Controls->Add(this->status);
			this->Controls->Add(this->labelControl5);
			this->Controls->Add(this->gridControl1);
			this->Controls->Add(this->simpleButton1);
			this->Controls->Add(this->labelControl7);
			this->Controls->Add(this->sakdjdklasdadsa);
			this->Controls->Add(this->bfrom);
			this->Controls->Add(this->daskdasjlkdaslk);
			this->Controls->Add(this->tel);
			this->Controls->Add(this->labelControl4);
			this->Controls->Add(this->fatherName);
			this->Controls->Add(this->labelControl3);
			this->Controls->Add(this->fullName);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddNewStudent";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &AddNewStudent::AddNewStudent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fullName->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fatherName->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tel->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bfrom->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Call When Form Is Loading
	private: System::Void AddNewStudent_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateGrid();
		ResetForm();
		
	}
	//Populate GridVIew
	private: System::Void UpdateGrid()
	{
		try {
			if (conn->State == ConnectionState::Closed) {
				conn->Open();
			}
			String^ query = "SELECT * FROM `sem_1_project`.`student`;";
			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->ExecuteNonQuery();
			MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			mda->Fill(dt);

			gridControl1->DataSource = dt;
			
			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
	}
	//Call When Click On Add Student Buttion
	private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (fullName->Text->Trim()->Length > 3 && fatherName->Text->Trim()->Length > 3 && tel->Text->Trim()->Length > 10 && bfrom->Text->Trim()->Length > 11 && _class->Text->Trim()->Length > 2 && status->Text->Trim()->Length > 3 ) {
			try {
				conn->Open();
				String^ query = L"INSERT INTO `sem_1_project`.`student` (`full_name`, `father_name`, `tel`, `bfrom`, `dob`, `class`, `status`, `add_time`) VALUES " +
					"(@fname, @ffname, @tel, @bform, @dob, @class, @status, CURRENT_TIMESTAMP()); ";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;

				cmd->Parameters->AddWithValue("@fname", fullName->Text->ToString()->Trim());
				cmd->Parameters->AddWithValue("@ffname", fatherName->Text->ToString()->Trim());
				cmd->Parameters->AddWithValue("@tel", tel->Text->ToString()->Trim());
				cmd->Parameters->AddWithValue("@bform", bfrom->Text->ToString()->Trim());
				cmd->Parameters->AddWithValue("@dob", dob->Value.Date.ToString("yyyy-MM-dd"));
				cmd->Parameters->AddWithValue("@class", _class->Text->ToString()->Trim());
				int st = 0;
				if (status->Text->ToString()->Trim() == "Active") {
					st = 1;
				}
				cmd->Parameters->AddWithValue("@status", st);

				if (cmd->ExecuteNonQuery() == 1) {
					msg->ForeColor = ForeColor.Green;
					msg->Text = "Student Added Successfully!!!!!";
					MessageBox::Show("Student Successfully Added", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					UpdateGrid();
					ResetForm();
				}
				else {
					msg->ForeColor = ForeColor.Red;
					msg->Text = "Internal Service Error!!!!!!";
				}
				conn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString());
			}
		}
		else {
			msg->ForeColor = ForeColor.Red;
			msg->Text = "Please Fill ALl Fields!!!!!!";
		}
	}

	private: System::Void ResetForm() {
		fullName->Text = "";
		fatherName->Text = "";
		tel->Text = "";
		bfrom->Text = "";
		_class->Text = "";
		status->Text = "";
	}
	private: System::Void EditRecords(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (System::Int32)Keys::Enter) {

		}
	}
};
}