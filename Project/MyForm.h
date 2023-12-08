#pragma once
#include "MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"MyForm4.h"
#include"AdminLogin.h"
#include"Details.h"
namespace Project18 {

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
















	private: System::Windows::Forms::Label^  home;
	private: System::Windows::Forms::Label^  signup;
	private: System::Windows::Forms::Label^  Admin;



	private: System::Windows::Forms::Label^  Cancellation;
	private: System::Windows::Forms::Label^  schedule;


	private: System::Windows::Forms::Label^  fares;
	private: System::Windows::Forms::Label^  booking;
	private: System::Windows::Forms::Label^  Login;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;















	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->home = (gcnew System::Windows::Forms::Label());
			this->signup = (gcnew System::Windows::Forms::Label());
			this->Admin = (gcnew System::Windows::Forms::Label());
			this->Cancellation = (gcnew System::Windows::Forms::Label());
			this->schedule = (gcnew System::Windows::Forms::Label());
			this->fares = (gcnew System::Windows::Forms::Label());
			this->booking = (gcnew System::Windows::Forms::Label());
			this->Login = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Transparent;
			this->home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->home->Location = System::Drawing::Point(192, 121);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(135, 42);
			this->home->TabIndex = 14;
			this->home->Text = L"Home";
			this->home->Click += gcnew System::EventHandler(this, &MyForm::home_Click);
			this->home->MouseLeave += gcnew System::EventHandler(this, &MyForm::home_MouseLeave);
			this->home->MouseHover += gcnew System::EventHandler(this, &MyForm::home_MouseHover);
			this->home->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::home_MouseUp);
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::Color::Transparent;
			this->signup->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->signup->Location = System::Drawing::Point(1030, 9);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(148, 45);
			this->signup->TabIndex = 15;
			this->signup->Text = L"Signup";
			this->signup->Click += gcnew System::EventHandler(this, &MyForm::signup_Click);
			this->signup->MouseLeave += gcnew System::EventHandler(this, &MyForm::signup_MouseLeave);
			this->signup->MouseHover += gcnew System::EventHandler(this, &MyForm::signup_MouseHover);
			this->signup->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::signup_MouseUp);
			// 
			// Admin
			// 
			this->Admin->BackColor = System::Drawing::Color::Transparent;
			this->Admin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Admin->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Admin->ForeColor = System::Drawing::Color::White;
			this->Admin->Location = System::Drawing::Point(556, 9);
			this->Admin->Name = L"Admin";
			this->Admin->Size = System::Drawing::Size(302, 112);
			this->Admin->TabIndex = 16;
			this->Admin->Text = L"Administrator \r\nMode";
			this->Admin->Click += gcnew System::EventHandler(this, &MyForm::label3_Click_1);
			this->Admin->MouseLeave += gcnew System::EventHandler(this, &MyForm::Admin_MouseLeave);
			this->Admin->MouseHover += gcnew System::EventHandler(this, &MyForm::Admin_MouseHover);
			this->Admin->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Admin_MouseUp);
			// 
			// Cancellation
			// 
			this->Cancellation->BackColor = System::Drawing::Color::Transparent;
			this->Cancellation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancellation->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancellation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Cancellation->Location = System::Drawing::Point(704, 121);
			this->Cancellation->Name = L"Cancellation";
			this->Cancellation->Size = System::Drawing::Size(249, 42);
			this->Cancellation->TabIndex = 17;
			this->Cancellation->Text = L"Cancellation";
			this->Cancellation->Click += gcnew System::EventHandler(this, &MyForm::Cancellation_Click);
			this->Cancellation->MouseLeave += gcnew System::EventHandler(this, &MyForm::Cancellation_MouseLeave);
			this->Cancellation->MouseHover += gcnew System::EventHandler(this, &MyForm::Cancellation_MouseHover);
			this->Cancellation->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Cancellation_MouseUp);
			// 
			// schedule
			// 
			this->schedule->BackColor = System::Drawing::Color::Transparent;
			this->schedule->Cursor = System::Windows::Forms::Cursors::Hand;
			this->schedule->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->schedule->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->schedule->Location = System::Drawing::Point(959, 121);
			this->schedule->Name = L"schedule";
			this->schedule->Size = System::Drawing::Size(238, 42);
			this->schedule->TabIndex = 18;
			this->schedule->Text = L"Instructions";
			this->toolTip1->SetToolTip(this->schedule, L"Instructions for using app");
			this->schedule->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			this->schedule->MouseLeave += gcnew System::EventHandler(this, &MyForm::schedule_MouseLeave);
			this->schedule->MouseHover += gcnew System::EventHandler(this, &MyForm::schedule_MouseHover);
			this->schedule->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::schedule_MouseUp);
			// 
			// fares
			// 
			this->fares->BackColor = System::Drawing::Color::Transparent;
			this->fares->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fares->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fares->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->fares->Location = System::Drawing::Point(560, 121);
			this->fares->Name = L"fares";
			this->fares->Size = System::Drawing::Size(115, 42);
			this->fares->TabIndex = 20;
			this->fares->Text = L"Fares";
			this->fares->Click += gcnew System::EventHandler(this, &MyForm::fares_Click);
			this->fares->MouseLeave += gcnew System::EventHandler(this, &MyForm::fares_MouseLeave);
			this->fares->MouseHover += gcnew System::EventHandler(this, &MyForm::fares_MouseHover);
			this->fares->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::fares_MouseUp);
			// 
			// booking
			// 
			this->booking->BackColor = System::Drawing::Color::Transparent;
			this->booking->Cursor = System::Windows::Forms::Cursors::Hand;
			this->booking->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->booking->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->booking->Location = System::Drawing::Point(339, 121);
			this->booking->Name = L"booking";
			this->booking->Size = System::Drawing::Size(197, 42);
			this->booking->TabIndex = 21;
			this->booking->Text = L"Book Now";
			this->booking->Click += gcnew System::EventHandler(this, &MyForm::booking_Click);
			this->booking->MouseLeave += gcnew System::EventHandler(this, &MyForm::booking_MouseLeave);
			this->booking->MouseHover += gcnew System::EventHandler(this, &MyForm::booking_MouseHover);
			this->booking->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::booking_MouseUp);
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::Transparent;
			this->Login->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Login->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Login->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Login->Location = System::Drawing::Point(889, 11);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(135, 43);
			this->Login->TabIndex = 22;
			this->Login->Text = L"Login";
			this->Login->Click += gcnew System::EventHandler(this, &MyForm::Login_Click);
			this->Login->MouseLeave += gcnew System::EventHandler(this, &MyForm::Login_MouseLeave);
			this->Login->MouseHover += gcnew System::EventHandler(this, &MyForm::Login_MouseHover);
			this->Login->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::Login_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(12, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(488, 92);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Don\'t Rush in Line\r\nBook Online....\r\n";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 704);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->booking);
			this->Controls->Add(this->fares);
			this->Controls->Add(this->schedule);
			this->Controls->Add(this->Cancellation);
			this->Controls->Add(this->Admin);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->home);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"Courier New", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"Railway Reservation App";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		SpeechSynthesizer^ speech = gcnew SpeechSynthesizer();
		int hide;

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	
	
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	Details ^obj = gcnew Details();
	obj->ShowDialog();
}
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Admin->BackColor = System::Drawing::Color::Transparent;
	this->Hide();
	AdminLogin ^obj = gcnew AdminLogin();
	obj->ShowDialog();
	this->Show();
}
private: System::Void Login_Click(System::Object^  sender, System::EventArgs^  e) {
	Login->BackColor = System::Drawing::Color::Transparent;
	this->Hide();
	MyForm1^ obj = gcnew MyForm1();
	obj->ShowDialog();
	this->Show();
	
}
private: System::Void signup_Click(System::Object^  sender, System::EventArgs^  e) {
	signup->BackColor = System::Drawing::Color::Transparent;
	MyForm2 ^reg = gcnew MyForm2();
	reg->ShowDialog();
	this->Show();
}
private: System::Void fares_Click(System::Object^  sender, System::EventArgs^  e) {
	fares->BackColor = System::Drawing::Color::Transparent;
	MyForm4 ^fares = gcnew MyForm4();
	fares->ShowDialog();
	this->Show();

}
private: System::Void booking_Click(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Transparent;
	MessageBox::Show("Please Login to Book Online");
}

