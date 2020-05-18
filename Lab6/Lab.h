#pragma once

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Lab
	/// </summary>
	public ref class Lab : public System::Windows::Forms::Form
	{
	public:
		Lab(void)
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
		~Lab()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ RecursiveAlgTime;

	private: System::Windows::Forms::TextBox^ IterationAlgTime;

	private: System::Windows::Forms::TextBox^ RecursiveAlgValue;
	private: System::Windows::Forms::TextBox^ IterationAlgValue;


	private: System::Windows::Forms::TextBox^ InputBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ IterationAlgButton;
	private: System::Windows::Forms::Button^ RecursiveAlgButton;
	private: System::Windows::Forms::TextBox^ InputBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RecursiveAlgTime = (gcnew System::Windows::Forms::TextBox());
			this->IterationAlgTime = (gcnew System::Windows::Forms::TextBox());
			this->RecursiveAlgValue = (gcnew System::Windows::Forms::TextBox());
			this->IterationAlgValue = (gcnew System::Windows::Forms::TextBox());
			this->InputBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IterationAlgButton = (gcnew System::Windows::Forms::Button());
			this->RecursiveAlgButton = (gcnew System::Windows::Forms::Button());
			this->InputBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Input numbers";
			// 
			// RecursiveAlgTime
			// 
			this->RecursiveAlgTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RecursiveAlgTime->Location = System::Drawing::Point(675, 85);
			this->RecursiveAlgTime->Name = L"RecursiveAlgTime";
			this->RecursiveAlgTime->ReadOnly = true;
			this->RecursiveAlgTime->Size = System::Drawing::Size(170, 31);
			this->RecursiveAlgTime->TabIndex = 2;
			// 
			// IterationAlgTime
			// 
			this->IterationAlgTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->IterationAlgTime->Location = System::Drawing::Point(675, 240);
			this->IterationAlgTime->Name = L"IterationAlgTime";
			this->IterationAlgTime->ReadOnly = true;
			this->IterationAlgTime->Size = System::Drawing::Size(170, 31);
			this->IterationAlgTime->TabIndex = 3;
			// 
			// RecursiveAlgValue
			// 
			this->RecursiveAlgValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->RecursiveAlgValue->Location = System::Drawing::Point(323, 85);
			this->RecursiveAlgValue->Name = L"RecursiveAlgValue";
			this->RecursiveAlgValue->ReadOnly = true;
			this->RecursiveAlgValue->Size = System::Drawing::Size(170, 31);
			this->RecursiveAlgValue->TabIndex = 4;
			// 
			// IterationAlgValue
			// 
			this->IterationAlgValue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->IterationAlgValue->Location = System::Drawing::Point(323, 240);
			this->IterationAlgValue->Name = L"IterationAlgValue";
			this->IterationAlgValue->ReadOnly = true;
			this->IterationAlgValue->Size = System::Drawing::Size(170, 31);
			this->IterationAlgValue->TabIndex = 5;
			// 
			// InputBox1
			// 
			this->InputBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InputBox1->Location = System::Drawing::Point(157, 3);
			this->InputBox1->Name = L"InputBox1";
			this->InputBox1->Size = System::Drawing::Size(136, 31);
			this->InputBox1->TabIndex = 6;
			this->InputBox1->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Lab::InputBox1_Validating);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(3, 82);
			this->label2->MaximumSize = System::Drawing::Size(208, 25);
			this->label2->MinimumSize = System::Drawing::Size(208, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Recursive algorythm";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(3, 237);
			this->label3->MaximumSize = System::Drawing::Size(189, 25);
			this->label3->MinimumSize = System::Drawing::Size(189, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(189, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Iterative algorythm";
			// 
			// IterationAlgButton
			// 
			this->IterationAlgButton->Location = System::Drawing::Point(217, 240);
			this->IterationAlgButton->Name = L"IterationAlgButton";
			this->IterationAlgButton->Size = System::Drawing::Size(100, 40);
			this->IterationAlgButton->TabIndex = 9;
			this->IterationAlgButton->Text = L"Start";
			this->IterationAlgButton->UseVisualStyleBackColor = true;
			this->IterationAlgButton->Click += gcnew System::EventHandler(this, &Lab::IterationAlgButton_Click);
			// 
			// RecursiveAlgButton
			// 
			this->RecursiveAlgButton->Location = System::Drawing::Point(217, 85);
			this->RecursiveAlgButton->Name = L"RecursiveAlgButton";
			this->RecursiveAlgButton->Size = System::Drawing::Size(100, 38);
			this->RecursiveAlgButton->TabIndex = 10;
			this->RecursiveAlgButton->Text = L"Start";
			this->RecursiveAlgButton->UseVisualStyleBackColor = true;
			this->RecursiveAlgButton->Click += gcnew System::EventHandler(this, &Lab::RecursiveAlgButton_Click);
			// 
			// InputBox2
			// 
			this->InputBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->InputBox2->Location = System::Drawing::Point(330, 3);
			this->InputBox2->Name = L"InputBox2";
			this->InputBox2->Size = System::Drawing::Size(137, 31);
			this->InputBox2->TabIndex = 11;
			this->InputBox2->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &Lab::InputBox2_Validating);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(323, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 25);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Value";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(675, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Time, s";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label5, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->IterationAlgButton, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->IterationAlgValue, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->IterationAlgTime, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->RecursiveAlgButton, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label4, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->RecursiveAlgTime, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->RecursiveAlgValue, 2, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 176);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 34.59916F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 65.40084F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 188)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(907, 426);
			this->tableLayoutPanel1->TabIndex = 13;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 4;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				10)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45)));
			this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->InputBox1, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->InputBox2, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 52);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(470, 58);
			this->tableLayoutPanel2->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(877, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 49);
			this->button1->TabIndex = 15;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Lab::button1_Click);
			// 
			// Lab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Fuchsia;
			this->ClientSize = System::Drawing::Size(931, 696);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MinimumSize = System::Drawing::Size(619, 575);
			this->Name = L"Lab";
			this->Text = L"Lab";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RecursiveAlgButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void IterationAlgButton_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Lab_Load(System::Object^ sender, System::EventArgs^ e) {
}




private: System::Void InputBox1_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
private: System::Void InputBox2_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
