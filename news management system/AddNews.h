#pragma once
#include <msclr\marshal_cppstd.h>
#include "News.h"
#include <fstream>

#include "Admin.h"
namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddNews
	/// </summary>
	public ref class AddNews : public System::Windows::Forms::Form
	{
	public:
		AddNews(void)
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
		~AddNews()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Titletxt;
	private: System::Windows::Forms::TextBox^ Descriptiontxt;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ Categbox;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;







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
			this->Titletxt = (gcnew System::Windows::Forms::TextBox());
			this->Descriptiontxt = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Categbox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->SuspendLayout();
			// 
			// Titletxt
			// 
			this->Titletxt->Location = System::Drawing::Point(9, 49);
			this->Titletxt->Name = L"Titletxt";
			this->Titletxt->Size = System::Drawing::Size(197, 20);
			this->Titletxt->TabIndex = 0;
			// 
			// Descriptiontxt
			// 
			this->Descriptiontxt->Location = System::Drawing::Point(9, 129);
			this->Descriptiontxt->Name = L"Descriptiontxt";
			this->Descriptiontxt->Size = System::Drawing::Size(174, 20);
			this->Descriptiontxt->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(9, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Title";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(2, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(192, 39);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Description";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 39);
			this->label3->TabIndex = 5;
			this->label3->Text = L"ImagePath";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 38);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddNews::button1_Click);
			// 
			// Categbox
			// 
			this->Categbox->FormattingEnabled = true;
			this->Categbox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Anime", L"Technology", L"Business", L"Sport" });
			this->Categbox->Location = System::Drawing::Point(256, 129);
			this->Categbox->Name = L"Categbox";
			this->Categbox->Size = System::Drawing::Size(205, 21);
			this->Categbox->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(281, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(158, 39);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Category";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 31);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Load Image";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddNews::button2_Click);
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->kryptonButton1->Location = System::Drawing::Point(347, 30);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->OverrideDefault->Back->ColorAngle = 45;
			this->kryptonButton1->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->OverrideDefault->Border->ColorAngle = 45;
			this->kryptonButton1->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
			this->kryptonButton1->Size = System::Drawing::Size(102, 39);
			this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->ColorAngle = 45;
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->StateCommon->Border->Rounding = 20;
			this->kryptonButton1->StateCommon->Border->Width = 1;
			this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StatePressed->Back->ColorAngle = 135;
			this->kryptonButton1->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StatePressed->Border->Rounding = 20;
			this->kryptonButton1->StatePressed->Border->Width = 1;
			this->kryptonButton1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateTracking->Back->ColorAngle = 45;
			this->kryptonButton1->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateTracking->Border->ColorAngle = 45;
			this->kryptonButton1->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->StateTracking->Border->Rounding = 20;
			this->kryptonButton1->StateTracking->Border->Width = 1;
			this->kryptonButton1->TabIndex = 10;
			this->kryptonButton1->Values->Text = L"Edit";
			// 
			// AddNews
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 333);
			this->Controls->Add(this->kryptonButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Categbox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->Descriptiontxt);
			this->Controls->Add(this->Titletxt);
			this->Name = L"AddNews";
			this->Text = L"AddNews";
			this->Load += gcnew System::EventHandler(this, &AddNews::AddNews_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	

#pragma endregion
		
		
		String^ path;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ o = gcnew OpenFileDialog;
	o->Filter = "Image Files(*.jpg;*.png;)| *.jpg;*.png";
	o->Multiselect = false;
	if (o->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		path = gcnew String(o->FileName);

		textBox3->Text = path;
	}


}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		std::string s = msclr::interop::marshal_as<std::string>(Categbox->SelectedItem->ToString());

		News n;
		
		n.setTitle(msclr::interop::marshal_as<std::string>(Titletxt->Text));
		n.setDescription(msclr::interop::marshal_as<std::string>(Descriptiontxt->Text));
		n.setimgpath(msclr::interop::marshal_as<std::string>(path->ToString()));
		System::DateTime now = System::DateTime::Now;
		n.setDate(msclr::interop::marshal_as<std::string>(now.ToString()));
		n.setRate(2.5);
		n.setCntRate(1);
		n.setTotalRate(2.5);
		

		Admin admin;
		admin.Post(n, s);
		





	}
private: System::Void AddNews_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