//private: System::Void Login_MouseHover(System::Object^  sender, System::EventArgs^  e) {
//	Login->BackColor= System::Drawing::Color::Orange;
//}
private: System::Void Login_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Login->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void signup_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	signup->BackColor = System::Drawing::Color::Orange;
}
private: System::Void signup_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	signup->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void home_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void booking_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Orange;
}

private: System::Void booking_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void fares_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	fares->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void schedule_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
schedule->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void Cancellation_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Transparent;
}


private: System::Void Admin_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Admin->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void Login_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Login->BackColor = System::Drawing::Color::Orange;
}
private: System::Void Admin_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Admin->BackColor = System::Drawing::Color::Orange;
}
private: System::Void signup_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	signup->BackColor = System::Drawing::Color::Orange;
}
private: System::Void Cancellation_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Orange;
}
private: System::Void schedule_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	schedule->BackColor = System::Drawing::Color::Orange;
}
private: System::Void fares_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	fares->BackColor = System::Drawing::Color::Orange;
}
private: System::Void home_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	home->BackColor = System::Drawing::Color::Orange;
}
private: System::Void Admin_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Admin->BackColor = System::Drawing::Color::Orange;

}
private: System::Void Login_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Login->BackColor = System::Drawing::Color::Orange;
}
private: System::Void Cancellation_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Orange;
}
private: System::Void schedule_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	schedule->BackColor = System::Drawing::Color::Orange;
}
private: System::Void fares_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	fares->BackColor = System::Drawing::Color::Orange;

}
private: System::Void booking_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Orange;
}
private: System::Void home_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Orange;
}
private: System::Void MyForm_Shown(System::Object^  sender, System::EventArgs^  e) {
	speech->Speak("Welcome");
}
private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Cancellation_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Please Login first!");
}
};
}
