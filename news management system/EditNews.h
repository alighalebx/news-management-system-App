#pragma once
#include"News.h"
#include <vector>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Admin.h"


namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditNews
	/// </summary>
	public ref class EditNews : public System::Windows::Forms::Form
	{
	public:
		EditNews(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		News& x = intialize();
		std::vector<News> &New = intialize2();
		int val;
		String^ st;
		EditNews(News n , String^ s, int value, std::vector<News> v)
		{
			InitializeComponent();
			Titletxtedit->Text = gcnew String(n.getTitle().c_str());
			Descriptiontxtredit->Text = gcnew String(n.getDescription().c_str());
			Categboxedit->SelectedItem = s;
			textBox3edit->Text = gcnew String(n.getimgpath().c_str());
			x = n;
			New = v;
			st = s;
			val = value;

		}
		News intialize() {
			News x = News();
			return x;
		}
		std::vector<News> intialize2() {
			std::vector<News> x;
			return x;
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditNews()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2edit;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ Categboxedit;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3edit;

	private: System::Windows::Forms::TextBox^ Descriptiontxtredit;

	private: System::Windows::Forms::TextBox^ Titletxtedit;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2edit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Categboxedit = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3edit = (gcnew System::Windows::Forms::TextBox());
			this->Descriptiontxtredit = (gcnew System::Windows::Forms::TextBox());
			this->Titletxtedit = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2edit
			// 
			this->button2edit->Location = System::Drawing::Point(272, 218);
			this->button2edit->Name = L"button2edit";
			this->button2edit->Size = System::Drawing::Size(150, 31);
			this->button2edit->TabIndex = 21;
			this->button2edit->Text = L"Load Image";
			this->button2edit->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(286, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 39);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Category";
			// 
			// Categboxedit
			// 
			this->Categboxedit->FormattingEnabled = true;
			this->Categboxedit->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Anime", L"Technology", L"Business", L"Sport" });
			this->Categboxedit->Location = System::Drawing::Point(261, 130);
			this->Categboxedit->Name = L"Categboxedit";
			this->Categboxedit->Size = System::Drawing::Size(205, 21);
			this->Categboxedit->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(158, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditNews::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 39);
			this->label3->TabIndex = 17;
			this->label3->Text = L"ImagePath";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 39);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Description";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 37);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Title";
			// 
			// textBox3edit
			// 
			this->textBox3edit->Location = System::Drawing::Point(14, 224);
			this->textBox3edit->Name = L"textBox3edit";
			this->textBox3edit->Size = System::Drawing::Size(197, 20);
			this->textBox3edit->TabIndex = 14;
			// 
			// Descriptiontxtredit
			// 
			this->Descriptiontxtredit->Location = System::Drawing::Point(14, 130);
			this->Descriptiontxtredit->Name = L"Descriptiontxtredit";
			this->Descriptiontxtredit->Size = System::Drawing::Size(174, 20);
			this->Descriptiontxtredit->TabIndex = 13;
			// 
			// Titletxtedit
			// 
			this->Titletxtedit->Location = System::Drawing::Point(14, 50);
			this->Titletxtedit->Name = L"Titletxtedit";
			this->Titletxtedit->Size = System::Drawing::Size(197, 20);
			this->Titletxtedit->TabIndex = 12;
			// 
			// EditNews
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 333);
			this->Controls->Add(this->button2edit);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Categboxedit);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3edit);
			this->Controls->Add(this->Descriptiontxtredit);
			this->Controls->Add(this->Titletxtedit);
			this->Name = L"EditNews";
			this->Text = L"EditNews";
			this->Load += gcnew System::EventHandler(this, &EditNews::EditNews_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditNews_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (st == "Anime") {
		AdminUi^ appi = gcnew AdminUi();*/
		x.setTitle(msclr::interop::marshal_as<std::string>(Titletxtedit->Text));
		x.setDescription(msclr::interop::marshal_as<std::string>(Descriptiontxtredit->Text));
		x.setimgpath(msclr::interop::marshal_as<std::string>(textBox3edit->Text->ToString()));
		System::DateTime now = System::DateTime::Now;
		x.setDate(msclr::interop::marshal_as<std::string>(now.ToString()));
		x.setRate(2.5);
		x.setCntRate(1);
		x.setTotalRate(2.5);
		New[val] = x;

		Admin admin;
		admin.update(New, msclr::interop::marshal_as<std::string>(st->ToString()));
		/*appli->NewsloadAnime();
		appli->loadList("Anime", Anime);*/

	//}
}
};
}
