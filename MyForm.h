#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include<vector>
#include<string>
#include<sstream>
#include <iomanip>
#include <iostream>
#include <ctime>
using namespace std;

namespace DirichleLABTopRelaxation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown7;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;





	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ Разность;


	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Label^ label21;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->Разность = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Разность->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->numericUpDown7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->numericUpDown6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->numericUpDown4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->numericUpDown3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->numericUpDown5);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->numericUpDown2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->numericUpDown1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(1226, 13);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(605, 367);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Georgia", 9));
			this->label21->Location = System::Drawing::Point(9, 244);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(192, 18);
			this->label21->TabIndex = 41;
			this->label21->Text = L"на вспомогательной сетке";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(7, 276);
			this->label7->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(332, 18);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Заданная точность решения основной задачи";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 226);
			this->label6->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(233, 18);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Максимальное число итераций ";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->DecimalPlaces = 15;
			this->numericUpDown7->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 458752 });
			this->numericUpDown7->Location = System::Drawing::Point(424, 272);
			this->numericUpDown7->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 1048576 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(165, 22);
			this->numericUpDown7->TabIndex = 38;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 589824 });
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(313, 304);
			this->button2->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(276, 49);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Решить основную задачу";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown6->Location = System::Drawing::Point(424, 226);
			this->numericUpDown6->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(165, 22);
			this->numericUpDown6->TabIndex = 35;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 185);
			this->label5->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 18);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Заданная погрешность решения тестовой задачи";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(7, 304);
			this->button1->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(276, 49);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Решить тестовую задачу";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown4->Location = System::Drawing::Point(424, 146);
			this->numericUpDown4->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(165, 22);
			this->numericUpDown4->TabIndex = 33;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 92);
			this->label3->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 18);
			this->label3->TabIndex = 32;
			this->label3->Text = L"Параметр метода";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->DecimalPlaces = 3;
			this->numericUpDown3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->numericUpDown3->Location = System::Drawing::Point(424, 88);
			this->numericUpDown3->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(165, 22);
			this->numericUpDown3->TabIndex = 31;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(7, 150);
			this->label4->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 18);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Максимальное число итераций";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::Window;
			this->numericUpDown5->DecimalPlaces = 15;
			this->numericUpDown5->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 393216 });
			this->numericUpDown5->Location = System::Drawing::Point(424, 185);
			this->numericUpDown5->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 1048576 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(165, 22);
			this->numericUpDown5->TabIndex = 29;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 589824 });
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Georgia", 9));
			this->checkBox1->Location = System::Drawing::Point(12, 114);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(293, 22);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Использовать оптимальное значение";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(424, 49);
			this->numericUpDown2->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(165, 22);
			this->numericUpDown2->TabIndex = 22;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 53);
			this->label2->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 18);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Число разбиений по Y";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(424, 11);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(4);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(165, 22);
			this->numericUpDown1->TabIndex = 20;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 15);
			this->label1->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Число разбиений по X";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Location = System::Drawing::Point(1226, 388);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(605, 522);
			this->panel2->TabIndex = 1;
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(1, 405);
			this->label20->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(588, 30);
			this->label20->TabIndex = 28;
			this->label20->Text = L"     ";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(1, 191);
			this->label19->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(588, 30);
			this->label19->TabIndex = 27;
			this->label19->Text = L"     ";
			this->label19->Visible = false;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(1, 375);
			this->label17->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(588, 30);
			this->label17->TabIndex = 25;
			this->label17->Text = L"     ";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(1, 346);
			this->label16->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(588, 30);
			this->label16->TabIndex = 24;
			this->label16->Text = L"     ";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1, 316);
			this->label15->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(588, 30);
			this->label15->TabIndex = 23;
			this->label15->Text = L"     ";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(1, 287);
			this->label14->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(588, 30);
			this->label14->TabIndex = 22;
			this->label14->Text = L"     ";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1, 161);
			this->label13->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(588, 30);
			this->label13->TabIndex = 21;
			this->label13->Text = L"     ";
			this->label13->Visible = false;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(1, 43);
			this->label9->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(588, 30);
			this->label9->TabIndex = 17;
			this->label9->Text = L"     ";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(1, 73);
			this->label10->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(588, 30);
			this->label10->TabIndex = 18;
			this->label10->Text = L"     ";
			this->label10->Visible = false;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(1, 102);
			this->label11->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(588, 30);
			this->label11->TabIndex = 19;
			this->label11->Text = L"     ";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(1, 132);
			this->label12->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(588, 30);
			this->label12->TabIndex = 20;
			this->label12->Text = L"     ";
			this->label12->Visible = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(1, 14);
			this->label8->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(588, 30);
			this->label8->TabIndex = 17;
			this->label8->Text = L"     ";
			this->label8->Visible = false;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(7, 4);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1181, 706);
			this->dataGridView1->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->Разность);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(12, 7);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1207, 851);
			this->tabControl1->TabIndex = 24;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1199, 822);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Численное решение V(n) ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// Разность
			// 
			this->Разность->Controls->Add(this->dataGridView2);
			this->Разность->Location = System::Drawing::Point(4, 25);
			this->Разность->Name = L"Разность";
			this->Разность->Padding = System::Windows::Forms::Padding(3);
			this->Разность->Size = System::Drawing::Size(1199, 822);
			this->Разность->TabIndex = 1;
			this->Разность->Text = L"U*-V(N)";
			this->Разность->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(0, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(1189, 708);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1199, 822);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"U*";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(7, 4);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(1182, 703);
			this->dataGridView3->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView4);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1199, 822);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"V(2N)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(0, 3);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(1189, 708);
			this->dataGridView4->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView5);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1199, 822);
			this->tabPage4->TabIndex = 4;
			this->tabPage4->Text = L"V(N)-V(2N)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(0, 3);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(1189, 708);
			this->dataGridView5->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1844, 942);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Задача Дирихле. 1 ступень. Метод верхней релаксации. Семенова Валерия. Группа 382"
				L"003-2, команда 2, вариант 6";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->Разность->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private:
		//Точное решение для тестовой задачи
		double U(double _x, double _y) {
			return exp((sin(M_PI*_x*_y))*(sin(M_PI * _x * _y)));
		}
		// f - лапласиан со знаком "-"
		double Laplas(double _x, double _y) {
			return -(_x*_x+_y*_y)*M_PI*M_PI* exp((sin(M_PI * _x * _y)) * (sin(M_PI * _x * _y)))*((sin(2*M_PI*_x*_y)* sin(2 * M_PI * _x * _y))+2*cos(2 * M_PI * _x * _y));
		}
		//Граничные условия для основной задачи
		double Mu(double _x, double _y) {
			if (_x == 0)
			{
				return sin(M_PI*_y)*sin(M_PI*_y);
			}
			if (_x == 1)
			{
				return fabs(exp(sin(M_PI*_y)-1));
			}
			if (_y == 0)
			{
				return _x*(1-_x);
			}
			if (_y == 2)
			{
				return _x * (1 - _x)*exp(_x);
			}
		}
		//Граничные условия для тестовой задачи
		double Mu1(double _y) {
			return 1;
		}
		double Mu2(double _y) {
			return exp(sin(M_PI*_y)*sin(M_PI*_y));
		}
		double Mu3(double _x) {
			return 1;
		}
		double Mu4(double _x) {
			return exp(sin(2*M_PI * _x) * sin(2*M_PI * _x));
		}

		double Laplas_osn(double _x, double _y) {
			return -fabs(_x-_y);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView4->Rows->Clear();
	dataGridView4->Columns->Clear();
	dataGridView5->Rows->Clear();
	dataGridView5->Columns->Clear();
	label14->Visible = false;
	label15->Visible = false;
	label16->Visible = false;
	label17->Visible = false;
	label20->Visible = false;
	//Число разбиений по X и по Y
	int n = Convert::ToInt32(numericUpDown1->Text);
	int m = Convert::ToInt32(numericUpDown2->Text);

	//Граничные условия Задачи
	double a = 0, b = 1;
	double c = 0, d = 2;

	//  Шаги
	double h = (b - a) / n;
	double k = (d - c) / m;
	//Параметр метода
	double w = Convert::ToDouble(numericUpDown3->Text);
	//Оптимальный параметр
	if (checkBox1->Checked) {
		double temp1, temp2;
		temp1 = pow(sin(M_PI / (2.0 * n)), 2);
		temp2 = pow(sin(M_PI / (2.0 * m)), 2);
		temp2 = 2 * pow(k, 2) * temp1 + 2 * pow(h, 2) * temp2;
		temp1 = pow(h, 2) + pow(k, 2);
		temp2 /= temp1;
		w = 2 / (1 + sqrt(temp2 * (2 - temp2))); 
	}

	// Параметры шаблона сетки
	double param_x = 1 / pow(h, 2);
	double param_y = 1 / pow(k, 2);
	double A = -2 * (param_x + param_y);

	// узлы сетки
	vector<double> x(n + 1);
	vector<double> y(m + 1);

	for (int i = 0; i < x.size(); i++) {
		x[i] = a + i * h;
	}

	for (int j = 0; j < y.size(); j++) {
		y[j] = c + j * k;
	}

	vector <vector <double>> V(m + 1);
	for (int i = 0; i < m + 1; i++) {
		V[i] = vector <double>(n + 1, 0);
	}

	//Заполнение вектора численного решения ГУ
	for (int i = 0; i < m + 1; i++) {
		V[i][0] = U(a, y[i]);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = U(b, y[i]);
	}

	for (int i = 1; i < n; i++) {
		V[0][i] = U(x[i], c);
	}

	for (int i = 1; i < n; i++) {
		V[m][i] = U(x[i], d);
	}

	vector < vector <double>> f_laplas(m + 1);
	for (int i = 0; i < m + 1; i++) {
		f_laplas[i] = vector <double>(n + 1, 0);
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			f_laplas[i][j] = Laplas(x[j], y[i]);
		}
	}

	

	
	//Метод верхней релаксации
	int Nmax = Convert::ToInt32(numericUpDown4->Text); // Максимальное число итераций
	int numStep = 0; // Номер итерации
	double eps = Convert::ToDouble(numericUpDown5->Text); // Заданная точность
	double eps_max = 0.0; // текущее значение точности
	double eps_cur = 0.0; // для подсчета текущего значения точности
	double v_old; // старое значение комп вект x
	double v_new; // новое значение комп вект x
	double runtime = clock();
	while (true) {
		eps_max = 0.0;
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				v_new = A * v_old + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]);
				V[i][j] = v_old - w * (v_new + f_laplas[i][j]) / A;
				eps_cur = fabs(V[i][j] - v_old);
				if (eps_cur > eps_max) {
					eps_max = eps_cur;
				}
			}
			}
		numStep++;
		if ((eps_max < eps) || (numStep >= Nmax)) {
			break;
		}
	}
	runtime = (clock() - runtime) / 1000.0;

	
	//Вектор невязки
	vector <vector <double>> R(m + 1);
	for (int i = 0; i < m + 1; i++) {
		R[i] = vector <double>(n + 1, 0);
	}
	
	//Евклидова норма вектора невязки
	double Nev = 0.0, temp = 0.0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			R[i][j] = A*V[i][j] + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]) + f_laplas[i][j];
			Nev += pow(R[i][j], 2);
		}
	}
	Nev = sqrt(Nev);

	
	
	//Погрешность решения тестовой задачи
	double max = 0.0;
	double max_x = 0.0, max_y = 0.0;
	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			temp = fabs(V[i][j] - U(x[j], y[i]));
			if (temp > max) {
				max = temp;
				max_x = x[j];
				max_y = y[i];
			}
		}
	}

	
	//Заполнение таблицы численным решением
	if (n < 700) {
		dataGridView1->RowCount = m + 2;
		dataGridView1->ColumnCount = n + 3;

		//  Уберем заголовки строк
		dataGridView1->RowHeadersVisible = false;
		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView1->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView1->Rows[0]->Cells[i + 2]->Value = ceil(x[i]*1000)/1000;
		}

		for (int i = 0, row = 1; i <= m; i++, row++) {
			dataGridView1->Rows[row]->Cells[0]->Value = i;
			dataGridView1->Rows[row]->Cells[1]->Value = ceil(y[i]*1000)/1000;
		}
		
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView1->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		
		for (int i = 1, k = 0; i <= m + 1; i++, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView1->Rows[i]->Cells[j]->Value = ceil(V[k][p]*1000)/1000;
			}
		}
	}
	

	if (n < 700) {
		dataGridView2->RowCount = m + 2;
		dataGridView2->ColumnCount = n + 3;

		//  Уберем заголовки строк
		dataGridView2->RowHeadersVisible = false;

		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView2->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView2->Rows[0]->Cells[i + 2]->Value = ceil(x[i] * 1000) / 1000;
		}

		for (int i = 0, row = 1; i <= m; i++, row++) {
			dataGridView2->Rows[row]->Cells[0]->Value = i;
			dataGridView2->Rows[row]->Cells[1]->Value = ceil(y[i] * 1000) / 1000;
		}

		dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView2->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");


		for (int i = 1, k = 0; i <= m + 1; i++, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView2->Rows[i]->Cells[j]->Value = ceil((V[k][p] - U(x[p], y[k]))* 1000) / 1000;
			}
		}
	}
	if (n < 700) {
		dataGridView3->RowCount = m + 2;
		dataGridView3->ColumnCount = n + 3;

		//  Уберем заголовки строк
		dataGridView3->RowHeadersVisible = false;

		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView3->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView3->Rows[0]->Cells[i + 2]->Value = ceil(x[i] * 1000) / 1000;
		}

		for (int i = 0, row = 1; i <= m; i++, row++) {
			dataGridView3->Rows[row]->Cells[0]->Value = i;
			dataGridView3->Rows[row]->Cells[1]->Value = ceil(y[i] * 1000) / 1000;
		}

		dataGridView3->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView3->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView3->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");


		for (int i = 1, k = 0; i <= m + 1; i++, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView3->Rows[i]->Cells[j]->Value = ceil((U(x[p], y[k]))* 1000) / 1000;
			}
		}
	}
	//вывод результатов
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label19->Visible = true;

	label8->Text = "Количество совершенных итераций " + Convert::ToString(numStep);
	label9->Text = "Достигнутая точность " + Convert::ToString(eps_max);
	label10->Text = "Погрешность решения тестовой задачи " + Convert::ToString(max);
	label11->Text = "Максимальная погрешность тестовой задачи в точке (" + Convert::ToString(max_x) + ", " + Convert::ToString(max_y) + ")";
	label12->Text = "Евклидова норма невязки " + Convert::ToString(Nev);
	label13->Text = "Оптимальный параметр " + Convert::ToString(w);	
	
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//progressBar1->Value = 0;
	dataGridView2->Rows->Clear();
	dataGridView2->Columns->Clear();
	dataGridView3->Rows->Clear();
	dataGridView3->Columns->Clear();
	int n = Convert::ToInt32(numericUpDown1->Text);
	int m = Convert::ToInt32(numericUpDown2->Text);

	//Граничные условия Задачи
	double a = 0, b = 1;
	double c = 0, d = 2;

	//  Шаги
	double h = (b - a) / n;
	double k = (d - c) / m;
	//Параметр метода
	double w = Convert::ToDouble(numericUpDown3->Text);
	//Оптимальный параметр
	if (checkBox1->Checked) {
		double temp1, temp2;
		temp1 = pow(sin(M_PI / (2.0 * n)), 2);
		temp2 = pow(sin(M_PI / (2.0 * m)), 2);
		temp2 = 2 * pow(k, 2) * temp1 + 2 * pow(h, 2) * temp2;
		temp1 = pow(h, 2) + pow(k, 2);
		temp2 /= temp1;
		w = 2 / (1 + sqrt(temp2 * (2 - temp2))); 
	}


	// Параметры шаблона сетки
	double param_x = 1 / pow(h, 2);
	double param_y = 1 / pow(k, 2);
	double A = -2 * (param_x + param_y);

	// узлы сетки
	vector<double> x(n + 1);
	vector<double> y(m + 1);

	for (int i = 0; i < x.size(); i++) {
		x[i] = a + i * h;
	}

	for (int i = 0; i < y.size(); i++) {
		y[i] = c + i * k;
	}

	vector <vector <double>> V(m + 1);
	for (int i = 0; i < m + 1; i++) {
		V[i] = vector <double>(n + 1, 0);
	}


	for (int i = 0; i < m + 1; i++) {
		V[i][0] = Mu(0, y[i]);
	}

	for (int i = 0; i < m + 1; i++) {
		V[i][n] = Mu(1, y[i]);
	}

	for (int i = 1; i < n; i++) {
		V[0][i] = Mu(x[i], 0);
	}

	for (int i = 1; i < n; i++) {
		V[m][i] = Mu(x[i], 2);
	}


	vector < vector <double>> f_laplas(m + 1);
	for (int i = 0; i < m + 1; i++) {
		f_laplas[i] = vector <double>(n + 1, 0);
	}

	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			f_laplas[i][j] = Laplas_osn(x[j], y[i]);
		}
	}

	double start_time = clock();


	//Метод верхней релаксации
	int Nmax = Convert::ToInt32(numericUpDown4->Text); // Максимальное число итераций
	int numStep = 0; // Номер итерации
	double eps = Convert::ToDouble(numericUpDown5->Text); // Заданная точность
	double eps_max = 0.0; // текущее значение точности
	double eps_cur = 0.0; // для подсчета текущего значения точности
	double v_old; // старое значение комп вект x
	double v_new; // новое значение комп вект x
	

	while (true) {
		eps_max = 0.0;
		for (int i = 1; i < m; i++) {
			for (int j = 1; j < n; j++) {
				v_old = V[i][j];
				v_new = A * v_old + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]);
				V[i][j] = v_old - w * (v_new + f_laplas[i][j]) / A;
				eps_cur = fabs(V[i][j] - v_old);
				if (eps_cur > eps_max) {
					eps_max = eps_cur;
				}
			}
		}
		numStep++;
		//progressBar1->Value++;
		if ((eps_max < eps) || (numStep >= Nmax)) {
			break;
		}
	}
	start_time = (clock() - start_time)/1000.0;
	
	
	//Вектор невязки
	vector <vector <double>> R(m + 1);
	for (int i = 0; i < m + 1; i++) {
		R[i] = vector <double>(n + 1, 0);
	}

	//Евклидова норма невязки
	double Nev = 0.0, temp = 0.0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			R[i][j] = A * V[i][j] + param_x * (V[i][j - 1] + V[i][j + 1]) + param_y * (V[i - 1][j] + V[i + 1][j]) + f_laplas[i][j];
			Nev+= pow(R[i][j], 2);
			}
	}
	Nev = sqrt(Nev);

	//Параметры для вспомогательной сетки
	int n_2 = 2 * n;
	int m_2 = 2 * m;
	double h_2 = (b - a) / n_2;
	double k_2 = (d - c) / m_2;
	double param_x_2 = 1 / pow(h_2, 2);
	double param_y_2 = 1 / pow(k_2, 2);
	double A_2 = -2 * (param_x_2 + param_y_2);
	double temp1, temp2;
	temp1 = pow(sin(M_PI / (2.0 * n_2)), 2);
	temp2 = pow(sin(M_PI / (2.0 * m_2)), 2);
	temp2 = 2 * pow(k_2, 2) * temp1 + 2 * pow(h_2, 2) * temp2;
	temp1 = pow(h_2, 2) + pow(k_2, 2);
	temp2 /= temp1;
	double w_2 = 2 / (1 + sqrt(temp2 * (2 - temp2))); 


	// узлы вспомогательной сетки
	vector<double> x_2(n_2 + 1);
	vector<double> y_2(m_2 + 1);

	for (int i = 0; i < x_2.size(); i++) {
		x_2[i] = a + i * h_2;
	}

	for (int i = 0; i < y_2.size(); i++) {
		y_2[i] = c + i * k_2;
	}

	vector <vector <double>> V_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i] = vector <double>(n_2 + 1, 0);
	}

	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i][0] = Mu1(y_2[i]);
	}

	for (int i = 0; i < m_2 + 1; i++) {
		V_2[i][n_2] = Mu2(y_2[i]);
	}

	for (int i = 1; i < n_2; i++) {
		V_2[0][i] = Mu3(x_2[i]);
	}

	for (int i = 1; i < n_2; i++) {
		V_2[m_2][i] = Mu4(x_2[i]);
	}


	vector < vector <double>> f_laplas_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		f_laplas_2[i] = vector <double>(n_2 + 1, 0);
	}

	for (int i = 1; i < m_2; i++) {
		for (int j = 1; j < n_2; j++) {
			f_laplas_2[i][j] = Laplas_osn(x_2[j], y_2[i]);
		}
	}

	double start_time2 = clock();

	int Nmax_2 = Convert::ToInt32(numericUpDown6->Text);
	int numStep_2 = 0;
	double eps_2 = Convert::ToDouble(numericUpDown7->Text); 
	double eps_max_2 = 0.0; 
	double eps_cur_2 = 0.0; 
	double v_old_2;
	double v_new_2;  

	while (true) {
		eps_max_2 = 0.0;
		for (int i = 1; i < m_2; i++) {
			for (int j = 1; j < n_2; j++) {
				v_old_2 = V_2[i][j];
				v_new_2 = A_2 * v_old_2 + param_x_2 * (V_2[i][j - 1] + V_2[i][j + 1]) + param_y_2 * (V_2[i - 1][j] + V_2[i + 1][j]);
				V_2[i][j] = v_old_2 - w_2 * (v_new_2 + f_laplas_2[i][j]) / A_2;
				eps_cur_2 = fabs(V_2[i][j] - v_old_2);
				if (eps_cur_2 > eps_max_2) {
					eps_max_2 = eps_cur_2;
				}
			}
		}
		numStep_2++;
		if ((eps_max_2 < eps_2) || (numStep_2 >= Nmax_2)) {
			break;
		}
	}
	
	start_time2 = (clock() - start_time2) / 1000.0;
	//Точность решения вспомогательной задачи
	double max = 0.0;
	double max_x = 0.0, max_y = 0.0;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j < n; j++) {
			temp = fabs(V[i][j] - V_2[2 * i][2 * j]);
			if (temp > max) {
				max = temp;
				max_x = x[j];
				max_y = y[i];
			}
		}
	}

	//Невязка вспомогательной сетки
	vector <vector <double>> R_2(m_2 + 1);
	for (int i = 0; i < m_2 + 1; i++) {
		R_2[i] = vector <double>(n_2 + 1, 0);
	}


	double Nev_2 = 0.0, temp_2 = 0.0;
	for (int i = 1; i < m_2; i++) {
		for (int j = 1; j < n_2; j++) {
			R_2[i][j] = A_2 * V_2[i][j] + param_x_2 * (V_2[i][j - 1] + V_2[i][j + 1]) + param_y_2 * (V_2[i - 1][j] + V_2[i + 1][j]) + f_laplas_2[i][j];
			Nev_2 += pow(R_2[i][j], 2);
		}
	}
	Nev_2 = sqrt(Nev_2);
	

	
	//Заполнение таблицы численным решением
	if (n < 700) {
		dataGridView1->RowCount = m + 2;
		dataGridView1->ColumnCount = n + 3;
		
		//  Уберем заголовки строк
		dataGridView1->RowHeadersVisible = false;
		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView1->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView1->Rows[0]->Cells[i + 2]->Value = ceil(x[i]*1000)/1000;
		}
		
		for (int i = 0, row = 1; i <= m; i++, row++) {
			dataGridView1->Rows[row]->Cells[0]->Value = i;
			dataGridView1->Rows[row]->Cells[1]->Value = ceil(y[i]*1000)/1000;
		}
		
		dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView1->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		
		for (int i = 1, k = 0; i <= m+1; i++, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView1->Rows[i]->Cells[j]->Value = ceil(V[k][p]*1000)/1000;
			}
		}
	}
	
	if (n_2 < 700) {
		dataGridView4->RowCount = m_2 + 2;
		dataGridView4->ColumnCount = n_2 + 3;

		//  Уберем заголовки строк
		dataGridView4->RowHeadersVisible = false;

		//  Заполняем заголовки таблицы
		for (int i = n_2, col = 2; i >= 0; i--, col++) {
			dataGridView4->Columns[col]->HeaderText = Convert::ToString(n_2 - i);
			dataGridView4->Rows[0]->Cells[i + 2]->Value = ceil(x_2[i] * 1000) / 1000;
		}

		for (int i = 0, row = 1; i <= m_2; i++, row++) {
			dataGridView4->Rows[row]->Cells[0]->Value = i;
			dataGridView4->Rows[row]->Cells[1]->Value = ceil(y_2[i] * 1000) / 1000;
		}

		dataGridView4->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView4->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView4->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");


		for (int i = 1, k = 0; i <= m_2 + 1; i++, k++) {
			for (int j = 2, p = 0; j < n_2 + 3; j++, p++) {
				dataGridView4->Rows[i]->Cells[j]->Value = ceil(V_2[k][p] * 1000) / 1000;
			}
		}
	}

	if (n < 700) {
		dataGridView5->RowCount = m + 2;
		dataGridView5->ColumnCount = n + 3;

		//  Уберем заголовки строк
		dataGridView5->RowHeadersVisible = false;
		//  Заполняем заголовки таблицы
		for (int i = n, col = 2; i >= 0; i--, col++) {
			dataGridView5->Columns[col]->HeaderText = Convert::ToString(n - i);
			dataGridView5->Rows[0]->Cells[i + 2]->Value = ceil(x[i] * 1000) / 1000;
		}

		for (int i = 0, row = 1; i <= m; i++, row++) {
			dataGridView5->Rows[row]->Cells[0]->Value = i;
			dataGridView5->Rows[row]->Cells[1]->Value = ceil(y[i] * 1000) / 1000;
		}

		dataGridView5->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView5->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView5->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");


		for (int i = 1, k = 0; i <= m + 1; i++, k++) {
			for (int j = 2, p = 0; j < n + 3; j++, p++) {
				dataGridView5->Rows[i]->Cells[j]->Value = ceil(fabs(V[k][p] - V_2[2 * k][2 * p] )* 1000) / 1000;
			}
		}
	}
	// Вывод результатов основной задачи

	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;
	label11->Visible = true;
	label12->Visible = true;
	label13->Visible = true;
	label19->Visible = true;

	label8->Text = "Количество совершенных итераций на основной сетке " + Convert::ToString(numStep);
	label9->Text = "Достигнутая точность на основной сетке " + Convert::ToString(eps_max);
	label10->Text = "Точность решения основной задачи " + Convert::ToString(max);
	label11->Text = "Максимальная погрешность в узле (" + Convert::ToString(max_x) + ", " + Convert::ToString(max_y) + ")";
	label12->Text = "Евклидова норма невязки на основной сетке " + Convert::ToString(Nev);
	label13->Text = "Оптимальный параметр на основной сетке" + Convert::ToString(w);

	label14->Visible = true;
	label15->Visible = true;
	label16->Visible = true;
	label17->Visible = true;
	label20->Visible = true;


	label14->Text = "Количество совершенных итераций на вспомогательной сетке " + Convert::ToString(numStep_2);
	label15->Text = "Достигнутая точность на вспомогательной сетке " + Convert::ToString(eps_max_2);
	label16->Text = "Оптимальное значение параметра на вспомогательной сетке " + Convert::ToString(w_2);
	label17->Text = "Евклидова норма невязки на вспомогательной сетке " + Convert::ToString(Nev_2);

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void progressBar1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

}

};
}
