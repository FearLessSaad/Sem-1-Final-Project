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
	public ref class AddMarks : public System::Windows::Forms::Form
	{

	private: String^ t_id;


	private: DevExpress::XtraEditors::SimpleButton^ simpleButton1;
	private: DevExpress::XtraEditors::SimpleButton^ simpleButton2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ full_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ father_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ _Class;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ subject;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ om;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tid;

	private: String^ t_class;

	public:
		AddMarks(String^ id, String^ _class)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			t_id = id;
			t_class = _class;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddMarks()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		MySqlConnection^ conn = gcnew MySqlConnection(L"server = localhost; user = root; password = MySql@SA64; database = sem_1_project");


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
			this->simpleButton1 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->simpleButton2 = (gcnew DevExpress::XtraEditors::SimpleButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->sid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->full_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->father_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->_Class = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subject = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->om = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// simpleButton1
			// 
			this->simpleButton1->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simpleButton1->Appearance->Options->UseFont = true;
			this->simpleButton1->Location = System::Drawing::Point(0, 596);
			this->simpleButton1->Name = L"simpleButton1";
			this->simpleButton1->Size = System::Drawing::Size(523, 44);
			this->simpleButton1->TabIndex = 1;
			this->simpleButton1->Text = L"Cancel";
			this->simpleButton1->Click += gcnew System::EventHandler(this, &AddMarks::simpleButton1_Click);
			// 
			// simpleButton2
			// 
			this->simpleButton2->Appearance->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->simpleButton2->Appearance->Options->UseFont = true;
			this->simpleButton2->Location = System::Drawing::Point(529, 596);
			this->simpleButton2->Name = L"simpleButton2";
			this->simpleButton2->Size = System::Drawing::Size(563, 44);
			this->simpleButton2->TabIndex = 2;
			this->simpleButton2->Text = L"Save";
			this->simpleButton2->Click += gcnew System::EventHandler(this, &AddMarks::simpleButton2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->sid, this->full_name,
					this->father_name, this->_Class, this->subject, this->tm, this->om, this->tid
			});
			this->dataGridView1->Location = System::Drawing::Point(0, -1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1092, 599);
			this->dataGridView1->TabIndex = 3;
			// 
			// sid
			// 
			this->sid->DataPropertyName = L"id";
			this->sid->HeaderText = L"Student ID";
			this->sid->Name = L"sid";
			this->sid->ReadOnly = true;
			this->sid->Width = 75;
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
			// _Class
			// 
			this->_Class->DataPropertyName = L"class";
			this->_Class->HeaderText = L"Class";
			this->_Class->Name = L"_Class";
			this->_Class->ReadOnly = true;
			// 
			// subject
			// 
			this->subject->DataPropertyName = L"Subject";
			this->subject->HeaderText = L"Subject";
			this->subject->Name = L"subject";
			this->subject->ReadOnly = true;
			// 
			// tm
			// 
			this->tm->DataPropertyName = L"tm";
			this->tm->HeaderText = L"Total Marks";
			this->tm->Name = L"tm";
			this->tm->ReadOnly = true;
			// 
			// om
			// 
			this->om->DataPropertyName = L"om";
			this->om->HeaderText = L"Obtained Marks";
			this->om->Name = L"om";
			// 
			// tid
			// 
			this->tid->DataPropertyName = L"t_id";
			this->tid->HeaderText = L"Test ID";
			this->tid->Name = L"tid";
			this->tid->ReadOnly = true;
			this->tid->Visible = false;
			// 
			// AddMarks
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 639);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->simpleButton2);
			this->Controls->Add(this->simpleButton1);
			this->Name = L"AddMarks";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Students Marks";
			this->Load += gcnew System::EventHandler(this, &AddMarks::AddMarks_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//CAll When Click On Cancel
	private: System::Void simpleButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult res = MessageBox::Show("Are You Sure You Want To Close This Form?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		if (res == System::Windows::Forms::DialogResult::Yes) {
			this->Close();
		}
	}
	//Call When CLick On Save
	private: System::Void simpleButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::DialogResult res = MessageBox::Show("Are You Sure You Want To Save Marks?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		if (res == System::Windows::Forms::DialogResult::Yes) {
			int len = dataGridView1->RowCount;
			try {
				if (conn->State == ConnectionState::Closed)
					conn->Open();

				//Create MySql Transection
				MySqlTransaction^ mt;
				mt = conn->BeginTransaction();

				MySqlCommand^ cmd = gcnew MySqlCommand();
				cmd->Connection = conn;
				cmd->Transaction = mt;

				for (int i = 0; i < len; i++) {
					cmd->CommandText = "INSERT INTO `sem_1_project`.`exam_grading` (`student_id`, `exam`, `obtained_marks`, `time`) VALUES (@sid, @tid, @om, CURRENT_TIMESTAMP());";
					cmd->Parameters->Clear();
					cmd->Parameters->AddWithValue("@sid", Convert::ToInt64(dataGridView1->Rows[i]->Cells[0]->Value->ToString()))->MySqlDbType = MySqlDbType::Int64;
					cmd->Parameters->AddWithValue("@tid", Convert::ToInt64(t_id))->MySqlDbType = MySqlDbType::Int64;
					cmd->Parameters->AddWithValue("@om", Convert::ToInt64(dataGridView1->Rows[i]->Cells["om"]->Value->ToString()))->MySqlDbType = MySqlDbType::Int64;
					cmd->ExecuteNonQuery();
				}
				cmd->CommandText = "UPDATE `sem_1_project`.`exams` SET `is_graded` = '1' WHERE (`id` = @id);";
				cmd->Parameters->Clear();
				cmd->Parameters->AddWithValue("@id", t_id);
				cmd->ExecuteNonQuery();

				mt->Commit();

				conn->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->ToString());
			}
			this->Close();
		}
	}
	private: System::Void AddMarks_Load(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ query = "SELECT * FROM sem_1_project.students_enrolled_in_exam WHERE t_id = @t_id AND class = @class;";
			if (conn->State == ConnectionState::Closed) {
				conn->Open();
			}

			MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
			cmd->CommandType = CommandType::Text;

			cmd->Parameters->AddWithValue("@t_id", t_id);
			cmd->Parameters->AddWithValue("@class", t_class);

			MySqlDataAdapter^ mda = gcnew MySqlDataAdapter(cmd);
			DataTable^ dt = gcnew DataTable();
			mda->Fill(dt);

			dataGridView1->DataSource = dt;

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}
};
}
