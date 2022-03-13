#pragma once
#include "AddNewStudent.h"
#include "Students.h"
#include "Attandence.h"
#include "StudentAttandence.h"
#include "AddExam.h"
#include "DelExam.h"
#include "AddGrades.h"
#include "Report.h"
#include "ReportByStudent.h"

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
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem13;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem14;
	private: DevExpress::XtraBars::BarEditItem^ barEditItem1;
	private: DevExpress::XtraEditors::Repository::RepositoryItemColorPickEdit^ repositoryItemColorPickEdit1;
	private: DevExpress::XtraBars::BarSubItem^ barSubItem1;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem15;
	private: DevExpress::XtraBars::BarEditItem^ barEditItem2;
	private: DevExpress::XtraEditors::Repository::RepositoryItemComboBox^ repositoryItemComboBox1;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem16;
	private: DevExpress::XtraBars::PopupControlContainer^ popupControlContainer1;
	private: DevExpress::XtraBars::BarStaticItem^ barStaticItem1;
	private: DevExpress::XtraBars::BarStaticItem^ barStaticItem2;
	public: DevExpress::XtraBars::BarStaticItem^ MainWindowMessage;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem17;
	public:

	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup8;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup9;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup12;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup10;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup11;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem18;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup1;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem19;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem20;
	private: DevExpress::XtraBars::BarButtonItem^ barButtonItem21;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup5;
	private: DevExpress::XtraBars::Ribbon::RibbonPageGroup^ ribbonPageGroup13;
	private:

	private: System::ComponentModel::IContainer^ components;

	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			DevExpress::Utils::SuperToolTip^ superToolTip1 = (gcnew DevExpress::Utils::SuperToolTip());
			DevExpress::Utils::ToolTipItem^ toolTipItem1 = (gcnew DevExpress::Utils::ToolTipItem());
			DevExpress::Utils::ToolTipItem^ toolTipItem2 = (gcnew DevExpress::Utils::ToolTipItem());
			this->ribbonControl1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonControl());
			this->barButtonItem1 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem3 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem4 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem5 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem6 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem7 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->A = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem8 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem9 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem10 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem11 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem12 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem13 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem14 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barEditItem1 = (gcnew DevExpress::XtraBars::BarEditItem());
			this->repositoryItemColorPickEdit1 = (gcnew DevExpress::XtraEditors::Repository::RepositoryItemColorPickEdit());
			this->barSubItem1 = (gcnew DevExpress::XtraBars::BarSubItem());
			this->barButtonItem15 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barEditItem2 = (gcnew DevExpress::XtraBars::BarEditItem());
			this->repositoryItemComboBox1 = (gcnew DevExpress::XtraEditors::Repository::RepositoryItemComboBox());
			this->barButtonItem16 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->popupControlContainer1 = (gcnew DevExpress::XtraBars::PopupControlContainer(this->components));
			this->barStaticItem1 = (gcnew DevExpress::XtraBars::BarStaticItem());
			this->barStaticItem2 = (gcnew DevExpress::XtraBars::BarStaticItem());
			this->MainWindowMessage = (gcnew DevExpress::XtraBars::BarStaticItem());
			this->barButtonItem17 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->barButtonItem18 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPage2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup3 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup8 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage3 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup4 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup9 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage6 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup6 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup12 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup10 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup11 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPageGroup1 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage4 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup2 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->ribbonPage7 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPage());
			this->ribbonPageGroup7 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->MainStatusBar = (gcnew DevExpress::XtraBars::Ribbon::RibbonStatusBar());
			this->barButtonItem2 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->MainPannel = (gcnew DevExpress::XtraEditors::PanelControl());
			this->barButtonItem19 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPageGroup5 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->barButtonItem20 = (gcnew DevExpress::XtraBars::BarButtonItem());
			this->ribbonPageGroup13 = (gcnew DevExpress::XtraBars::Ribbon::RibbonPageGroup());
			this->barButtonItem21 = (gcnew DevExpress::XtraBars::BarButtonItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->repositoryItemColorPickEdit1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->repositoryItemComboBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->popupControlContainer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPannel))->BeginInit();
			this->SuspendLayout();
			// 
			// ribbonControl1
			// 
			this->ribbonControl1->ExpandCollapseItem->Id = 0;
			this->ribbonControl1->Items->AddRange(gcnew cli::array< DevExpress::XtraBars::BarItem^  >(29) {
				this->ribbonControl1->ExpandCollapseItem,
					this->ribbonControl1->SearchEditItem, this->barButtonItem1, this->barButtonItem3, this->barButtonItem4, this->barButtonItem5,
					this->barButtonItem6, this->barButtonItem7, this->A, this->barButtonItem8, this->barButtonItem9, this->barButtonItem10, this->barButtonItem11,
					this->barButtonItem12, this->barButtonItem13, this->barButtonItem14, this->barEditItem1, this->barSubItem1, this->barButtonItem15,
					this->barEditItem2, this->barButtonItem16, this->barStaticItem1, this->barStaticItem2, this->MainWindowMessage, this->barButtonItem17,
					this->barButtonItem18, this->barButtonItem19, this->barButtonItem20, this->barButtonItem21
			});
			this->ribbonControl1->Location = System::Drawing::Point(0, 0);
			this->ribbonControl1->MaxItemId = 29;
			this->ribbonControl1->Name = L"ribbonControl1";
			this->ribbonControl1->PageHeaderItemLinks->Add(this->barStaticItem1);
			this->ribbonControl1->PageHeaderItemLinks->Add(this->barStaticItem2);
			this->ribbonControl1->Pages->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPage^  >(5) {
				this->ribbonPage2,
					this->ribbonPage3, this->ribbonPage6, this->ribbonPage4, this->ribbonPage7
			});
			this->ribbonControl1->RepositoryItems->AddRange(gcnew cli::array< DevExpress::XtraEditors::Repository::RepositoryItem^  >(2) {
				this->repositoryItemColorPickEdit1,
					this->repositoryItemComboBox1
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
			// barButtonItem6
			// 
			this->barButtonItem6->Caption = L"Fee Status";
			this->barButtonItem6->Id = 6;
			this->barButtonItem6->Name = L"barButtonItem6";
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
			this->barButtonItem10->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem10_ItemClick);
			// 
			// barButtonItem11
			// 
			this->barButtonItem11->Caption = L"Add Grades";
			this->barButtonItem11->Hint = L"Add Marks/Grades of cundected exam";
			this->barButtonItem11->Id = 12;
			this->barButtonItem11->Name = L"barButtonItem11";
			this->barButtonItem11->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem11_ItemClick);
			// 
			// barButtonItem12
			// 
			this->barButtonItem12->Caption = L"Report";
			this->barButtonItem12->Id = 13;
			this->barButtonItem12->Name = L"barButtonItem12";
			this->barButtonItem12->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem12_ItemClick);
			// 
			// barButtonItem13
			// 
			this->barButtonItem13->Caption = L"Attandence";
			this->barButtonItem13->Hint = L"Todays Attandance";
			this->barButtonItem13->Id = 14;
			this->barButtonItem13->Name = L"barButtonItem13";
			this->barButtonItem13->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem13_ItemClick);
			// 
			// barButtonItem14
			// 
			this->barButtonItem14->Caption = L"Report";
			this->barButtonItem14->Hint = L"Attandence Report";
			this->barButtonItem14->Id = 15;
			this->barButtonItem14->Name = L"barButtonItem14";
			this->barButtonItem14->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem14_ItemClick);
			// 
			// barEditItem1
			// 
			this->barEditItem1->Caption = L"barEditItem1";
			this->barEditItem1->Edit = this->repositoryItemColorPickEdit1;
			this->barEditItem1->Id = 16;
			this->barEditItem1->Name = L"barEditItem1";
			// 
			// repositoryItemColorPickEdit1
			// 
			this->repositoryItemColorPickEdit1->AutoHeight = false;
			this->repositoryItemColorPickEdit1->AutomaticColor = System::Drawing::Color::Black;
			this->repositoryItemColorPickEdit1->Buttons->AddRange(gcnew cli::array< DevExpress::XtraEditors::Controls::EditorButton^  >(1) { (gcnew DevExpress::XtraEditors::Controls::EditorButton(DevExpress::XtraEditors::Controls::ButtonPredefines::Combo)) });
			this->repositoryItemColorPickEdit1->Name = L"repositoryItemColorPickEdit1";
			// 
			// barSubItem1
			// 
			this->barSubItem1->Caption = L"Muhammad Saad";
			this->barSubItem1->Hint = L"Current User.";
			this->barSubItem1->Id = 17;
			this->barSubItem1->Name = L"barSubItem1";
			toolTipItem1->Text = L"Change Password";
			toolTipItem2->Text = L"Logout";
			superToolTip1->Items->Add(toolTipItem1);
			superToolTip1->Items->Add(toolTipItem2);
			this->barSubItem1->SuperTip = superToolTip1;
			// 
			// barButtonItem15
			// 
			this->barButtonItem15->ActAsDropDown = true;
			this->barButtonItem15->ButtonStyle = DevExpress::XtraBars::BarButtonStyle::DropDown;
			this->barButtonItem15->Caption = L"barButtonItem15";
			this->barButtonItem15->Id = 18;
			this->barButtonItem15->Name = L"barButtonItem15";
			// 
			// barEditItem2
			// 
			this->barEditItem2->Caption = L"barEditItem2";
			this->barEditItem2->Edit = this->repositoryItemComboBox1;
			this->barEditItem2->Id = 19;
			this->barEditItem2->Name = L"barEditItem2";
			// 
			// repositoryItemComboBox1
			// 
			this->repositoryItemComboBox1->AutoHeight = false;
			this->repositoryItemComboBox1->Buttons->AddRange(gcnew cli::array< DevExpress::XtraEditors::Controls::EditorButton^  >(1) { (gcnew DevExpress::XtraEditors::Controls::EditorButton(DevExpress::XtraEditors::Controls::ButtonPredefines::Combo)) });
			this->repositoryItemComboBox1->Name = L"repositoryItemComboBox1";
			// 
			// barButtonItem16
			// 
			this->barButtonItem16->ActAsDropDown = true;
			this->barButtonItem16->ButtonStyle = DevExpress::XtraBars::BarButtonStyle::DropDown;
			this->barButtonItem16->Caption = L"barButtonItem16";
			this->barButtonItem16->DropDownControl = this->popupControlContainer1;
			this->barButtonItem16->Id = 20;
			this->barButtonItem16->Name = L"barButtonItem16";
			// 
			// popupControlContainer1
			// 
			this->popupControlContainer1->BorderStyle = DevExpress::XtraEditors::Controls::BorderStyles::NoBorder;
			this->popupControlContainer1->Location = System::Drawing::Point(0, 0);
			this->popupControlContainer1->Name = L"popupControlContainer1";
			this->popupControlContainer1->Ribbon = this->ribbonControl1;
			this->popupControlContainer1->Size = System::Drawing::Size(250, 130);
			this->popupControlContainer1->TabIndex = 5;
			this->popupControlContainer1->Visible = false;
			// 
			// barStaticItem1
			// 
			this->barStaticItem1->Caption = L"Muhammad Saad";
			this->barStaticItem1->Id = 21;
			this->barStaticItem1->Name = L"barStaticItem1";
			this->barStaticItem1->PaintStyle = DevExpress::XtraBars::BarItemPaintStyle::CaptionGlyph;
			this->barStaticItem1->ShowImageInToolbar = false;
			// 
			// barStaticItem2
			// 
			this->barStaticItem2->Caption = L"Logout";
			this->barStaticItem2->Id = 22;
			this->barStaticItem2->Name = L"barStaticItem2";
			this->barStaticItem2->ShowImageInToolbar = false;
			// 
			// MainWindowMessage
			// 
			this->MainWindowMessage->Caption = L"Message Here";
			this->MainWindowMessage->Id = 23;
			this->MainWindowMessage->Name = L"MainWindowMessage";
			// 
			// barButtonItem17
			// 
			this->barButtonItem17->Caption = L"Del Exam";
			this->barButtonItem17->Id = 24;
			this->barButtonItem17->Name = L"barButtonItem17";
			this->barButtonItem17->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem17_ItemClick);
			// 
			// barButtonItem18
			// 
			this->barButtonItem18->Caption = L"Report By Student";
			this->barButtonItem18->Id = 25;
			this->barButtonItem18->Name = L"barButtonItem18";
			this->barButtonItem18->ItemClick += gcnew DevExpress::XtraBars::ItemClickEventHandler(this, &Main::barButtonItem18_ItemClick);
			// 
			// ribbonPage2
			// 
			this->ribbonPage2->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(2) {
				this->ribbonPageGroup3,
					this->ribbonPageGroup8
			});
			this->ribbonPage2->Name = L"ribbonPage2";
			this->ribbonPage2->Text = L"Students";
			// 
			// ribbonPageGroup3
			// 
			this->ribbonPageGroup3->ItemLinks->Add(this->barButtonItem3);
			this->ribbonPageGroup3->Name = L"ribbonPageGroup3";
			this->ribbonPageGroup3->Text = L"ribbonPageGroup3";
			// 
			// ribbonPageGroup8
			// 
			this->ribbonPageGroup8->ItemLinks->Add(this->barButtonItem4);
			this->ribbonPageGroup8->Name = L"ribbonPageGroup8";
			this->ribbonPageGroup8->Text = L"ribbonPageGroup8";
			// 
			// ribbonPage3
			// 
			this->ribbonPage3->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(2) {
				this->ribbonPageGroup4,
					this->ribbonPageGroup9
			});
			this->ribbonPage3->Name = L"ribbonPage3";
			this->ribbonPage3->Text = L"Attandence";
			// 
			// ribbonPageGroup4
			// 
			this->ribbonPageGroup4->ItemLinks->Add(this->barButtonItem13);
			this->ribbonPageGroup4->Name = L"ribbonPageGroup4";
			this->ribbonPageGroup4->Text = L"ribbonPageGroup4";
			// 
			// ribbonPageGroup9
			// 
			this->ribbonPageGroup9->ItemLinks->Add(this->barButtonItem14);
			this->ribbonPageGroup9->Name = L"ribbonPageGroup9";
			this->ribbonPageGroup9->Text = L"ribbonPageGroup9";
			// 
			// ribbonPage6
			// 
			this->ribbonPage6->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(5) {
				this->ribbonPageGroup6,
					this->ribbonPageGroup12, this->ribbonPageGroup10, this->ribbonPageGroup11, this->ribbonPageGroup1
			});
			this->ribbonPage6->Name = L"ribbonPage6";
			this->ribbonPage6->Text = L"Grading";
			// 
			// ribbonPageGroup6
			// 
			this->ribbonPageGroup6->ItemLinks->Add(this->barButtonItem10);
			this->ribbonPageGroup6->Name = L"ribbonPageGroup6";
			this->ribbonPageGroup6->Text = L"ribbonPageGroup6";
			// 
			// ribbonPageGroup12
			// 
			this->ribbonPageGroup12->ItemLinks->Add(this->barButtonItem17);
			this->ribbonPageGroup12->Name = L"ribbonPageGroup12";
			this->ribbonPageGroup12->Text = L"ribbonPageGroup12";
			// 
			// ribbonPageGroup10
			// 
			this->ribbonPageGroup10->ItemLinks->Add(this->barButtonItem11);
			this->ribbonPageGroup10->Name = L"ribbonPageGroup10";
			this->ribbonPageGroup10->Text = L"ribbonPageGroup10";
			// 
			// ribbonPageGroup11
			// 
			this->ribbonPageGroup11->ItemLinks->Add(this->barButtonItem12);
			this->ribbonPageGroup11->Name = L"ribbonPageGroup11";
			this->ribbonPageGroup11->Text = L"ribbonPageGroup11";
			// 
			// ribbonPageGroup1
			// 
			this->ribbonPageGroup1->ItemLinks->Add(this->barButtonItem18);
			this->ribbonPageGroup1->Name = L"ribbonPageGroup1";
			this->ribbonPageGroup1->Text = L"ribbonPageGroup1";
			// 
			// ribbonPage4
			// 
			this->ribbonPage4->Groups->AddRange(gcnew cli::array< DevExpress::XtraBars::Ribbon::RibbonPageGroup^  >(3) {
				this->ribbonPageGroup2,
					this->ribbonPageGroup5, this->ribbonPageGroup13
			});
			this->ribbonPage4->Name = L"ribbonPage4";
			this->ribbonPage4->Text = L"Fee";
			// 
			// ribbonPageGroup2
			// 
			this->ribbonPageGroup2->ItemLinks->Add(this->barButtonItem19);
			this->ribbonPageGroup2->Name = L"ribbonPageGroup2";
			this->ribbonPageGroup2->Text = L"ribbonPageGroup2";
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
			this->ribbonPageGroup7->Name = L"ribbonPageGroup7";
			this->ribbonPageGroup7->Text = L"ribbonPageGroup7";
			// 
			// MainStatusBar
			// 
			this->MainStatusBar->ItemLinks->Add(this->MainWindowMessage);
			this->MainStatusBar->Location = System::Drawing::Point(0, 620);
			this->MainStatusBar->Name = L"MainStatusBar";
			this->MainStatusBar->Ribbon = this->ribbonControl1;
			this->MainStatusBar->Size = System::Drawing::Size(1059, 27);
			// 
			// barButtonItem2
			// 
			this->barButtonItem2->Caption = L"barButtonItem2";
			this->barButtonItem2->Id = 2;
			this->barButtonItem2->Name = L"barButtonItem2";
			this->barButtonItem2->RibbonStyle = DevExpress::XtraBars::Ribbon::RibbonItemStyles::Large;
			// 
			// MainPannel
			// 
			this->MainPannel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->MainPannel->Location = System::Drawing::Point(0, 57);
			this->MainPannel->Name = L"MainPannel";
			this->MainPannel->Size = System::Drawing::Size(1059, 563);
			this->MainPannel->TabIndex = 2;
			this->MainPannel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Main::MainPannel_Paint);
			// 
			// barButtonItem19
			// 
			this->barButtonItem19->Caption = L"Add Fee";
			this->barButtonItem19->Id = 26;
			this->barButtonItem19->Name = L"barButtonItem19";
			// 
			// ribbonPageGroup5
			// 
			this->ribbonPageGroup5->ItemLinks->Add(this->barButtonItem20);
			this->ribbonPageGroup5->Name = L"ribbonPageGroup5";
			this->ribbonPageGroup5->Text = L"ribbonPageGroup5";
			// 
			// barButtonItem20
			// 
			this->barButtonItem20->Caption = L"Submit Fee";
			this->barButtonItem20->Id = 27;
			this->barButtonItem20->Name = L"barButtonItem20";
			// 
			// ribbonPageGroup13
			// 
			this->ribbonPageGroup13->ItemLinks->Add(this->barButtonItem21);
			this->ribbonPageGroup13->Name = L"ribbonPageGroup13";
			this->ribbonPageGroup13->Text = L"ribbonPageGroup13";
			// 
			// barButtonItem21
			// 
			this->barButtonItem21->Caption = L"Fee Record";
			this->barButtonItem21->Id = 28;
			this->barButtonItem21->Name = L"barButtonItem21";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1059, 647);
			this->Controls->Add(this->MainPannel);
			this->Controls->Add(this->MainStatusBar);
			this->Controls->Add(this->ribbonControl1);
			this->Controls->Add(this->popupControlContainer1);
			this->Name = L"Main";
			this->Text = L"Student Management System | TuF";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Main::Main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ribbonControl1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->repositoryItemColorPickEdit1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->repositoryItemComboBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->popupControlContainer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainPannel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:
			AddNewStudent^ addNewStudent = gcnew AddNewStudent();
			Students^ students = gcnew Students();
			Attandence^ attandence = gcnew Attandence();
			StudentAttandence^ studentAttandence = gcnew StudentAttandence();
			AddExam^ addExam = gcnew AddExam();
			DelExam^ delExam = gcnew DelExam();
			AddGrades^ addGrades = gcnew AddGrades();
			Report^ report = gcnew Report();
			ReportByStudent^ rbs = gcnew ReportByStudent();

