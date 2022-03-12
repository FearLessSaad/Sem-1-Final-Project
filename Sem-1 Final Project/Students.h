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
	public ref class Students : public System::Windows::Forms::Form
	{
	public:
		Students(void)
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
		~Students()
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
	private: DevExpress::XtraGrid::GridControl^ StudentsGridControl;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn6;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn7;
	private: System::Windows::Forms::Label^ msg;

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
			this->StudentsGridControl = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn6 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn7 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->msg = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsGridControl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-3, 32);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(1047, 23);
			this->separatorControl1->TabIndex = 3;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(12, 7);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(81, 28);
			this->labelControl1->TabIndex = 2;
			this->labelControl1->Text = L"Students";
			// 
			// StudentsGridControl
			// 
			this->StudentsGridControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StudentsGridControl->Location = System::Drawing::Point(13, 72);
			this->StudentsGridControl->MainView = this->gridView1;
			this->StudentsGridControl->Name = L"StudentsGridControl";
			this->StudentsGridControl->Size = System::Drawing::Size(1018, 571);
			this->StudentsGridControl->TabIndex = 4;
			this->StudentsGridControl->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			this->StudentsGridControl->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Students::KeyPressEvent);
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(7) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn5, this->gridColumn6, this->gridColumn7
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
			// gridColumn5
			// 
			this->gridColumn5->Caption = L"B-Form";
			this->gridColumn5->FieldName = L"bfrom";
			this->gridColumn5->Name = L"gridColumn5";
			this->gridColumn5->OptionsColumn->AllowEdit = false;
			this->gridColumn5->Visible = true;
			this->gridColumn5->VisibleIndex = 4;
			this->gridColumn5->Width = 151;
			// 
			// gridColumn6
			// 
			this->gridColumn6->Caption = L"Date Of Birth";
			this->gridColumn6->FieldName = L"dob";
			this->gridColumn6->Name = L"gridColumn6";
			this->gridColumn6->OptionsColumn->AllowEdit = false;
			this->gridColumn6->Visible = true;
			this->gridColumn6->VisibleIndex = 5;
			this->gridColumn6->Width = 243;
			// 
			// gridColumn7
			// 
			this->gridColumn7->Caption = L"Class";
			this->gridColumn7->FieldName = L"class";
			this->gridColumn7->Name = L"gridColumn7";
			this->gridColumn7->OptionsColumn->AllowEdit = false;
			this->gridColumn7->OptionsColumn->FixedWidth = true;
			this->gridColumn7->Visible = true;
			this->gridColumn7->VisibleIndex = 6;
			this->gridColumn7->Width = 73;
			// 
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->Location = System::Drawing::Point(16, 50);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(0, 17);
			this->msg->TabIndex = 5;
			// 
			// Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1043, 645);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->StudentsGridControl);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Students";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Students::Students_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StudentsGridControl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Call When Form Is Load
	private: System::Void Students_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateGrid();
	}

	public: System::Void UpdateGrid() {
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

			StudentsGridControl->DataSource = dt;

			conn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->ToString());
		}
	}
	private: System::Void KeyPressEvent(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (System::Int32)Keys::Back) {
			String^ id = gridView1->GetDataRow(gridView1->FocusedRowHandle)[0]->ToString();
			System::Windows::Forms::DialogResult res = MessageBox::Show("Are You Sure You Want To Delete?", "Confirmation", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
			if (res == System::Windows::Forms::DialogResult::OK) {
				try {
					if (conn->State == ConnectionState::Closed) {
						conn->Open();
					}
					String^ query = "DELETE FROM `sem_1_project`.`student` WHERE id = @id;";
					MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
					cmd->CommandType = CommandType::Text;
					cmd->Parameters->AddWithValue("@id", id);
					
					if (cmd->ExecuteNonQuery() == 1) {
						UpdateGrid();
						msg->ForeColor = ForeColor.Green;
						msg->Text = "Student Deleted Successfully!";
					}
					else {
						msg->ForeColor = ForeColor.Red;
						msg->Text = "Internal Server Error!!!!!!";
					}
				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->Message);
				}
			}
		}
	}
};
}
