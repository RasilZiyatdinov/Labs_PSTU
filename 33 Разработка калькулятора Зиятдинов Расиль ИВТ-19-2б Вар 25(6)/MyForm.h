#pragma once
#include "Solution.h"
#include "Complex.h"
#include <string>
#include <windows.h>
#include <iostream>
#include <complex>
#include <msclr/marshal_cppstd.h>
using namespace std;

namespace Calculator {
	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ minimizedButton;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ closeButton;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Panel^ panelHelp;

	private: System::Windows::Forms::Timer^ timer1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::TextBox^ textBoxA;



	private: System::Windows::Forms::TextBox^ textBoxC;

	private: System::Windows::Forms::TextBox^ textBoxB;
	private: System::Windows::Forms::Label^ labelB;





	private: System::Windows::Forms::Timer^ timer2;

	private: System::Windows::Forms::TextBox^ textBoxX2;
	private: System::Windows::Forms::TextBox^ textBoxX1;
	private: System::Windows::Forms::Button^ buttonSolve;


	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxHistory;
	private: System::Windows::Forms::Label^ labelC;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;

	private: System::Windows::Forms::Button^ buttonClear1;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::Label^ labelX2;
	private: System::Windows::Forms::Label^ labelX1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ToolTip^ toolTip3;
	private: System::Windows::Forms::ToolTip^ toolTip4;
	private: System::Windows::Forms::ToolTip^ toolTip5;

	private: System::Windows::Forms::Label^ complexMode;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

















