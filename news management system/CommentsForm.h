#pragma once
#include <fstream>
#include "CommentsForm.h"
#include "News.h"
#include <msclr\marshal_cppstd.h>
#include <queue>
namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CommentsForm
	/// </summary>
	public ref class CommentsForm : public System::Windows::Forms::Form
	{
	public:



		CommentsForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		int idobj;
		user Initialize() {
			user userobj;
			return userobj;
		}
		user* commentui;

		/*void equ(user& x) {
			commentui = x;

		}*/
		
		CommentsForm(std::deque<std::string> comment,user& userobj,int id) {
			comments = comment;
			commentui = &userobj;
			idobj = id;
			//equ(userobj);
			InitializeComponent();
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CommentsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ cmntBox;
	protected:

	protected:

	private: System::Windows::Forms::Button^ Closebtn;
	private: System::Windows::Forms::ListBox^ cmnt;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ sendBtn;
	private: System::ComponentModel::IContainer^ components;

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
			this->cmntBox = (gcnew System::Windows::Forms::TextBox());
			this->Closebtn = (gcnew System::Windows::Forms::Button());
			this->cmnt = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->sendBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cmntBox
			// 
			this->cmntBox->Location = System::Drawing::Point(11, 275);
			this->cmntBox->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmntBox->Name = L"cmntBox";
			this->cmntBox->Size = System::Drawing::Size(288, 20);
			this->cmntBox->TabIndex = 0;
			this->cmntBox->TextChanged += gcnew System::EventHandler(this, &CommentsForm::textBox1_TextChanged);
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
			this->Closebtn->Location = System::Drawing::Point(443, 1);
			this->Closebtn->Name = L"Closebtn";
			this->Closebtn->Size = System::Drawing::Size(31, 31);
			this->Closebtn->TabIndex = 21;
			this->Closebtn->Text = L"✕";
			this->Closebtn->UseVisualStyleBackColor = false;
			// 
			// cmnt
			// 
			this->cmnt->FormattingEnabled = true;
			this->cmnt->Location = System::Drawing::Point(11, 20);
			this->cmnt->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmnt->Name = L"cmnt";
			this->cmnt->Size = System::Drawing::Size(348, 251);
			this->cmnt->TabIndex = 22;
			this->cmnt->SelectedIndexChanged += gcnew System::EventHandler(this, &CommentsForm::cmnt_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Brown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(349, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(18, 20);
			this->button1->TabIndex = 23;
			this->button1->Text = L"✕";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CommentsForm::button1_Click);
			// 
			// sendBtn
			// 
			this->sendBtn->Location = System::Drawing::Point(304, 272);
			this->sendBtn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->sendBtn->Name = L"sendBtn";
			this->sendBtn->Size = System::Drawing::Size(53, 20);
			this->sendBtn->TabIndex = 24;
			this->sendBtn->Text = L"Send";
			this->sendBtn->UseVisualStyleBackColor = true;
			this->sendBtn->Click += gcnew System::EventHandler(this, &CommentsForm::sendBtn_Click);
			// 
			// CommentsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 302);
			this->Controls->Add(this->sendBtn);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cmnt);
			this->Controls->Add(this->Closebtn);
			this->Controls->Add(this->cmntBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CommentsForm";
			this->Text = L"CommentsForm";
			this->Load += gcnew System::EventHandler(this, &CommentsForm::CommentsForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		std::deque<std::string>initialize() {
			std::deque<std::string> comments;
			return comments;
		}
		std::deque<std::string>& comments = initialize();
		/*News initialize() {
			News n;
			return n;
		}*/
		
		//News& comments = initialize();

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sendBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		commentui->CommentsNews(std::to_string(idobj),(msclr::interop::marshal_as<std::string>(cmntBox->Text)));
		cmnt->Items->Add(cmntBox->Text);
		//commentui.end();
	}

void showcomments() {
			   for (int i = 0; i < comments.size(); i++)
			   {
				   cmnt->Items->Add(gcnew String(comments[i].c_str()));
			   }


	}
private: System::Void CommentsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	showcomments();
		//comments.readcomment();

}
private: System::Void cmnt_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
