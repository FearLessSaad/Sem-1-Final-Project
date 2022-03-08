#pragma once
#include "AddNewStudent.h"

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
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: DevExpress::XtraBars::Ribbon::RibbonControl^ ribbonControl1;
	protected:
	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage1;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup1;

	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage2;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup3;
	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage3;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup4;


	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem1;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem2;
	private: DevExpress::XtraBars::Ribbon::RibbonStatusBar^ MainStatusBar;
	private: DevExpress::XtraEditors::PanelControl^ MainPannel;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem3;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem4;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem5;


	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem6;
	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage6;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup6;
	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage7;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup7;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem7;
	private: DevExpress::XtraBars::BarButtonItem^ A;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem8;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem9;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem10;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem11;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem12;
	private: DevExpress::XtraBars::Ribbon::RibbonPage^ ribbonPage4;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup2;

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
			this->ribbonControl1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonControl());
			this->barButtonItem1 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem2 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem3 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem4 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem5 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPage1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup3 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage3 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup4 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->MainStatusBar = (gcnew DevExpress::XtraBars::Ribbon::RibbonStatusBar());
			this->MainPannel = (gcnew DevExpress::XtraEditors::PanelControl());
			this->barButtonItem6 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPage6 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup6 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage7 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup7 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->barButtonItem7 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->A = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem8 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem9 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem10 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem11 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem12 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPage4 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPannel))->BeginInit();
			this->SuspendLayout();
			// 
			// ribbonControl1
			// 
			this->ribbonControl1->ExpandCollapseItem->Id = 0;
			this->ribbonControl1->Items->AddRange(gcnew cli::array< DevExpress::XtraBars::BarItem^  >(14) {
				this->ribbonControl1->ExpandCollapseItem,
					this->ribbonControl1->SearchEditItem, this->barButtonItem1, this->barButtonItem3, this->barButtonItem4, this->barButtonItem5,
					this->barButtonItem6, this->barButtonItem7, this->A, this->barButtonItem8, this->barButtonItem9, this->barButtonItem10, this->barButtonItem11,
					this->barButtonItem12
			});
			this->ribbonControl1->Location = System::Drawing::Point(0, 0);
			this->ribbonControl1->MaxItemId = 14;
			this->ribbonControl1->Name = L"ribbonControl1";
			this->ribbonControl1->Pages->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPage^  >(6) {
				this->ribbonPage1,
					this->ribbonPage2, this->ribbonPage3, this->ribbonPage6, this->ribbonPage4, this->ribbonPage7
			});
			this->ribbonControl1->RibbonStyle = DevExpress::XtraBars::Ribbon::RibbonControlStyle::OfficeUniversal;
			this->ribbonControl1->Size = System::Drawing::Size(1059, 57);
			this->ribbonControl1->StatusBar = this->MainStatusBar;
			// 
			// barButtonItem1
			// 
			this->barButtonItem1->Caption = L"Attandence";
			this->barButtonItem1->Id = 1;
			this->barButtonItem1->Name = L"barButtonItem1";
			this->barButtonItem1->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem1_ItemClick);
			// 
			// barButtonItem2
			// 
			this->barButtonItem2->Caption = L"barButtonItem2";
			this->barButtonItem2->Id = 2;
			this->barButtonItem2->Name = L"barButtonItem2";
			this->barButtonItem2->RibbonStyle = DevExpress::XtraBars::Ribbon::RibbonItemStyles::Large;
			// 
			// barButtonItem3
			// 
			this->barButtonItem3->Caption = L"Students";
			this->barButtonItem3->Id = 3;
			this->barButtonItem3->Name = L"barButtonItem3";
			this->barButtonItem3->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem3_ItemClick);
			// 
			// barButtonItem4
			// 
			this->barButtonItem4->Caption = L"Add Student";
			this->barButtonItem4->Hint = L"Add New Student";
			this->barButtonItem4->Id = 4;
			this->barButtonItem4->Name = L"barButtonItem4";
			this->barButtonItem4->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem4_ItemClick);
			// 
			// barButtonItem5
			// 
			this->barButtonItem5->Caption = L"Search";
			this->barButtonItem5->Hint = L"Search Student";
			this->barButtonItem5->Id = 5;
			this->barButtonItem5->Name = L"barButtonItem5";
			// 
			// ribbonPage1
			// 
			this->ribbonPage1->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup1 });
			this->ribbonPage1->Name = L"ribbonPage1";
			this->ribbonPage1->Text = L"Home";
			// 
			// ribbonPageGroup1
			// 
			this->ribbonPageGroup1->ItemLinks->Add(this->barButtonItem1);
			this->ribbonPageGroup1->ItemLinks->Add(this->barButtonItem6);
			this->ribbonPageGroup1->Name = L"ribbonPageGroup1";
			this->ribbonPageGroup1->Text = L"ribbonPageGroup1";
			// 
			// ribbonPage2
			// 
			this->ribbonPage2->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup3 });
			this->ribbonPage2->Name = L"ribbonPage2";
			this->ribbonPage2->Text = L"Students";
			// 
			// ribbonPageGroup3
			// 
			this->ribbonPageGroup3->ItemLinks->Add(this->barButtonItem3);
			this->ribbonPageGroup3->ItemLinks->Add(this->barButtonItem4);
			this->ribbonPageGroup3->ItemLinks->Add(this->barButtonItem5);
			this->ribbonPageGroup3->Name = L"ribbonPageGroup3";
			this->ribbonPageGroup3->Text = L"ribbonPageGroup3";
			// 
			// ribbonPage3
			// 
			this->ribbonPage3->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup4 });
			this->ribbonPage3->Name = L"ribbonPage3";
			this->ribbonPage3->Text = L"Attandence";
			// 
			// ribbonPageGroup4
			// 
			this->ribbonPageGroup4->Name = L"ribbonPageGroup4";
			this->ribbonPageGroup4->Text = L"ribbonPageGroup4";
			// 
			// MainStatusBar
			// 
			this->MainStatusBar->Location = System::Drawing::Point(0, 620);
			this->MainStatusBar->Name = L"MainStatusBar";
			this->MainStatusBar->Ribbon = this->ribbonControl1;
			this->MainStatusBar->Size = System::Drawing::Size(1059, 27);
			// 
			// MainPannel
			// 
			this->MainPannel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPannel->Location = System::Drawing::Point(0, 57);
			this->MainPannel->Name = L"MainPannel";
			this->MainPannel->Size = System::Drawing::Size(1059, 563);
			this->MainPannel->TabIndex = 2;
			// 
			// barButtonItem6
			// 
			this->barButtonItem6->Caption = L"Fee Record";
			this->barButtonItem6->Id = 6;
			this->barButtonItem6->Name = L"barButtonItem6";
			// 
			// ribbonPage6
			// 
			this->ribbonPage6->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup6 });
			this->ribbonPage6->Name = L"ribbonPage6";
			this->ribbonPage6->Text = L"Grading";
			// 
			// ribbonPageGroup6
			// 
			this->ribbonPageGroup6->ItemLinks->Add(this->barButtonItem10);
			this->ribbonPageGroup6->ItemLinks->Add(this->barButtonItem11);
			this->ribbonPageGroup6->ItemLinks->Add(this->barButtonItem12);
			this->ribbonPageGroup6->Name = L"ribbonPageGroup6";
			this->ribbonPageGroup6->Text = L"ribbonPageGroup6";
			// 
			// ribbonPage7
			// 
			this->ribbonPage7->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup7 });
			this->ribbonPage7->Name = L"ribbonPage7";
			this->ribbonPage7->Text = L"Users";
			// 
			// ribbonPageGroup7
			// 
			this->ribbonPageGroup7->ItemLinks->Add(this->barButtonItem7);
			this->ribbonPageGroup7->ItemLinks->Add(this->A);
			this->ribbonPageGroup7->ItemLinks->Add(this->barButtonItem8);
			this->ribbonPageGroup7->ItemLinks->Add(this->barButtonItem9);
			this->ribbonPageGroup7->Name = L"ribbonPageGroup7";
			this->ribbonPageGroup7->Text = L"ribbonPageGroup7";
			// 
			// barButtonItem7
			// 
			this->barButtonItem7->Caption = L"Users";
			this->barButtonItem7->Hint = L"All Users List";
			this->barButtonItem7->Id = 7;
			this->barButtonItem7->Name = L"barButtonItem7";
			// 
			// A
			// 
			this->A->Caption = L"Add User";
			this->A->Hint = L"Add a new user";
			this->A->Id = 8;
			this->A->Name = L"A";
			// 
			// barButtonItem8
			// 
			this->barButtonItem8->Caption = L"Block";
			this->barButtonItem8->Hint = L"Block a user";
			this->barButtonItem8->Id = 9;
			this->barButtonItem8->Name = L"barButtonItem8";
			// 
			// barButtonItem9
			// 
			this->barButtonItem9->Caption = L"Unblock";
			this->barButtonItem9->Hint = L"Unblock User";
			this->barButtonItem9->Id = 10;
			this->barButtonItem9->Name = L"barButtonItem9";
			// 
			// barButtonItem10
			// 
			this->barButtonItem10->Caption = L"Add Exam";
			this->barButtonItem10->Hint = L"Create a new exam";
			this->barButtonItem10->Id = 11;
			this->barButtonItem10->Name = L"barButtonItem10";
			// 
			// barButtonItem11
			// 
			this->barButtonItem11->Caption = L"Add Grades";
			this->barButtonItem11->Hint = L"Add Marks/Grades of cundected exam";
			this->barButtonItem11->Id = 12;
			this->barButtonItem11->Name = L"barButtonItem11";
			// 
			// barButtonItem12
			// 
			this->barButtonItem12->Caption = L"Report";
			this->barButtonItem12->Id = 13;
			this->barButtonItem12->Name = L"barButtonItem12";
			// 
			// ribbonPage4
			// 
			this->ribbonPage4->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(1) { this->ribbonPageGroup2 });
			this->ribbonPage4->Name = L"ribbonPage4";
			this->ribbonPage4->Text = L"Fee";
			// 
			// ribbonPageGroup2
			// 
			this->ribbonPageGroup2->Name = L"ribbonPageGroup2";
			this->ribbonPageGroup2->Text = L"ribbonPageGroup2";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 647);
			this->Controls->Add(this->MainPannel);
			this->Controls->Add(this->MainStatusBar);
			this->Controls->Add(this->ribbonControl1);
			this->Name = L"Main";
			this->Text = L"Student Management System | TuF";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPannel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:
			AddNewStudent^ addNewStudent = gcnew AddNewStudent();

#pragma endregion
		//CAll When Form Is Closing
		private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
		{
			Application::Exit();
		}
		private: System::Void barButtonItem1_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		}
		//Call When Click On Students 
		private: System::Void barButtonItem3_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			
		}
		//Call When Click On Add Student
		private: System::Void barButtonItem4_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			//Hiding Exiting Panels

			//Configuring Form To Load In Current Pannel
			addNewStudent->Dock = Windows::Forms::DockStyle::Fill;
			addNewStudent->TopLevel = false;
			addNewStudent->TopMost = true;
			this->MainPannel->Controls->Add(addNewStudent);
			addNewStudent->Show();
		}
};
}