	private: System::ComponentModel::IContainer^ components;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->complexMode = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->minimizedButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panelHelp = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBoxHistory = (gcnew System::Windows::Forms::TextBox());
			this->labelX2 = (gcnew System::Windows::Forms::Label());
			this->labelX1 = (gcnew System::Windows::Forms::Label());
			this->buttonClear1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonSolve = (gcnew System::Windows::Forms::Button());
			this->textBoxX2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxC = (gcnew System::Windows::Forms::TextBox());
			this->labelB = (gcnew System::Windows::Forms::Label());
			this->textBoxB = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelC = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip3 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip4 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip5 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panelHelp->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->complexMode);
			this->panel1->Controls->Add(this->buttonClear);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 470);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(800, 30);
			this->panel1->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(675, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 30);
			this->label4->TabIndex = 15;
			this->label4->Text = L"History";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &MyForm::label4_MouseEnter);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &MyForm::label4_MouseLeave);
			// 
			// complexMode
			// 
			this->complexMode->AutoSize = true;
			this->complexMode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->complexMode->Cursor = System::Windows::Forms::Cursors::Hand;
			this->complexMode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->complexMode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->complexMode->Location = System::Drawing::Point(0, -1);
			this->complexMode->Name = L"complexMode";
			this->complexMode->Size = System::Drawing::Size(201, 30);
			this->complexMode->TabIndex = 16;
			this->complexMode->Text = L"Complex Mode";
			this->complexMode->Click += gcnew System::EventHandler(this, &MyForm::complexMode_Click);
			this->complexMode->MouseEnter += gcnew System::EventHandler(this, &MyForm::complexMode_MouseEnter);
			this->complexMode->MouseLeave += gcnew System::EventHandler(this, &MyForm::complexMode_MouseLeave);
			// 
			// buttonClear
			// 
			this->buttonClear->AutoSize = true;
			this->buttonClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonClear->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonClear.BackgroundImage")));
			this->buttonClear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->buttonClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClear->Location = System::Drawing::Point(770, 0);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(30, 30);
			this->buttonClear->TabIndex = 15;
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			this->buttonClear->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonClear_MouseEnter);
			this->buttonClear->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonClear_MouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(12)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->panel3->Controls->Add(this->flowLayoutPanel1);
			this->panel3->Controls->Add(this->tableLayoutPanel1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(800, 30);
			this->panel3->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 30);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(379, 100);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				29)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				29)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->closeButton, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->minimizedButton, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->tableLayoutPanel1->Location = System::Drawing::Point(742, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(58, 30);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// closeButton
			// 
			this->closeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->closeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closeButton.BackgroundImage")));
			this->closeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->closeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closeButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->closeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->closeButton->Location = System::Drawing::Point(32, 2);
			this->closeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(23, 26);
			this->closeButton->TabIndex = 3;
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &MyForm::closeButton_Click);
			this->closeButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::closeButton_MouseEnter);
			this->closeButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::closeButton_MouseLeave);
			// 
			// minimizedButton
			// 
			this->minimizedButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->minimizedButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimizedButton.BackgroundImage")));
			this->minimizedButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->minimizedButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->minimizedButton->Dock = System::Windows::Forms::DockStyle::Fill;
			this->minimizedButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->minimizedButton->Location = System::Drawing::Point(3, 2);
			this->minimizedButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->minimizedButton->Name = L"minimizedButton";
			this->minimizedButton->Size = System::Drawing::Size(23, 26);
			this->minimizedButton->TabIndex = 4;
			this->minimizedButton->UseVisualStyleBackColor = false;
			this->minimizedButton->Click += gcnew System::EventHandler(this, &MyForm::minimizedButton_Click);
			this->minimizedButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::minimizedButton_MouseEnter);
			this->minimizedButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::minimizedButton_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(379, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Quadratic Equation Calculator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			this->label1->MouseEnter += gcnew System::EventHandler(this, &MyForm::label1_MouseEnter);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MyForm::label1_MouseLeave);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->panelHelp);
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(379, 0);
			this->panel4->TabIndex = 5;
			// 
			// panelHelp
			// 
			this->panelHelp->BackColor = System::Drawing::Color::PowderBlue;
			this->panelHelp->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelHelp->Controls->Add(this->textBox1);
			this->panelHelp->Controls->Add(this->label3);
			this->panelHelp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelHelp->Location = System::Drawing::Point(0, 0);
			this->panelHelp->Name = L"panelHelp";
			this->panelHelp->Size = System::Drawing::Size(379, 0);
			this->panelHelp->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PowderBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(377, 256);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Schoolbook", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(0, -22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(379, 22);
			this->label3->TabIndex = 0;
			this->label3->Text = L"© Р. А. Зиятдинов, 2020\r\n\r\n";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->tableLayoutPanel3);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->labelX2);
			this->panel2->Controls->Add(this->labelX1);
			this->panel2->Controls->Add(this->buttonClear1);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->buttonSolve);
			this->panel2->Controls->Add(this->textBoxX2);
			this->panel2->Controls->Add(this->textBoxX1);
			this->panel2->Controls->Add(this->textBoxA);
			this->panel2->Controls->Add(this->textBoxC);
			this->panel2->Controls->Add(this->labelB);
			this->panel2->Controls->Add(this->textBoxB);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->labelC);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->tableLayoutPanel2);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 30);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(800, 470);
			this->panel2->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(54, 239);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 17);
			this->label8->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(53, 194);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 17);
			this->label7->TabIndex = 22;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 391);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(34, 42);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel3->Controls->Add(this->textBoxHistory, 0, 1);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->tableLayoutPanel3->Location = System::Drawing::Point(800, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 470)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(0, 470);
			this->tableLayoutPanel3->TabIndex = 17;
			// 
			// textBoxHistory
			// 
			this->textBoxHistory->BackColor = System::Drawing::Color::PowderBlue;
			this->textBoxHistory->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxHistory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxHistory->Location = System::Drawing::Point(3, 3);
			this->textBoxHistory->Multiline = true;
			this->textBoxHistory->Name = L"textBoxHistory";
			this->textBoxHistory->ReadOnly = true;
			this->textBoxHistory->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxHistory->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxHistory->Size = System::Drawing::Size(1, 464);
			this->textBoxHistory->TabIndex = 15;
			// 
			// labelX2
			// 
			this->labelX2->AutoSize = true;
			this->labelX2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelX2->ForeColor = System::Drawing::Color::White;
			this->labelX2->Location = System::Drawing::Point(31, 229);
			this->labelX2->Name = L"labelX2";
			this->labelX2->Size = System::Drawing::Size(0, 30);
			this->labelX2->TabIndex = 20;
			// 
			// labelX1
			// 
			this->labelX1->AutoSize = true;
			this->labelX1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelX1->ForeColor = System::Drawing::Color::White;
			this->labelX1->Location = System::Drawing::Point(31, 182);
			this->labelX1->Name = L"labelX1";
			this->labelX1->Size = System::Drawing::Size(0, 30);
			this->labelX1->TabIndex = 3;
			// 
			// buttonClear1
			// 
			this->buttonClear1->BackColor = System::Drawing::Color::Black;
			this->buttonClear1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClear1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear1->ForeColor = System::Drawing::Color::White;
			this->buttonClear1->Location = System::Drawing::Point(259, 278);
			this->buttonClear1->Name = L"buttonClear1";
			this->buttonClear1->Size = System::Drawing::Size(146, 48);
			this->buttonClear1->TabIndex = 19;
			this->buttonClear1->Text = L"CLEAR";
			this->buttonClear1->UseVisualStyleBackColor = false;
			this->buttonClear1->Click += gcnew System::EventHandler(this, &MyForm::buttonClear1_Click);
			this->buttonClear1->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonClear1_MouseEnter);
			this->buttonClear1->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonClear1_MouseLeave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(150, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(190, 30);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Equation Roots";
			// 
			// buttonSolve
			// 
			this->buttonSolve->BackColor = System::Drawing::Color::Black;
			this->buttonSolve->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSolve->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSolve->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSolve->ForeColor = System::Drawing::Color::White;
			this->buttonSolve->Location = System::Drawing::Point(79, 278);
			this->buttonSolve->Name = L"buttonSolve";
			this->buttonSolve->Size = System::Drawing::Size(146, 48);
			this->buttonSolve->TabIndex = 16;
			this->buttonSolve->Text = L"СALCULATE";
			this->buttonSolve->UseVisualStyleBackColor = false;
			this->buttonSolve->Click += gcnew System::EventHandler(this, &MyForm::buttonSolve_Click);
			this->buttonSolve->MouseEnter += gcnew System::EventHandler(this, &MyForm::buttonSolve_MouseEnter);
			this->buttonSolve->MouseLeave += gcnew System::EventHandler(this, &MyForm::buttonSolve_MouseLeave);
			// 
			// textBoxX2
			// 
			this->textBoxX2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBoxX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxX2->ForeColor = System::Drawing::Color::White;
			this->textBoxX2->Location = System::Drawing::Point(104, 227);
			this->textBoxX2->Name = L"textBoxX2";
			this->textBoxX2->ReadOnly = true;
			this->textBoxX2->Size = System::Drawing::Size(275, 30);
			this->textBoxX2->TabIndex = 15;
			this->textBoxX2->TabStop = false;
			this->textBoxX2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxX1
			// 
			this->textBoxX1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBoxX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxX1->ForeColor = System::Drawing::Color::White;
			this->textBoxX1->Location = System::Drawing::Point(104, 180);
			this->textBoxX1->Name = L"textBoxX1";
			this->textBoxX1->ReadOnly = true;
			this->textBoxX1->Size = System::Drawing::Size(275, 30);
			this->textBoxX1->TabIndex = 3;
			this->textBoxX1->TabStop = false;
			this->textBoxX1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxA
			// 
			this->textBoxA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBoxA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxA->ForeColor = System::Drawing::Color::White;
			this->textBoxA->Location = System::Drawing::Point(22, 77);
			this->textBoxA->Name = L"textBoxA";
			this->textBoxA->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxA->Size = System::Drawing::Size(76, 30);
			this->textBoxA->TabIndex = 6;
			this->textBoxA->TabStop = false;
			this->textBoxA->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxA->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBoxA_MouseEnter);
			this->textBoxA->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBoxA_MouseLeave);
			// 
			// textBoxC
			// 
			this->textBoxC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBoxC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxC->ForeColor = System::Drawing::Color::White;
			this->textBoxC->Location = System::Drawing::Point(332, 77);
			this->textBoxC->Name = L"textBoxC";
			this->textBoxC->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxC->Size = System::Drawing::Size(78, 30);
			this->textBoxC->TabIndex = 10;
			this->textBoxC->TabStop = false;
			this->textBoxC->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxC->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBoxC_MouseEnter);
			this->textBoxC->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBoxC_MouseLeave);
			// 
			// labelB
			// 
			this->labelB->AutoSize = true;
			this->labelB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelB->ForeColor = System::Drawing::Color::White;
			this->labelB->Location = System::Drawing::Point(270, 77);
			this->labelB->Name = L"labelB";
			this->labelB->Size = System::Drawing::Size(56, 29);
			this->labelB->TabIndex = 8;
			this->labelB->Text = L"X  +";
			this->labelB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxB
			// 
			this->textBoxB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBoxB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxB->ForeColor = System::Drawing::Color::White;
			this->textBoxB->Location = System::Drawing::Point(186, 77);
			this->textBoxB->Name = L"textBoxB";
			this->textBoxB->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBoxB->Size = System::Drawing::Size(78, 30);
			this->textBoxB->TabIndex = 9;
			this->textBoxB->TabStop = false;
			this->textBoxB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxB->MouseEnter += gcnew System::EventHandler(this, &MyForm::textBoxB_MouseEnter);
			this->textBoxB->MouseLeave += gcnew System::EventHandler(this, &MyForm::textBoxB_MouseLeave);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(104, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(67, 35);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// labelC
			// 
			this->labelC->AutoSize = true;
			this->labelC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelC->ForeColor = System::Drawing::Color::White;
			this->labelC->Location = System::Drawing::Point(416, 77);
			this->labelC->Name = L"labelC";
			this->labelC->Size = System::Drawing::Size(52, 29);
			this->labelC->TabIndex = 11;
			this->labelC->Text = L"=  0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(181, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 30);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Equation";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel2->Controls->Add(this->textBox2, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->pictureBox3, 0, 1);
			this->tableLayoutPanel2->ForeColor = System::Drawing::Color::White;
			this->tableLayoutPanel2->Location = System::Drawing::Point(52, 391);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 45)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(0, 45);
			this->tableLayoutPanel2->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(3, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(1, 27);
			this->textBox2->TabIndex = 23;
			this->textBox2->Text = L"Your equation in complex numbers";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1, 39);
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(537, 24);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(251, 334);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// toolTip1
			// 
			this->toolTip1->BackColor = System::Drawing::SystemColors::Highlight;
			this->toolTip1->ForeColor = System::Drawing::Color::White;
			this->toolTip1->ToolTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			// 
			// timer1
			// 
			this->timer1->Interval = 15;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 5;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panelHelp->ResumeLayout(false);
			this->panelHelp->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
