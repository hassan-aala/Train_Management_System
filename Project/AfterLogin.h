#pragma once
#include"MyForm3.h"
#include"MyForm4.h"
#include"cancellation.h"
#include"Reservation.h"
#include"Details.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;

	/// <summary>
	/// Summary for AfterLogin
	/// </summary>
	public ref class AfterLogin : public System::Windows::Forms::Form
	{
	public:
		AfterLogin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AfterLogin(String ^name)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			label2->Text = "Welcome "+ name;
			username = name;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AfterLogin()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  booking;
	private: System::Windows::Forms::Label^  fares;
	private: System::Windows::Forms::Label^  schedule;
	private: System::Windows::Forms::Label^  Cancellation;


	private: System::Windows::Forms::Label^  home;



	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::Label^  label2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AfterLogin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->booking = (gcnew System::Windows::Forms::Label());
			this->fares = (gcnew System::Windows::Forms::Label());
			this->schedule = (gcnew System::Windows::Forms::Label());
			this->Cancellation = (gcnew System::Windows::Forms::Label());
			this->home = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(24, 243);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(488, 92);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Don\'t Rush in Line\r\nBook Online....\r\n";
			// 
			// booking
			// 
			this->booking->BackColor = System::Drawing::Color::Transparent;
			this->booking->Cursor = System::Windows::Forms::Cursors::Hand;
			this->booking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->booking->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->booking->Location = System::Drawing::Point(376, 102);
			this->booking->Name = L"booking";
			this->booking->Size = System::Drawing::Size(167, 51);
			this->booking->TabIndex = 35;
			this->booking->Text = L"Book Now";
			this->booking->Click += gcnew System::EventHandler(this, &AfterLogin::booking_Click);
			this->booking->MouseLeave += gcnew System::EventHandler(this, &AfterLogin::booking_MouseLeave);
			this->booking->MouseHover += gcnew System::EventHandler(this, &AfterLogin::booking_MouseHover);
			// 
			// fares
			// 
			this->fares->BackColor = System::Drawing::Color::Transparent;
			this->fares->Cursor = System::Windows::Forms::Cursors::Hand;
			this->fares->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fares->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->fares->Location = System::Drawing::Point(599, 102);
			this->fares->Name = L"fares";
			this->fares->Size = System::Drawing::Size(120, 51);
			this->fares->TabIndex = 34;
			this->fares->Text = L"Fares";
			this->fares->Click += gcnew System::EventHandler(this, &AfterLogin::fares_Click);
			this->fares->MouseLeave += gcnew System::EventHandler(this, &AfterLogin::fares_MouseLeave);
			this->fares->MouseHover += gcnew System::EventHandler(this, &AfterLogin::fares_MouseHover);
			// 
			// schedule
			// 
			this->schedule->BackColor = System::Drawing::Color::Transparent;
			this->schedule->Cursor = System::Windows::Forms::Cursors::Hand;
			this->schedule->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->schedule->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->schedule->Location = System::Drawing::Point(1008, 102);
			this->schedule->Name = L"schedule";
			this->schedule->Size = System::Drawing::Size(180, 51);
			this->schedule->TabIndex = 33;
			this->schedule->Text = L"Instructions";
			this->schedule->Click += gcnew System::EventHandler(this, &AfterLogin::schedule_Click);
			this->schedule->MouseLeave += gcnew System::EventHandler(this, &AfterLogin::schedule_MouseLeave);
			this->schedule->MouseHover += gcnew System::EventHandler(this, &AfterLogin::schedule_MouseHover);
			// 
			// Cancellation
			// 
			this->Cancellation->BackColor = System::Drawing::Color::Transparent;
			this->Cancellation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancellation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold));
			this->Cancellation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Cancellation->Location = System::Drawing::Point(771, 102);
			this->Cancellation->Name = L"Cancellation";
			this->Cancellation->Size = System::Drawing::Size(189, 51);
			this->Cancellation->TabIndex = 32;
			this->Cancellation->Text = L"Cancellation";
			this->Cancellation->Click += gcnew System::EventHandler(this, &AfterLogin::Cancellation_Click);
			this->Cancellation->MouseLeave += gcnew System::EventHandler(this, &AfterLogin::Cancellation_MouseLeave);
			this->Cancellation->MouseHover += gcnew System::EventHandler(this, &AfterLogin::Cancellation_MouseHover);
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Transparent;
			this->home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->home->Location = System::Drawing::Point(213, 102);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(108, 51);
			this->home->TabIndex = 29;
			this->home->Text = L"Home";
			this->home->Click += gcnew System::EventHandler(this, &AfterLogin::home_Click);
			this->home->MouseLeave += gcnew System::EventHandler(this, &AfterLogin::home_MouseLeave);
			this->home->MouseHover += gcnew System::EventHandler(this, &AfterLogin::home_MouseHover);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->DisabledLinkColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->linkLabel2->LinkColor = System::Drawing::Color::Blue;
			this->linkLabel2->Location = System::Drawing::Point(922, 9);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(0, 39);
			this->linkLabel2->TabIndex = 42;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AfterLogin::linkLabel2_LinkClicked);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(841, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 40);
			this->label2->TabIndex = 43;
			this->label2->Text = L"label2";
			// 
			// AfterLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1204, 760);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->booking);
			this->Controls->Add(this->fares);
			this->Controls->Add(this->schedule);
			this->Controls->Add(this->Cancellation);
			this->Controls->Add(this->home);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AfterLogin";
			this->Text = L"AfterLogin";
			this->Shown += gcnew System::EventHandler(this, &AfterLogin::AfterLogin_Shown);
			this->Enter += gcnew System::EventHandler(this, &AfterLogin::AfterLogin_Enter);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^username;
		SpeechSynthesizer^ speech = gcnew SpeechSynthesizer();
	private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->Hide();
	}
private: System::Void fares_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^fares = gcnew MyForm4();
	fares->ShowDialog();
	this->Show();
}
private: System::Void booking_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Reservation ^reserve = gcnew Reservation(username);
	reserve->ShowDialog();
	this->Show();
}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	

}
private: System::Void AfterLogin_Enter(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void AfterLogin_Shown(System::Object^  sender, System::EventArgs^  e) {
	
	speech->Speak("Welcome" + username);
	
}

private: System::Void home_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Orange;
}

private: System::Void booking_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Orange;
}
private: System::Void fares_MouseHover(System::Object^  sender, System::EventArgs^  e) {
fares->BackColor = System::Drawing::Color::Orange;
}
private: System::Void Cancellation_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	cancellation ^obj = gcnew cancellation(username);
	obj->ShowDialog();
	this->Show();
}
private: System::Void Cancellation_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Orange;
}
private: System::Void schedule_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	schedule->BackColor = System::Drawing::Color::Orange;
}
private: System::Void home_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void booking_MouseLeave(System::Object^  sender, System::EventArgs^  e) {

	booking->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void fares_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
fares->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void schedule_Click(System::Object^  sender, System::EventArgs^  e) {
	schedule->BackColor = System::Drawing::Color::Orange;
	Details ^obj = gcnew Details();
	obj->ShowDialog();
}
private: System::Void schedule_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	schedule->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void Cancellation_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Transparent;
}

private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
