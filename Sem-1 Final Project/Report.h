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
	public ref class Report : public System::Windows::Forms::Form
	{
	public:
		Report(void)
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
		~Report()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");
	private: DevExpress::XtraEditors::SimpleButton^ btnSelect;
	private: System::Windows::Forms::ComboBox^ _class;
	private: DevExpress::XtraEditors::LabelControl^ labelControl2;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl1;
	private: DevExpress::XtraEditors::LabelControl^ labelControl1;
	private: System::Windows::Forms::ComboBox^ examsList;

	private: DevExpress::XtraEditors::LabelControl^ labelControl3;
	private: DevExpress::XtraGrid::GridControl^ gridControl1;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn6;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn7;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn8;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn9;
	private: System::Data::DataSet^ examsDataSe;

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
			this->btnSelect = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->_class = (gcnew System::Windows::Forms::ComboBox());
			this->labelControl2 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->separatorControl1 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->labelControl1 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->examsList = (gcnew System::Windows::Forms::ComboBox());
			this->labelControl3 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn6 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn7 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn8 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn9 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->examsDataSe = (gcnew System::Data::DataSet());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->examsDataSe))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSelect
			// 
			this->btnSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSelect->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelect->Appearance->Options->UseFont = true;
			this->btnSelect->Location = System::Drawing::Point(548, 76);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(405, 30);
			this->btnSelect->TabIndex = 43;
			this->btnSelect->Text = L"Select";
			this->btnSelect->Click += gcnew System::EventHandler(this, &Report::btnSelect_Click);
			// 
			// _class
			// 
			this->_class->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->_class->FormattingEnabled = true;
			this->_class->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"1st", L"2nd", L"3rd", L"4th", L"5th", L"6th", L"7th",
					L"8th"
			});
			this->_class->Location = System::Drawing::Point(12, 76);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(262, 29);
			this->_class->TabIndex = 42;
			this->_class->Text = L"Select Class";
			this->_class->TextChanged += gcnew System::EventHandler(this, &Report::OnchangeBindExams);
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(11, 44);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(102, 26);
			this->labelControl2->TabIndex = 41;
			this->labelControl2->Text = L"Select Class:";
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-4, 29);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(972, 23);
			this->separatorControl1->TabIndex = 40;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(11, 0);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(161, 28);
			this->labelControl1->TabIndex = 39;
			this->labelControl1->Text = L"Grading > Report";
			// 
			// examsList
			// 
			this->examsList->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->examsList->FormattingEnabled = true;
			this->examsList->Location = System::Drawing::Point(280, 76);
			this->examsList->Name = L"examsList";
			this->examsList->Size = System::Drawing::Size(262, 29);
			this->examsList->TabIndex = 45;
			this->examsList->Text = L"Select Exam";
			// 
			// labelControl3
			// 
			this->labelControl3->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl3->Appearance->Options->UseFont = true;
			this->labelControl3->Location = System::Drawing::Point(279, 44);
			this->labelControl3->Name = L"labelControl3";
			this->labelControl3->Size = System::Drawing::Size(104, 26);
			this->labelControl3->TabIndex = 44;
			this->labelControl3->Text = L"Select Exam:";
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(11, 112);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(942, 488);
			this->gridControl1->TabIndex = 46;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(9) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn5, this->gridColumn6, this->gridColumn7, this->gridColumn8,
					this->gridColumn9
			});
			this->gridView1->GridControl = this->gridControl1;
			this->gridView1->Name = L"gridView1";
			// 
			// gridColumn1
			// 
			this->gridColumn1->Caption = L"Student ID";
			this->gridColumn1->FieldName = L"id";
			this->gridColumn1->Name = L"gridColumn1";
			this->gridColumn1->OptionsColumn->AllowEdit = false;
			this->gridColumn1->OptionsColumn->FixedWidth = true;
			this->gridColumn1->Visible = true;
			this->gridColumn1->VisibleIndex = 0;
			// 
			// gridColumn2
			// 
			this->gridColumn2->Caption = L"Full Name";
			this->gridColumn2->FieldName = L"full_name";
			this->gridColumn2->Name = L"gridColumn2";
			this->gridColumn2->OptionsColumn->AllowEdit = false;
			this->gridColumn2->Visible = true;
			this->gridColumn2->VisibleIndex = 1;
			// 
			// gridColumn3
			// 
			this->gridColumn3->Caption = L"Father Name";
			this->gridColumn3->FieldName = L"father_name";
			this->gridColumn3->Name = L"gridColumn3";
			this->gridColumn3->OptionsColumn->AllowEdit = false;
			this->gridColumn3->Visible = true;
			this->gridColumn3->VisibleIndex = 2;
			// 
			// gridColumn4
			// 
			this->gridColumn4->Caption = L"Class";
			this->gridColumn4->FieldName = L"class";
			this->gridColumn4->Name = L"gridColumn4";
			this->gridColumn4->OptionsColumn->AllowEdit = false;
			this->gridColumn4->Visible = true;
			this->gridColumn4->VisibleIndex = 3;
			// 
			// gridColumn5
			// 
			this->gridColumn5->Caption = L"Subject";
			this->gridColumn5->FieldName = L"subject";
			this->gridColumn5->Name = L"gridColumn5";
			this->gridColumn5->OptionsColumn->AllowEdit = false;
			this->gridColumn5->OptionsColumn->FixedWidth = true;
			this->gridColumn5->Visible = true;
			this->gridColumn5->VisibleIndex = 4;
			// 
			// gridColumn6
			// 
			this->gridColumn6->Caption = L"Topic";
			this->gridColumn6->FieldName = L"topic";
			this->gridColumn6->Name = L"gridColumn6";
			this->gridColumn6->OptionsColumn->AllowEdit = false;
			this->gridColumn6->Visible = true;
			this->gridColumn6->VisibleIndex = 5;
			// 
			// gridColumn7
			// 
			this->gridColumn7->Caption = L"Total Marks";
			this->gridColumn7->FieldName = L"tm";
			this->gridColumn7->Name = L"gridColumn7";
			this->gridColumn7->OptionsColumn->AllowEdit = false;
			this->gridColumn7->OptionsColumn->FixedWidth = true;
			this->gridColumn7->Visible = true;
			this->gridColumn7->VisibleIndex = 6;
			// 
			// gridColumn8
			// 
			this->gridColumn8->Caption = L"Obtainerd Marks";
			this->gridColumn8->FieldName = L"om";
			this->gridColumn8->Name = L"gridColumn8";
			this->gridColumn8->OptionsColumn->AllowEdit = false;
			this->gridColumn8->OptionsColumn->FixedWidth = true;
			this->gridColumn8->Visible = true;
			this->gridColumn8->VisibleIndex = 7;
			// 
			// gridColumn9
			// 
			this->gridColumn9->Caption = L"Date";
			this->gridColumn9->FieldName = L"exam_date";
			this->gridColumn9->Name = L"gridColumn9";
			this->gridColumn9->OptionsColumn->AllowEdit = false;
			this->gridColumn9->OptionsColumn->FixedWidth = true;
			this->gridColumn9->Visible = true;
			this->gridColumn9->VisibleIndex = 8;
			// 
			// examsDataSe
			// 
			this->examsDataSe->DataSetName = L"NewDataSet";
			// 
			// Report
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 612);
			this->Controls->Add(this->gridControl1);
			this->Controls->Add(this->examsList);
			this->Controls->Add(this->labelControl3);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Report";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Report::Report_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->examsDataSe))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//CAll When Click On Select Button
	private: System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		if (_class->Text != "Select Class") {
			try {
				if (conn->State == ConnectionState::Closed) {
					conn->Open();
				}

				String^ query = "SELECT* FROM sem_1_project.exam_result WHERE tid = @tid;";

				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;

				cmd->Parameters->AddWithValue("@tid", examsList->SelectedValue->ToString());

				MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
				DataTable^ dt = gcnew DataTable();
				mda->Fill(dt);

				gridControl1->DataSource = dt;

				conn->Close();

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString());
			}
		}
	}
private: System::Void Report_Load(System::Object^ sender, System::EventArgs^ e) {
}
	//Call When Class Is Changes
	private: System::Void OnchangeBindExams(System::Object^ sender, System::EventArgs^ e) {
		if(_class->Text != "Select Class"){
			try {
				if (conn->State == ConnectionState::Closed) {
					conn->Open();
				}

				String^ query = "SELECT CONCAT(`subject`, ' > ', `topic`) as `exam`, tid FROM sem_1_project.exam_result WHERE class = @class group by tid;";
				
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;

				cmd->Parameters->AddWithValue("@class", _class->Text->ToString());
				
				MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
				DataTable^ dt = gcnew DataTable();
				mda->Fill(dt);
				examsList->DataSource = dt;
				examsList->ValueMember = "tid";
				examsList->DisplayMember = "exam";

				conn->Close();

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString());
			}
		}
	}
};
}
