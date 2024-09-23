#pragma once

namespace lab23 {

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
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(996, 636);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(988, 607);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання №1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(233, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 586);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Лінія", L"Прямокутник", L"Зафарбований прямокутник",
					L"Еліпс", L"Зафарбований еліпс", L"Сектор"
			});
			this->listBox1->Location = System::Drawing::Point(8, 17);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(219, 132);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(988, 607);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання №2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(8, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(880, 581);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox2_Paint);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(988, 607);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Завдання №3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(204, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(504, 180);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(368, 401);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 2;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(239, 127);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(391, 463);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-4, 236);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(363, 354);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->pictureBox9);
			this->tabPage4->Controls->Add(this->pictureBox8);
			this->tabPage4->Controls->Add(this->pictureBox7);
			this->tabPage4->Controls->Add(this->button3);
			this->tabPage4->Controls->Add(this->listBox2);
			this->tabPage4->Controls->Add(this->pictureBox6);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(988, 607);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Завдання №4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(278, 278);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(236, 290);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(8, 278);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(248, 290);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 4;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(278, 15);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(236, 239);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(638, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Play";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 25;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Одяг", L"Шапка", L"Сорочка", L"Шарф" });
			this->listBox2->Location = System::Drawing::Point(583, 182);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(249, 129);
			this->listBox2->TabIndex = 1;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(8, 15);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(248, 239);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(996, 636);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Refresh();
	}
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Pen^ pn = gcnew System::Drawing::Pen(Color::Navy, 3);
	
	if (listBox1->SelectedIndex == 0) {
		
		e->Graphics->DrawLine(pn, 150, 40, 360, 180);
	}
	else if (listBox1->SelectedIndex == 1) {
		e->Graphics->DrawRectangle(pn, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 2) {
		e->Graphics->FillRectangle(Brushes::Lavender, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 3) {
		e->Graphics->DrawEllipse(pn, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 4) {
		e->Graphics->FillEllipse(Brushes::Olive, 150, 30, 300, 110);
	}
	else if (listBox1->SelectedIndex == 5) {
		e->Graphics->FillPie(Brushes::Maroon, 50, 0, 350, 190, 0, 90);
	}
}
private: System::Void pictureBox2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Brush^ br = gcnew System::Drawing::SolidBrush(Color::Olive);
	array<Point>^ star = gcnew array<Point>(11);
	star[0].X = 250; star[0].Y = 30;
	star[1].X = 300; star[1].Y = 120;
	star[2].X = 410; star[2].Y = 130;
	star[3].X = 340; star[3].Y = 200;
	star[4].X = 360; star[4].Y = 300;
	star[5].X = 260; star[5].Y = 260;
	star[6].X = 165; star[6].Y = 310;
	star[7].X = 180; star[7].Y = 210;
	star[8].X = 100; star[8].Y = 140;
	star[9].X = 205; star[9].Y = 125;
	star[10].X = 250; star[10].Y = 30;

	e->Graphics->FillPolygon(br, star);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 500;
	timer2->Interval = 500;
	timer3->Interval = 500;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Interval = 0;
	timer2->Interval = 0;
	timer3->Interval = 0;
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = true;
	pictureBox4->Visible = false;
	pictureBox5->Visible = false;
	timer2->Enabled = true;
	timer2->Interval = 500;
	timer1->Enabled = false;
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = true;
	pictureBox5->Visible = false;
	timer3->Enabled = true;
	timer3->Interval = 500;
	timer2->Enabled = false;
}
private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
	pictureBox5->Visible = true;
	timer1->Enabled = true;
	timer1->Interval = 500;
	timer3->Enabled = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Media::SoundPlayer^ f;
	if (listBox2->SelectedIndex == 0) {
		pictureBox6->Visible = true;
		f = gcnew System::Media::SoundPlayer("clothes.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 1) {
		pictureBox7->Visible = true;
		f = gcnew System::Media::SoundPlayer("hat.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 2) {
		pictureBox8->Visible = true;
		f = gcnew System::Media::SoundPlayer("shirt.wav");
		f->Play();
	}
	else if (listBox2->SelectedIndex == 3) {
		pictureBox9->Visible = true;
		f = gcnew System::Media::SoundPlayer("scarf.wav");
		f->Play();
	}
}
};
}
