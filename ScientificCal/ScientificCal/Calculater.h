#pragma once
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <exception>
namespace ScientificCal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculater
	/// </summary>
	public ref class Calculater : public System::Windows::Forms::Form
	{
	public:
		Calculater(void)
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
		~Calculater()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button20;
	protected:
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button19;


	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button18;

	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ стандартныйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ инженерныйToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ помощьToolStripMenuItem;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Label^ lblShowOp;

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->стандартныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->инженерныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->lblShowOp = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button20->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(16, 450);
			this->button20->Margin = System::Windows::Forms::Padding(4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(93, 86);
			this->button20->TabIndex = 24;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(16, 365);
			this->button16->Margin = System::Windows::Forms::Padding(4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 86);
			this->button16->TabIndex = 22;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(16, 195);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 86);
			this->button8->TabIndex = 21;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(292, 450);
			this->button19->Margin = System::Windows::Forms::Padding(4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(93, 86);
			this->button19->TabIndex = 20;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &Calculater::button19_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button14->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(16, 280);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 86);
			this->button14->TabIndex = 17;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(200, 450);
			this->button18->Margin = System::Windows::Forms::Padding(4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(93, 86);
			this->button18->TabIndex = 16;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &Calculater::button18_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(292, 110);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 86);
			this->button4->TabIndex = 23;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculater::button4_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::Control;
			this->button17->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(108, 450);
			this->button17->Margin = System::Windows::Forms::Padding(4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(93, 86);
			this->button17->TabIndex = 12;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(108, 110);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 86);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculater::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(200, 110);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(93, 86);
			this->button2->TabIndex = 6;
			this->button2->Text = L"CE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculater::button2_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn7->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(16, 110);
			this->btn7->Margin = System::Windows::Forms::Padding(4);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(93, 86);
			this->btn7->TabIndex = 5;
			this->btn7->Text = L"⌫";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculater::btn7_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtDisplay->Location = System::Drawing::Point(16, 32);
			this->txtDisplay->Margin = System::Windows::Forms::Padding(4);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(369, 77);
			this->txtDisplay->TabIndex = 4;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(812, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->стандартныйToolStripMenuItem,
					this->инженерныйToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// стандартныйToolStripMenuItem
			// 
			this->стандартныйToolStripMenuItem->Name = L"стандартныйToolStripMenuItem";
			this->стандартныйToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->стандартныйToolStripMenuItem->Text = L"Стандартный";
			this->стандартныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculater::стандартныйToolStripMenuItem_Click);
			// 
			// инженерныйToolStripMenuItem
			// 
			this->инженерныйToolStripMenuItem->Name = L"инженерныйToolStripMenuItem";
			this->инженерныйToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->инженерныйToolStripMenuItem->Text = L"Инженерный";
			this->инженерныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculater::инженерныйToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculater::выходToolStripMenuItem_Click);
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(83, 24);
			this->помощьToolStripMenuItem->Text = L"Заставка";
			this->помощьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Calculater::помощьToolStripMenuItem_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(108, 365);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 86);
			this->button5->TabIndex = 12;
			this->button5->Text = L"1";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(108, 280);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 86);
			this->button6->TabIndex = 12;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(108, 195);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 86);
			this->button7->TabIndex = 12;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::Control;
			this->button9->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(200, 365);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 86);
			this->button9->TabIndex = 12;
			this->button9->Text = L"2";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::Control;
			this->button10->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(200, 280);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 86);
			this->button10->TabIndex = 12;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::Control;
			this->button11->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(200, 195);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 86);
			this->button11->TabIndex = 12;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Control;
			this->button12->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(292, 365);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 86);
			this->button12->TabIndex = 12;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Control;
			this->button13->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(292, 280);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 86);
			this->button13->TabIndex = 12;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::Control;
			this->button15->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(292, 195);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(93, 86);
			this->button15->TabIndex = 12;
			this->button15->Text = L"9";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(502, 109);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 86);
			this->button1->TabIndex = 5;
			this->button1->Text = L"F";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::Control;
			this->button21->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(594, 109);
			this->button21->Margin = System::Windows::Forms::Padding(4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(93, 86);
			this->button21->TabIndex = 6;
			this->button21->Text = L"𝞹";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &Calculater::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::Control;
			this->button22->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(686, 109);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(93, 86);
			this->button22->TabIndex = 10;
			this->button22->Text = L"x^y";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::Control;
			this->button23->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(502, 449);
			this->button23->Margin = System::Windows::Forms::Padding(4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(93, 86);
			this->button23->TabIndex = 12;
			this->button23->Text = L"Exp";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::Control;
			this->button24->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->Location = System::Drawing::Point(502, 364);
			this->button24->Margin = System::Windows::Forms::Padding(4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(93, 86);
			this->button24->TabIndex = 12;
			this->button24->Text = L"tan";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &Calculater::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::Control;
			this->button25->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->Location = System::Drawing::Point(502, 279);
			this->button25->Margin = System::Windows::Forms::Padding(4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(93, 86);
			this->button25->TabIndex = 12;
			this->button25->Text = L"cos";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &Calculater::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::SystemColors::Control;
			this->button26->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->Location = System::Drawing::Point(594, 365);
			this->button26->Margin = System::Windows::Forms::Padding(4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(93, 86);
			this->button26->TabIndex = 12;
			this->button26->Text = L"1/x";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &Calculater::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::SystemColors::Control;
			this->button27->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->Location = System::Drawing::Point(502, 194);
			this->button27->Margin = System::Windows::Forms::Padding(4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(93, 86);
			this->button27->TabIndex = 12;
			this->button27->Text = L"sin";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &Calculater::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button28->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(686, 364);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(93, 86);
			this->button28->TabIndex = 12;
			this->button28->Text = L"M+";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &Calculater::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::SystemColors::Control;
			this->button29->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->Location = System::Drawing::Point(594, 279);
			this->button29->Margin = System::Windows::Forms::Padding(4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(93, 86);
			this->button29->TabIndex = 12;
			this->button29->Text = L"√󠇌";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &Calculater::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::SystemColors::Control;
			this->button30->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->Location = System::Drawing::Point(594, 194);
			this->button30->Margin = System::Windows::Forms::Padding(4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(93, 86);
			this->button30->TabIndex = 12;
			this->button30->Text = L"ln";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &Calculater::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button31->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->Location = System::Drawing::Point(686, 279);
			this->button31->Margin = System::Windows::Forms::Padding(4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(93, 86);
			this->button31->TabIndex = 12;
			this->button31->Text = L"MR";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &Calculater::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button32->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->Location = System::Drawing::Point(686, 194);
			this->button32->Margin = System::Windows::Forms::Padding(4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(93, 86);
			this->button32->TabIndex = 12;
			this->button32->Text = L"MC";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &Calculater::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::SystemColors::Control;
			this->button33->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(410, 109);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(93, 86);
			this->button33->TabIndex = 23;
			this->button33->Text = L"E";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::SystemColors::Control;
			this->button34->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->Location = System::Drawing::Point(594, 449);
			this->button34->Margin = System::Windows::Forms::Padding(4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(93, 86);
			this->button34->TabIndex = 16;
			this->button34->Text = L"mod";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::SystemColors::Control;
			this->button35->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->Location = System::Drawing::Point(410, 279);
			this->button35->Margin = System::Windows::Forms::Padding(4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(93, 86);
			this->button35->TabIndex = 17;
			this->button35->Text = L"C";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button36->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->Location = System::Drawing::Point(686, 449);
			this->button36->Margin = System::Windows::Forms::Padding(4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(93, 86);
			this->button36->TabIndex = 20;
			this->button36->Text = L"M-";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &Calculater::button36_Click);
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::SystemColors::Control;
			this->button37->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->Location = System::Drawing::Point(410, 194);
			this->button37->Margin = System::Windows::Forms::Padding(4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(93, 86);
			this->button37->TabIndex = 21;
			this->button37->Text = L"D";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::SystemColors::Control;
			this->button38->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->Location = System::Drawing::Point(410, 364);
			this->button38->Margin = System::Windows::Forms::Padding(4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(93, 86);
			this->button38->TabIndex = 22;
			this->button38->Text = L"B";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::SystemColors::Control;
			this->button39->Font = (gcnew System::Drawing::Font(L"Verdana", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->Location = System::Drawing::Point(410, 449);
			this->button39->Margin = System::Windows::Forms::Padding(4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(93, 86);
			this->button39->TabIndex = 24;
			this->button39->Text = L"A";
			this->button39->UseVisualStyleBackColor = false;
			this->button39->Click += gcnew System::EventHandler(this, &Calculater::bbutton_Click);
			// 
			// lblShowOp
			// 
			this->lblShowOp->AutoSize = true;
			this->lblShowOp->BackColor = System::Drawing::Color::White;
			this->lblShowOp->Location = System::Drawing::Point(23, 39);
			this->lblShowOp->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblShowOp->Name = L"lblShowOp";
			this->lblShowOp->Size = System::Drawing::Size(0, 17);
			this->lblShowOp->TabIndex = 25;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(545, 33);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(68, 29);
			this->radioButton1->TabIndex = 27;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"dec";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Calculater::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(545, 75);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(68, 29);
			this->radioButton2->TabIndex = 28;
			this->radioButton2->Text = L"hex";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Calculater::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(717, 33);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(62, 29);
			this->radioButton3->TabIndex = 27;
			this->radioButton3->Text = L"oct";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Calculater::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(717, 75);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(62, 29);
			this->radioButton4->TabIndex = 28;
			this->radioButton4->Text = L"bin";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Calculater::radioButton4_CheckedChanged);
			// 
			// Calculater
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(812, 556);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->lblShowOp);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Calculater";
			this->Text = L"Calculater";
			this->Load += gcnew System::EventHandler(this, &Calculater::Calculater_Load);
			this->Click += gcnew System::EventHandler(this, &Calculater::Arifmetick_op);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		float iFirstnum;//первый 
		float iSecondnum;//второй номер(переменые)
		float iResult;//результат
		String^ iOperator;

		bool rb16 = false;
		bool rb8 = false;
		bool rb2 = false;
		bool rb10 = false;

	private: System::Void Calculater_Load(System::Object^ sender, System::EventArgs^ e) {
		Calculater::Width = 315;
		Calculater::Height = 480;
		txtDisplay->Width = 276;
		rb10 = true;
	}
private: System::Void стандартныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculater::Width = 315;
	Calculater::Height = 480;
	txtDisplay->Width = 276;
	radioButton1->Checked = true; //включили десятичную систему счисления
	rb10 = true;
}

private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void инженерныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculater::Width = 610;
	Calculater::Height = 485;
	txtDisplay->Width = 276;
	button39->Enabled = false;
	button38->Enabled = false;
	button37->Enabled = false;
	button35->Enabled = false;
	button33->Enabled = false;
	button1->Enabled = false;
}


private: System::Void bbutton_Click(System::Object^ sender, System::EventArgs^ e) { // (событие) 0-F

	Button^ Number = safe_cast<Button^>(sender); //так я сокращаю код, чтобы не писать под каждую кнопку. 
//Number будет присваиваться номер нажимаемой кнопки(текст кнопки)

	if (txtDisplay->Text == "0")
	{
		txtDisplay->Text = Number->Text;
	}
	else
	{
		txtDisplay->Text = txtDisplay->Text + Number->Text;//работает также как со строками
	}

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //СЕ
	txtDisplay->Clear();
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	//создание дробного числа
	if (radioButton1->Checked) {
		if (!txtDisplay->Text->Contains("."))
		{
			txtDisplay->Text = txtDisplay->Text + ".";
		}
	}
	else {
		MessageBox::Show("the program does not know how to do this yet",
			"error", MessageBoxButtons::OK,
			MessageBoxIcon::Error);
	}
}
private: System::Void Arifmetick_op(System::Object^ sender, System::EventArgs^ e) {

	//простые операции ( * / + -)
	Button^ op;
	try
	{
		op = safe_cast<Button^>(sender);
		if (lblShowOp->Text == "") {// если оператор пустой
		//iFirstnum = Double::Parse(txtDisplay->Text);
			iFirstnum = vvod(txtDisplay->Text);
			txtDisplay->Text = "";
			iOperator = op->Text;
			if (iOperator == "x^y") iOperator = "^";
			lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator; //превращение в строку(запись операции в лейбел)
		}
		else {//чтобы заменить процедуру(оператор)
			iOperator = op->Text;
			if (iOperator == "x^y") iOperator = "^";
			lblShowOp->Text = System::Convert::ToString(iFirstnum) + " " + iOperator;
		}
	}
	catch (...)
	{

	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//плюс минус

	if (txtDisplay->Text->Contains("-"))
	{
		txtDisplay->Text = txtDisplay->Text->Remove(0,1);
	}
	else {
		txtDisplay->Text = "-" + txtDisplay->Text;
	}
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) { //c
	txtDisplay->Clear();
	lblShowOp->Text = "";
}

private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) { // равно
	lblShowOp->Text = "";
	//iSecondnum = Double::Parse(txtDisplay->Text);
	iSecondnum= vvod(txtDisplay->Text);

	if (iOperator == "+") {

		iResult = iFirstnum + iSecondnum;
		vivod(iResult);
		//txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "-") {
		iResult = iFirstnum - iSecondnum;
		vivod(iResult);
		//txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "*") {
		iResult = iFirstnum * iSecondnum;
		vivod(iResult);
		//txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "/") {
		iResult = iFirstnum / iSecondnum;
		vivod(iResult);
		//txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator=="mod") {
		int iFirst, iSecond, iRezult;
		iFirst = Convert::ToInt32(iFirstnum);
		iSecond = Convert::ToInt32(iSecondnum);
		iResult = iFirst % iSecond;
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator=="Exp") {
		iResult = (iFirstnum, (1 / iSecondnum));
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else if (iOperator == "^") {
		iResult = Math::Pow(iFirstnum, iSecondnum);
		txtDisplay->Text = System::Convert::ToString(iResult);
	}
	else {
		MessageBox::Show("Unknown operation.\nSomething wrong.",
			"error", MessageBoxButtons::OK,
			MessageBoxIcon::Error);
		return;
	}


}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {//backspace
	if (txtDisplay->Text->Length > 1)
	txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	else
		txtDisplay->Text = "0";
}



private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) { // число пи

	txtDisplay->Text = "3.14159265358997632";

}
	   float a; // переменная для счета

private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) { //логорифм log
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
	a = float::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("ln(" + (txtDisplay->Text) + ")");
	a = Math::Log(a);
	txtDisplay->Text = System::Convert::ToString(a);
}


private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {// sqrt
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
	a = float::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("sqrt(" + (txtDisplay->Text) + ")");
	a = Math::Sqrt(a);
	txtDisplay->Text = System::Convert::ToString(a);
}



private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {// sin
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
	a = float::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("sin(" + (txtDisplay->Text) + ")");
	a = Math::Sin(a);
	txtDisplay->Text = System::Convert::ToString(a);
}


private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {// cos
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
		a = float::Parse(txtDisplay->Text);
		lblShowOp->Text = System::Convert::ToString("cos(" + (txtDisplay->Text) + ")");
		a = Math::Cos(a);
		txtDisplay->Text = System::Convert::ToString(a);
}



private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {//tan
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
	a = float::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("tan(" + (txtDisplay->Text) + ")");
	a = Math::Tan(a);
	txtDisplay->Text = System::Convert::ToString(a);
}


private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) { // 1/x
	if (txtDisplay->Text == "") {
		txtDisplay->Text = "0";
	}
	a = float::Parse(txtDisplay->Text);
	lblShowOp->Text = System::Convert::ToString("1/" + (txtDisplay->Text));
	a = 1/a;
	txtDisplay->Text = System::Convert::ToString(a);
}
	   float rb;

private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//16 ричная система
	rb=vvod(txtDisplay->Text);
	rb16 = true;
	rb8 = false;
	rb2 = false;
	rb10 = false;
	vivod(rb);
	//////////////////////////
	button39->Enabled = true;
	button38->Enabled = true;
	button37->Enabled = true;
	button35->Enabled = true;
	button33->Enabled = true;
	button1->Enabled = true;
	//////////////////////////
	button9->Enabled = true;
	button10->Enabled = true;
	button15->Enabled = true;
	button12->Enabled = true;
	button6->Enabled = true;
	button13->Enabled = true;
	button7->Enabled = true;
	button11->Enabled = true;
	/////////////////////////
	button21->Enabled = false;
	button22->Enabled = false;
	button23->Enabled = false;
	button24->Enabled = false;
	button25->Enabled = false;
	button26->Enabled = false;
	button27->Enabled = false;
	button29->Enabled = false;
	button30->Enabled = false;
	button34->Enabled = false;
}

private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//8 ричная с.с
	rb = vvod(txtDisplay->Text);
	rb16 = false;
	rb8 = true;
	rb2 = false;
	rb10 = false;
	vivod(rb);
	//////////////////////////
	button39->Enabled = false;
	button38->Enabled = false;
	button37->Enabled = false;
	button35->Enabled = false;
	button33->Enabled = false;
	button1->Enabled = false;
	/////////////////////
	button15->Enabled = false;
	button11->Enabled = false;
	button12->Enabled = true;
	button6->Enabled = true;
	button13->Enabled = true;
	button7->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = true;
	/////////////////////////
	button21->Enabled = false;
	button22->Enabled = false;
	button23->Enabled = false;
	button24->Enabled = false;
	button25->Enabled = false;
	button26->Enabled = false;
	button27->Enabled = false;
	button29->Enabled = false;
	button30->Enabled = false;
	button34->Enabled = false;
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//2 ичная с.с
	rb = vvod(txtDisplay->Text);
	rb16 = false;
	rb8 = false;
	rb2 = true;
	rb10 = false;
	vivod(rb);
	//////////////////////////
	button39->Enabled = false;
	button38->Enabled = false;
	button37->Enabled = false;
	button35->Enabled = false;
	button33->Enabled = false;
	button1->Enabled = false;
	/////////////////////
	button15->Enabled = false;
	button11->Enabled = false;
	button12->Enabled = false;
	button6->Enabled = false;
	button13->Enabled = false;
	button7->Enabled = false;
	button9->Enabled = false;
	button10->Enabled = false;
	/////////////////////////
	button21->Enabled = false;
	button22->Enabled = false;
	button23->Enabled = false;
	button24->Enabled = false;
	button25->Enabled = false;
	button26->Enabled = false;
	button27->Enabled = false;
	button29->Enabled = false;
	button30->Enabled = false;
	button34->Enabled = false;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {//10 тичная с.с
	rb = vvod(txtDisplay->Text);
	rb16 = false;
	rb8 = false;
	rb2 = false;
	rb10 = true;
	vivod(rb);
	//////////////////////////
	button39->Enabled = false;
	button38->Enabled = false;
	button37->Enabled = false;
	button35->Enabled = false;
	button33->Enabled = false;
	button1->Enabled = false;
	/////////////////////
	button15->Enabled = true;
	button11->Enabled = true;
	button12->Enabled = true;
	button6->Enabled = true;
	button13->Enabled = true;
	button7->Enabled = true;
	button9->Enabled = true;
	button10->Enabled = true;
	/////////////////////////
	button21->Enabled = true;
	button22->Enabled = true;
	button23->Enabled = true;
	button24->Enabled = true;
	button25->Enabled = true;
	button26->Enabled = true;
	button27->Enabled = true;
	button29->Enabled = true;
	button30->Enabled = true;
	button34->Enabled = true;
}


private: System::Void помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("hello world","hi", MessageBoxButtons::OK);
}

	   float MemoryRead;
	   bool MemoryR = false;

private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {// MC(очистка)
	MemoryR = false;
	txtDisplay->Text = "";
}

private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) { // MR(считать в память)
	MemoryRead = vvod(txtDisplay->Text);
	MemoryR = true;
	txtDisplay->Text = "";
}


private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {// M+
	if (MemoryR) {
		iSecondnum = vvod(txtDisplay->Text);
		MemoryRead = iSecondnum + MemoryRead;
		vivod(MemoryRead);
	}
}


private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MemoryR) {
		iSecondnum = vvod(txtDisplay->Text);
		MemoryRead = iSecondnum - MemoryRead;
		vivod(MemoryRead);
	}
}
private: System::Void txtDisplay_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Clear();
}

	   float vvod(String^ st) {

		   if (st == "") {
			   st = "0";
		   }

		   if (st->Contains("-")) {//если число поступило отрицательным
			   st = st->Remove(0, 1);

			   if (rb16) {//16
				   int number16 = -Convert::ToInt32(st, 16);
				   return number16;
			   }
			   if (rb8) {//8
				   int number8 = -Convert::ToInt32(st, 8);
				   return number8;

			   }
			   if (rb2) {//2
				   int number2 = -Convert::ToInt32(st, 2);
				   return number2;

			   }
			   if (rb10) {
				   double number10 = -float::Parse(st);
				   return number10;
			   }
		   }
		   else {// если не отрицательное
			   if (rb16) {//16
				   int number16 = Convert::ToInt32(st, 16);
				   return number16;
			   }
			   if (rb8) {//8
				   int number8 = Convert::ToInt32(st, 8);
				   return number8;
			   }
			   if (rb2) {//2
				   int number2 = Convert::ToInt32(st, 2);
				   return number2;
			   }
			   if (rb10) {
				   double number10 = float::Parse(st);
				   return number10;
			   }
		   }
	   }

	   void vivod(float str){ 
			if (rb16) {//16
				int st = Convert::ToInt32(str);
				txtDisplay->Text = Convert::ToString(st, 16);
			   }
			   if (rb8) {//8
				   int st = Convert::ToInt32(str);
				   txtDisplay->Text = Convert::ToString(st, 8);
			   }
			   if (rb2) {//2
				   int st = Convert::ToInt32(str);
				   txtDisplay->Text = Convert::ToString(st, 2);
			   }
			   if (rb10) {
				   txtDisplay->Text = Convert::ToString(str);
			   }

	   }

};
}
