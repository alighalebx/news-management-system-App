#pragma once
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <fstream>
#include <utility>
#include "News.h"
#include "user.h"
#include "CustomButton.h"
#include "CustomCombo.h"
#include "login.h"
#include "CommentsForm.h"

namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UI
	/// </summary>

	public ref class UI : public System::Windows::Forms::Form
	{
		String^ Stringname;
	public:

		UI(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UI(String^ data, String^ path)
		{
			user x(msclr::interop::marshal_as<std::string>(data));

			InitializeComponent();
			usernamelabel->Text = data;
			pictureBox2->Image = Image::FromFile(gcnew String(path));
			Stringname = data;
			equ(x);
			NameTxt->Text = data;


			//TODO: Add the constructor code here
			//
		}
		

	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ usernamelabel;
	private: System::Windows::Forms::Button^ Closebtn;

		   System::Windows::Forms::Panel^ panelList;
		   System::Windows::Forms::Label^ labelList;
		   System::Windows::Forms::TextBox^ desclabelList;
		   System::Windows::Forms::Label^ datelabelList;
		   System::Windows::Forms::Label^ rateList;
		   System::Windows::Forms::PictureBox^ pictureBoxList;
		   ComponentFactory::Krypton::Toolkit::KryptonButton^ spamButtonList;
		   ComponentFactory::Krypton::Toolkit::KryptonButton^ commentButtonList;
		   System::Windows::Forms::Button^ editButtonList;
		   System::Windows::Forms::ComboBox^ comboboxList;

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

	private: System::Windows::Forms::Panel^ panelsidemenu;




	private: System::Windows::Forms::Panel^ Categorypanel;
	private: System::Windows::Forms::Button^ CategBtn4;





	private: System::Windows::Forms::Button^ CategBtn3;
	private: System::Windows::Forms::Button^ CategBtn2;


	private: System::Windows::Forms::Button^ CategBtn1;

	private: System::Windows::Forms::Button^ Categorybtn;
	private: System::Windows::Forms::Panel^ panellogo;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ UserImg;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ WlcmTxt;

	private: System::Windows::Forms::Button^ AddBtn;
	public:
	private:
	public:
	private: System::Windows::Forms::Button^ LogOutBtn;
	private: System::Windows::Forms::Panel^ flowLayoutPanelList;
		   int vsize = 0;
	private: System::Windows::Forms::Label^ NameTxt;



		   std::string& ll = fill();
		   std::string fill() {
			   std::string lll;
			   return lll;
		   }
		   user& userui = e();
		   user e() {
			   user l;
			   return l;
		   }
		   void equ(user& x) {
			   userui = x;

		   }


		   std::string initialize() {
			   std::string s;
			   return s;
		   }
		   private: System::Void LogOutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			   userui.end();
			   Application::OpenForms[0]->Show();
			   this->Close();
			   
		   }
		   std::string& SelectedCatg = initialize();
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UI::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->usernamelabel = (gcnew System::Windows::Forms::Label());
			   this->Closebtn = (gcnew System::Windows::Forms::Button());
			   this->panelsidemenu = (gcnew System::Windows::Forms::Panel());
			   this->Categorypanel = (gcnew System::Windows::Forms::Panel());
			   this->CategBtn4 = (gcnew System::Windows::Forms::Button());
			   this->CategBtn3 = (gcnew System::Windows::Forms::Button());
			   this->CategBtn2 = (gcnew System::Windows::Forms::Button());
			   this->CategBtn1 = (gcnew System::Windows::Forms::Button());
			   this->Categorybtn = (gcnew System::Windows::Forms::Button());
			   this->panellogo = (gcnew System::Windows::Forms::Panel());
			   this->NameTxt = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->UserImg = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->WlcmTxt = (gcnew System::Windows::Forms::Label());
			   this->AddBtn = (gcnew System::Windows::Forms::Button());
			   this->LogOutBtn = (gcnew System::Windows::Forms::Button());
			   this->flowLayoutPanelList = (gcnew System::Windows::Forms::Panel());
			   this->panelsidemenu->SuspendLayout();
			   this->Categorypanel->SuspendLayout();
			   this->panellogo->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserImg))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->label1->ForeColor = System::Drawing::Color::Transparent;
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(127, 29);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Welcome,";
			   // 
			   // usernamelabel
			   // 
			   this->usernamelabel->AutoSize = true;
			   this->usernamelabel->BackColor = System::Drawing::Color::Transparent;
			   this->usernamelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->usernamelabel->ForeColor = System::Drawing::Color::Transparent;
			   this->usernamelabel->Location = System::Drawing::Point(145, 9);
			   this->usernamelabel->Name = L"usernamelabel";
			   this->usernamelabel->Size = System::Drawing::Size(81, 29);
			   this->usernamelabel->TabIndex = 1;
			   this->usernamelabel->Text = L"label2";
			   // 
			   // Closebtn
			   // 
			   this->Closebtn->BackColor = System::Drawing::Color::Transparent;
			   this->Closebtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->Closebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Closebtn->FlatAppearance->BorderSize = 0;
			   this->Closebtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			   this->Closebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Closebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Closebtn->ForeColor = System::Drawing::SystemColors::Control;
			   this->Closebtn->Location = System::Drawing::Point(1235, 0);
			   this->Closebtn->Name = L"Closebtn";
			   this->Closebtn->Size = System::Drawing::Size(31, 31);
			   this->Closebtn->TabIndex = 20;
			   this->Closebtn->Text = L"✕";
			   this->Closebtn->UseVisualStyleBackColor = false;
			   this->Closebtn->Click += gcnew System::EventHandler(this, &UI::Closebtn_Click);
			   // 
			   // panelsidemenu
			   // 
			   this->panelsidemenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				   static_cast<System::Int32>(static_cast<System::Byte>(17)));
			   this->panelsidemenu->Controls->Add(this->Categorypanel);
			   this->panelsidemenu->Controls->Add(this->Categorybtn);
			   this->panelsidemenu->Controls->Add(this->panellogo);
			   this->panelsidemenu->Dock = System::Windows::Forms::DockStyle::Left;
			   this->panelsidemenu->Location = System::Drawing::Point(0, 0);
			   this->panelsidemenu->Name = L"panelsidemenu";
			   this->panelsidemenu->Size = System::Drawing::Size(231, 715);
			   this->panelsidemenu->TabIndex = 47;
			   // 
			   // Categorypanel
			   // 
			   this->Categorypanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				   static_cast<System::Int32>(static_cast<System::Byte>(39)));
			   this->Categorypanel->Controls->Add(this->CategBtn4);
			   this->Categorypanel->Controls->Add(this->CategBtn3);
			   this->Categorypanel->Controls->Add(this->CategBtn2);
			   this->Categorypanel->Controls->Add(this->CategBtn1);
			   this->Categorypanel->Dock = System::Windows::Forms::DockStyle::Top;
			   this->Categorypanel->Location = System::Drawing::Point(0, 217);
			   this->Categorypanel->Name = L"Categorypanel";
			   this->Categorypanel->Size = System::Drawing::Size(231, 153);
			   this->Categorypanel->TabIndex = 48;
			   // 
			   // CategBtn4
			   // 
			   this->CategBtn4->BackColor = System::Drawing::Color::Transparent;
			   this->CategBtn4->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->CategBtn4->Dock = System::Windows::Forms::DockStyle::Top;
			   this->CategBtn4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->CategBtn4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->CategBtn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CategBtn4->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CategBtn4->ForeColor = System::Drawing::Color::White;
			   this->CategBtn4->Location = System::Drawing::Point(0, 114);
			   this->CategBtn4->Name = L"CategBtn4";
			   this->CategBtn4->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			   this->CategBtn4->Size = System::Drawing::Size(231, 38);
			   this->CategBtn4->TabIndex = 45;
			   this->CategBtn4->Text = L"Business";
			   this->CategBtn4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->CategBtn4->UseVisualStyleBackColor = false;
			   this->CategBtn4->Click += gcnew System::EventHandler(this, &UI::CategBtn4_Click);
			   // 
			   // CategBtn3
			   // 
			   this->CategBtn3->BackColor = System::Drawing::Color::Transparent;
			   this->CategBtn3->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->CategBtn3->Dock = System::Windows::Forms::DockStyle::Top;
			   this->CategBtn3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->CategBtn3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->CategBtn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CategBtn3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CategBtn3->ForeColor = System::Drawing::Color::White;
			   this->CategBtn3->Location = System::Drawing::Point(0, 76);
			   this->CategBtn3->Name = L"CategBtn3";
			   this->CategBtn3->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			   this->CategBtn3->Size = System::Drawing::Size(231, 38);
			   this->CategBtn3->TabIndex = 41;
			   this->CategBtn3->Text = L"Technology";
			   this->CategBtn3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->CategBtn3->UseVisualStyleBackColor = false;
			   this->CategBtn3->Click += gcnew System::EventHandler(this, &UI::CategBtn3_Click);
			   // 
			   // CategBtn2
			   // 
			   this->CategBtn2->BackColor = System::Drawing::Color::Transparent;
			   this->CategBtn2->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->CategBtn2->Dock = System::Windows::Forms::DockStyle::Top;
			   this->CategBtn2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->CategBtn2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->CategBtn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CategBtn2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CategBtn2->ForeColor = System::Drawing::Color::White;
			   this->CategBtn2->Location = System::Drawing::Point(0, 38);
			   this->CategBtn2->Name = L"CategBtn2";
			   this->CategBtn2->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			   this->CategBtn2->Size = System::Drawing::Size(231, 38);
			   this->CategBtn2->TabIndex = 44;
			   this->CategBtn2->Text = L"Anime";
			   this->CategBtn2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->CategBtn2->UseVisualStyleBackColor = false;
			   this->CategBtn2->Click += gcnew System::EventHandler(this, &UI::CategBtn2_Click);
			   // 
			   // CategBtn1
			   // 
			   this->CategBtn1->BackColor = System::Drawing::Color::Transparent;
			   this->CategBtn1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->CategBtn1->Dock = System::Windows::Forms::DockStyle::Top;
			   this->CategBtn1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->CategBtn1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->CategBtn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->CategBtn1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CategBtn1->ForeColor = System::Drawing::Color::White;
			   this->CategBtn1->Location = System::Drawing::Point(0, 0);
			   this->CategBtn1->Name = L"CategBtn1";
			   this->CategBtn1->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			   this->CategBtn1->Size = System::Drawing::Size(231, 38);
			   this->CategBtn1->TabIndex = 42;
			   this->CategBtn1->Text = L"Sports";
			   this->CategBtn1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->CategBtn1->UseVisualStyleBackColor = false;
			   this->CategBtn1->Click += gcnew System::EventHandler(this, &UI::CategBtn1_Click);
			   // 
			   // Categorybtn
			   // 
			   this->Categorybtn->BackColor = System::Drawing::Color::Transparent;
			   this->Categorybtn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->Categorybtn->Dock = System::Windows::Forms::DockStyle::Top;
			   this->Categorybtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->Categorybtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->Categorybtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->Categorybtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Categorybtn->ForeColor = System::Drawing::Color::White;
			   this->Categorybtn->Location = System::Drawing::Point(0, 179);
			   this->Categorybtn->Name = L"Categorybtn";
			   this->Categorybtn->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			   this->Categorybtn->Size = System::Drawing::Size(231, 38);
			   this->Categorybtn->TabIndex = 47;
			   this->Categorybtn->Text = L"Categories";
			   this->Categorybtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->Categorybtn->UseVisualStyleBackColor = false;
			   // 
			   // panellogo
			   // 
			   this->panellogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				   static_cast<System::Int32>(static_cast<System::Byte>(5)));
			   this->panellogo->Controls->Add(this->NameTxt);
			   this->panellogo->Controls->Add(this->pictureBox2);
			   this->panellogo->Controls->Add(this->UserImg);
			   this->panellogo->Controls->Add(this->label2);
			   this->panellogo->Controls->Add(this->WlcmTxt);
			   this->panellogo->Controls->Add(this->AddBtn);
			   this->panellogo->Controls->Add(this->LogOutBtn);
			   this->panellogo->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panellogo->Location = System::Drawing::Point(0, 0);
			   this->panellogo->Name = L"panellogo";
			   this->panellogo->Size = System::Drawing::Size(231, 179);
			   this->panellogo->TabIndex = 0;
			   // 
			   // NameTxt
			   // 
			   this->NameTxt->AutoSize = true;
			   this->NameTxt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NameTxt->ForeColor = System::Drawing::Color::White;
			   this->NameTxt->Location = System::Drawing::Point(97, 56);
			   this->NameTxt->Name = L"NameTxt";
			   this->NameTxt->Size = System::Drawing::Size(68, 25);
			   this->NameTxt->TabIndex = 29;
			   this->NameTxt->Text = L"Name";
			   this->NameTxt->Click += gcnew System::EventHandler(this, &UI::NameTxt_Click_1);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			   this->pictureBox2->Location = System::Drawing::Point(4, -1);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(73, 73);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox2->TabIndex = 24;
			   this->pictureBox2->TabStop = false;
			   // 
			   // UserImg
			   // 
			   this->UserImg->BackColor = System::Drawing::Color::Transparent;
			   this->UserImg->Location = System::Drawing::Point(0, -1);
			   this->UserImg->Name = L"UserImg";
			   this->UserImg->Size = System::Drawing::Size(73, 73);
			   this->UserImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->UserImg->TabIndex = 24;
			   this->UserImg->TabStop = false;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->Location = System::Drawing::Point(81, 3);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(150, 40);
			   this->label2->TabIndex = 25;
			   this->label2->Text = L"Welcome, ";
			   // 
			   // WlcmTxt
			   // 
			   this->WlcmTxt->AutoSize = true;
			   this->WlcmTxt->BackColor = System::Drawing::Color::Transparent;
			   this->WlcmTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->WlcmTxt->ForeColor = System::Drawing::Color::White;
			   this->WlcmTxt->Location = System::Drawing::Point(77, 3);
			   this->WlcmTxt->Name = L"WlcmTxt";
			   this->WlcmTxt->Size = System::Drawing::Size(150, 40);
			   this->WlcmTxt->TabIndex = 25;
			   this->WlcmTxt->Text = L"Welcome, ";
			   // 
			   // AddBtn
			   // 
			   this->AddBtn->Location = System::Drawing::Point(0, 0);
			   this->AddBtn->Name = L"AddBtn";
			   this->AddBtn->Size = System::Drawing::Size(75, 23);
			   this->AddBtn->TabIndex = 27;
			   // 
			   // LogOutBtn
			   // 
			   this->LogOutBtn->BackColor = System::Drawing::Color::Transparent;
			   this->LogOutBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->LogOutBtn->FlatAppearance->BorderSize = 0;
			   this->LogOutBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			   this->LogOutBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			   this->LogOutBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->LogOutBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LogOutBtn->ForeColor = System::Drawing::Color::White;
			   this->LogOutBtn->Location = System::Drawing::Point(3, 143);
			   this->LogOutBtn->Name = L"LogOutBtn";
			   this->LogOutBtn->Size = System::Drawing::Size(224, 33);
			   this->LogOutBtn->TabIndex = 28;
			   this->LogOutBtn->Text = L"Log Out";
			   this->LogOutBtn->UseVisualStyleBackColor = false;
			   this->LogOutBtn->Click += gcnew System::EventHandler(this, &UI::LogOutBtn_Click);
			   // 
			   // flowLayoutPanelList
			   // 
			   this->flowLayoutPanelList->AutoScroll = true;
			   this->flowLayoutPanelList->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanelList.BackgroundImage")));
			   this->flowLayoutPanelList->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->flowLayoutPanelList->Location = System::Drawing::Point(245, 43);
			   this->flowLayoutPanelList->Name = L"flowLayoutPanelList";
			   this->flowLayoutPanelList->Size = System::Drawing::Size(976, 660);
			   this->flowLayoutPanelList->TabIndex = 48;
			   this->flowLayoutPanelList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &UI::flowLayoutPanelList_Paint);
			   // 
			   // UI
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoScroll = true;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1281, 715);
			   this->Controls->Add(this->flowLayoutPanelList);
			   this->Controls->Add(this->panelsidemenu);
			   this->Controls->Add(this->Closebtn);
			   this->Controls->Add(this->usernamelabel);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"UI";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Userapp";
			   this->Load += gcnew System::EventHandler(this, &UI::UI_Load);
			   this->panelsidemenu->ResumeLayout(false);
			   this->Categorypanel->ResumeLayout(false);
			   this->panellogo->ResumeLayout(false);
			   this->panellogo->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserImg))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

	private: System::Void Closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		userui.end();
		Application::OpenForms[0]->Close();
	}
	private: System::Void flowLayoutPanelList_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
		   int globalLoop;
		   int sizegui = 0;

	public: void loadList(std::list<News>l) {
		this->flowLayoutPanelList->Controls->Clear();

		int test = -600;
		int cntt = 0;
		int ara = 0;
		News commentindex;

		for (auto it : l) {


			globalLoop = cntt;
			this->panelList = (gcnew System::Windows::Forms::Panel());
			std::stringstream ss;
			ss << cntt + 3;
			std::string s;
			ss >> s;
			String^ si = gcnew String(s.c_str());
			test += 600;
			panelList->BackColor = System::Drawing::Color::White;
			panelList->Location = System::Drawing::Point(369, test);
			panelList->Name = L"panel" + si;
			panelList->Size = System::Drawing::Size(505, 335);
			panelList->TabIndex = 23;


			this->labelList = (gcnew System::Windows::Forms::Label());
			std::stringstream ss1;
			ss1 << cntt + 3;
			std::string s1;
			ss1 >> s1;
			String^ si1 = gcnew String(s1.c_str());
			labelList->AutoSize = true;
			labelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelList->Location = System::Drawing::Point(50, 50);
			labelList->Name = L"label" + si1;
			labelList->Size = System::Drawing::Size(118, 42);
			labelList->TabIndex = 0;

			labelList->Text = gcnew String(it.getTitle().c_str());

			//\r\n
			this->desclabelList = (gcnew System::Windows::Forms::TextBox());
			std::stringstream ss4;
			ss4 << cntt + 100;
			std::string s4;
			ss4 >> s4;
			String^ si4 = gcnew String(s4.c_str());
			desclabelList->BackColor = System::Drawing::Color::White;
			desclabelList->BorderStyle = System::Windows::Forms::BorderStyle::None;
			desclabelList->Cursor = System::Windows::Forms::Cursors::Arrow;
			desclabelList->Location = System::Drawing::Point(50, 120);
			desclabelList->Multiline = true;
			desclabelList->Name = L"TextBox" + si4;
			desclabelList->ReadOnly = true;
			desclabelList->Size = System::Drawing::Size(174, 39);
			desclabelList->TabIndex = 13;
			desclabelList->Text = gcnew String(it.getDescription().c_str());

			//rate
			this->rateList = (gcnew System::Windows::Forms::Label());
			std::stringstream ss45;
			ss45 << cntt + 3;
			std::string s45;
			ss45 >> s45;
			String^ si45 = gcnew String(s45.c_str());
			rateList->AutoSize = true;
			rateList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			rateList->Location = System::Drawing::Point(230,220);
			rateList->Name = L"rate" + si45;
			rateList->Size = System::Drawing::Size(60, 42);
			rateList->TabIndex = 0;
			rateList->Text = gcnew String(it.getRate().ToString());


			this->pictureBoxList = (gcnew System::Windows::Forms::PictureBox());
			std::stringstream ss2;
			ss2 << cntt + 3;
			std::string s2;
			ss2 >> s2;
			String^ si2 = gcnew String(s2.c_str());
			pictureBoxList->Image = Image::FromFile(gcnew String(it.getimgpath().c_str()));
			pictureBoxList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			pictureBoxList->Location = System::Drawing::Point(300, 30);
			pictureBoxList->Name = L"pictureBox" + si2;
			pictureBoxList->Size = System::Drawing::Size(200, 200);
			pictureBoxList->TabIndex = 49;
			pictureBoxList->TabStop = false;

			//SPAM
			this->spamButtonList = (gcnew CustomButton(ara));
			std::stringstream ss3;
			ss3 << cntt + 3;
			std::string s3;
			ss3 >> s3;
			String^ si3 = gcnew String(s3.c_str());

			spamButtonList->Location = System::Drawing::Point(400, 260);
			spamButtonList->Name = L"button" + si3;

			spamButtonList->Size = System::Drawing::Size(75, 23);
			spamButtonList->TabIndex = 10;
			

			spamButtonList->Cursor = System::Windows::Forms::Cursors::Hand;
			spamButtonList->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->OverrideDefault->Back->ColorAngle = 45;
			spamButtonList->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->OverrideDefault->Border->ColorAngle = 45;
			spamButtonList->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			spamButtonList->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			spamButtonList->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			spamButtonList->Size = System::Drawing::Size(102, 39);
			spamButtonList->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
			spamButtonList->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateCommon->Border->ColorAngle = 45;
			spamButtonList->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			spamButtonList->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			spamButtonList->StateCommon->Border->Rounding = 20;
			spamButtonList->StateCommon->Border->Width = 1;
			spamButtonList->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			spamButtonList->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			spamButtonList->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			spamButtonList->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StatePressed->Back->ColorAngle = 135;
			spamButtonList->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			spamButtonList->StatePressed->Border->Rounding = 20;
			spamButtonList->StatePressed->Border->Width = 1;
			spamButtonList->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateTracking->Back->ColorAngle = 45;
			spamButtonList->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			spamButtonList->StateTracking->Border->ColorAngle = 45;
			spamButtonList->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			spamButtonList->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			spamButtonList->StateTracking->Border->Rounding = 20;
			spamButtonList->StateTracking->Border->Width = 1;
			spamButtonList->TabIndex = 10;
			spamButtonList->Text = L"Spam";
			//spamButtonList->UseVisualStyleBackColor = true;
			spamButtonList->Click += gcnew System::EventHandler(this, &UI::spamButton_Click);


			//comments
			this->commentButtonList = (gcnew CustomButton(ara));
			std::stringstream ss7;
			ss7 << cntt + 3;
			std::string s7;
			ss7 >> s7;
			String^ si7 = gcnew String(s7.c_str());

			commentButtonList->Location = System::Drawing::Point(50, 260);
			commentButtonList->Name = L"button" + si7;

			commentButtonList->Size = System::Drawing::Size(75, 23);
			commentButtonList->TabIndex = 10;


			commentButtonList->Cursor = System::Windows::Forms::Cursors::Hand;
			commentButtonList->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->OverrideDefault->Back->ColorAngle = 45;
			commentButtonList->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->OverrideDefault->Border->ColorAngle = 45;
			commentButtonList->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			commentButtonList->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			commentButtonList->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			commentButtonList->Size = System::Drawing::Size(102, 39);
			commentButtonList->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
			commentButtonList->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateCommon->Border->ColorAngle = 45;
			commentButtonList->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			commentButtonList->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			commentButtonList->StateCommon->Border->Rounding = 20;
			commentButtonList->StateCommon->Border->Width = 1;
			commentButtonList->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			commentButtonList->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			commentButtonList->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			commentButtonList->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StatePressed->Back->ColorAngle = 135;
			commentButtonList->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			commentButtonList->StatePressed->Border->Rounding = 20;
			commentButtonList->StatePressed->Border->Width = 1;
			commentButtonList->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateTracking->Back->ColorAngle = 45;
			commentButtonList->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			commentButtonList->StateTracking->Border->ColorAngle = 45;
			commentButtonList->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			commentButtonList->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			commentButtonList->StateTracking->Border->Rounding = 20;
			commentButtonList->StateTracking->Border->Width = 1;
			commentButtonList->TabIndex = 10;
			commentButtonList->Text = L"Comments";
			//spamButtonList->UseVisualStyleBackColor = true;
			commentButtonList->Click += gcnew System::EventHandler(this, &UI::commentButton_Click);
			
			//COMBOBOX

			this->comboboxList = (gcnew CustomCombo(ara));
			std::stringstream ss55;
			ss55 << ara + 5;
			std::string s55;
			ss55 >> s55;
			String^ si55 = gcnew String(s55.c_str());
			comboboxList->FormattingEnabled = true;
			comboboxList->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			comboboxList->Location = System::Drawing::Point(250, 260);
			comboboxList->Name = L"comboBox" + si55;
			comboboxList->Size = System::Drawing::Size(121, 21);
			comboboxList->TabIndex = 25;
			comboboxList->SelectedIndexChanged += gcnew System::EventHandler(this, &UI::comboboxList_SelectedIndexChanged);



			//date
			this->datelabelList = (gcnew System::Windows::Forms::Label());
			std::stringstream ss6;
			ss6 << ara + 200;
			std::string s6;
			ss6 >> s6;
			String^ si6 = gcnew String(s6.c_str());
			datelabelList->AutoSize = true;
			datelabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			datelabelList->Location = System::Drawing::Point(330, 235);
			datelabelList->Name = L"label" + si6;
			datelabelList->Size = System::Drawing::Size(42, 42);
			datelabelList->TabIndex = 0;
			datelabelList->Text = gcnew String(it.getDate().c_str());


			//PANEL FRAME
			flowLayoutPanelList->Controls->Add(labelList);
			flowLayoutPanelList->Controls->Add(desclabelList);
			flowLayoutPanelList->Controls->Add(datelabelList);
			flowLayoutPanelList->Controls->Add(rateList);
			flowLayoutPanelList->Controls->Add(pictureBoxList);
			flowLayoutPanelList->Controls->Add(spamButtonList);
			flowLayoutPanelList->Controls->Add(commentButtonList);
			flowLayoutPanelList->Controls->Add(comboboxList);
			flowLayoutPanelList->Controls->Add(editButtonList);
			flowLayoutPanelList->Controls->Add(panelList);

			//NEWS FRAME
			panelList->Controls->Add(labelList);
			panelList->Controls->Add(desclabelList);
			panelList->Controls->Add(datelabelList);
			panelList->Controls->Add(rateList);
			panelList->Controls->Add(spamButtonList);
			panelList->Controls->Add(commentButtonList);
			panelList->Controls->Add(comboboxList);
			panelList->Controls->Add(editButtonList);
			panelList->Controls->Add(pictureBoxList);

			ara++;
		}
		//lazem 23mlo 

		sizegui = l.size();
	}



	private: System::Void spamButton_Click(System::Object^ sender, System::EventArgs^ e) {

		auto btn = (CustomButton^)sender;
		int c = 0;
		auto value = btn->idToDelete;
		std::string seso;
		for (auto iii : userui.ShowNewsDep(ll))
		{

			if (c == value) {
				seso = std::to_string(iii.getId());
			}
			c++;
		}
		userui.spamlist[seso] = true;
		//MessageBox::Show(gcnew String(value.ToString()));
		loadList(userui.ShowNewsDep(ll));
	}
	private: System::Void commentButton_Click(System::Object^ sender, System::EventArgs^ e) {
			   auto btn = (CustomButton^)sender;
			   int c = 0;
			   int localId;
			   auto value = btn->idToDelete;
			   std::deque<std::string>dq;
			   for (auto iii : userui.ShowNewsDep(ll))
			   {

				   if (c == value) {
					  dq = iii.getComments();
					  localId = iii.getId();
				   }
				   c++;
			   }
			   //MessageBox::Show(gcnew String(localId.ToString()));
			  
			   CommentsForm^ commentsform = gcnew CommentsForm(dq,userui, localId);
			   commentsform->Show();

		   }


	private: System::Void comboboxList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		auto btn1 = (CustomCombo^)sender;
		String^ ses = btn1->SelectedItem->ToString();
		std::string seso = msclr::interop::marshal_as<std::string>(ses);
		int rate = stoi(seso);
		int cnt = 0;
		int index = btn1->idToDelete1;
		for (auto iii : userui.ShowNewsDep(ll))
		{

			if (cnt == index) {
				seso = std::to_string(iii.getId());
			}
			cnt++;
		}
		userui.RateNews(seso, rate);
		//MessageBox::Show(index.ToString());
		loadList(userui.ShowNewsDep(ll));


	}

	private: System::Void CategBtn1_Click(System::Object^ sender, System::EventArgs^ e) {

		loadList(userui.ShowNewsDep("Sport.txt"));
		ll = "Sport.txt";

	}
	private: System::Void CategBtn2_Click(System::Object^ sender, System::EventArgs^ e) {

		ll = "Anime.txt";


		loadList(userui.ShowNewsDep("Anime.txt"));



	}

	private: System::Void CategBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show(userui.ShowNewsDep("Technology.txt").size().ToString());
		ll = "Technology.txt";
		loadList(userui.ShowNewsDep("Technology.txt"));
	}

	private: System::Void CategBtn4_Click(System::Object^ sender, System::EventArgs^ e) {
		ll = "Business.txt";
		loadList(userui.ShowNewsDep("Business.txt"));
	}
	private: System::Void UI_Load(System::Object^ sender, System::EventArgs^ e) {

	}

#pragma endregion

	private: System::Void NameTxt_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NameTxt_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	
};
}