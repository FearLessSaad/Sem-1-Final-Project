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
	public ref class DelExam : public System::Windows::Forms::Form
	{
	public:
		DelExam(void)
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
		~DelExam()
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
	private: DevExpress::XtraGrid::GridControl^ gridControl1;
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn6;
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
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn6 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->msg = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-2, 26);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(925, 23);
			this->separatorControl1->TabIndex = 5;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(13, 1);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(206, 28);
			this->labelControl1->TabIndex = 4;
			this->labelControl1->Text = L"Grades > Delete Exam";
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(13, 66);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(897, 578);
			this->gridControl1->TabIndex = 42;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			this->gridControl1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DelExam::deleteRecord);
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
			// msg
			// 
			this->msg->AutoSize = true;
			this->msg->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->msg->Location = System::Drawing::Point(16, 44);
			this->msg->Name = L"msg";
			this->msg->Size = System::Drawing::Size(0, 17);
			this->msg->TabIndex = 43;
			// 
			// DelExam
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(922, 663);
			this->Controls->Add(this->msg);
			this->Controls->Add(this->gridControl1);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"DelExam";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &DelExam::DelExam_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DelExam_Load(System::Object^ sender, System::EventArgs^ e) {
		updateForm();
	}

	public: System::Void updateForm() {
		try {
			if (conn->State == ConnectionState::Closed) {
				conn->Open();
			}
			String^ query = "SELECT * FROM `sem_1_project`.`exams` WHERE is_graded = 0 ORDER BY id DESC;";
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

	private: System::Void deleteRecord(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (System::Int32)Keys::Enter) {
			String^ id = gridView1->GetDataRow(gridView1->FocusedRowHandle)[0]->ToString();
			System::Windows::Forms::DialogResult res = MessageBox::Show("Are You Sure You Want To Delete?", "Confirmation", MessageBoxButtons::OKCancel, MessageBoxIcon::Information);
			if (res == System::Windows::Forms::DialogResult::OK) {
				try {
					if (conn->State == ConnectionState::Closed) {
						conn->Open();
					}
					String^ query = "DELETE FROM `sem_1_project`.`exams` WHERE (`id` = @id)";
					MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
					cmd->CommandType = CommandType::Text;
					cmd->Parameters->AddWithValue("@id", id);

					if (cmd->ExecuteNonQuery() == 1) {
						updateForm();
						msg->ForeColor = ForeColor.Green;
						msg->Text = "Student Deleted Successfully!";
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