bool f1 = true;
bool f2 = true;
bool mode = false;
bool f3 = false;
double a, b, c;
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
//
//closeButton interface
//
private: System::Void closeButton_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 10; i++)
	{
		Thread::Sleep(60);
		this->Opacity -= 0.1;
	}
	Application::Exit();
}
private: System::Void closeButton_MouseEnter(System::Object^ sender, System::EventArgs^ e){
	closeButton->BackColor = System::Drawing::Color::FromArgb(139, 0, 0);
	toolTip4->SetToolTip(closeButton, "Close");
}
private: System::Void closeButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {closeButton->BackColor = System::Drawing::Color::FromArgb(28, 144, 255);}
//
//minimizedButton interface
//
private: System::Void minimizedButton_Click(System::Object^ sender, System::EventArgs^ e) {this->WindowState = FormWindowState::Minimized;}
private: System::Void minimizedButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	minimizedButton->BackColor = System::Drawing::Color::FromArgb(124, 252, 0);
	toolTip4->SetToolTip(minimizedButton, "Minimize");
}
private: System::Void minimizedButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) {minimizedButton->BackColor = System::Drawing::Color::FromArgb(28, 144, 255);}
//
//labelHelp interface
//
private: System::Void label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = System::Drawing::Color::FromArgb(124, 252, 0);
	toolTip1->SetToolTip(label1, "About");
}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {label1->ForeColor = System::Drawing::Color::FromArgb(28, 144, 255);}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {timer1->Start();}
//
//panelHelp move
//
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!f1)
	{
		panel4->Height -= 10;
		if (panel4->Height == 0)
		{
			timer1->Stop();
			f1 = true;
		}
	}
	else
	{
		panel4->Height += 10;
		if (panel4->Height == 230)
		{
			timer1->Stop();
			f1 = false;
		}
	}		
}
//
//Coefficient - A
//
private: System::Void textBoxA_MouseEnter(System::Object^ sender, System::EventArgs^ e) {textBoxA->BackColor = System::Drawing::Color::FromArgb(0, 0, 128);}
private: System::Void textBoxA_MouseLeave(System::Object^ sender, System::EventArgs^ e) {textBoxA->BackColor = System::Drawing::Color::FromArgb(30, 40, 60);}
//
//Coefficient - B
//
private: System::Void textBoxB_MouseEnter(System::Object^ sender, System::EventArgs^ e) { textBoxB->BackColor = System::Drawing::Color::FromArgb(0, 0, 128); }
private: System::Void textBoxB_MouseLeave(System::Object^ sender, System::EventArgs^ e) { textBoxB->BackColor = System::Drawing::Color::FromArgb(30, 40, 60); }
//
//Coefficient - C
//
private: System::Void textBoxC_MouseEnter(System::Object^ sender, System::EventArgs^ e) { textBoxC->BackColor = System::Drawing::Color::FromArgb(0, 0, 128); }
private: System::Void textBoxC_MouseLeave(System::Object^ sender, System::EventArgs^ e) { textBoxC->BackColor = System::Drawing::Color::FromArgb(30, 40, 60); }
//
//panelHistory move
//
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!f2)
	{
		tableLayoutPanel3->Width -= 10;
		if (tableLayoutPanel3->Width == 0)
		{
			timer2->Stop();
			f2 = true;
		}
	}
	else
	{
		tableLayoutPanel3->Width += 10;
		if (tableLayoutPanel3->Width == 250)
		{
			timer2->Stop();
			f2 = false;
		}
	}
}
//
//Button - "CALCULATE"
//
private: System::Void buttonSolve_MouseEnter(System::Object^ sender, System::EventArgs^ e) { buttonSolve->ForeColor = System::Drawing::Color::FromArgb(124, 252, 0); }
private: System::Void buttonSolve_MouseLeave(System::Object^ sender, System::EventArgs^ e) { buttonSolve->ForeColor = Color::White; }
private: System::Void buttonSolve_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mode)
	{
		if ((Double::TryParse(textBoxA->Text, a)) && (Double::TryParse(textBoxB->Text, b)) && (Double::TryParse(textBoxC->Text, c)))
			MessageBox::Show("Turn off complex mode", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if (Success(textBoxA->Text) && Success(textBoxB->Text) && Success(textBoxC->Text))
		{
			complex<double> A = converting(textBoxA->Text);
			complex<double> B = converting(textBoxB->Text);
			complex<double> C = converting(textBoxC->Text);
			complex_solution(A, B, C);
			textBoxX1->Width = 350;
			textBoxX2->Width = 350;
			textBoxX1->Visible = true;
			textBoxX2->Visible = true;
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxX2->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			labelX1->Text = "X   =";
			labelX2->Text = "X   =";
			label7->Text = "1";
			label8->Text = "2";
			textBoxX1->Text = System::Convert::ToString(X_C1.real());
			textBoxX2->Text = System::Convert::ToString(X_C2.real());
			if (X_C1.imag() >= 0)
				textBoxX1->AppendText("+" + System::Convert::ToString(X_C1.imag()) + "i");
			else
				textBoxX1->AppendText(System::Convert::ToString(X_C1.imag()) + "i");
			if (X_C2.imag() >= 0)
				textBoxX2->AppendText("+" + System::Convert::ToString(X_C2.imag()) + "i");
			else
				textBoxX2->AppendText(System::Convert::ToString(X_C2.imag()) + "i");
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText("x1 = " + textBoxX1->Text + Environment::NewLine + "x2 = " + textBoxX2->Text + Environment::NewLine + Environment::NewLine);
		}
		else
		{
			MessageBox::Show(msclr::interop::marshal_as<System::String^>(ErrorTxt),"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else if ((Double::TryParse(textBoxA->Text, a)) && (Double::TryParse(textBoxB->Text, b)) && (Double::TryParse(textBoxC->Text, c)))
	{
		int res = solution(a, b, c);
		if (res == 0)
		{
			textBoxX1->Width = 200;
			textBoxX2->Width = 200;
			textBoxX1->Visible = true;
			textBoxX2->Visible = false;
			label7->Text = "";
			label8->Text = "";
			labelX1->Text = "X = ";
			labelX2->Text = "";
			textBoxX1->Text = "R (any real number)";
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText("x = " + textBoxX1->Text + Environment::NewLine + Environment::NewLine);
		}
		else if (res == -1)
		{
			textBoxX1->Width = 200;
			textBoxX2->Width = 200;
			textBoxX1->Visible = true;
			textBoxX2->Visible = false;
			labelX1->Text = "";
			labelX2->Text = "";
			textBoxX1->Text = "No roots";
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText(textBoxX1->Text + Environment::NewLine + Environment::NewLine);
		}
		else if (res == 2)
		{
			textBoxX1->Width = 200;
			textBoxX2->Width = 200;
			textBoxX1->Visible = true;
			textBoxX2->Visible = true;
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxX2->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			labelX1->Text = "X   =";
			labelX2->Text = "X   =";
			label7->Text = "1";
			label8->Text = "2";
			textBoxX1->Text = System::Convert::ToString(x1);
			textBoxX2->Text = System::Convert::ToString(x2);
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText("x1 = " + textBoxX1->Text + Environment::NewLine + "x2 = " + textBoxX2->Text + Environment::NewLine + Environment::NewLine);
		}
		else if (res == -2)
		{
			textBoxX1->Width = 200;
			textBoxX2->Width = 200;
			textBoxX1->Visible = true;
			textBoxX2->Visible = true;
			labelX1->Text = "X   =";
			labelX2->Text = "X   =";
			label7->Text = "1";
			label8->Text = "2";
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxX2->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			string x1 = to_string(first) + " + " + to_string(second) + "i";
			string x2 = to_string(first) + " - " + to_string(second) + "i";;
			textBoxX1->Text = msclr::interop::marshal_as<System::String^>(x1);
			textBoxX2->Text = msclr::interop::marshal_as<System::String^>(x2);
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText("x1 = " + textBoxX1->Text + Environment::NewLine + "x2 = " + textBoxX2->Text + Environment::NewLine + Environment::NewLine);
		}
		else
		{
			textBoxX1->Width = 200;
			textBoxX2->Width = 200;
			label7->Text = "";
			label8->Text = "";
			labelX1->Text = "X = ";
			labelX2->Text = "";
			textBoxX2->Visible = false;
			textBoxX1->BackColor = System::Drawing::Color::FromArgb(47, 79, 79);
			textBoxX1->Text = System::Convert::ToString(x1);
			textBoxHistory->AppendText("(" + textBoxA->Text + ") x^2" + " + (" + textBoxB->Text + ") x" + " + (" + textBoxC->Text + ") = 0" + Environment::NewLine);
			textBoxHistory->AppendText("x = " + textBoxX1->Text + Environment::NewLine + Environment::NewLine);		
		}
	}
	else if ((textBoxA->Text == "") || (textBoxB->Text == "") || (textBoxC->Text == ""))
		MessageBox::Show("Fill in all boxes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	else MessageBox::Show("Invalid input", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
//
//labelHistory interface
//
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {	timer2->Start();}
private: System::Void label4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label4->ForeColor = System::Drawing::Color::FromArgb(124, 252, 0);
	toolTip2->SetToolTip(label4, "Calculation's history");
}
private: System::Void label4_MouseLeave(System::Object^ sender, System::EventArgs^ e) { label4->ForeColor = System::Drawing::Color::FromArgb(28, 144, 255); }
//
//Button - "CLEAR"
//
private: System::Void buttonClear_MouseEnter(System::Object^ sender, System::EventArgs^ e) { 
	buttonClear->BackColor = System::Drawing::Color::FromArgb(124, 252, 0);
	toolTip3->SetToolTip(buttonClear, "Clear the history");
}
private: System::Void buttonClear_MouseLeave(System::Object^ sender, System::EventArgs^ e) { buttonClear->BackColor = System::Drawing::Color::FromArgb(28, 144, 255); }
private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) { textBoxHistory->Clear(); }
//
//Button - "CLEAR THE HISTORY"
//
private: System::Void buttonClear1_MouseEnter(System::Object^ sender, System::EventArgs^ e) { buttonClear1->ForeColor = System::Drawing::Color::FromArgb(124, 252, 0); }
private: System::Void buttonClear1_MouseLeave(System::Object^ sender, System::EventArgs^ e) { buttonClear1->ForeColor = Color::White; }
private: System::Void buttonClear1_Click(System::Object^ sender, System::EventArgs^ e) {

	labelX1->Text = "";
	labelX2->Text = "";
	label7->Text = "";
	label8->Text = "";
	textBoxX1->BackColor = System::Drawing::Color::FromArgb(30, 40, 60);
	textBoxX2->BackColor = System::Drawing::Color::FromArgb(30, 40, 60);
	textBoxX1->Width = 200;
	textBoxX2->Width = 200;
	textBoxA->Clear();
	textBoxB->Clear();
	textBoxC->Clear();
	textBoxX1->Clear();
	textBoxX2->Clear();
}
private: System::Void complexMode_Click(System::Object^ sender, System::EventArgs^ e) {
	timer3->Start();
}
private: System::Void complexMode_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	complexMode->ForeColor = System::Drawing::Color::FromArgb(124, 252, 0);
}
private: System::Void complexMode_MouseLeave(System::Object^ sender, System::EventArgs^ e) { complexMode->ForeColor = System::Drawing::Color::FromArgb(28, 144, 255); }

private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (!mode)
	{
		pictureBox2->Visible = true;
		tableLayoutPanel2->Width += 10;
		if (tableLayoutPanel2->Width == 380)
		{
			timer3->Stop();
			mode = true;
		}
	}
	else
	{
		tableLayoutPanel2->Width -= 20;
		if (tableLayoutPanel2->Width == 0)
		{
			timer3->Stop();
			mode = false;
		}
		pictureBox2->Visible = false;
	}

}

};
}
