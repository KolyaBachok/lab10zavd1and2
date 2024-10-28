#pragma once
#include <cmath>

namespace lab10zavd1and2 {

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(767, 363);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(533, 334);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завд 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(175, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Обрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(121, 67);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(378, 190);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(8, 235);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(8, 207);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(8, 179);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 151);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(8, 123);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(66, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(375, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввести 7 дійсних чисел та обчислити добуток елементів\r\nцієї послідовності, значен"
				L"ня яких є менше за 6";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(759, 334);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завд 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(8, 175);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(517, 148);
			this->listBox1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(199, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Обрахувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(393, 99);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 6;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(201, 99);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 5;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(8, 99);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(421, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(15, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"K";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(233, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(16, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"A";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(8, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(723, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(767, 363);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();

		double product = 1.0;
		bool hasLessThanSix = false;

		// Масив з 7 полів введення, наприклад, textBox1, textBox2, ..., textBox7
		array<TextBox^>^ inputBoxes = { textBox1, textBox2, textBox3, textBox4, textBox5, textBox6, textBox7 };

		for each (TextBox ^ box in inputBoxes) {
			double value;
			// Перевіряємо, чи введене значення є числом
			if (Double::TryParse(box->Text, value) && value < 6) {
				product *= value;
				hasLessThanSix = true;
			}
		}

		// Виводимо результат
		if (hasLessThanSix) {
			richTextBox1->AppendText("Добуток чисел менших за 6: " + Convert::ToString(product) + "\n");
		}
		else {
			richTextBox1->AppendText("Немає чисел менших за 6\n");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очищення полів виводу
		listBox1->Items->Clear();

		// Змінні
		double a, b, i, h, x, k, y;

		// Читання значень a, b та k з текстових полів
		a = Convert::ToDouble(textBox8->Text); // Початок інтервалу
		b = Convert::ToDouble(textBox9->Text); // Кінець інтервалу
		k = Convert::ToDouble(textBox10->Text); // Кількість точок розбиття

		// Обчислення кроку
		h = (b - a) / k;

		// Заголовок таблиці
		listBox1->Items->Add("\t x                           y");
		listBox1->Items->Add("==============================");

		// Цикл для табуляції функції
		for (i = 0; i <= k; i++) {
			// Обчислення x та y
			x = a + i * h;
			y = sin(exp(x)) - pow(log(x), 2);

			// Додавання результату до listBox1
			listBox1->Items->Add("\t" + x.ToString("0.00") + "\t|\t" + y.ToString("0.00"));

		}
	}
	};
	}