#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Details : public System::Windows::Forms::Form
	{
	private: String^ student_id;
	public:
		Details(String^ id)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			student_id = id;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Details()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");
	private: DevExpress::XtraGrid::Views::Grid::GridView^ gridView1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn1;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn2;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn3;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn4;
	private: DevExpress::XtraGrid::Columns::GridColumn^ gridColumn5;
	private: DevExpress::XtraGrid::GridControl^ gridControl1;


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
			this->gridView1 = (gcnew DevExpress::XtraGrid::Views::Grid::GridView());
			this->gridColumn1 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn2 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn3 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn4 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridColumn5 = (gcnew DevExpress::XtraGrid::Columns::GridColumn());
			this->gridControl1 = (gcnew DevExpress::XtraGrid::GridControl());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->BeginInit();
			this->SuspendLayout();
			// 
			// gridView1
			// 
			this->gridView1->Columns->AddRange(gcnew cli::array< DevExpress::XtraGrid::Columns::GridColumn^  >(5) {
				this->gridColumn1,
					this->gridColumn2, this->gridColumn3, this->gridColumn4, this->gridColumn5
			});
			this->gridView1->GridControl = this->gridControl1;
			this->gridView1->Name = L"gridView1";
			this->gridView1->OptionsMenu->EnableFooterMenu = false;
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
			this->gridColumn1->Width = 50;
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
			this->gridColumn4->Caption = L"Status";
			this->gridColumn4->FieldName = L"status";
			this->gridColumn4->Name = L"gridColumn4";
			this->gridColumn4->OptionsColumn->AllowEdit = false;
			this->gridColumn4->Summary->AddRange(gcnew cli::array< DevExpress::XtraGrid::GridSummaryItem^  >(1) { (gcnew DevExpress::XtraGrid::GridColumnSummaryItem(DevExpress::Data::SummaryItemType::Custom)) });
			this->gridColumn4->Visible = true;
			this->gridColumn4->VisibleIndex = 3;
			// 
			// gridColumn5
			// 
			this->gridColumn5->Caption = L"Date";
			this->gridColumn5->FieldName = L"date";
			this->gridColumn5->Name = L"gridColumn5";
			this->gridColumn5->Visible = true;
			this->gridColumn5->VisibleIndex = 4;
			// 
			// gridControl1
			// 
			this->gridControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->gridControl1->Location = System::Drawing::Point(0, 1);
			this->gridControl1->MainView = this->gridView1;
			this->gridControl1->Name = L"gridControl1";
			this->gridControl1->Size = System::Drawing::Size(957, 649);
			this->gridControl1->TabIndex = 0;
			this->gridControl1->ViewCollection->AddRange(gcnew cli::array< DevExpress::XtraGrid::Views::Base::BaseView^  >(1) { this->gridView1 });
			// 
			// Details
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(958, 652);
			this->Controls->Add(this->gridControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Details";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Student Attandence Details";
			this->Load += gcnew System::EventHandler(this, &Details::Details_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gridControl1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void Details_Load(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (conn->State == ConnectionState::Closed) {
					conn->Open();
				}
				String^ query = "SELECT * FROM sem_1_project.attandence_report WHERE id = @id Order By date desc;";

				MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
				cmd->CommandType = CommandType::Text;
				cmd->Parameters->AddWithValue("@id", student_id);

				cmd->ExecuteNonQuery();
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
