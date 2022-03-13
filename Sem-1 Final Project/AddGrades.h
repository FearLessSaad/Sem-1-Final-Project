#pragma once
#include "AddMarks.h"
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
	public ref class AddGrades : public System::Windows::Forms::Form
	{
	public:
		AddGrades(void) {
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddGrades()
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
	private: System::Windows::Forms::Label^ msg;
	private: DevExpress::XtraGrid::GridControl^ gridControl1;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn6;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;


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
			this->msg = (gcnew System::Windows::Forms::Label());
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn6 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
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
			this->btnSelect->Location = System::Drawing::Point(543, 59);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(426, 30);
			this->btnSelect->TabIndex = 38;
			this->btnSelect->Text = L"Select";
			this->btnSelect->Click += gcnew System::EventHandler(this, &AddGrades::btnSelect_Click);
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
			this->_class->Location = System::Drawing::Point(120, 59);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(417, 29);
			this->_class->TabIndex = 37;
			this->_class->Text = L"Select Class";
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(12, 59);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(102, 26);
			this->labelControl2->TabIndex = 36;
			this->labelControl2->Text = L"Select Class:";
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-3, 31);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(985, 23);
			this->separatorControl1->TabIndex = 35;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(12, 2);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(207, 28);
			this->labelControl1->TabIndex = 34;
			this->labelControl1->Text = L"Grading > Add Grades";
			// 
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->Location = System::Drawing::Point(15, 96);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(0, 17);
			this->msg->TabIndex = 45;
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(12, 118);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(957, 529);
			this->gridControl1->TabIndex = 44;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			this->gridControl1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddGrades::AddGradesToAllStudents);
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(6) {
				this->gridColumn6,
					this->gridColumn1, this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn5
			});
			this->gridView1->GridControl = this->gridControl1;
			this->gridView1->Name = L"gridView1";
			// 
			// gridColumn6
			// 
			this->gridColumn6->Caption = L"gridColumn6";
			this->gridColumn6->FieldName = L"id";
			this->gridColumn6->Name = L"gridColumn6";
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
			// AddGrades
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(981, 659);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->gridControl1);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddGrades";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: System::Void updateForm() {
			try {
				if (conn->State == ConnectionState::Closed) {
					conn->Open();
				}
				String^ query = "SELECT * FROM `sem_1_project`.`exams` WHERE is_graded = 0 AND class = @class ORDER BY id DESC;";
				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;

				cmd->Parameters->AddWithValue("@class", _class->Text->ToString());

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



	private: System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
		updateForm();
	}
	//ADD Grades
	private: System::Void AddGradesToAllStudents(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (System::Int32)Keys::Enter) {
			String^ id = gridView1->GetDataRow(gridView1->FocusedRowHandle)[0]->ToString();
			AddMarks^ add = gcnew AddMarks(id, _class->Text->ToString());
			add->ShowDialog();
			updateForm();
		}
	}

};
}
