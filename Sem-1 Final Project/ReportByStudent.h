#pragma once
#include "StudentReport.h"

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
	public ref class ReportByStudent : public System::Windows::Forms::Form
	{
	public:
		ReportByStudent(void)
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
		~ReportByStudent()
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
	private: DevExpress::XtraGrid::GridControl^ StudentsGridControl;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn7;


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
			this->StudentsGridControl = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn7 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsGridControl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSelect
			// 
			this->btnSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSelect->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelect->Appearance->Options->UseFont = true;
			this->btnSelect->Location = System::Drawing::Point(544, 56);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(424, 30);
			this->btnSelect->TabIndex = 43;
			this->btnSelect->Text = L"Select";
			this->btnSelect->Click += gcnew System::EventHandler(this, &ReportByStudent::btnSelect_Click);
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
			this->_class->Location = System::Drawing::Point(121, 56);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(417, 29);
			this->_class->TabIndex = 42;
			this->_class->Text = L"Select Class";
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(13, 56);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(102, 26);
			this->labelControl2->TabIndex = 41;
			this->labelControl2->Text = L"Select Class:";
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-2, 28);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(984, 23);
			this->separatorControl1->TabIndex = 40;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(13, -1);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(207, 28);
			this->labelControl1->TabIndex = 39;
			this->labelControl1->Text = L"Grading > Add Grades";
			// 
			// StudentsGridControl
			// 
			this->StudentsGridControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StudentsGridControl->Location = System::Drawing::Point(13, 92);
			this->StudentsGridControl->MainView = this->gridView1;
			this->StudentsGridControl->Name = L"StudentsGridControl";
			this->StudentsGridControl->Size = System::Drawing::Size(955, 508);
			this->StudentsGridControl->TabIndex = 44;
			this->StudentsGridControl->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			this->StudentsGridControl->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &ReportByStudent::StudentsGridControl_KeyPress);
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(5) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn7
			});
			this->gridView1->GridControl = this->StudentsGridControl;
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
			this->gridColumn1->Width = 73;
			// 
			// gridColumn2
			// 
			this->gridColumn2->Caption = L"Full Name";
			this->gridColumn2->FieldName = L"full_name";
			this->gridColumn2->Name = L"gridColumn2";
			this->gridColumn2->OptionsColumn->AllowEdit = false;
			this->gridColumn2->Visible = true;
			this->gridColumn2->VisibleIndex = 1;
			this->gridColumn2->Width = 151;
			// 
			// gridColumn3
			// 
			this->gridColumn3->Caption = L"Father Name";
			this->gridColumn3->FieldName = L"father_name";
			this->gridColumn3->Name = L"gridColumn3";
			this->gridColumn3->OptionsColumn->AllowEdit = false;
			this->gridColumn3->Visible = true;
			this->gridColumn3->VisibleIndex = 2;
			this->gridColumn3->Width = 151;
			// 
			// gridColumn4
			// 
			this->gridColumn4->Caption = L"Phone";
			this->gridColumn4->FieldName = L"tel";
			this->gridColumn4->Name = L"gridColumn4";
			this->gridColumn4->OptionsColumn->AllowEdit = false;
			this->gridColumn4->Visible = true;
			this->gridColumn4->VisibleIndex = 3;
			this->gridColumn4->Width = 151;
			// 
			// gridColumn7
			// 
			this->gridColumn7->Caption = L"Class";
			this->gridColumn7->FieldName = L"class";
			this->gridColumn7->Name = L"gridColumn7";
			this->gridColumn7->OptionsColumn->AllowEdit = false;
			this->gridColumn7->OptionsColumn->FixedWidth = true;
			this->gridColumn7->Visible = true;
			this->gridColumn7->VisibleIndex = 4;
			this->gridColumn7->Width = 73;
			// 
			// ReportByStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 612);
			this->Controls->Add(this->StudentsGridControl);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ReportByStudent";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsGridControl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		if (_class->Text != "Select Class") {
			try {
				if (conn->State == ConnectionState::Closed) {
					conn->Open();
				}

				String^ query = "SELECT * FROM sem_1_project.student WHERE class = @class;";

				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;

				cmd->Parameters->AddWithValue("@class", _class->Text->ToString());

				MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
				DataTable^ dt = gcnew DataTable();
				mda->Fill(dt);

				StudentsGridControl->DataSource = dt;

			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString());
			}
		}
	}
	private: System::Void StudentsGridControl_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		String^ id = gridView1->GetDataRow(gridView1->FocusedRowHandle)[0]->ToString();
		MessageBox::Show(id);
		StudentReport^ ss = gcnew StudentReport(id);
		ss->ShowDialog();
	}
};
}
