#pragma once
#pragma comment(lib, "user32.lib") 
#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <WinUser.h>


namespace WakiSpam_CPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	


	/// <summary>
	/// —водка дл€ main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
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
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Text to spam:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(89, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 24);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start spam";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(195, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 24);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Stop spam";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &main::timer1_Tick);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(101, 32);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(56, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"1000";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &main::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Spamer interval:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(163, 34);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(93, 17);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Auto-selffocus";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox1_CheckedChanged);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &main::timer2_Tick);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(15, 88);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(92, 17);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"Always on top";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox2_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Location = System::Drawing::Point(209, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"By RezWaki";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(101, 58);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 24);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &main::button3_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(109, 88);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(88, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Captcha skip";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &main::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 3000;
			this->timer4->Tick += gcnew System::EventHandler(this, &main::timer4_Tick);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 108);
			this->ControlBox = false;
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->Name = L"main";
			this->Text = L"WakiSpam C++";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &main::main_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &main::main_FormClosed);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 //DWORD dwdata = 0;

				 Windows::Forms::SendKeys::Send(textBox1->Text + "{ENTER}");
				 //hotkey
				 if( GetAsyncKeyState(VK_F1) ) {
					 timer1->Stop();
				 }
				 //second hotkey
				 if( GetAsyncKeyState(VK_F2) ) {
					 Application::Exit();
				 }



				  
				 
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				timer4->Start();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if( textBox2->Text != "" ) {
				timer1->Interval = /*(INT64)*/System::Convert::ToInt64(textBox2->Text);
				timer2->Interval = /*(INT64)*/System::Convert::ToInt64(textBox2->Text);
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
			 timer3->Stop();
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->BringToFront();
			 this->Activate();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Enabled = checkBox1->Checked;
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->TopMost = checkBox2->Checked;
		 }
private: System::Void main_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 //MessageBox::Show("Visit: github.com/RezWaki\nfor more fun stuff!", "WakiSpam");
			 //Application::Exit();
		 }
private: System::Void main_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 MessageBox::Show("Visit: github.com/RezWaki\nfor more fun stuff!", "WakiSpam");
			 Application::Exit();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
				// captcha skip
			 	 mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
                 mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0); 
		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Start();
			 if(checkBox3->Checked){
				timer3->Start();
			 }
			 timer4->Stop();
		 }
};
}
