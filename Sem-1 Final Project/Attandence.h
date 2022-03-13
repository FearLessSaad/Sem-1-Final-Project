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
	public ref class Attandence : public System::Windows::Forms::Form
	{
	public:
		Attandence(void)
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
		~Attandence()
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
	private: DevExpress::XtraEditors::LabelControl^ labelControl2;
	private: System::Windows::Forms::ComboBox^ _class;
	private: DevExpress::XtraEditors::SimpleButton^ btnSelect;
	private: DevExpress::XtraEditors::SeparatorControl^ separatorControl2;
	private: DevExpress::XtraEditors::SimpleButton^ btnCancel;
	private: DevExpress::XtraEditors::SimpleButton^ btnSave;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ full_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ father_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ class_name;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ presStatus;

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
			this->labelControl2 = (gcnew DevExpress::XtraEditors::LabelControl());
			this->_class = (gcnew System::Windows::Forms::ComboBox());
			this->btnSelect = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->separatorControl2 = (gcnew DevExpress::XtraEditors::SeparatorControl());
			this->btnCancel = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->btnSave = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->full_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->father_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->class_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->presStatus = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// separatorControl1
			// 
			this->separatorControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl1->Location = System::Drawing::Point(-1, 29);
			this->separatorControl1->Name = L"separatorControl1";
			this->separatorControl1->Size = System::Drawing::Size(970, 23);
			this->separatorControl1->TabIndex = 3;
			// 
			// labelControl1
			// 
			this->labelControl1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl1->Appearance->Options->UseFont = true;
			this->labelControl1->Location = System::Drawing::Point(14, 4);
			this->labelControl1->Name = L"labelControl1";
			this->labelControl1->Size = System::Drawing::Size(107, 28);
			this->labelControl1->TabIndex = 2;
			this->labelControl1->Text = L"Attandence";
			// 
			// labelControl2
			// 
			this->labelControl2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelControl2->Appearance->Options->UseFont = true;
			this->labelControl2->Location = System::Drawing::Point(14, 67);
			this->labelControl2->Name = L"labelControl2";
			this->labelControl2->Size = System::Drawing::Size(102, 26);
			this->labelControl2->TabIndex = 4;
			this->labelControl2->Text = L"Select Class:";
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
			this->_class->Location = System::Drawing::Point(122, 67);
			this->_class->Name = L"_class";
			this->_class->Size = System::Drawing::Size(417, 29);
			this->_class->TabIndex = 27;
			this->_class->Text = L"Select Class";
			// 
			// btnSelect
			// 
			this->btnSelect->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSelect->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSelect->Appearance->Options->UseFont = true;
			this->btnSelect->Location = System::Drawing::Point(545, 67);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(410, 30);
			this->btnSelect->TabIndex = 28;
			this->btnSelect->Text = L"Select";
			this->btnSelect->Click += gcnew System::EventHandler(this, &Attandence::simpleButton1_Click);
			// 
			// separatorControl2
			// 
			this->separatorControl2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->separatorControl2->Location = System::Drawing::Point(-1, 98);
			this->separatorControl2->Name = L"separatorControl2";
			this->separatorControl2->Size = System::Drawing::Size(970, 23);
			this->separatorControl2->TabIndex = 29;
			// 
			// btnCancel
			// 
			this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnCancel->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->Appearance->Options->UseFont = true;
			this->btnCancel->Enabled = false;
			this->btnCancel->Location = System::Drawing::Point(12, 606);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(410, 30);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &Attandence::simpleButton2_Click);
			// 
			// btnSave
			// 
			this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSave->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSave->Appearance->Options->UseFont = true;
			this->btnSave->Enabled = false;
			this->btnSave->Location = System::Drawing::Point(428, 606);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(525, 30);
			this->btnSave->TabIndex = 32;
			this->btnSave->Text = L"Save";
			this->btnSave->Click += gcnew System::EventHandler(this, &Attandence::simpleButton3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->full_name,
					this->father_name, this->class_name, this->presStatus
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 117);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(941, 483);
			this->dataGridView1->TabIndex = 33;
			// 
			// id
			// 
			this->id->DataPropertyName = L"id";
			this->id->HeaderText = L"Student ID";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// full_name
			// 
			this->full_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->full_name->DataPropertyName = L"full_name";
			this->full_name->HeaderText = L"Full Name";
			this->full_name->Name = L"full_name";
			this->full_name->ReadOnly = true;
			// 
			// father_name
			// 
			this->father_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->father_name->DataPropertyName = L"father_name";
			this->father_name->HeaderText = L"Father Name";
			this->father_name->Name = L"father_name";
			this->father_name->ReadOnly = true;
			// 
			// class_name
			// 
			this->class_name->DataPropertyName = L"class";
			this->class_name->HeaderText = L"Class";
			this->class_name->Name = L"class_name";
			this->class_name->ReadOnly = true;
			// 
			// presStatus
			// 
			this->presStatus->HeaderText = L"Status";
			this->presStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"P", L"A", L"L" });
			this->presStatus->Name = L"presStatus";
			this->presStatus->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->presStatus->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// Attandence
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 644);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->separatorControl2);
			this->Controls->Add(this->btnSelect);
			this->Controls->Add(this->_class);
			this->Controls->Add(this->labelControl2);
			this->Controls->Add(this->separatorControl1);
			this->Controls->Add(this->labelControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Attandence";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->separatorControl2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Call When CLick On Select
		private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (_class->Text != "Select Class") {
				try {
					if (conn->State == ConnectionState::Closed) {
						conn->Open();
					}
					String^ query = "SELECT * FROM sem_1_project.attandence WHERE class = @class AND date = current_date();";
					MySqlCommand^ cmd1 = gcnew MySqlCommand(query, conn);
					cmd1->CommandType = CommandType::Text;
					cmd1->Parameters->AddWithValue("@class", _class->Text->ToString());

					MySqlDataReader^ mdr = cmd1->ExecuteReader();
					if (mdr->HasRows) {
						MessageBox::Show("Attandence already submited.", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}
					else {
						conn->Close();
						conn->Open();

						query = "SELECT id, full_name, father_name, class FROM `sem_1_project`.`student` WHERE class = @class;";
						MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
						cmd->CommandType = CommandType::Text;
						cmd->Parameters->AddWithValue("@class", _class->Text->ToString());

						cmd->ExecuteNonQuery();
						MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
						DataTable^ dt = gcnew DataTable();
						mda->Fill(dt);

						dataGridView1->DataSource = dt;

						btnSave->Enabled = true;
						btnCancel->Enabled = true;
					}

					conn->Close();

				}catch(Exception^ ex) {
					MessageBox::Show(ex->ToString());
				}
			}
		}
		private: System::Void simpleButton3_Click(System::Object^ sender, System::EventArgs^ e) {

			System::Windows::Forms::DialogResult res = MessageBox::Show("Are You Sure You Want To Save Attandence?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			if (res == System::Windows::Forms::DialogResult::Yes) {
				int len = dataGridView1->RowCount;
				String^ st = "";
				try {
					if (conn->State == ConnectionState::Closed)
						conn->Open();

					//Create MySql Transection
					MySqlTransaction^ mt;
					mt = conn->BeginTransaction();

					MySqlCommand^ cmd = gcnew MySqlCommand();
					cmd->Connection = conn;
					cmd->Transaction = mt;

					//getting data and putting in database
					for (int i = 0; i < len; i++) {
						cmd->CommandText = "INSERT INTO `sem_1_project`.`attandence` (`student_id`, `full_name`, `class`, `status`, `date`) VALUES (@std, @name, @class, @status, CURRENT_DATE());";
						cmd->Parameters->Clear();
						cmd->Parameters->AddWithValue("@std", Convert::ToInt64(dataGridView1->Rows[i]->Cells[1]->Value->ToString()))->MySqlDbType = MySqlDbType::Int64;
						cmd->Parameters->AddWithValue("@name", dataGridView1->Rows[i]->Cells[2]->Value->ToString());
						cmd->Parameters->AddWithValue("@class", dataGridView1->Rows[i]->Cells[4]->Value->ToString());
						cmd->Parameters->AddWithValue("@status", dataGridView1->Rows[i]->Cells["presStatus"]->Value->ToString());
						cmd->ExecuteNonQuery();
					}

					mt->Commit();
					conn->Close();

					for (int i = 0; i < len; i++) {
						dataGridView1->Rows->Remove(dataGridView1->Rows[0]);
					}
					btnSave->Enabled = false;
					btnCancel->Enabled = false;

				}
				catch (Exception^ ex) {
					MessageBox::Show(ex->ToString());
				}
			}

		}
	//Call When Click On Cancel
	private: System::Void simpleButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		int len = dataGridView1->RowCount;
		for (int i = 0; i < len; i++) {
			dataGridView1->Rows->Remove(dataGridView1->Rows[0]);
		}
		btnSave->Enabled = false;
		btnSelect->Enabled = false;
	}
};
}
