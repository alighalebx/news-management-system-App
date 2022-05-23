#pragma once
#include "News.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <fstream>
#include <string> 
#include "AddNews.h"
#include <utility>
#include "CustomButton.h"
#include "EditNews.h"
namespace newsmanagementsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for AdminUi
	/// </summary>
	public ref class AdminUi : public System::Windows::Forms::Form
	{
	public:
		AdminUi(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AdminUi(String^ data)
		{
			InitializeComponent();
			usernamelabel->Text = data;
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminUi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ usernamelabel;
	private: System::Windows::Forms::Button^ Closebtn;

		   System::Windows::Forms::Panel^ panelList;
		   System::Windows::Forms::Label^ labelList;
		   System::Windows::Forms::TextBox^ desclabelList;
		   System::Windows::Forms::Label^ datelabelList;
		   System::Windows::Forms::PictureBox^ pictureBoxList;
		   ComponentFactory::Krypton::Toolkit::KryptonButton^ deleteButtonList;
		   ComponentFactory::Krypton::Toolkit::KryptonButton^ editButtonList;





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
		   List<Panel^>^ p = gcnew List<Panel^>();

		   List<Label^>^ l = gcnew List<Label^>();
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
	public: System::Windows::Forms::Label^ NameTxt;
	private: System::Windows::Forms::Button^ AddBtn;
	public:
	private:
	public:
	private: System::Windows::Forms::Button^ LogOutBtn;
	private: System::Windows::Forms::Panel^ flowLayoutPanelList;


	private: void customizeDesing()
		   {
		Categorypanel->Visible = false;
		   }
		   private: void hideSubMenu()
		   {
			   if (Categorypanel->Visible == true)
			   {
				   Categorypanel->Visible = false;
			   }
		   }
		   private: void showSubMenu(Panel^ subMenu)
		   {
			   if (subMenu->Visible == false)
			   {
				   hideSubMenu();
				   subMenu->Visible = true;
			   }
			   else
			   {
				   subMenu->Visible = false;
			   }
		   }
				  
			  private: System::Void Categorybtn_Click(System::Object ^ sender, System::EventArgs ^ e)
		   {
			   showSubMenu(Categorypanel);
		   }


		   int vsize = 0;
		   News AddNewsfun() {
			   std::fstream MyFile;
			   News n;
			   MyFile.open("NewsAddInfo.txt", std::ios::in);
			   if (MyFile.is_open()) {
				   std::string line;
				   int x = 0;
				   while (getline(MyFile, line)) {
					   if (x == 0) {
						   n.setTitle(line);
					   }


					   if (x == 1) {
						   n.setDescription(line);
						   x = 0;
					   }
					   x++;
				   }
			   }
			   vsize++;
			   return n;
		   }
		   public:std::vector<News>NewsloadAnime() {
			   std::fstream MyFile;
			   News n;
			   std::vector<News>news;
			   int cnt = 0;
			   MyFile.open("Anime.txt", std::ios::in);
			   if (MyFile.is_open()) {
				   std::string line;
				   while (getline(MyFile, line)) {
					   if (cnt == 0) {
						   n.setID(stoi(line));
					   }
					   else if (cnt == 1) {
						   n.setTitle(line);
					   }
					   else if (cnt == 2) {
						   n.setDescription(line);

					   }
					   else if (cnt == 3) {
						   n.setimgpath(line);

					   }
					   else if (cnt == 4) {
						   n.setDate(line);
					   }
					   else if (cnt == 5) {
						   n.setRate(2.5);
					   }
					   else if (cnt == 6) {
						   n.setCntRate(1);
					   }
					   else {

						   n.setTotalRate(2.5);
						   news.push_back(n);
						   vsize++;
						   cnt = -1;
					   }
					   cnt++;
				   }
			   }
			   return news;
		   }
		   public:std::vector<News>NewsloadSports() {
			   std::fstream MyFile;
			   News n;
			   std::vector<News>news;
			   int cnt = 0;
			   MyFile.open("Sport.txt", std::ios::in);
			   if (MyFile.is_open()) {
				   std::string line;
				   while (getline(MyFile, line)) {
					   if (cnt == 0) {
						   n.setID(stoi(line));
					   }
					   else if (cnt == 1) {
						   n.setTitle(line);
					   }
					   else if (cnt == 2) {
						   n.setDescription(line);

					   }
					   else if (cnt == 3) {
						   n.setimgpath(line);

					   }
					   else if (cnt == 4) {
						   n.setDate(line);
					   }
					   else if (cnt == 5) {
						   n.setRate(2.5);
					   }
					   else if (cnt == 6) {
						   n.setCntRate(1);
					   }
					   else {

						   n.setTotalRate(2.5);
						   news.push_back(n);
						   vsize++;
						   cnt = -1;
					   }
					   cnt++;
				   }
			   }
			   return news;
		   }
		   public:std::vector<News>NewsloadTechnology() {
			   std::fstream MyFile;
			   News n;
			   std::vector<News>news;
			   int cnt = 0;
			   MyFile.open("Technology.txt", std::ios::in);
			   if (MyFile.is_open()) {
				   std::string line;
				   while (getline(MyFile, line)) {
					   if (cnt == 0) {
						   n.setID(stoi(line));
					   }
					   else if (cnt == 1) {
						   n.setTitle(line);
					   }
					   else if (cnt == 2) {
						   n.setDescription(line);

					   }
					   else if (cnt == 3) {
						   n.setimgpath(line);

					   }
					   else if (cnt == 4) {
						   n.setDate(line);
					   }
					   else if (cnt == 5) {
						   n.setRate(2.5);
					   }
					   else if (cnt == 6) {
						   n.setCntRate(1);
					   }
					   else {

						   n.setTotalRate(2.5);
						   news.push_back(n);
						   vsize++;
						   cnt = -1;
					   }
					   cnt++;
				   }
			   }
			   return news;
		   }
		   public:std::vector<News>NewsloadBusiness() {
			   std::fstream MyFile;
			   News n;
			   std::vector<News>news;
			   int cnt = 0;
			   MyFile.open("Business.txt", std::ios::in);
			   if (MyFile.is_open()) {
				   std::string line;
				   while (getline(MyFile, line)) {
					   if (cnt == 0) {
						   n.setID(stoi(line));
					   }
					   else if (cnt == 1) {
						   n.setTitle(line);
					   }
					   else if (cnt == 2) {
						   n.setDescription(line);

					   }
					   else if (cnt == 3) {
						   n.setimgpath(line);

					   }
					   else if (cnt == 4) {
						   n.setDate(line);
					   }
					   else if (cnt == 5) {
						   n.setRate(2.5);
					   }
					   else if (cnt == 6) {
						   n.setCntRate(1);
					   }
					   else {

						   n.setTotalRate(2.5);
						   news.push_back(n);
						   vsize++;
						   cnt = -1;
					   }
					   cnt++;
				   }
			   }
			   return news;
		   }
		   /*std::vector<News> initialize() {
			   std::vector<News>news;
			   return news;
		   }*/

	public:std::vector<News>& Anime = NewsloadAnime();
	public:std::vector<News>& Sport = NewsloadSports();
	public:std::vector<News>& Technology = NewsloadTechnology();
	public:std::vector<News>& Business = NewsloadBusiness();
		  


		  std::string initialize() {
			  std::string s;
			  return s;
		  }

		  std::string& SelectedCatg = initialize();


		  //String ^SelectedCatg;
		  void display(std::vector<News>& n) {

		  }
		  

		  void funPanel(std::vector<News>& n) {




		  }
		  void fun1(std::vector<News>& n) {

		  }
		  void fun2(std::vector<News>& n) {

		  }

		  void ifcatgselected() {
			  if (SelectedCatg == "Anime") {
				  funPanel(Anime);
			  }
			  if (SelectedCatg == "Sport") {
				  funPanel(Sport);
			  }
			  if (SelectedCatg == "Technology") {
				  funPanel(Technology);
			  }
			  if (SelectedCatg == "Business") {
				  funPanel(Business);
			  }
		  }
		  void ifcatgselectedAdd() {
			  if (SelectedCatg == "Anime") {
				  fun2(Anime);
				  fun1(Anime);
			  }
			  else if (SelectedCatg == "Sport") {
				  fun2(Sport);
				  fun1(Sport);
			  }
			  else if (SelectedCatg == "Technology") {
				  fun2(Technology);
				  fun1(Technology);
			  }
			  else {
				  fun2(Business);
				  fun1(Business);
			  }
		  }
		  void InitializeComponent(void)
		  {
			  System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminUi::typeid));
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
			  this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			  this->UserImg = (gcnew System::Windows::Forms::PictureBox());
			  this->label2 = (gcnew System::Windows::Forms::Label());
			  this->WlcmTxt = (gcnew System::Windows::Forms::Label());
			  this->NameTxt = (gcnew System::Windows::Forms::Label());
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
			  this->Closebtn->Click += gcnew System::EventHandler(this, &AdminUi::Closebtn_Click);
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
			  this->CategBtn4->Click += gcnew System::EventHandler(this, &AdminUi::CategBtn4_Click);
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
			  this->CategBtn3->Click += gcnew System::EventHandler(this, &AdminUi::CategBtn3_Click);
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
			  this->CategBtn2->Click += gcnew System::EventHandler(this, &AdminUi::CategBtn2_Click);
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
			  this->CategBtn1->Click += gcnew System::EventHandler(this, &AdminUi::CategBtn1_Click);
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
			  this->Categorybtn->Click += gcnew System::EventHandler(this, &AdminUi::Categorybtn_Click);
			  // 
			  // panellogo
			  // 
			  this->panellogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(7)),
				  static_cast<System::Int32>(static_cast<System::Byte>(5)));
			  this->panellogo->Controls->Add(this->pictureBox2);
			  this->panellogo->Controls->Add(this->UserImg);
			  this->panellogo->Controls->Add(this->label2);
			  this->panellogo->Controls->Add(this->WlcmTxt);
			  this->panellogo->Controls->Add(this->NameTxt);
			  this->panellogo->Controls->Add(this->AddBtn);
			  this->panellogo->Controls->Add(this->LogOutBtn);
			  this->panellogo->Dock = System::Windows::Forms::DockStyle::Top;
			  this->panellogo->Location = System::Drawing::Point(0, 0);
			  this->panellogo->Name = L"panellogo";
			  this->panellogo->Size = System::Drawing::Size(231, 179);
			  this->panellogo->TabIndex = 0;
			  // 
			  // pictureBox2
			  // 
			  this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			  this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
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
			  this->UserImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserImg.BackgroundImage")));
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
			  // NameTxt
			  // 
			  this->NameTxt->AutoSize = true;
			  this->NameTxt->BackColor = System::Drawing::Color::Transparent;
			  this->NameTxt->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->NameTxt->ForeColor = System::Drawing::Color::White;
			  this->NameTxt->Location = System::Drawing::Point(75, 52);
			  this->NameTxt->Name = L"NameTxt";
			  this->NameTxt->Size = System::Drawing::Size(88, 37);
			  this->NameTxt->TabIndex = 26;
			  this->NameTxt->Text = L"Name";
			  // 
			  // AddBtn
			  // 
			  this->AddBtn->BackColor = System::Drawing::Color::Transparent;
			  this->AddBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			  this->AddBtn->FlatAppearance->BorderSize = 0;
			  this->AddBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			  this->AddBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
			  this->AddBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			  this->AddBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				  static_cast<System::Byte>(0)));
			  this->AddBtn->ForeColor = System::Drawing::Color::White;
			  this->AddBtn->Location = System::Drawing::Point(3, 104);
			  this->AddBtn->Name = L"AddBtn";
			  this->AddBtn->Size = System::Drawing::Size(224, 33);
			  this->AddBtn->TabIndex = 27;
			  this->AddBtn->Text = L"AddNews";
			  this->AddBtn->UseVisualStyleBackColor = false;
			  this->AddBtn->Click += gcnew System::EventHandler(this, &AdminUi::AddBtn_Click);
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
			  this->flowLayoutPanelList->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminUi::flowLayoutPanelList_Paint);
			  // 
			  // AdminUi
			  // 
			  this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			  this->AutoScroll = true;
			  this->BackColor = System::Drawing::Color::Gainsboro;
			  this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			  this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			  this->ClientSize = System::Drawing::Size(1281, 715);
			  this->Controls->Add(this->flowLayoutPanelList);
			  this->Controls->Add(this->panelsidemenu);
			  this->Controls->Add(this->Closebtn);
			  this->Controls->Add(this->usernamelabel);
			  this->Controls->Add(this->label1);
			  this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			  this->Name = L"AdminUi";
			  this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			  this->Text = L"AdminUi";
			  this->Load += gcnew System::EventHandler(this, &AdminUi::Userapp_Load);
			  this->panelsidemenu->ResumeLayout(false);
			  this->Categorypanel->ResumeLayout(false);
			  this->panellogo->ResumeLayout(false);
			  this->panellogo->PerformLayout();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			  (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserImg))->EndInit();
			  this->ResumeLayout(false);
			  this->PerformLayout();

		  }



