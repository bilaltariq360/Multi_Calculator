#pragma once
#include <string>
#include<iostream>

namespace MultiCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;


















	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(366, 538);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->Click += gcnew System::EventHandler(this, &MyForm::tabControl1_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->tabPage1->Controls->Add(this->button19);
			this->tabPage1->Controls->Add(this->button18);
			this->tabPage1->Controls->Add(this->button17);
			this->tabPage1->Controls->Add(this->button16);
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button14);
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(358, 505);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"General Cal";
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(287, 140);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(64, 64);
			this->button19->TabIndex = 19;
			this->button19->Text = L"CE";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(287, 228);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(64, 64);
			this->button18->TabIndex = 18;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(217, 140);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(64, 64);
			this->button17->TabIndex = 17;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::ArethmaticOP);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(217, 228);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(64, 64);
			this->button16->TabIndex = 16;
			this->button16->Text = L"x";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::ArethmaticOP);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(217, 316);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(64, 64);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::ArethmaticOP);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(287, 316);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(64, 151);
			this->button14->TabIndex = 14;
			this->button14->Text = L"=";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(217, 403);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(64, 64);
			this->button13->TabIndex = 13;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::ArethmaticOP);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(7, 403);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 64);
			this->button10->TabIndex = 12;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(147, 403);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(64, 64);
			this->button12->TabIndex = 10;
			this->button12->Text = L".";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(7, 140);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(64, 64);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(77, 140);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 64);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(147, 140);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 64);
			this->button9->TabIndex = 7;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(7, 228);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 64);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(77, 228);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 64);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(147, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 64);
			this->button6->TabIndex = 4;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(147, 316);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 64);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(77, 316);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(7, 316);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumOnly);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(346, 80);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->tabPage2->Controls->Add(this->textBox31);
			this->tabPage2->Controls->Add(this->textBox30);
			this->tabPage2->Controls->Add(this->textBox29);
			this->tabPage2->Controls->Add(this->textBox28);
			this->tabPage2->Controls->Add(this->textBox27);
			this->tabPage2->Controls->Add(this->textBox26);
			this->tabPage2->Controls->Add(this->textBox25);
			this->tabPage2->Controls->Add(this->textBox24);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(358, 505);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"GPA Cal";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(257, 466);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(88, 26);
			this->textBox31->TabIndex = 49;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(257, 418);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(88, 26);
			this->textBox30->TabIndex = 48;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(257, 371);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(88, 26);
			this->textBox29->TabIndex = 47;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(257, 327);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(88, 26);
			this->textBox28->TabIndex = 46;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(257, 281);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(88, 26);
			this->textBox27->TabIndex = 45;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(257, 235);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(88, 26);
			this->textBox26->TabIndex = 44;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(257, 188);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(88, 26);
			this->textBox25->TabIndex = 43;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(257, 141);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(88, 26);
			this->textBox24->TabIndex = 42;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(257, 92);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(88, 26);
			this->textBox23->TabIndex = 41;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(162, 466);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(53, 26);
			this->textBox22->TabIndex = 40;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(162, 418);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(53, 26);
			this->textBox21->TabIndex = 39;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(162, 371);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(53, 26);
			this->textBox20->TabIndex = 38;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(162, 327);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(53, 26);
			this->textBox19->TabIndex = 37;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(162, 281);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(53, 26);
			this->textBox18->TabIndex = 36;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(162, 235);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(53, 26);
			this->textBox17->TabIndex = 35;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(162, 188);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(53, 26);
			this->textBox16->TabIndex = 34;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(162, 141);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(53, 26);
			this->textBox15->TabIndex = 33;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(162, 92);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(53, 26);
			this->textBox14->TabIndex = 32;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(21, 14);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 28);
			this->button11->TabIndex = 31;
			this->button11->Text = L"Calculate";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Tomato;
			this->label6->Location = System::Drawing::Point(157, 14);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 28);
			this->label6->TabIndex = 30;
			this->label6->Text = L"0.00";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(21, 466);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 26);
			this->textBox13->TabIndex = 11;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(21, 418);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 26);
			this->textBox12->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(21, 371);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 9;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(21, 327);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(21, 281);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(21, 235);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 26);
			this->textBox8->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(21, 188);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(21, 141);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(21, 92);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(252, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 28);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Grade:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(159, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"CH:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(16, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 28);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Subject:";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(3)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->textBox3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(358, 505);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Percentage Cal";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(18, 301);
			this->textBox4->MaxLength = 6;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(329, 119);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(235, 196);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(112, 29);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(11, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Total Marks";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(235, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(112, 29);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(11, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(208, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Obtain Marks";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(363, 538);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(379, 577);
			this->MinimumSize = System::Drawing::Size(379, 577);
			this->Name = L"MyForm";
			this->Text = L"Multi Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}

		static std::string toStandardString(System::String^ string)
		{
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charPointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;
		}

		double firstNum, secNum, answer;
		String^ iop;
		double GPA = 0.00;
		int points = 0;
		double QTpoints = 0.00;
		int hours = 0;

#pragma endregion

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->textBox5->Text = "Subject";
	this->textBox6->Text = "Subject";
	this->textBox7->Text = "Subject";
	this->textBox8->Text = "Subject";
	this->textBox9->Text = "Subject";
	this->textBox10->Text = "Subject";
	this->textBox11->Text = "Subject";
	this->textBox12->Text = "Subject";
	this->textBox13->Text = "Subject";
}
private: System::Void NumOnly(System::Object^ sender, System::EventArgs^ e) {
	Button^ numb = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = numb->Text;
	}
	else {
		textBox1->Text = textBox1->Text + numb->Text;
	}
}
private: System::Void ArethmaticOP(System::Object^ sender, System::EventArgs^ e) {
	Button^ Aop = safe_cast<Button^>(sender);
	firstNum = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	iop = Aop->Text;
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	secNum = Double::Parse(textBox1->Text);

	if (iop == "+")
	{
		answer = firstNum + secNum;
		textBox1->Text = "" + answer;
	}

	else if (iop == "-")
	{
		answer = firstNum - secNum;
		textBox1->Text = "" + answer;
	}

	else if (iop == "x")
	{
		answer = firstNum * secNum;
		textBox1->Text = "" + answer;
	}

	else if (iop == "/")
	{
		answer = firstNum / secNum;
		textBox1->Text = "" + answer;
	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "" && textBox3->Text != "") {
		textBox4->Text = "" + (Double::Parse(textBox2->Text) / Double::Parse(textBox3->Text)) * 100;
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text != "" && textBox3->Text != "") {
		textBox4->Text = "" + (Double::Parse(textBox2->Text) / Double::Parse(textBox3->Text)) * 100;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	hours = 0;
	QTpoints = 0;
	hours = int::Parse(this->textBox14->Text) + int::Parse(this->textBox15->Text) +
		int::Parse(this->textBox16->Text) + int::Parse(this->textBox17->Text) +
		int::Parse(this->textBox18->Text) + int::Parse(this->textBox19->Text) +
		int::Parse(this->textBox20->Text) + int::Parse(this->textBox21->Text) +
		int::Parse(this->textBox22->Text);

	QTpoints += int::Parse(this->textBox14->Text) * gradeCheck(toStandardString(this->textBox23->Text));
	QTpoints += int::Parse(this->textBox15->Text) * gradeCheck(toStandardString(this->textBox24->Text));
	QTpoints += int::Parse(this->textBox16->Text) * gradeCheck(toStandardString(this->textBox25->Text));
	QTpoints += int::Parse(this->textBox17->Text) * gradeCheck(toStandardString(this->textBox26->Text));
	QTpoints += int::Parse(this->textBox18->Text) * gradeCheck(toStandardString(this->textBox27->Text));
	QTpoints += int::Parse(this->textBox19->Text) * gradeCheck(toStandardString(this->textBox28->Text));
	QTpoints += int::Parse(this->textBox20->Text) * gradeCheck(toStandardString(this->textBox29->Text));
	QTpoints += int::Parse(this->textBox21->Text) * gradeCheck(toStandardString(this->textBox30->Text));
	QTpoints += int::Parse(this->textBox22->Text) * gradeCheck(toStandardString(this->textBox31->Text));

	GPA = QTpoints / hours;
	String^ str2 = gcnew String(std::to_string(GPA).c_str());
	this->label6->Text = "" + str2[0] + str2[1] + str2[2] + str2[3];
}
	
private: System::Void tabControl1_Click(System::Object^ sender, System::EventArgs^ e) {
	    this->textBox14->Text = "0";
		this->textBox15->Text = "0";
		this->textBox16->Text = "0";
		this->textBox17->Text = "0";
		this->textBox18->Text = "0";
		this->textBox19->Text = "0";
		this->textBox20->Text = "0";
		this->textBox21->Text = "0";
		this->textBox22->Text = "0";
}

	   double gradeCheck(std::string grade) {
		   if (grade == "A+" || grade == "A") {
			   return 4.00;
		   }
		   else if (grade == "A-") {
			   return 3.67;
		   }
		   else if (grade == "B+") {
			   return 3.33;
		   }
		   else if (grade == "B") {
			   return 3.00;
		   }
		   else if (grade == "B-") {
			   return 2.66;
		   }
		   else if (grade == "C+") {
			   return 2.33;
		   }
		   else if (grade == "C") {
			   return 2.00;
		   }
		   else if (grade == "C-") {
			   return 1.67;
		   }
		   else if (grade == "D+") {
			   return 1.33;
		   }
		   else if (grade == "D") {
			   return 1.0;
		   }
		   else if (grade == "F") {
			   return 0.00;
		   }
	   }
};
}