#pragma endregion
		//CAll When Main Form Is Loading
		private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
			MainWindowMessage->Caption = "Logged In Successfully!!!!!";
			//Hiding Exiting Panels
			attandence->Hide();
			students->Hide();
			studentAttandence->Hide();
			addExam->Hide();
			delExam->Hide();
			addGrades->Hide();
			report->Hide();
			rbs->Hide();
			//Configuring Form To Load In Current Pannel
			addNewStudent->Dock = Windows::Forms::DockStyle::Fill;
			addNewStudent->TopLevel = false;
			addNewStudent->TopMost = true;
			this->MainPannel->Controls->Add(addNewStudent);
			addNewStudent->Show();
		}
		//CAll When Form Is Closing
		private: System::Void Main_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) 
		{
			Application::Exit();
		}

		//Call When Click On Students 
		private: System::Void barButtonItem3_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			//Hiding Exiting Panels
			addNewStudent->Hide();
			attandence->Hide();
			studentAttandence->Hide();
			addExam->Hide();
			delExam->Hide();
			addGrades->Hide();
			report->Hide();
			rbs->Hide();
			//Configuring Form To Load In Current Pannel
			students->Dock = Windows::Forms::DockStyle::Fill;
			students->TopLevel = false;
			students->TopMost = true;
			this->MainPannel->Controls->Add(students);
			students->UpdateGrid();
			students->Show();
		}
			   //Call When Click On Add Student
		private: System::Void barButtonItem4_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			//Hiding Exiting Panels
			attandence->Hide();
			students->Hide();
			studentAttandence->Hide();
			addExam->Hide();
			delExam->Hide();
			addGrades->Hide();
			report->Hide();
			rbs->Hide();
			//Configuring Form To Load In Current Pannel
			addNewStudent->Dock = Windows::Forms::DockStyle::Fill;
			addNewStudent->TopLevel = false;
			addNewStudent->TopMost = true;
			this->MainPannel->Controls->Add(addNewStudent);
			addNewStudent->Show();
		}

		private: System::Void MainPannel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

		}

			   //Call When CLick On Attandence > Attandence
		private: System::Void barButtonItem13_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			//Hiding Exiting Panels
			students->Hide();
			addNewStudent->Hide();
			studentAttandence->Hide();
			addExam->Hide();
			delExam->Hide();
			addGrades->Hide();
			report->Hide();
			rbs->Hide();
			//Configuring Form To Load In Current Pannel
			attandence->Dock = Windows::Forms::DockStyle::Fill;
			attandence->TopLevel = false;
			attandence->TopMost = true;
			this->MainPannel->Controls->Add(attandence);
			attandence->Show();
		}
			   //Call When Click On Attandence > Report
		private: System::Void barButtonItem14_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
			//Hiding Exiting Panels
			students->Hide();
			addNewStudent->Hide();
			attandence->Hide();
			addExam->Hide();
			delExam->Hide();
			addGrades->Hide();
			report->Hide();
			rbs->Hide();
			//Configuring Form To Load In Current Pannel
			studentAttandence->Dock = Windows::Forms::DockStyle::Fill;
			studentAttandence->TopLevel = false;
			studentAttandence->TopMost = true;
			this->MainPannel->Controls->Add(studentAttandence);
			studentAttandence->Show();
		}
			   //Call When Click On Grading > Add Exam
	private: System::Void barButtonItem10_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		//Hiding Exiting Panels
		students->Hide();
		addNewStudent->Hide();
		attandence->Hide();
		studentAttandence->Hide();
		delExam->Hide();
		addGrades->Hide();
		report->Hide();
		rbs->Hide();
		//Configuring Form To Load In Current Pannel
		addExam->Dock = Windows::Forms::DockStyle::Fill;
		addExam->TopLevel = false;
		addExam->TopMost = true;
		this->MainPannel->Controls->Add(addExam);
		addExam->updateForm();
		addExam->Show();
	}
	//CAll When CLick On Grading > Del Exam
	private: System::Void barButtonItem17_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		//Hiding Exiting Panels
		students->Hide();
		addNewStudent->Hide();
		attandence->Hide();
		studentAttandence->Hide();
		addExam->Hide();
		addGrades->Hide();
		report->Hide();
		rbs->Hide();
		//Configuring Form To Load In Current Pannel
		delExam->Dock = Windows::Forms::DockStyle::Fill;
		delExam->TopLevel = false;
		delExam->TopMost = true;
		this->MainPannel->Controls->Add(delExam);
		delExam->updateForm();
		delExam->Show();
	}
	//CAll When Click On Grading > Add Grades
	private: System::Void barButtonItem11_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		//Hiding Exiting Panels
		students->Hide();
		addNewStudent->Hide();
		attandence->Hide();
		studentAttandence->Hide();
		addExam->Hide();
		delExam->Hide();
		report->Hide();
		rbs->Hide();
		//Configuring Form To Load In Current Pannel
		addGrades->Dock = Windows::Forms::DockStyle::Fill;
		addGrades->TopLevel = false;
		addGrades->TopMost = true;
		this->MainPannel->Controls->Add(addGrades);
		addGrades->updateForm();
		addGrades->Show();
	}
	//Call When Click On Grading > Report
	private: System::Void barButtonItem12_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		//Hiding Exiting Panels
		students->Hide();
		addNewStudent->Hide();
		attandence->Hide();
		studentAttandence->Hide();
		addExam->Hide();
		delExam->Hide();
		rbs->Hide();
		//Configuring Form To Load In Current Pannel
		report->Dock = Windows::Forms::DockStyle::Fill;
		report->TopLevel = false;
		report->TopMost = true;
		this->MainPannel->Controls->Add(report);
		report->Show();
	}
	private: System::Void barButtonItem18_ItemClick(System::Object^ sender, DevExpress::XtraBars::ItemClickEventArgs^ e) {
		//Hiding Exiting Panels
		students->Hide();
		addNewStudent->Hide();
		attandence->Hide();
		studentAttandence->Hide();
		addExam->Hide();
		delExam->Hide();
		report->Hide();
		//Configuring Form To Load In Current Pannel
		rbs->Dock = Windows::Forms::DockStyle::Fill;
		rbs->TopLevel = false;
		rbs->TopMost = true;
		this->MainPannel->Controls->Add(rbs);
		rbs->Show();
	}
};
}
