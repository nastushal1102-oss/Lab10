#pragma once

namespace Lab10 {

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
		// 1. Оголошуємо структуру для зберігання даних про студента
		value struct Student {
			String^ PIP;
			int course;
			String^ group;
			int validAbsences;   // пропуски З поважної причини
			int invalidAbsences; // пропуски БЕЗ поважної причини
		};

		// 2. Створюємо список як поле класу форми
		System::Collections::Generic::List<Student>^ studentList = gcnew System::Collections::Generic::List<Student>();
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ записатиДаніToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button1;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->записатиДаніToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->записатиДаніToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->проАвтораToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(908, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// записатиДаніToolStripMenuItem
			// 
			this->записатиДаніToolStripMenuItem->Name = L"записатиДаніToolStripMenuItem";
			this->записатиДаніToolStripMenuItem->Size = System::Drawing::Size(120, 24);
			this->записатиДаніToolStripMenuItem->Text = L"Записати дані";
			this->записатиДаніToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::записатиДаніToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->проАвтораToolStripMenuItem->Text = L"Про автора";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(111, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(46, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"ПІП";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(38, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Курс";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Номер групи";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(114, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(114, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(111, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(155, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Кількість пропусків:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(32, 305);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(156, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"З поважної причини";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(22, 347);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(174, 16);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Без поважної причини";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(202, 299);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(202, 344);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 12;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(357, 98);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(237, 267);
			this->richTextBox1->TabIndex = 13;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(633, 98);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(239, 264);
			this->richTextBox2->TabIndex = 14;
			this->richTextBox2->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Info;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(409, 61);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(147, 16);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Дані про студентів";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Info;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(645, 59);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(217, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Пропустили більше 10 годин";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(109, 401);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 51);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Вивести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(908, 464);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void записатиДаніToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Створюємо нового студента
		Student newStudent;

		// Зчитуємо дані з текстових полів
		newStudent.PIP = textBox1->Text;
		newStudent.course = Convert::ToInt32(textBox2->Text);
		newStudent.group = textBox3->Text;
		newStudent.validAbsences = Convert::ToInt32(textBox4->Text); // З поважної
		newStudent.invalidAbsences = Convert::ToInt32(textBox5->Text); // Без поважної

		// Додаємо студента до списку
		studentList->Add(newStudent);

		// Виводимо інформацію у перший RichTextBox (Дані про студентів)
		String^ info = "ПІП: " + newStudent.PIP +
			" | Курс: " + newStudent.course +
			" | Група: " + newStudent.group +
			" | З поважної: " + newStudent.validAbsences +
			" | Без поважної: " + newStudent.invalidAbsences + "\n";
		richTextBox1->AppendText(info);

		// Очищаємо поля вводу для наступного студента
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
	}
	catch (Exception^ ex) {
		// Якщо користувач ввів букви замість цифр у поля "Курс" або "Кількість пропусків"
		MessageBox::Show("Помилка! Перевірте правильність вводу числових даних.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox2->Clear();

	bool found = false; // Прапорець, щоб знати, чи знайшли ми хоча б одного такого студента

	// Перебираємо всіх студентів у списку
	for each (Student s in studentList) {
		// Умова з вашого завдання №7: більше 10 год З ПОВАЖНОЇ причини
		if (s.validAbsences > 10) {
			String^ info = s.PIP + " (Група " + s.group + ") - Пропусків з поважної: " + s.validAbsences + "\n";
			richTextBox2->AppendText(info);
			found = true;
		}
	}

	// Якщо таких студентів немає
	if (!found) {
		richTextBox2->Text = "Студентів, які пропустили більше 10 годин з поважної причини, не знайдено.";
	}
}
};
}
