#pragma once
#include "News.h"
#include "AdminUi.h"
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <vector>
#include <utility>
#include "UI.h"

namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
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
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Userintxt;
	protected:

















	private: System::Windows::Forms::TextBox^ Useruptxt;



	private: System::Windows::Forms::Button^ Signupbtn;
	private: System::Windows::Forms::Button^ Closebtn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Signinbtn;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::LinkLabel^ SignInLink;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ Question;
	private: System::Windows::Forms::LinkLabel^ SignUpLink;

	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ SignInLbl;
	private: System::Windows::Forms::TextBox^ Passuptxt;
	private: System::Windows::Forms::TextBox^ Passintxt;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->Userintxt = (gcnew System::Windows::Forms::TextBox());
			this->Useruptxt = (gcnew System::Windows::Forms::TextBox());
			this->Signupbtn = (gcnew System::Windows::Forms::Button());
			this->Closebtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Signinbtn = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SignInLink = (gcnew System::Windows::Forms::LinkLabel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Question = (gcnew System::Windows::Forms::Label());
			this->SignUpLink = (gcnew System::Windows::Forms::LinkLabel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SignInLbl = (gcnew System::Windows::Forms::Label());
			this->Passuptxt = (gcnew System::Windows::Forms::TextBox());
			this->Passintxt = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Userintxt
			// 
			this->Userintxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->Userintxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Userintxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Userintxt->Location = System::Drawing::Point(78, 155);
			this->Userintxt->Margin = System::Windows::Forms::Padding(4);
			this->Userintxt->Name = L"Userintxt";
			this->Userintxt->Size = System::Drawing::Size(175, 22);
			this->Userintxt->TabIndex = 2;
			this->Userintxt->TextChanged += gcnew System::EventHandler(this, &login::textBox1_TextChanged);
			// 
			// Useruptxt
			// 
			this->Useruptxt->BackColor = System::Drawing::Color::White;
			this->Useruptxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Useruptxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Useruptxt->Location = System::Drawing::Point(75, 155);
			this->Useruptxt->Margin = System::Windows::Forms::Padding(4);
			this->Useruptxt->Name = L"Useruptxt";
			this->Useruptxt->Size = System::Drawing::Size(178, 22);
			this->Useruptxt->TabIndex = 9;
			this->Useruptxt->TextChanged += gcnew System::EventHandler(this, &login::textBox4_TextChanged);
			// 
			// Signupbtn
			// 
			this->Signupbtn->BackColor = System::Drawing::Color::Transparent;
			this->Signupbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Signupbtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Signupbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->Signupbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Signupbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Signupbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signupbtn->ForeColor = System::Drawing::Color::White;
			this->Signupbtn->Location = System::Drawing::Point(185, 350);
			this->Signupbtn->Name = L"Signupbtn";
			this->Signupbtn->Size = System::Drawing::Size(134, 50);
			this->Signupbtn->TabIndex = 35;
			this->Signupbtn->Text = L"Sign Up";
			this->Signupbtn->UseVisualStyleBackColor = false;
			this->Signupbtn->Click += gcnew System::EventHandler(this, &login::Signupbtn_Click);
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
			this->Closebtn->Location = System::Drawing::Point(323, -1);
			this->Closebtn->Name = L"Closebtn";
			this->Closebtn->Size = System::Drawing::Size(31, 31);
			this->Closebtn->TabIndex = 19;
			this->Closebtn->Text = L"✕";
			this->Closebtn->UseVisualStyleBackColor = false;
			this->Closebtn->Click += gcnew System::EventHandler(this, &login::button1_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(272, 225);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(21, 21);
			this->button1->TabIndex = 20;
			this->button1->Text = L"👁";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &login::button1_Click_2);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(273, 225);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 21);
			this->button2->TabIndex = 21;
			this->button2->Text = L"👁";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &login::button2_Click);
			// 
			// Signinbtn
			// 
			this->Signinbtn->BackColor = System::Drawing::Color::Transparent;
			this->Signinbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Signinbtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->Signinbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->Signinbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			this->Signinbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Signinbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signinbtn->ForeColor = System::Drawing::Color::White;
			this->Signinbtn->Location = System::Drawing::Point(185, 350);
			this->Signinbtn->Name = L"Signinbtn";
			this->Signinbtn->Size = System::Drawing::Size(134, 50);
			this->Signinbtn->TabIndex = 35;
			this->Signinbtn->Text = L"Sign In";
			this->Signinbtn->UseVisualStyleBackColor = false;
			this->Signinbtn->Click += gcnew System::EventHandler(this, &login::Signinbtn_Click);
			this->Signinbtn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &login::Signinbtn_MouseClick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(236, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 34);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Upload";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &login::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(81, 302);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Upload Profile Image";
			// 
			// SignInLink
			// 
			this->SignInLink->AutoSize = true;
			this->SignInLink->BackColor = System::Drawing::Color::Transparent;
			this->SignInLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInLink->Location = System::Drawing::Point(232, 457);
			this->SignInLink->Name = L"SignInLink";
			this->SignInLink->Size = System::Drawing::Size(50, 16);
			this->SignInLink->TabIndex = 36;
			this->SignInLink->TabStop = true;
			this->SignInLink->Text = L"Sign In!";
			this->SignInLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &login::SignInLink_LinkClicked);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(76, 184);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(177, 2);
			this->panel3->TabIndex = 34;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(75, 261);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(177, 2);
			this->panel4->TabIndex = 33;
			// 
			// Question
			// 
			this->Question->AutoSize = true;
			this->Question->BackColor = System::Drawing::Color::Transparent;
			this->Question->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Question->Location = System::Drawing::Point(72, 456);
			this->Question->Name = L"Question";
			this->Question->Size = System::Drawing::Size(146, 17);
			this->Question->TabIndex = 32;
			this->Question->Text = L"Don\'t Have an Account\?";
			// 
			// SignUpLink
			// 
			this->SignUpLink->AutoSize = true;
			this->SignUpLink->BackColor = System::Drawing::Color::Transparent;
			this->SignUpLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignUpLink->Location = System::Drawing::Point(221, 456);
			this->SignUpLink->Name = L"SignUpLink";
			this->SignUpLink->Size = System::Drawing::Size(98, 16);
			this->SignUpLink->TabIndex = 31;
			this->SignUpLink->TabStop = true;
			this->SignUpLink->Text = L"Create Account";
			this->SignUpLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &login::SignUpLink_LinkClicked);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(76, 184);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(177, 2);
			this->panel5->TabIndex = 29;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(75, 261);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(177, 2);
			this->panel6->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(71, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 25);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(71, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 25);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Username";
			// 
			// SignInLbl
			// 
			this->SignInLbl->AutoSize = true;
			this->SignInLbl->BackColor = System::Drawing::Color::Transparent;
			this->SignInLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInLbl->ForeColor = System::Drawing::Color::White;
			this->SignInLbl->Location = System::Drawing::Point(67, 20);
			this->SignInLbl->Name = L"SignInLbl";
			this->SignInLbl->Size = System::Drawing::Size(118, 45);
			this->SignInLbl->TabIndex = 25;
			this->SignInLbl->Text = L"Sign In";
			// 
			// Passuptxt
			// 
			this->Passuptxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->Passuptxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Passuptxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Passuptxt->Location = System::Drawing::Point(75, 231);
			this->Passuptxt->Margin = System::Windows::Forms::Padding(4);
			this->Passuptxt->Name = L"Passuptxt";
			this->Passuptxt->Size = System::Drawing::Size(170, 22);
			this->Passuptxt->TabIndex = 13;
			this->Passuptxt->UseSystemPasswordChar = true;
			this->Passuptxt->TextChanged += gcnew System::EventHandler(this, &login::textBox3_TextChanged);
			// 
			// Passintxt
			// 
			this->Passintxt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->Passintxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Passintxt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Passintxt->Location = System::Drawing::Point(77, 231);
			this->Passintxt->Margin = System::Windows::Forms::Padding(4);
			this->Passintxt->Name = L"Passintxt";
			this->Passintxt->Size = System::Drawing::Size(175, 22);
			this->Passintxt->TabIndex = 6;
			this->Passintxt->UseSystemPasswordChar = true;
			this->Passintxt->TextChanged += gcnew System::EventHandler(this, &login::textBox2_TextChanged);
			this->Passintxt->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &login::Passintxt_KeyPress);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(354, 500);
			this->Controls->Add(this->SignInLink);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->Question);
			this->Controls->Add(this->SignUpLink);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->SignInLbl);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Closebtn);
			this->Controls->Add(this->Signupbtn);
			this->Controls->Add(this->Signinbtn);
			this->Controls->Add(this->Passuptxt);
			this->Controls->Add(this->Useruptxt);
			this->Controls->Add(this->Passintxt);
			this->Controls->Add(this->Userintxt);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//	
		//private: System::Void label1_Click() {
		//	News n("gg", "ss", "aa");
		//	String^ str2 = gcnew String(n.getTitle().c_str());
		//	this->label1->Text = str2;
		//}

	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
		Useruptxt->Hide();
		Passuptxt->Hide();
		Signupbtn->Hide();
		SignInLink->Hide();
		button2->Hide();
		label8->Hide();
		button3->Hide();
		//SignInLink->Hide();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void Signinbtn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {





	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		if (Passintxt->UseSystemPasswordChar) {
			Passintxt->UseSystemPasswordChar = false;
		}
		else {
			Passintxt->UseSystemPasswordChar = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Passuptxt->UseSystemPasswordChar) {
			Passuptxt->UseSystemPasswordChar = false;
		}
		else {
			Passuptxt->UseSystemPasswordChar = true;
		}

	}

		   
		   String^ path;
		   std::string initialize() {
			   std::string s;
			   return s;
		   }
		   std::string& pathpic = initialize();
		   void logincheck(std::vector<std::pair<std::string, std::pair<std::string, std::string>>>& result, std::string line) {


			   int i = 0;
			   std::string username;
			   for (; i < line.size(); i++) {

				   if (line[i] == ',') {
					   i++;
					   break;
				   }
				   username += line[i];

			   }
			   std::string password;
			   for (; i < line.size(); i++) {

				   if (line[i] == ',') {
					   i++;
					   break;
				   }
				   password += line[i];

			   }
			   std::string pathimg;
			   for (; i < line.size(); i++) {
				   pathimg += line[i];
			   }

			   result.push_back({ username,{password ,pathimg} });

		   }
	private: System::Void Signinbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::fstream myFile;
		myFile.open("registeredUsers.txt", std::ios::in);//input
		std::vector<std::pair<std::string, std::pair<std::string, std::string>>> result;
		std::string name = msclr::interop::marshal_as<std::string>(Userintxt->Text);
		std::string password = msclr::interop::marshal_as<std::string>(Passintxt->Text);
		AdminUi^ adminform = gcnew AdminUi(Userintxt->Text);
		

		if (myFile.is_open()) {

			std::string line;

			while (getline(myFile, line)) {

				logincheck(result, line);

				//Userintxt
				//Passintxt

			}
			
			myFile.close();
			
			for (int i = 0; i < result.size(); i++) {

				if (name == result[i].first && password == result[i].second.first) {
					
					if (name == "admin" && password == "admin") {
						adminform->Show();
						this->Hide();
					}
					else {
						UI^ userform = gcnew UI(Userintxt->Text, gcnew String(result[i].second.second.c_str()));
						userform->Show();
						this->Hide();
						//MessageBox::Show(gcnew String(pathpic.c_str()));
					}
				}
			}
		}
	}
		  
	private: System::Void Signupbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		std::fstream myFile;
		myFile.open("registeredUsers.txt", std::ios::app);//appened
		if (myFile.is_open()) {
			std::string name = msclr::interop::marshal_as<std::string>(Useruptxt->Text);
			std::string password = msclr::interop::marshal_as<std::string>(Passuptxt->Text);
			std::string picpath = msclr::interop::marshal_as<std::string>(path->ToString());
			if (!name.empty() && !password.empty()) {
				myFile << name << "," << password << "," <<picpath<< std::endl;
				
			}
			myFile.close();
		}

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ o = gcnew OpenFileDialog;
	o->Filter = "Image Files(*.jpg;*.png;)| *.jpg;*.png";
	o->Multiselect = false;
	if (o->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		path = gcnew String(o->FileName);
	}

}
private: System::Void Passintxt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if(e->KeyChar==(char)Keys::Enter)
	Signinbtn_Click(nullptr, nullptr);
}

private: System::Void SignUpLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Question->Text = "Already Have an Account?";
	SignInLbl->Text = "Sign Up";
	Useruptxt->Show();
	Passuptxt->Show();
	Signupbtn->Show();
	SignUpLink->Hide();
	SignInLink->Show();
	button2->Show();
	button1->Hide();
	label8->Show();
	button3->Show();
}

private: System::Void SignInLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Question->Text = "Don't Have an Account?";
	SignInLbl->Text = "Sign In";
	SignInLink->Hide();
	SignUpLink->Show();
	Useruptxt->Hide();
	Passuptxt->Hide();
	Signupbtn->Hide();
	SignInLink->Hide();
	button2->Hide();
	button1->Show();
	label8->Hide();
	button3->Hide();
}
};
}