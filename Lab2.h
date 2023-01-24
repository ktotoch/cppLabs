#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Lab2
	/// </summary>
	public ref class Lab2 : public System::Windows::Forms::Form
	{
	public:
		Lab2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Lab2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(287, 347);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab2::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(139, 150);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(62, 51);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(258, 150);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(62, 51);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(377, 150);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(62, 51);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L":" });
			this->comboBox1->Location = System::Drawing::Point(208, 160);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(40, 32);
			this->comboBox1->TabIndex = 7;
			//
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L":" });
			this->comboBox2->Location = System::Drawing::Point(327, 160);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(40, 32);
			this->comboBox2->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.89565F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(450, 163);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"=";
			// 
			// textBox4
			// 
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23.7913F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(485, 150);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(62, 51);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Lab2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(714, 529);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Lab2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Lab2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			Single a, b, c;
			Single A = Single::TryParse(textBox1->Text,
				System::Globalization::NumberStyles::Number,
				System::Globalization::NumberFormatInfo::CurrentInfo, a);
			Single B = Single::TryParse(textBox2->Text,
				System::Globalization::NumberStyles::Number,
				System::Globalization::NumberFormatInfo::CurrentInfo, b);
			Single C = Single::TryParse(textBox3->Text,
				System::Globalization::NumberStyles::Number,
				System::Globalization::NumberFormatInfo::CurrentInfo, c);

			int op1 = comboBox1->SelectedIndex;
			int op2 = comboBox2->SelectedIndex;

			if (op1 > 1 && op2 < 2) {
				if (op1 == 2) {
					if (op2 == 0) {
						textBox4->Text = (a * b + c).ToString();
					}
					if (op2 == 1) {
						textBox4->Text = (a * b - c).ToString();
					}
				}
				if (op1 == 3) {
					if (op2 == 0) {
						if (b != 0) textBox4->Text = (a / b + c).ToString();
					}
					if (op2 == 1) {
						if (b != 0)	textBox4->Text = (a / b - c).ToString();
					}
				}
			}
			else if (op1 < 2 && op2 > 1) {
				if (op2 == 2) {
					if (op1 == 0) {
						textBox4->Text = (a + b * c).ToString();
					}
					if (op1 == 1) {
						textBox4->Text = (a - b * c).ToString();
					}
				}
				if (op2 == 3) {
					if (op1 == 0) {
						if (c != 0) textBox4->Text = (a + b / c).ToString();
					}
					if (op1 == 1) {
						if (c != 0) textBox4->Text = (a - b / c).ToString();
					}
				}
			}
			else if (op1 > 1 && op2 > 1) {
				if (op1 == 2) {
					if (op2 == 2) {
						textBox4->Text = (a * b * c).ToString();
					}
					if (op2 == 3) {
						if (c != 0) textBox4->Text = (a * b / c).ToString();
					}
				}
				if (op1 == 3) {
					if (op2 == 2) {
						if (b != 0) textBox4->Text = (a / b * c).ToString();
					}
					if (op2 == 3) {
						if (b != 0 && c != 0) textBox4->Text = (a / b / c).ToString();
					}
				}

			}
			else if (op1 < 2 && op2 < 2) {
				if (op1 == 0) {
					if (op2 == 0) {
						textBox4->Text = (a + b + c).ToString();
					}
					if (op2 == 1) {
						textBox4->Text = (a + b - c).ToString();
					}
				}
				if (op1 == 1) {
					if (op2 == 0) {
						textBox4->Text = (a - b + c).ToString();
					}
					if (op2 == 1) {
						textBox4->Text = (a - b - c).ToString();
					}
				}
			}
		}
	};
}