#pragma endregion

	private: System::Void Closebtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::OpenForms[0]->Close();
	}

		   public: System::Void AddBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			   AddNews^ nooo = gcnew AddNews();
			   nooo->Show();


			   //n->Show();*/

		   }int globalLoop;
				 private: System::Void buttonlist_Click(System::Object^ sender, System::EventArgs^ e) {

					 Admin a;
					 if (SelectedCatg == "Anime")
						 a.Delete(globalLoop, Anime, SelectedCatg);
					 MessageBox::Show(globalLoop.ToString());

				 }
						int sizegui = 0;
						public: void loadList(std::string catgname, std::vector<News>catglist) {
							this->flowLayoutPanelList->Controls->Clear();

							SelectedCatg = catgname;
							int test = -600;

							for (int i = catglist.size()-1; i >=0 ; i--) {
								globalLoop = i;
								this->panelList = (gcnew System::Windows::Forms::Panel());
								std::stringstream ss;
								ss << i + 3;
								std::string s;
								ss >> s;
								String^ si = gcnew String(s.c_str());
								test += 600;
								panelList->BackColor = System::Drawing::Color::White;
								panelList->Location = System::Drawing::Point(250, test);
								panelList->Name = L"panel" + si;
								panelList->Size = System::Drawing::Size(505, 335);
								panelList->TabIndex = 23;


								this->labelList = (gcnew System::Windows::Forms::Label());
								std::stringstream ss1;
								ss1 << i + 3;
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
								labelList->Text = gcnew String(catglist[i].getTitle().c_str());
								//\r\n
								this->desclabelList = (gcnew System::Windows::Forms::TextBox());
								std::stringstream ss4;
								ss4 << i + 100;
								std::string s4;
								ss4 >> s4;
								String^ si4 = gcnew String(s4.c_str());
								/*desclabelList->AutoSize = true;
								desclabelList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
								desclabelList->Location = System::Drawing::Point(50, 120);
								desclabelList->Name = L"label" + si4;
								desclabelList->Size = System::Drawing::Size(118, 42);
								desclabelList->TabIndex = 0;
								desclabelList->Text = gcnew String(catglist[i].getDescription().c_str());*/
								desclabelList->BackColor = System::Drawing::Color::White;
								desclabelList->BorderStyle = System::Windows::Forms::BorderStyle::None;
								desclabelList->Cursor = System::Windows::Forms::Cursors::Arrow;
								desclabelList->Location = System::Drawing::Point(50, 120);
								desclabelList->Multiline = true;
								desclabelList->Name = L"TextBox"+si4;
								desclabelList->ReadOnly = true;
								desclabelList->Size = System::Drawing::Size(174, 39);
								desclabelList->TabIndex = 13;
								desclabelList->Text = gcnew String(catglist[i].getDescription().c_str());

								//DateLabel
								this->datelabelList = (gcnew System::Windows::Forms::Label());
								std::stringstream ss6;
								ss6 << i + 200;
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
								datelabelList->Text = gcnew String(catglist[i].getDate().c_str());

								this->pictureBoxList = (gcnew System::Windows::Forms::PictureBox());
								std::stringstream ss2;
								ss2 << i + 3;
								std::string s2;
								ss2 >> s2;
								String^ si2 = gcnew String(s2.c_str());
								pictureBoxList->Image = Image::FromFile(gcnew String(catglist[i].getimgpath().c_str()));
								pictureBoxList->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
								pictureBoxList->Location = System::Drawing::Point(300, 30);
								pictureBoxList->Name = L"pictureBox" + si2;
								pictureBoxList->Size = System::Drawing::Size(200, 200);
								pictureBoxList->TabIndex = 49;
								pictureBoxList->TabStop = false;


								//Delete button
								this->deleteButtonList = (gcnew CustomButton(i));
								std::stringstream ss3;
								ss3 << i + 3;
								std::string s3;
								ss3 >> s3;
								String^ si3 = gcnew String(s3.c_str());

								deleteButtonList->Location = System::Drawing::Point(400, 260);
								deleteButtonList->Name = L"button" + si3;
								String^ test3 = L"button" + si3;
								deleteButtonList->Size = System::Drawing::Size(75, 23);
								deleteButtonList->TabIndex = 10;
								
								//deleteButtonList->UseVisualStyleBackColor = true;
								deleteButtonList->Cursor = System::Windows::Forms::Cursors::Hand;
								deleteButtonList->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->OverrideDefault->Back->ColorAngle = 45;
								deleteButtonList->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->OverrideDefault->Border->ColorAngle = 45;
								deleteButtonList->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								deleteButtonList->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								deleteButtonList->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
								deleteButtonList->Size = System::Drawing::Size(102, 39);
								deleteButtonList->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
								deleteButtonList->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateCommon->Border->ColorAngle = 45;
								deleteButtonList->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								deleteButtonList->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								deleteButtonList->StateCommon->Border->Rounding = 20;
								deleteButtonList->StateCommon->Border->Width = 1;
								deleteButtonList->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
								deleteButtonList->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
								deleteButtonList->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold,
									System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
								deleteButtonList->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StatePressed->Back->ColorAngle = 135;
								deleteButtonList->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								deleteButtonList->StatePressed->Border->Rounding = 20;
								deleteButtonList->StatePressed->Border->Width = 1;
								deleteButtonList->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateTracking->Back->ColorAngle = 45;
								deleteButtonList->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								deleteButtonList->StateTracking->Border->ColorAngle = 45;
								deleteButtonList->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								deleteButtonList->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								deleteButtonList->StateTracking->Border->Rounding = 20;
								deleteButtonList->StateTracking->Border->Width = 1;
								deleteButtonList->TabIndex = 10;
								deleteButtonList->Values->Text = L"Delete";
								deleteButtonList->Click += gcnew System::EventHandler(this, &AdminUi::button800_Click);


								//Edit button
								this->editButtonList = (gcnew CustomButton(i));
								std::stringstream ss5;
								ss5 << i + 30;
								std::string s5;
								ss5 >> s5;
								String^ si5 = gcnew String(s5.c_str());

								editButtonList->Location = System::Drawing::Point(270, 260);
								editButtonList->Name = L"button" + si5;
								String^ test5 = L"button" + si5;
								editButtonList->Size = System::Drawing::Size(75, 23);
								editButtonList->TabIndex = 10;
								editButtonList->Text = L"Edit";
								

								//deleteButtonList->UseVisualStyleBackColor = true;
								editButtonList->Cursor = System::Windows::Forms::Cursors::Hand;
								editButtonList->OverrideDefault->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->OverrideDefault->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->OverrideDefault->Back->ColorAngle = 45;
								editButtonList->OverrideDefault->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->OverrideDefault->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->OverrideDefault->Border->ColorAngle = 45;
								editButtonList->OverrideDefault->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								editButtonList->OverrideDefault->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								editButtonList->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::ProfessionalSystem;
								editButtonList->Size = System::Drawing::Size(102, 39);
								editButtonList->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::None;
								editButtonList->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateCommon->Border->ColorAngle = 45;
								editButtonList->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								editButtonList->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								editButtonList->StateCommon->Border->Rounding = 20;
								editButtonList->StateCommon->Border->Width = 1;
								editButtonList->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
								editButtonList->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
								editButtonList->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold,
									System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
								editButtonList->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StatePressed->Back->ColorAngle = 135;
								editButtonList->StatePressed->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StatePressed->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
									static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StatePressed->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								editButtonList->StatePressed->Border->Rounding = 20;
								editButtonList->StatePressed->Border->Width = 1;
								editButtonList->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateTracking->Back->ColorAngle = 45;
								editButtonList->StateTracking->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateTracking->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
								editButtonList->StateTracking->Border->ColorAngle = 45;
								editButtonList->StateTracking->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
									| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
								editButtonList->StateTracking->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
								editButtonList->StateTracking->Border->Rounding = 20;
								editButtonList->StateTracking->Border->Width = 1;
								editButtonList->TabIndex = 10;
								editButtonList->Values->Text = L"Edit";
								editButtonList->Click += gcnew System::EventHandler(this, &AdminUi::button801_Click);



								/*CustomButton^ btn = gcnew CustomButton(5);
								btn->Click += gcnew System::EventHandler(this, &button1_Click);

								this->panelList->Controls->Add(btn);*/




								flowLayoutPanelList->Controls->Add(labelList);
								flowLayoutPanelList->Controls->Add(desclabelList);
								flowLayoutPanelList->Controls->Add(datelabelList);
								flowLayoutPanelList->Controls->Add(pictureBoxList);
								flowLayoutPanelList->Controls->Add(deleteButtonList);
								flowLayoutPanelList->Controls->Add(editButtonList);
								flowLayoutPanelList->Controls->Add(panelList);

								panelList->Controls->Add(labelList);
								panelList->Controls->Add(desclabelList);
								panelList->Controls->Add(datelabelList);
								panelList->Controls->Add(deleteButtonList);
								panelList->Controls->Add(editButtonList);
								panelList->Controls->Add(pictureBoxList);

							}
							//lazem 23mlo 


							sizegui = catglist.size();
						}

				 private: System::Void button800_Click(System::Object^ sender, System::EventArgs^ e) {

					 auto btn = (CustomButton^)sender;

					 auto value = btn->idToDelete;
					 Admin a;
					 if (SelectedCatg == "Anime") {
						 a.Delete(value, Anime, SelectedCatg);
						 Anime = NewsloadAnime();
						 loadList("Anime", Anime);
					 }
					 else if (SelectedCatg == "Sport") {
						 a.Delete(value, Sport, SelectedCatg);
						 Sport = NewsloadSports();
						 loadList("Sport", Sport);
					 }
					 else if (SelectedCatg == "Technology") {
						 a.Delete(value, Technology, SelectedCatg);
						 Technology = NewsloadTechnology();
						 loadList("Technology", Technology);
					 }
					 else if (SelectedCatg == "Business") {
						 a.Delete(value, Business, SelectedCatg);
						 Business = NewsloadBusiness();
						 loadList("Business", Business);
					 }
				 }

						 private: System::Void button801_Click(System::Object^ sender, System::EventArgs^ e) {

							 auto btn = (CustomButton^)sender;

							 auto value = btn->idToDelete;
							 std::string s = std::to_string(value);
							 String^ d = gcnew String (s.c_str());
							 String^ catg = gcnew String(SelectedCatg.c_str());

							/* Admin a;*/
							 if (SelectedCatg == "Anime") {
								 EditNews^ Edit = gcnew EditNews(Anime[value], catg,value, Anime);
								 Edit->Show();

								
							 }
							 else if (SelectedCatg == "Sport") {
								 EditNews^ Edit = gcnew EditNews(Sport[value], catg, value, Sport);
								 Edit->Show();

							 }
							 else if (SelectedCatg == "Technology") {
								 EditNews^ Edit = gcnew EditNews(Technology[value], catg, value, Technology);
								 Edit->Show();

							 }
							 else if (SelectedCatg == "Business") {
								 EditNews^ Edit = gcnew EditNews(Business[value], catg, value, Business);
								 Edit->Show();

							 }
						 }

	private: System::Void CategBtn1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sport=NewsloadSports();
		loadList("Sport",Sport);

	}
	private: System::Void CategBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		Anime=NewsloadAnime();
		loadList("Anime", Anime);
		
	}

	private: System::Void CategBtn3_Click(System::Object^ sender, System::EventArgs^ e) {
		Technology=NewsloadTechnology();
		loadList("Technology", Technology);
	}

	private: System::Void CategBtn4_Click(System::Object^ sender, System::EventArgs^ e) {
		Business=NewsloadBusiness();
		loadList("Business", Business);
	}
	
	private: System::Void Userapp_Load(System::Object^ sender, System::EventArgs^ e) {
		customizeDesing();
		if (SelectedCatg == "Anime") {
			display(Anime);
		}
		if (SelectedCatg == "Sport") {
			display(Sport);
		}
		if (SelectedCatg == "Technology") {
			display(Technology);
		}
		if (SelectedCatg == "Business") {
			display(Business);
		}










		// = gcnew String(v[0].getDescription().c_str());
	}
	
private: System::Void flowLayoutPanelList_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
