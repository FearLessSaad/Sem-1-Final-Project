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
	public ref class StudentReport : public System::Windows::Forms::Form
	{
	private:
		String^ id;

	public:
		StudentReport(String^ sid)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			id = sid;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StudentReport()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(-3, 1);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(994, 655);
			this->gridControl1->TabIndex = 47;
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
			// StudentReport
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(991, 657);
			this->Controls->Add(this->gridControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StudentReport";
			this->Text = L"Student Grading Report";
			this->Load += gcnew System::EventHandler(this, &StudentReport::StudentReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentReport_Load(System::Object^ sender, System::EventArgs^ e) {

		try {
			if (conn->State == ConnectionState::Closed) {
				conn->Open();
			}

			String^ query = "SELECT* FROM sem_1_project.exam_result WHERE id = @id;";

			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->CommandType = CommandType::Text;

			cmd->Parameters->AddWithValue("@id", id);

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
};
}
