#include "Player.h"

#include<windows.h>
#include <cstdlib>
#include<cstring>
#include<string.h>
#include<string>
#include <msclr/marshal_cppstd.h>
#include"iostream"
#pragma once

namespace HoffManCoding {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
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
	private: System::Windows::Forms::Button^  button1;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::TextBox^  textBox42;




	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox62;


	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox79;
	private: System::Windows::Forms::TextBox^  textBox86;
	private: System::Windows::Forms::TextBox^  textBox87;
	private: System::Windows::Forms::TextBox^  textBox88;
	private: System::Windows::Forms::TextBox^  textBox89;
	private: System::Windows::Forms::TextBox^  textBox90;
	private: System::Windows::Forms::TextBox^  textBox91;
	private: System::Windows::Forms::TextBox^  textBox92;
	private: System::Windows::Forms::TextBox^  textBox93;
	private: System::Windows::Forms::TextBox^  textBox94;
	private: System::Windows::Forms::TextBox^  textBox95;
	private: System::Windows::Forms::TextBox^  textBox96;
	private: System::Windows::Forms::TextBox^  textBox97;
	private: System::Windows::Forms::TextBox^  textBox80;
	private: System::Windows::Forms::TextBox^  textBox81;
	private: System::Windows::Forms::TextBox^  textBox82;
	private: System::Windows::Forms::TextBox^  textBox83;
	private: System::Windows::Forms::TextBox^  textBox84;
	private: System::Windows::Forms::TextBox^  textBox85;
	private: System::Windows::Forms::TextBox^  textBox98;
	private: System::Windows::Forms::TextBox^  textBox99;
	private: System::Windows::Forms::TextBox^  textBox100;
	private: System::Windows::Forms::TextBox^  textBox101;
	private: System::Windows::Forms::TextBox^  textBox102;
	private: System::Windows::Forms::TextBox^  textBox103;
	private: System::Windows::Forms::TextBox^  textBox104;
	private: System::Windows::Forms::TextBox^  textBox105;
	private: System::Windows::Forms::TextBox^  textBox106;
	private: System::Windows::Forms::TextBox^  textBox107;
	private: System::Windows::Forms::TextBox^  textBox108;
	private: System::Windows::Forms::TextBox^  textBox109;
	private: System::Windows::Forms::TextBox^  textBox110;
	private: System::Windows::Forms::TextBox^  textBox111;
	private: System::Windows::Forms::TextBox^  textBox112;
	private: System::Windows::Forms::TextBox^  textBox113;
	private: System::Windows::Forms::TextBox^  textBox114;
	private: System::Windows::Forms::TextBox^  textBox115;
	private: System::Windows::Forms::TextBox^  textBox116;
	private: System::Windows::Forms::TextBox^  textBox117;
	private: System::Windows::Forms::TextBox^  textBox118;
	private: System::Windows::Forms::TextBox^  textBox119;
	private: System::Windows::Forms::TextBox^  textBox120;
	private: System::Windows::Forms::TextBox^  textBox121;
	private: System::Windows::Forms::TextBox^  textBox122;
	private: System::Windows::Forms::TextBox^  textBox123;
	private: System::Windows::Forms::TextBox^  textBox124;
	private: System::Windows::Forms::TextBox^  textBox125;
	private: System::Windows::Forms::TextBox^  textBox126;
	private: System::Windows::Forms::TextBox^  textBox127;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox78;










private: System::Windows::Forms::TextBox^  textBox132;
private: System::Windows::Forms::TextBox^  textBox133;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox49;
private: System::Windows::Forms::TextBox^  textBox50;
















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox106 = (gcnew System::Windows::Forms::TextBox());
			this->textBox107 = (gcnew System::Windows::Forms::TextBox());
			this->textBox108 = (gcnew System::Windows::Forms::TextBox());
			this->textBox109 = (gcnew System::Windows::Forms::TextBox());
			this->textBox110 = (gcnew System::Windows::Forms::TextBox());
			this->textBox111 = (gcnew System::Windows::Forms::TextBox());
			this->textBox112 = (gcnew System::Windows::Forms::TextBox());
			this->textBox113 = (gcnew System::Windows::Forms::TextBox());
			this->textBox114 = (gcnew System::Windows::Forms::TextBox());
			this->textBox115 = (gcnew System::Windows::Forms::TextBox());
			this->textBox116 = (gcnew System::Windows::Forms::TextBox());
			this->textBox117 = (gcnew System::Windows::Forms::TextBox());
			this->textBox118 = (gcnew System::Windows::Forms::TextBox());
			this->textBox119 = (gcnew System::Windows::Forms::TextBox());
			this->textBox120 = (gcnew System::Windows::Forms::TextBox());
			this->textBox121 = (gcnew System::Windows::Forms::TextBox());
			this->textBox122 = (gcnew System::Windows::Forms::TextBox());
			this->textBox123 = (gcnew System::Windows::Forms::TextBox());
			this->textBox124 = (gcnew System::Windows::Forms::TextBox());
			this->textBox125 = (gcnew System::Windows::Forms::TextBox());
			this->textBox126 = (gcnew System::Windows::Forms::TextBox());
			this->textBox127 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox132 = (gcnew System::Windows::Forms::TextBox());
			this->textBox133 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial Black", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(385, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 126);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(17, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 29);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(270, 32);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Navy;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(170, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Write Your Data below";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(17, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Visible = false;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(58, 146);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(17, 20);
			this->textBox20->TabIndex = 23;
			this->textBox20->Visible = false;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(58, 126);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(17, 20);
			this->textBox21->TabIndex = 22;
			this->textBox21->Visible = false;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(101, 146);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(17, 20);
			this->textBox22->TabIndex = 25;
			this->textBox22->Visible = false;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(101, 126);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(17, 20);
			this->textBox23->TabIndex = 24;
			this->textBox23->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(144, 146);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(17, 20);
			this->textBox5->TabIndex = 41;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(144, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(17, 20);
			this->textBox6->TabIndex = 40;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(187, 146);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(17, 20);
			this->textBox7->TabIndex = 43;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(187, 126);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(17, 20);
			this->textBox8->TabIndex = 42;
			this->textBox8->Visible = false;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(402, 146);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(17, 20);
			this->textBox30->TabIndex = 53;
			this->textBox30->Visible = false;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(402, 126);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(17, 20);
			this->textBox32->TabIndex = 52;
			this->textBox32->Visible = false;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(359, 146);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(17, 20);
			this->textBox33->TabIndex = 51;
			this->textBox33->Visible = false;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(359, 126);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(17, 20);
			this->textBox34->TabIndex = 50;
			this->textBox34->Visible = false;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(316, 146);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(17, 20);
			this->textBox35->TabIndex = 49;
			this->textBox35->Visible = false;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(316, 126);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(17, 20);
			this->textBox38->TabIndex = 48;
			this->textBox38->Visible = false;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(273, 146);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(17, 20);
			this->textBox39->TabIndex = 47;
			this->textBox39->Visible = false;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(273, 126);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(17, 20);
			this->textBox40->TabIndex = 46;
			this->textBox40->Visible = false;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(230, 146);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(17, 20);
			this->textBox41->TabIndex = 45;
			this->textBox41->Visible = false;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(230, 126);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(17, 20);
			this->textBox42->TabIndex = 44;
			this->textBox42->Visible = false;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(616, 146);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(19, 20);
			this->textBox53->TabIndex = 63;
			this->textBox53->Visible = false;
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(616, 126);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(19, 20);
			this->textBox54->TabIndex = 62;
			this->textBox54->Visible = false;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(573, 146);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(17, 20);
			this->textBox55->TabIndex = 61;
			this->textBox55->Visible = false;
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(573, 126);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(17, 20);
			this->textBox56->TabIndex = 60;
			this->textBox56->Visible = false;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(530, 146);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(17, 20);
			this->textBox57->TabIndex = 59;
			this->textBox57->Visible = false;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(530, 126);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(17, 20);
			this->textBox58->TabIndex = 58;
			this->textBox58->Visible = false;
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(487, 146);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(17, 20);
			this->textBox59->TabIndex = 57;
			this->textBox59->Visible = false;
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(487, 126);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(17, 20);
			this->textBox60->TabIndex = 56;
			this->textBox60->Visible = false;
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(444, 146);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(17, 20);
			this->textBox61->TabIndex = 55;
			this->textBox61->Visible = false;
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(444, 126);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(17, 20);
			this->textBox62->TabIndex = 54;
			this->textBox62->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(736, 273);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(22, 20);
			this->textBox9->TabIndex = 71;
			this->textBox9->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(736, 233);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(22, 20);
			this->textBox10->TabIndex = 70;
			this->textBox10->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(726, 253);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(43, 20);
			this->textBox13->TabIndex = 74;
			this->textBox13->Visible = false;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(224, 253);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(43, 20);
			this->textBox11->TabIndex = 77;
			this->textBox11->Visible = false;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(234, 273);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(22, 20);
			this->textBox12->TabIndex = 76;
			this->textBox12->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(234, 233);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(22, 20);
			this->textBox14->TabIndex = 75;
			this->textBox14->Visible = false;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(344, 329);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(40, 20);
			this->textBox28->TabIndex = 89;
			this->textBox28->Visible = false;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(354, 349);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(19, 20);
			this->textBox29->TabIndex = 88;
			this->textBox29->Visible = false;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(354, 309);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(19, 20);
			this->textBox31->TabIndex = 87;
			this->textBox31->Visible = false;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(286, 375);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(40, 20);
			this->textBox44->TabIndex = 95;
			this->textBox44->Visible = false;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(296, 395);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(19, 20);
			this->textBox45->TabIndex = 94;
			this->textBox45->Visible = false;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(296, 355);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(19, 20);
			this->textBox46->TabIndex = 93;
			this->textBox46->Visible = false;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(404, 375);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(40, 20);
			this->textBox47->TabIndex = 98;
			this->textBox47->Visible = false;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(414, 395);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(19, 20);
			this->textBox48->TabIndex = 97;
			this->textBox48->Visible = false;
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(414, 355);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(19, 20);
			this->textBox63->TabIndex = 96;
			this->textBox63->Visible = false;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(671, 375);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(40, 20);
			this->textBox15->TabIndex = 110;
			this->textBox15->Visible = false;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(681, 395);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(19, 20);
			this->textBox16->TabIndex = 109;
			this->textBox16->Visible = false;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(681, 355);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(19, 20);
			this->textBox17->TabIndex = 108;
			this->textBox17->Visible = false;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(554, 375);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(40, 20);
			this->textBox18->TabIndex = 107;
			this->textBox18->Visible = false;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(564, 395);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(19, 20);
			this->textBox19->TabIndex = 106;
			this->textBox19->Visible = false;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(564, 355);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(19, 20);
			this->textBox24->TabIndex = 105;
			this->textBox24->Visible = false;
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(615, 329);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(40, 20);
			this->textBox67->TabIndex = 104;
			this->textBox67->Visible = false;
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(625, 349);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(19, 20);
			this->textBox68->TabIndex = 103;
			this->textBox68->Visible = false;
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(625, 309);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(19, 20);
			this->textBox69->TabIndex = 102;
			this->textBox69->Visible = false;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(161, 375);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(40, 20);
			this->textBox25->TabIndex = 128;
			this->textBox25->Visible = false;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(171, 395);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(19, 20);
			this->textBox26->TabIndex = 127;
			this->textBox26->Visible = false;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(171, 355);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(19, 20);
			this->textBox27->TabIndex = 126;
			this->textBox27->Visible = false;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(41, 375);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(40, 20);
			this->textBox36->TabIndex = 125;
			this->textBox36->Visible = false;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(51, 395);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(19, 20);
			this->textBox37->TabIndex = 124;
			this->textBox37->Visible = false;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(51, 355);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(19, 20);
			this->textBox43->TabIndex = 123;
			this->textBox43->Visible = false;
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(103, 329);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(40, 20);
			this->textBox64->TabIndex = 122;
			this->textBox64->Visible = false;
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(113, 349);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(19, 20);
			this->textBox65->TabIndex = 121;
			this->textBox65->Visible = false;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(113, 309);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(19, 20);
			this->textBox66->TabIndex = 120;
			this->textBox66->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(469, 207);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 20);
			this->textBox3->TabIndex = 131;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(479, 227);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(25, 20);
			this->textBox4->TabIndex = 130;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(479, 187);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(25, 20);
			this->textBox79->TabIndex = 129;
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(72, 432);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(40, 20);
			this->textBox86->TabIndex = 143;
			this->textBox86->Visible = false;
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(82, 452);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(19, 20);
			this->textBox87->TabIndex = 142;
			this->textBox87->Visible = false;
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(82, 412);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(19, 20);
			this->textBox88->TabIndex = 141;
			this->textBox88->Visible = false;
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(14, 432);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(40, 20);
			this->textBox89->TabIndex = 140;
			this->textBox89->Visible = false;
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(24, 452);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(19, 20);
			this->textBox90->TabIndex = 139;
			this->textBox90->Visible = false;
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(24, 412);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(19, 20);
			this->textBox91->TabIndex = 138;
			this->textBox91->Visible = false;
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(188, 432);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(40, 20);
			this->textBox92->TabIndex = 149;
			this->textBox92->Visible = false;
			// 
			// textBox93
			// 
			this->textBox93->Location = System::Drawing::Point(198, 452);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(19, 20);
			this->textBox93->TabIndex = 148;
			this->textBox93->Visible = false;
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(198, 412);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(19, 20);
			this->textBox94->TabIndex = 147;
			this->textBox94->Visible = false;
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(132, 432);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(40, 20);
			this->textBox95->TabIndex = 146;
			this->textBox95->Visible = false;
			// 
			// textBox96
			// 
			this->textBox96->Location = System::Drawing::Point(142, 452);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(19, 20);
			this->textBox96->TabIndex = 145;
			this->textBox96->Visible = false;
			// 
			// textBox97
			// 
			this->textBox97->Location = System::Drawing::Point(142, 412);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(19, 20);
			this->textBox97->TabIndex = 144;
			this->textBox97->Visible = false;
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(431, 432);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(40, 20);
			this->textBox80->TabIndex = 161;
			this->textBox80->Visible = false;
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(441, 452);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(19, 20);
			this->textBox81->TabIndex = 160;
			this->textBox81->Visible = false;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(441, 412);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(19, 20);
			this->textBox82->TabIndex = 159;
			this->textBox82->Visible = false;
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(375, 432);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(40, 20);
			this->textBox83->TabIndex = 158;
			this->textBox83->Visible = false;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(385, 452);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(19, 20);
			this->textBox84->TabIndex = 157;
			this->textBox84->Visible = false;
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(385, 412);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(19, 20);
			this->textBox85->TabIndex = 156;
			this->textBox85->Visible = false;
			// 
			// textBox98
			// 
			this->textBox98->Location = System::Drawing::Point(314, 432);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(40, 20);
			this->textBox98->TabIndex = 155;
			this->textBox98->Visible = false;
			// 
			// textBox99
			// 
			this->textBox99->Location = System::Drawing::Point(324, 452);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(19, 20);
			this->textBox99->TabIndex = 154;
			this->textBox99->Visible = false;
			// 
			// textBox100
			// 
			this->textBox100->Location = System::Drawing::Point(324, 412);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(19, 20);
			this->textBox100->TabIndex = 153;
			this->textBox100->Visible = false;
			// 
			// textBox101
			// 
			this->textBox101->Location = System::Drawing::Point(256, 432);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(40, 20);
			this->textBox101->TabIndex = 152;
			this->textBox101->Visible = false;
			// 
			// textBox102
			// 
			this->textBox102->Location = System::Drawing::Point(266, 452);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(19, 20);
			this->textBox102->TabIndex = 151;
			this->textBox102->Visible = false;
			// 
			// textBox103
			// 
			this->textBox103->Location = System::Drawing::Point(266, 412);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(19, 20);
			this->textBox103->TabIndex = 150;
			this->textBox103->Visible = false;
			// 
			// textBox104
			// 
			this->textBox104->Location = System::Drawing::Point(939, 432);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(40, 20);
			this->textBox104->TabIndex = 185;
			this->textBox104->Visible = false;
			// 
			// textBox105
			// 
			this->textBox105->Location = System::Drawing::Point(949, 452);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(19, 20);
			this->textBox105->TabIndex = 184;
			this->textBox105->Visible = false;
			// 
			// textBox106
			// 
			this->textBox106->Location = System::Drawing::Point(949, 412);
			this->textBox106->Name = L"textBox106";
			this->textBox106->Size = System::Drawing::Size(19, 20);
			this->textBox106->TabIndex = 183;
			this->textBox106->Visible = false;
			// 
			// textBox107
			// 
			this->textBox107->Location = System::Drawing::Point(883, 432);
			this->textBox107->Name = L"textBox107";
			this->textBox107->Size = System::Drawing::Size(40, 20);
			this->textBox107->TabIndex = 182;
			this->textBox107->Visible = false;
			// 
			// textBox108
			// 
			this->textBox108->Location = System::Drawing::Point(893, 452);
			this->textBox108->Name = L"textBox108";
			this->textBox108->Size = System::Drawing::Size(19, 20);
			this->textBox108->TabIndex = 181;
			this->textBox108->Visible = false;
			// 
			// textBox109
			// 
			this->textBox109->Location = System::Drawing::Point(893, 412);
			this->textBox109->Name = L"textBox109";
			this->textBox109->Size = System::Drawing::Size(19, 20);
			this->textBox109->TabIndex = 180;
			this->textBox109->Visible = false;
			// 
			// textBox110
			// 
			this->textBox110->Location = System::Drawing::Point(822, 432);
			this->textBox110->Name = L"textBox110";
			this->textBox110->Size = System::Drawing::Size(40, 20);
			this->textBox110->TabIndex = 179;
			this->textBox110->Visible = false;
			// 
			// textBox111
			// 
			this->textBox111->Location = System::Drawing::Point(832, 452);
			this->textBox111->Name = L"textBox111";
			this->textBox111->Size = System::Drawing::Size(19, 20);
			this->textBox111->TabIndex = 178;
			this->textBox111->Visible = false;
			// 
			// textBox112
			// 
			this->textBox112->Location = System::Drawing::Point(832, 412);
			this->textBox112->Name = L"textBox112";
			this->textBox112->Size = System::Drawing::Size(19, 20);
			this->textBox112->TabIndex = 177;
			this->textBox112->Visible = false;
			// 
			// textBox113
			// 
			this->textBox113->Location = System::Drawing::Point(764, 432);
			this->textBox113->Name = L"textBox113";
			this->textBox113->Size = System::Drawing::Size(40, 20);
			this->textBox113->TabIndex = 176;
			this->textBox113->Visible = false;
			// 
			// textBox114
			// 
			this->textBox114->Location = System::Drawing::Point(774, 452);
			this->textBox114->Name = L"textBox114";
			this->textBox114->Size = System::Drawing::Size(19, 20);
			this->textBox114->TabIndex = 175;
			this->textBox114->Visible = false;
			// 
			// textBox115
			// 
			this->textBox115->Location = System::Drawing::Point(774, 412);
			this->textBox115->Name = L"textBox115";
			this->textBox115->Size = System::Drawing::Size(19, 20);
			this->textBox115->TabIndex = 174;
			this->textBox115->Visible = false;
			// 
			// textBox116
			// 
			this->textBox116->Location = System::Drawing::Point(699, 432);
			this->textBox116->Name = L"textBox116";
			this->textBox116->Size = System::Drawing::Size(40, 20);
			this->textBox116->TabIndex = 173;
			this->textBox116->Visible = false;
			// 
			// textBox117
			// 
			this->textBox117->Location = System::Drawing::Point(709, 452);
			this->textBox117->Name = L"textBox117";
			this->textBox117->Size = System::Drawing::Size(19, 20);
			this->textBox117->TabIndex = 172;
			this->textBox117->Visible = false;
			// 
			// textBox118
			// 
			this->textBox118->Location = System::Drawing::Point(709, 412);
			this->textBox118->Name = L"textBox118";
			this->textBox118->Size = System::Drawing::Size(19, 20);
			this->textBox118->TabIndex = 171;
			this->textBox118->Visible = false;
			// 
			// textBox119
			// 
			this->textBox119->Location = System::Drawing::Point(643, 432);
			this->textBox119->Name = L"textBox119";
			this->textBox119->Size = System::Drawing::Size(40, 20);
			this->textBox119->TabIndex = 170;
			this->textBox119->Visible = false;
			// 
			// textBox120
			// 
			this->textBox120->Location = System::Drawing::Point(653, 452);
			this->textBox120->Name = L"textBox120";
			this->textBox120->Size = System::Drawing::Size(19, 20);
			this->textBox120->TabIndex = 169;
			this->textBox120->Visible = false;
			// 
			// textBox121
			// 
			this->textBox121->Location = System::Drawing::Point(653, 412);
			this->textBox121->Name = L"textBox121";
			this->textBox121->Size = System::Drawing::Size(19, 20);
			this->textBox121->TabIndex = 168;
			this->textBox121->Visible = false;
			// 
			// textBox122
			// 
			this->textBox122->Location = System::Drawing::Point(582, 432);
			this->textBox122->Name = L"textBox122";
			this->textBox122->Size = System::Drawing::Size(40, 20);
			this->textBox122->TabIndex = 167;
			this->textBox122->Visible = false;
			// 
			// textBox123
			// 
			this->textBox123->Location = System::Drawing::Point(592, 452);
			this->textBox123->Name = L"textBox123";
			this->textBox123->Size = System::Drawing::Size(19, 20);
			this->textBox123->TabIndex = 166;
			this->textBox123->Visible = false;
			// 
			// textBox124
			// 
			this->textBox124->Location = System::Drawing::Point(592, 412);
			this->textBox124->Name = L"textBox124";
			this->textBox124->Size = System::Drawing::Size(19, 20);
			this->textBox124->TabIndex = 165;
			this->textBox124->Visible = false;
			// 
			// textBox125
			// 
			this->textBox125->Location = System::Drawing::Point(524, 432);
			this->textBox125->Name = L"textBox125";
			this->textBox125->Size = System::Drawing::Size(40, 20);
			this->textBox125->TabIndex = 164;
			this->textBox125->Visible = false;
			// 
			// textBox126
			// 
			this->textBox126->Location = System::Drawing::Point(534, 452);
			this->textBox126->Name = L"textBox126";
			this->textBox126->Size = System::Drawing::Size(19, 20);
			this->textBox126->TabIndex = 163;
			this->textBox126->Visible = false;
			// 
			// textBox127
			// 
			this->textBox127->Location = System::Drawing::Point(534, 412);
			this->textBox127->Name = L"textBox127";
			this->textBox127->Size = System::Drawing::Size(19, 20);
			this->textBox127->TabIndex = 162;
			this->textBox127->Visible = false;
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(912, 375);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(40, 20);
			this->textBox70->TabIndex = 194;
			this->textBox70->Visible = false;
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(922, 395);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(19, 20);
			this->textBox71->TabIndex = 193;
			this->textBox71->Visible = false;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(922, 355);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(19, 20);
			this->textBox72->TabIndex = 192;
			this->textBox72->Visible = false;
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(795, 375);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(40, 20);
			this->textBox73->TabIndex = 191;
			this->textBox73->Visible = false;
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(805, 395);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(19, 20);
			this->textBox74->TabIndex = 190;
			this->textBox74->Visible = false;
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(805, 355);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(19, 20);
			this->textBox75->TabIndex = 189;
			this->textBox75->Visible = false;
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(856, 329);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(40, 20);
			this->textBox76->TabIndex = 188;
			this->textBox76->Visible = false;
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(866, 349);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(19, 20);
			this->textBox77->TabIndex = 187;
			this->textBox77->Visible = false;
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(866, 309);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(19, 20);
			this->textBox78->TabIndex = 186;
			this->textBox78->Visible = false;
			// 
			// textBox132
			// 
			this->textBox132->Location = System::Drawing::Point(658, 146);
			this->textBox132->Name = L"textBox132";
			this->textBox132->Size = System::Drawing::Size(19, 20);
			this->textBox132->TabIndex = 198;
			this->textBox132->Visible = false;
			// 
			// textBox133
			// 
			this->textBox133->Location = System::Drawing::Point(658, 126);
			this->textBox133->Name = L"textBox133";
			this->textBox133->Size = System::Drawing::Size(19, 20);
			this->textBox133->TabIndex = 197;
			this->textBox133->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(683, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 34);
			this->label2->TabIndex = 199;
			this->label2->Text = L". . . .";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(971, 463);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 34);
			this->label3->TabIndex = 200;
			this->label3->Text = L". ";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(917, 464);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 34);
			this->label4->TabIndex = 201;
			this->label4->Text = L". ";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(858, 463);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 34);
			this->label5->TabIndex = 203;
			this->label5->Text = L". ";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(799, 464);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 34);
			this->label6->TabIndex = 202;
			this->label6->Text = L". ";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Red;
			this->label7->Location = System::Drawing::Point(617, 463);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 34);
			this->label7->TabIndex = 207;
			this->label7->Text = L". ";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Red;
			this->label8->Location = System::Drawing::Point(558, 464);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 34);
			this->label8->TabIndex = 206;
			this->label8->Text = L". ";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Red;
			this->label9->Location = System::Drawing::Point(676, 464);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 34);
			this->label9->TabIndex = 205;
			this->label9->Text = L". ";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Red;
			this->label10->Location = System::Drawing::Point(738, 463);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(29, 34);
			this->label10->TabIndex = 204;
			this->label10->Text = L". ";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Red;
			this->label11->Location = System::Drawing::Point(49, 463);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(29, 34);
			this->label11->TabIndex = 215;
			this->label11->Text = L". ";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Red;
			this->label12->Location = System::Drawing::Point(-6, 464);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(29, 34);
			this->label12->TabIndex = 214;
			this->label12->Text = L". ";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Red;
			this->label13->Location = System::Drawing::Point(109, 464);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 34);
			this->label13->TabIndex = 213;
			this->label13->Text = L". ";
			this->label13->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(165, 463);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 34);
			this->label14->TabIndex = 212;
			this->label14->Text = L". ";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(291, 463);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(29, 34);
			this->label15->TabIndex = 211;
			this->label15->Text = L". ";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Red;
			this->label16->Location = System::Drawing::Point(230, 464);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 34);
			this->label16->TabIndex = 210;
			this->label16->Text = L". ";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Red;
			this->label17->Location = System::Drawing::Point(351, 464);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(29, 34);
			this->label17->TabIndex = 209;
			this->label17->Text = L". ";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(408, 463);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(29, 34);
			this->label18->TabIndex = 208;
			this->label18->Text = L". ";
			this->label18->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 19, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(486, 464);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(29, 34);
			this->label19->TabIndex = 216;
			this->label19->Text = L". ";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Navy;
			this->label20->Location = System::Drawing::Point(655, 27);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(219, 17);
			this->label20->TabIndex = 217;
			this->label20->Text = L"Bits used in ASCII would be =";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Navy;
			this->label21->Location = System::Drawing::Point(655, 48);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(227, 17);
			this->label21->TabIndex = 218;
			this->label21->Text = L"Bits used by huffman coding =";
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(902, 51);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(39, 20);
			this->textBox49->TabIndex = 220;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(902, 28);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(39, 20);
			this->textBox50->TabIndex = 219;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(998, 507);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox132);
			this->Controls->Add(this->textBox133);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->textBox71);
			this->Controls->Add(this->textBox72);
			this->Controls->Add(this->textBox73);
			this->Controls->Add(this->textBox74);
			this->Controls->Add(this->textBox75);
			this->Controls->Add(this->textBox76);
			this->Controls->Add(this->textBox77);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox104);
			this->Controls->Add(this->textBox105);
			this->Controls->Add(this->textBox106);
			this->Controls->Add(this->textBox107);
			this->Controls->Add(this->textBox108);
			this->Controls->Add(this->textBox109);
			this->Controls->Add(this->textBox110);
			this->Controls->Add(this->textBox111);
			this->Controls->Add(this->textBox112);
			this->Controls->Add(this->textBox113);
			this->Controls->Add(this->textBox114);
			this->Controls->Add(this->textBox115);
			this->Controls->Add(this->textBox116);
			this->Controls->Add(this->textBox117);
			this->Controls->Add(this->textBox118);
			this->Controls->Add(this->textBox119);
			this->Controls->Add(this->textBox120);
			this->Controls->Add(this->textBox121);
			this->Controls->Add(this->textBox122);
			this->Controls->Add(this->textBox123);
			this->Controls->Add(this->textBox124);
			this->Controls->Add(this->textBox125);
			this->Controls->Add(this->textBox126);
			this->Controls->Add(this->textBox127);
			this->Controls->Add(this->textBox80);
			this->Controls->Add(this->textBox81);
			this->Controls->Add(this->textBox82);
			this->Controls->Add(this->textBox83);
			this->Controls->Add(this->textBox84);
			this->Controls->Add(this->textBox85);
			this->Controls->Add(this->textBox98);
			this->Controls->Add(this->textBox99);
			this->Controls->Add(this->textBox100);
			this->Controls->Add(this->textBox101);
			this->Controls->Add(this->textBox102);
			this->Controls->Add(this->textBox103);
			this->Controls->Add(this->textBox92);
			this->Controls->Add(this->textBox93);
			this->Controls->Add(this->textBox94);
			this->Controls->Add(this->textBox95);
			this->Controls->Add(this->textBox96);
			this->Controls->Add(this->textBox97);
			this->Controls->Add(this->textBox86);
			this->Controls->Add(this->textBox87);
			this->Controls->Add(this->textBox88);
			this->Controls->Add(this->textBox89);
			this->Controls->Add(this->textBox90);
			this->Controls->Add(this->textBox91);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox64);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"16 bit Huffman Coder";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox24_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox25_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox26_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox27_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^a = richTextBox1->Text;/////////////////////////////////////////////////////////////////////1st step
	std::string yourname = msclr::interop::marshal_as<std::string>(a);//takes string to 
	Player::queue hf;
	hf.Inputedwords(yourname);
	hf.traverse();
	cout << endl;
	if (hf.front != NULL)
	{
		textBox1->Text = System::Convert::ToString(hf.front->val);
		textBox2->Text = System::Char::ToString(hf.front->c);
		textBox1->Visible = true;
		textBox2->Visible = true;
		if (hf.front->next != NULL)
		{
			textBox21->Text = System::Convert::ToString(hf.front->next->val);
			textBox20->Text = System::Char::ToString(hf.front->next->c);
			textBox21->Visible = true;
			textBox20->Visible = true;
			if (hf.front->next->next != NULL)
			{
				textBox23->Text = System::Convert::ToString(hf.front->next->next->val);
				textBox22->Text = System::Char::ToString(hf.front->next->next->c);
				textBox23->Visible = true;
				textBox22->Visible = true;
				if (hf.front->next->next->next != NULL)
				{
					textBox6->Text = System::Convert::ToString(hf.front->next->next->next->val);
					textBox5->Text = System::Char::ToString(hf.front->next->next->next->c);
					textBox6->Visible = true;
					textBox5->Visible = true;
					if (hf.front->next->next->next->next != NULL)
					{
						textBox8->Text = System::Convert::ToString(hf.front->next->next->next->next->val);
						textBox7->Text = System::Char::ToString(hf.front->next->next->next->next->c);
						textBox8->Visible = true;
						textBox7->Visible = true; if (hf.front->next->next->next->next->next != NULL)
						{
							textBox42->Text = System::Convert::ToString(hf.front->next->next->next->next->next->val);
							textBox41->Text = System::Char::ToString(hf.front->next->next->next->next->next->c);
							textBox42->Visible = true;
							textBox41->Visible = true;
							if (hf.front->next->next->next->next->next->next != NULL)
							{
								textBox40->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->val);
								textBox39->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->c);
								textBox40->Visible = true;
								textBox39->Visible = true; if (hf.front->next->next->next->next->next->next->next != NULL)
								{
									textBox38->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->val);
									textBox35->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->c);
									textBox38->Visible = true;
									textBox35->Visible = true; if (hf.front->next->next->next->next->next->next->next->next != NULL)
									{
										textBox34->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->val);
										textBox33->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->c);
										textBox34->Visible = true;
										textBox33->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next != NULL)
										{
											textBox32->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->val);
											textBox30->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->c);
											textBox32->Visible = true;
											textBox30->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next != NULL)
											{
												textBox62->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->val);
												textBox61->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->c);
												textBox62->Visible = true;
												textBox61->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next->next != NULL)
												{
													textBox60->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->val);
													textBox59->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->c);
													textBox60->Visible = true;
													textBox59->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next->next->next != NULL)
													{
														textBox58->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->val);
														textBox57->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->c);
														textBox58->Visible = true;
														textBox57->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next != NULL)
														{
															textBox56->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->val);
															textBox55->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->c);
															textBox56->Visible = true;
															textBox55->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next != NULL)
															{
																textBox54->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->val);
																textBox53->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->c);
																textBox54->Visible = true;
																textBox53->Visible = true; if (hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next != NULL)
																{
																	textBox133->Text = System::Convert::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->val);
																	textBox132->Text = System::Char::ToString(hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->c);
																	textBox133->Visible = true;
																	textBox132->Visible = true;
																	if (hf.front->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next != NULL)
																	{
																		label2->Visible = true;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	hf.tree();
	hf.inorder(hf.front);
	cout << endl;
	string randomstring;
	cout << "Codeword of each character\n";
	hf.AssignCode(hf.front, randomstring);
	if (hf.front != NULL)//head node
	{
		textBox79->Text = System::Char::ToString(hf.front->c);
		textBox4->Text = System::Convert::ToString(hf.front->val);
		textBox3->Text = "Root";
		if (hf.front->left != NULL)//head left
		{
			textBox14->Text = System::Char::ToString(hf.front->left->c);
			textBox12->Text = System::Convert::ToString(hf.front->left->val);
			textBox11->Text = gcnew String(hf.front->left->cod.c_str());
			textBox14->Visible = true;
			textBox12->Visible = true;
			textBox11->Visible = true;

			if (hf.front->left->left != NULL)// left left
			{
				textBox66->Text = System::Char::ToString(hf.front->left->left->c);
				textBox65->Text = System::Convert::ToString(hf.front->left->left->val);
				textBox64->Text = gcnew String(hf.front->left->left->cod.c_str());
				textBox66->Visible = true;
				textBox65->Visible = true;
				textBox64->Visible = true;
				if (hf.front->left->left->left != NULL)//left left left
				{
					textBox43->Text = System::Char::ToString(hf.front->left->left->left->c);
					textBox37->Text = System::Convert::ToString(hf.front->left->left->left->val);
					textBox36->Text = gcnew String(hf.front->left->left->left->cod.c_str());
					textBox43->Visible = true;
					textBox37->Visible = true;
					textBox36->Visible = true;
					if (hf.front->left->left->left->left != NULL)//left left left left
					{
						textBox91->Text = System::Char::ToString(hf.front->left->left->left->left->c);
						textBox90->Text = System::Convert::ToString(hf.front->left->left->left->left->val);
						textBox89->Text = gcnew String(hf.front->left->left->left->left->cod.c_str());
						textBox91->Visible = true;
						textBox90->Visible = true;
						textBox89->Visible = true;
						if (hf.front->left->left->left->left->left != NULL)//......................................
						{
							label12->Visible = true;
							label11->Visible = true;
						}
					}
					if (hf.front->left->left->left->right != NULL)//  left left left ri8
					{
						textBox88->Text = System::Char::ToString(hf.front->left->left->left->right->c);
						textBox87->Text = System::Convert::ToString(hf.front->left->left->left->right->val);
						textBox86->Text = gcnew String(hf.front->left->left->left->right->cod.c_str());
						textBox88->Visible = true;
						textBox87->Visible = true;
						textBox86->Visible = true;
						if (hf.front->left->left->left->right->left != NULL)//......................................
						{
							label13->Visible = true;
							label11->Visible = true;
						}
					}
				}
				if (hf.front->left->left->right != NULL)//  left left ri8
				{
					textBox27->Text = System::Char::ToString(hf.front->left->left->right->c);
					textBox26->Text = System::Convert::ToString(hf.front->left->left->right->val);
					textBox25->Text = gcnew String(hf.front->left->left->right->cod.c_str());
					textBox27->Visible = true;
					textBox26->Visible = true;
					textBox25->Visible = true;
					if (hf.front->left->left->right->left != NULL)//left left ri8 left
					{
						textBox97->Text = System::Char::ToString(hf.front->left->left->right->left->c);
						textBox96->Text = System::Convert::ToString(hf.front->left->left->right->left->val);
						textBox95->Text = gcnew String(hf.front->left->left->right->left->cod.c_str());
						textBox97->Visible = true;
						textBox96->Visible = true;
						textBox95->Visible = true;
						if (hf.front->left->left->right->left->left != NULL)//.................................
						{
							label13->Visible = true;
							label14->Visible = true;
						}
					}
					if (hf.front->left->left->right->right != NULL)//  left left ri8 ri8
					{
						textBox94->Text = System::Char::ToString(hf.front->left->left->right->right->c);
						textBox93->Text = System::Convert::ToString(hf.front->left->left->right->right->val);
						textBox92->Text = gcnew String(hf.front->left->left->right->right->cod.c_str());
						textBox94->Visible = true;
						textBox93->Visible = true;
						textBox92->Visible = true;
						if (hf.front->left->left->right->right->left != NULL)//..................................
						{
							label14->Visible = true;
							label16->Visible = true;
						}
					}
				}
			}
			

			if (hf.front->left->right != NULL)//left ri8
			{
				textBox31->Text = System::Char::ToString(hf.front->left->right->c);
				textBox29->Text = System::Convert::ToString(hf.front->left->right->val);
				textBox28->Text = gcnew String(hf.front->left->right->cod.c_str());
				textBox31->Visible = true;
				textBox29->Visible = true;
				textBox28->Visible = true;
				if (hf.front->left->right->left != NULL)//left ri8 left
				{
					textBox46->Text = System::Char::ToString(hf.front->left->right->left->c);
					textBox45->Text = System::Convert::ToString(hf.front->left->right->left->val);
					textBox44->Text = gcnew String(hf.front->left->right->left->cod.c_str());
					textBox46->Visible = true;
					textBox45->Visible = true;
					textBox44->Visible = true;
					if (hf.front->left->right->left->left != NULL)//left right left left
					{
						textBox103->Text = System::Char::ToString(hf.front->left->right->left->left->c);
						textBox102->Text = System::Convert::ToString(hf.front->left->right->left->left->val);
						textBox101->Text = gcnew String(hf.front->left->right->left->left->cod.c_str());
						textBox103->Visible = true;
						textBox102->Visible = true;
						textBox101->Visible = true;
						if (hf.front->left->right->left->left->left != NULL)//....................................
						{
							label16->Visible = true;
							label15->Visible = true;
						}
					}
					if (hf.front->left->right->left->right != NULL)//  left ri8 left ri8
					{
						textBox100->Text = System::Char::ToString(hf.front->left->right->left->right->c);
						textBox99->Text = System::Convert::ToString(hf.front->left->right->left->right->val);
						textBox98->Text = gcnew String(hf.front->left->right->left->right->cod.c_str());
						textBox100->Visible = true;
						textBox99->Visible = true;
						textBox98->Visible = true;
						if (hf.front->left->right->left->right->left != NULL)//......................................
						{
							label15->Visible = true;
							label17->Visible = true;
						}
					}
				}

				if (hf.front->left->right->right != NULL)//  left ri8 ri8
				{
					textBox63->Text = System::Char::ToString(hf.front->left->right->right->c);
					textBox48->Text = System::Convert::ToString(hf.front->left->right->right->val);
					textBox47->Text = gcnew String(hf.front->left->right->right->cod.c_str());
					textBox63->Visible = true;
					textBox48->Visible = true;
					textBox47->Visible = true;
					if (hf.front->left->right->right->left != NULL)//left ri8 ri8 left
					{
						textBox85->Text = System::Char::ToString(hf.front->left->right->right->left->c);
						textBox84->Text = System::Convert::ToString(hf.front->left->right->right->left->val);
						textBox83->Text = gcnew String(hf.front->left->right->right->left->cod.c_str());
						textBox85->Visible = true;
						textBox84->Visible = true;
						textBox83->Visible = true;
						if (hf.front->left->right->right->left->left != NULL)//.....................................
						{
							label17->Visible = true;
							label18->Visible = true;
						}
					}
					if (hf.front->left->right->right->right != NULL)//  left ri8 ri8 ri8
					{
						textBox82->Text = System::Char::ToString(hf.front->left->right->right->right->c);
						textBox81->Text = System::Convert::ToString(hf.front->left->right->right->right->val);
						textBox80->Text = gcnew String(hf.front->left->right->right->right->cod.c_str());
						textBox82->Visible = true;
						textBox81->Visible = true;
						textBox80->Visible = true;
						if (hf.front->left->right->right->right->left != NULL)//.......................................
						{
							label18->Visible = true;
							label19->Visible = true;
						}
					}
				}
			}
		}



		if (hf.front->right != NULL)//head ri8
		{
			textBox10->Text = System::Char::ToString(hf.front->right->c);
			textBox9->Text = System::Convert::ToString(hf.front->right->val);
			textBox13->Text = gcnew String(hf.front->right->cod.c_str());
			textBox10->Visible = true;
			textBox9->Visible = true;
			textBox13->Visible = true;
			if (hf.front->right->left != NULL)//ri8 left
			{
				textBox69->Text = System::Char::ToString(hf.front->right->left->c);
				textBox68->Text = System::Convert::ToString(hf.front->right->left->val);
				textBox67->Text = gcnew String(hf.front->right->left->cod.c_str());
				textBox69->Visible = true;
				textBox68->Visible = true;
				textBox67->Visible = true;
				if (hf.front->right->left->left != NULL)//ri8 left left
				{
					textBox24->Text = System::Char::ToString(hf.front->right->left->left->c);
					textBox19->Text = System::Convert::ToString(hf.front->right->left->left->val);
					textBox18->Text = gcnew String(hf.front->right->left->left->cod.c_str());
					textBox24->Visible = true;
					textBox19->Visible = true;
					textBox18->Visible = true;
					if (hf.front->right->left->left->left != NULL)//ri8 left left left
					{
						textBox127->Text = System::Char::ToString(hf.front->right->left->left->left->c);
						textBox126->Text = System::Convert::ToString(hf.front->right->left->left->left->val);
						textBox125->Text = gcnew String(hf.front->right->left->left->left->cod.c_str());
						textBox127->Visible = true;
						textBox126->Visible = true;
						textBox125->Visible = true;
						if (hf.front->right->left->left->left->left != NULL)//................................
						{
							label19->Visible = true;
							label8->Visible = true;
						}
					}
					if (hf.front->right->left->left->right != NULL)//  ri8 left left ri8
					{
						textBox124->Text = System::Char::ToString(hf.front->right->left->left->right->c);
						textBox123->Text = System::Convert::ToString(hf.front->right->left->left->right->val);
						textBox122->Text = gcnew String(hf.front->right->left->left->right->cod.c_str());
						textBox124->Visible = true;
						textBox123->Visible = true;
						textBox122->Visible = true;
						if (hf.front->right->left->left->right->left != NULL)//................................
						{
							label8->Visible = true;
							label7->Visible = true;
						}
					}
				}
				if (hf.front->right->left->right != NULL)//  ri8 left ri8
				{
					textBox17->Text = System::Char::ToString(hf.front->right->left->right->c);
					textBox16->Text = System::Convert::ToString(hf.front->right->left->right->val);
					textBox15->Text = gcnew String(hf.front->right->left->right->cod.c_str());
					textBox17->Visible = true;
					textBox16->Visible = true;
					textBox15->Visible = true;
					if (hf.front->right->left->right->left != NULL)//ri8 left ri8 left
					{
						textBox121->Text = System::Char::ToString(hf.front->right->left->right->left->c);
						textBox120->Text = System::Convert::ToString(hf.front->right->left->right->left->val);
						textBox119->Text = gcnew String(hf.front->right->left->right->left->cod.c_str());
						textBox121->Visible = true;
						textBox120->Visible = true;
						textBox119->Visible = true;
						if (hf.front->right->left->right->left->left != NULL)//..................................
						{
							label7->Visible = true;
							label9->Visible = true;
						}
					}
					if (hf.front->right->left->right->right != NULL)//  ri8 left ri8 ri8
					{
						textBox118->Text = System::Char::ToString(hf.front->right->left->right->right->c);
						textBox117->Text = System::Convert::ToString(hf.front->right->left->right->right->val);
						textBox116->Text = gcnew String(hf.front->right->left->right->right->cod.c_str());
						textBox118->Visible = true;
						textBox117->Visible = true;
						textBox116->Visible = true;
						if (hf.front->right->left->right->right->left != NULL)//.....................................
						{
							label9->Visible = true;
							label10->Visible = true;
						}
					}
				}
			}


			if (hf.front->right->right != NULL) //ri8 ri8
			{
				textBox78->Text = System::Char::ToString(hf.front->right->right->c);
				textBox77->Text = System::Convert::ToString(hf.front->right->right->val);
				textBox76->Text = gcnew String(hf.front->right->right->cod.c_str());
				textBox78->Visible = true;
				textBox77->Visible = true;
				textBox76->Visible = true;
				if (hf.front->right->right->left != NULL)//ri8 ri8 left
				{
					textBox75->Text = System::Char::ToString(hf.front->right->right->left->c);
					textBox74->Text = System::Convert::ToString(hf.front->right->right->left->val);
					textBox73->Text = gcnew String(hf.front->right->right->left->cod.c_str());
					textBox75->Visible = true;
					textBox74->Visible = true;
					textBox73->Visible = true;
					if (hf.front->right->right->left->left != NULL)//ri8 ri8 left left
					{
						textBox115->Text = System::Char::ToString(hf.front->right->right->left->left->c);
						textBox114->Text = System::Convert::ToString(hf.front->right->right->left->left->val);
						textBox113->Text = gcnew String(hf.front->right->right->left->left->cod.c_str());
						textBox115->Visible = true;
						textBox114->Visible = true;
						textBox113->Visible = true;
						if (hf.front->right->right->left->left->left != NULL)
						{
							label6->Visible = true;
							label10->Visible = true;
						}
					}
					if (hf.front->right->right->left->right != NULL)//  ri8 ri8 left ri8
					{
						textBox112->Text = System::Char::ToString(hf.front->right->right->left->right->c);
						textBox111->Text = System::Convert::ToString(hf.front->right->right->left->right->val);
						textBox110->Text = gcnew String(hf.front->right->right->left->right->cod.c_str());
						textBox112->Visible = true;
						textBox111->Visible = true;
						textBox110->Visible = true;
						if (hf.front->right->right->left->right->left != NULL)
						{
							label5->Visible = true;
							label6->Visible = true;
						}
					}
				}

				if (hf.front->right->right->right != NULL)//  ri8 ri8 ri8
				{
					textBox72->Text = System::Char::ToString(hf.front->right->right->right->c);
					textBox71->Text = System::Convert::ToString(hf.front->right->right->right->val);
					textBox70->Text = gcnew String(hf.front->right->right->right->cod.c_str());
					textBox72->Visible = true;
					textBox71->Visible = true;
					textBox70->Visible = true;
					if (hf.front->right->right->right->left != NULL)//ri8 ri8 ri8 left
					{
						textBox109->Text = System::Char::ToString(hf.front->right->right->right->left->c);
						textBox108->Text = System::Convert::ToString(hf.front->right->right->right->left->val);
						textBox107->Text = gcnew String(hf.front->right->right->right->left->cod.c_str());
						textBox109->Visible = true;
						textBox108->Visible = true;
						textBox107->Visible = true;
						if (hf.front->right->right->right->left->left != NULL)//.....................................
						{
							label5->Visible = true;
							label4->Visible = true;
						}
					}
					if (hf.front->right->right->right->right != NULL)//  ri8 ri8 ri8 ri8
					{
						textBox106->Text = System::Char::ToString(hf.front->right->right->right->right->c);
						textBox105->Text = System::Convert::ToString(hf.front->right->right->right->right->val);
						textBox104->Text = gcnew String(hf.front->right->right->right->right->cod.c_str());
						textBox106->Visible = true;
						textBox105->Visible = true;
						textBox104->Visible = true;
						if (hf.front->right->right->right->right->left != NULL)//...................................
						{
							label4->Visible = true;
							label3->Visible = true;
						}
					}
				}
			}
		}
	}

	int ascii = hf.front->val * 8;
	textBox50->Text = System::Convert::ToString(ascii);
	textBox49->Text = System::Convert::ToString(hf.front->val);
	
	
	button1->Visible = false;

	

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}