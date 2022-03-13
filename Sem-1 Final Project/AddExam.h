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
	/// Summary for AddExam
	/// </summary>
	public ref class AddExam : public System::Windows::Forms::Form
	{
	public:
		AddExam(void)
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
		~AddExam()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");


	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl1;
	protected:
	private: DevExpress::XtraEditors::LabelControl^ labelControl1;
	private: System::Windows::Forms::ComboBox^ _class;
	private: DevExpress::XtraEditors::LabelControl^ labelControl7;
	private: DevExpress::XtraEditors::LabelControl^ labelControl2;
	private: DevExpress::XtraEditors::TextEdit^ subject;
	private: DevExpress::XtraEditors::TextEdit^ topic;
	private: DevExpress::XtraEditors::LabelControl^ labelControl3;
	private: DevExpress::XtraEditors::TextEdit^ totalMarks;
	private: DevExpress::XtraEditors::LabelControl^ labelControl4;
	private: System::Windows::Forms::DateTimePicker^ ex_date;

	private: DevExpress::XtraEditors::LabelControl^ sakdjdklasdadsa;
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton1;
	private: DevExpress::XtraEditors::LabelControl^ labelControl9;
	private: DevExpress::XtraEditors::LabelControl^ labelControl8;
	private: DevExpress::XtraEditors::LabelControl^ labelControl6;
	private: DevExpress::XtraGrid::GridControl^ gridControl1;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;
	private: DevExpress::XtraEditors::LabelControl^ msg;

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
			this->separatorControl1 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->labelControl1 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->_class = (gcnew System::Windows::Forms::ComboBox());
			this->labelControl7 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl2 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->subject = (gcnew DevExpress::XtraEditors::TextEdit());
			this->topic = (gcnew DevExpress::XtraEditors::TextEdit());
			this->labelControl3 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->totalMarks = (gcnew DevExpress::XtraEditors::TextEdit());
			this->labelControl4 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->ex_date = (gcnew System::Windows::Forms::DateTimePicker());
			this->sakdjdklasdadsa = (gcnew DevExpress::XtraEditors::LabelControl());
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->labelControl9 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl8 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->labelControl6 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->msg = (gcnew DevExpress::XtraEditors::LabelControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->subject->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->topic->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalMarks->Properties))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-3, 28);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(954, 23);
			this->separatorControl1->TabIndex = 3;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(12, 3);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(184, 28);
			this->labelControl1->TabIndex = 2;
			this->labelControl1->Text = L"Grades > Add Exam";
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
			this->_class->Location = System::Drawing::Point(12, 94);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(305, 29);
			this->_class->TabIndex = 28;
			// 
			// labelControl7
			// 
			this->labelControl7->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl7->Appearance->Options->UseFont = true;
			this->labelControl7->Location = System::Drawing::Point(12, 66);
			this->labelControl7->Name = L"labelControl7";
			this->labelControl7->Size = System::Drawing::Size(47, 26);
			this->labelControl7->TabIndex = 27;
			this->labelControl7->Text = L"Class:";
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(12, 129);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(66, 26);
			this->labelControl2->TabIndex = 29;
			this->labelControl2->Text = L"Subject:";
			// 
			// subject
			// 
			this->subject->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->subject->Location = System::Drawing::Point(12, 161);
			this->subject->Name = L"subject";
			this->subject->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->subject->Properties->Appearance->Options->UseFont = true;
			this->subject->Size = System::Drawing::Size(305, 28);
			this->subject->TabIndex = 30;
			// 
			// topic
			// 
			this->topic->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->topic->Location = System::Drawing::Point(12, 227);
			this->topic->Name = L"topic";
			this->topic->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->topic->Properties->Appearance->Options->UseFont = true;
			this->topic->Size = System::Drawing::Size(305, 28);
			this->topic->TabIndex = 32;
			// 
			// labelControl3
			// 
			this->labelControl3->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl3->Appearance->Options->UseFont = true;
			this->labelControl3->Location = System::Drawing::Point(12, 195);
			this->labelControl3->Name = L"labelControl3";
			this->labelControl3->Size = System::Drawing::Size(50, 26);
			this->labelControl3->TabIndex = 31;
			this->labelControl3->Text = L"Topic:";
			// 
			// totalMarks
			// 
			this->totalMarks->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->totalMarks->Location = System::Drawing::Point(12, 294);
			this->totalMarks->Name = L"totalMarks";
			this->totalMarks->Properties->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->totalMarks->Properties->Appearance->Options->UseFont = true;
			this->totalMarks->Size = System::Drawing::Size(305, 28);
			this->totalMarks->TabIndex = 34;
			// 
			// labelControl4
			// 
			this->labelControl4->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl4->Appearance->Options->UseFont = true;
			this->labelControl4->Location = System::Drawing::Point(12, 262);
			this->labelControl4->Name = L"labelControl4";
			this->labelControl4->Size = System::Drawing::Size(102, 26);
			this->labelControl4->TabIndex = 33;
			this->labelControl4->Text = L"Total Marks:";
			// 
			// ex_date
			// 
			this->ex_date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ex_date->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ex_date->CustomFormat = L"yyyy-MM-dd";
			this->ex_date->Location = System::Drawing::Point(15, 365);
			this->ex_date->Name = L"ex_date";
			this->ex_date->Size = System::Drawing::Size(302, 20);
			this->ex_date->TabIndex = 36;
			// 
			// sakdjdklasdadsa
			// 
			this->sakdjdklasdadsa->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->sakdjdklasdadsa->Appearance->Options->UseFont = true;
			this->sakdjdklasdadsa->Location = System::Drawing::Point(15, 329);
			this->sakdjdklasdadsa->Name = L"sakdjdklasdadsa";
			this->sakdjdklasdadsa->Size = System::Drawing::Size(43, 26);
			this->sakdjdklasdadsa->TabIndex = 35;
			this->sakdjdklasdadsa->Text = L"Date:";
			// 
			// simpleButton1
			// 
			this->simpleButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->simpleButton1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simpleButton1->Appearance->Options->UseFont = true;
			this->simpleButton1->Location = System::Drawing::Point(15, 403);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(305, 39);
			this->simpleButton1->TabIndex = 37;
			this->simpleButton1->Text = L"Add Exam";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &AddExam::simpleButton1_Click);
			// 
			// labelControl9
			// 
			this->labelControl9->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl9->Appearance->Options->UseFont = true;
			this->labelControl9->Location = System::Drawing::Point(15, 485);
			this->labelControl9->Name = L"labelControl9";
			this->labelControl9->Size = System::Drawing::Size(187, 17);
			this->labelControl9->TabIndex = 40;
			this->labelControl9->Text = L"Saqib Rasheed (2021-BS-IT-007)";
			// 
			// labelControl8
			// 
			this->labelControl8->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl8->Appearance->Options->UseFont = true;
			this->labelControl8->Location = System::Drawing::Point(14, 467);
			this->labelControl8->Name = L"labelControl8";
			this->labelControl8->Size = System::Drawing::Size(203, 17);
			this->labelControl8->TabIndex = 39;
			this->labelControl8->Text = L"Muhammad Saad (2021-BS-IT-019)";
			// 
			// labelControl6
			// 
			this->labelControl6->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl6->Appearance->Options->UseFont = true;
			this->labelControl6->Location = System::Drawing::Point(15, 448);
			this->labelControl6->Name = L"labelControl6";
			this->labelControl6->Size = System::Drawing::Size(83, 17);
			this->labelControl6->TabIndex = 38;
			this->labelControl6->Text = L"Developed By:";
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(323, 57);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(615, 589);
			this->gridControl1->TabIndex = 41;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(5) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn5
			});
			this->gridView1->GridControl = this->gridControl1;
			this->gridView1->Name = L"gridView1";
			// 
			// gridColumn1
			// 
			this->gridColumn1->Caption = L"Class";
			this->gridColumn1->FieldName = L"class";
			this->gridColumn1->Name = L"gridColumn1";
			this->gridColumn1->OptionsColumn->AllowEdit = false;
			this->gridColumn1->Visible = true;
			this->gridColumn1->VisibleIndex = 0;
			this->gridColumn1->Width = 147;
			// 
			// gridColumn2
			// 
			this->gridColumn2->Caption = L"Subject";
			this->gridColumn2->FieldName = L"subject";
			this->gridColumn2->Name = L"gridColumn2";
			this->gridColumn2->OptionsColumn->AllowEdit = false;
			this->gridColumn2->Visible = true;
			this->gridColumn2->VisibleIndex = 1;
			this->gridColumn2->Width = 147;
			// 
			// gridColumn3
			// 
			this->gridColumn3->Caption = L"Topic";
			this->gridColumn3->FieldName = L"topic";
			this->gridColumn3->Name = L"gridColumn3";
			this->gridColumn3->OptionsColumn->AllowEdit = false;
			this->gridColumn3->Visible = true;
			this->gridColumn3->VisibleIndex = 2;
			this->gridColumn3->Width = 147;
			// 
			// gridColumn4
			// 
			this->gridColumn4->Caption = L"Total Marks";
			this->gridColumn4->FieldName = L"tm";
			this->gridColumn4->Name = L"gridColumn4";
			this->gridColumn4->OptionsColumn->AllowEdit = false;
			this->gridColumn4->OptionsColumn->FixedWidth = true;
			this->gridColumn4->Visible = true;
			this->gridColumn4->VisibleIndex = 3;
			this->gridColumn4->Width = 50;
			// 
			// gridColumn5
			// 
			this->gridColumn5->Caption = L"Date";
			this->gridColumn5->FieldName = L"exam_date";
			this->gridColumn5->Name = L"gridColumn5";
			this->gridColumn5->Visible = true;
			this->gridColumn5->VisibleIndex = 4;
			// 
			// msg
			// 
			this->msg->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->Appearance->Options->UseFont = true;
			this->msg->Location = System::Drawing::Point(14, 52);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(0, 17);
			this->msg->TabIndex = 42;
			// 
			// AddExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(950, 658);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->gridControl1);
			this->Controls->Add(this->labelControl9);
			this->Controls->Add(this->labelControl8);
			this->Controls->Add(this->labelControl6);
			this->Controls->Add(this->simpleButton1);
			this->Controls->Add(this->ex_date);
			this->Controls->Add(this->sakdjdklasdadsa);
			this->Controls->Add(this->totalMarks);
			this->Controls->Add(this->labelControl4);
			this->Controls->Add(this->topic);
			this->Controls->Add(this->labelControl3);
			this->Controls->Add(this->subject);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl7);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddExam";
			this->Text = L"AddExam";
			this->Load += gcnew System::EventHandler(this, &AddExam::AddExam_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->subject->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->topic->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->totalMarks->Properties))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddExam_Load(System::Object^ sender, System::EventArgs^ e){
		updateForm();
	}
	//Call When Click On Grades > Add Exam
	private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (_class->Text->ToString()->Length > 2) {
			if (subject->Text->Trim()->ToString()->Length > 2 && topic->Text->ToString()->Length > 2 && totalMarks->Text->Trim()->ToString()) {
				
				String^ query = "INSERT INTO `sem_1_project`.`exams` (`class`, `subject`, `topic`, `tm`, `exam_date`, `create_date`) VALUES (@class, @subject, @topic, @tm, @date, CURRENT_TIMESTAMP())";
				try {
					if (conn->State == ConnectionState::Closed) {
						conn->Open();
					}

					MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
					cmd->CommandType = CommandType::Text;

					cmd->Parameters->AddWithValue("@class", _class->Text->ToString());
					cmd->Parameters->AddWithValue("@subject", subject->Text->Trim()->ToString());
					cmd->Parameters->AddWithValue("@topic", topic->Text->Trim()->ToString());
					cmd->Parameters->AddWithValue("@tm", totalMarks->Text->Trim()->ToString());
					cmd->Parameters->AddWithValue("@date", ex_date->Value.Date.ToString("yyyy-MM-dd"));

					if (cmd->ExecuteNonQuery() == 1) {
						msg->ForeColor = ForeColor.Green;
						msg->Text = "Exam Added Successfully";
						updateForm();
						_class->Text = "";
						subject->Text = "";
						topic->Text = "";
						totalMarks->Text = "";
					}

				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->ToString());
				}
			}
		}
	}

	public: System::Void updateForm() {
		try {
			if (conn->State == ConnectionState::Closed) {
				conn->Open();
			}
			String^ query = "SELECT * FROM `sem_1_project`.`exams` ORDER BY id DESC;";
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
};
}
