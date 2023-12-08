#pragma once
#include"MyForm7.h"
#include"Admin.h"
#include"DeleteUser.h"
#include"newtrain.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;

	/// <summary>
	/// Summary for Administator
	/// </summary>
	public ref class Administrator : public System::Windows::Forms::Form
	{
	public:
		Administrator(void)
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
		~Administrator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  booking;


	private: System::Windows::Forms::Label^  Cancellation;


	private: System::Windows::Forms::Label^  home;



	private: System::Windows::Forms::Label^  newt;

	protected:








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrator::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->booking = (gcnew System::Windows::Forms::Label());
			this->Cancellation = (gcnew System::Windows::Forms::Label());
			this->home = (gcnew System::Windows::Forms::Label());
			this->newt = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Courier New", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(12, 238);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(488, 92);
			this->label1->TabIndex = 37;
			this->label1->Text = L"Don\'t Rush in Line\r\nBook Online....\r\n";
			// 
			// booking
			// 
			this->booking->BackColor = System::Drawing::Color::Transparent;
			this->booking->Cursor = System::Windows::Forms::Cursors::Hand;
			this->booking->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->booking->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->booking->Location = System::Drawing::Point(480, 87);
			this->booking->Name = L"booking";
			this->booking->Size = System::Drawing::Size(230, 74);
			this->booking->TabIndex = 35;
			this->booking->Text = L"Delete User";
			this->booking->Click += gcnew System::EventHandler(this, &Administrator::booking_Click);
			this->booking->MouseLeave += gcnew System::EventHandler(this, &Administrator::booking_MouseLeave);
			this->booking->MouseHover += gcnew System::EventHandler(this, &Administrator::booking_MouseHover);
			// 
			// Cancellation
			// 
			this->Cancellation->BackColor = System::Drawing::Color::Transparent;
			this->Cancellation->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Cancellation->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancellation->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Cancellation->Location = System::Drawing::Point(1073, 87);
			this->Cancellation->Name = L"Cancellation";
			this->Cancellation->Size = System::Drawing::Size(83, 74);
			this->Cancellation->TabIndex = 32;
			this->Cancellation->Text = L"Exit";
			this->Cancellation->Click += gcnew System::EventHandler(this, &Administrator::Cancellation_Click);
			this->Cancellation->MouseLeave += gcnew System::EventHandler(this, &Administrator::Cancellation_MouseLeave);
			this->Cancellation->MouseHover += gcnew System::EventHandler(this, &Administrator::Cancellation_MouseHover);
			// 
			// home
			// 
			this->home->BackColor = System::Drawing::Color::Transparent;
			this->home->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->home->Location = System::Drawing::Point(198, 87);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(276, 74);
			this->home->TabIndex = 29;
			this->home->Text = L"Modify Fares";
			this->home->Click += gcnew System::EventHandler(this, &Administrator::home_Click);
			this->home->MouseLeave += gcnew System::EventHandler(this, &Administrator::home_MouseLeave);
			this->home->MouseHover += gcnew System::EventHandler(this, &Administrator::home_MouseHover);
			// 
			// newt
			// 
			this->newt->BackColor = System::Drawing::Color::Transparent;
			this->newt->Cursor = System::Windows::Forms::Cursors::Hand;
			this->newt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->newt->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->newt->Location = System::Drawing::Point(751, 87);
			this->newt->Name = L"newt";
			this->newt->Size = System::Drawing::Size(286, 74);
			this->newt->TabIndex = 41;
			this->newt->Text = L"Add New Train";
			this->newt->Click += gcnew System::EventHandler(this, &Administrator::newt_Click);
			this->newt->MouseLeave += gcnew System::EventHandler(this, &Administrator::newt_MouseLeave);
			this->newt->MouseHover += gcnew System::EventHandler(this, &Administrator::newt_MouseHover);
			// 
			// Administrator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1190, 729);
			this->Controls->Add(this->newt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->booking);
			this->Controls->Add(this->Cancellation);
			this->Controls->Add(this->home);
			this->Name = L"Administrator";
			this->Text = L"Administator";
			this->Load += gcnew System::EventHandler(this, &Administrator::Administrator_Load);
			this->Shown += gcnew System::EventHandler(this, &Administrator::Administrator_Shown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Administrator_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Cancellation_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	
}
private: System::Void home_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();																		//Update Fare
	MyForm7^ Update = gcnew MyForm7();
	Update->ShowDialog();
	this->Show();

}
private: System::Void Administrator_Shown(System::Object^  sender, System::EventArgs^  e) {
	SpeechSynthesizer^ speech = gcnew SpeechSynthesizer();
	speech->Speak("Welcome Admin ");
}
private: System::Void booking_Click(System::Object^  sender, System::EventArgs^  e) {				//Delete User
	this->Hide();																					
	DeleteUser^ del = gcnew DeleteUser();
	del->ShowDialog();
	this->Show();
}
private: System::Void newt_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	newtrain ^train = gcnew newtrain();
	train->ShowDialog();
	this->Show();
}
private: System::Void Cancellation_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Orange;
}
private: System::Void newt_MouseHover(System::Object^  sender, System::EventArgs^  e) {
		newt->BackColor = System::Drawing::Color::Orange;
}
private: System::Void newt_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	newt->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void Cancellation_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	Cancellation->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void booking_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Orange;
}
private: System::Void booking_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	booking->BackColor = System::Drawing::Color::Transparent;
}
private: System::Void home_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Orange;
}
private: System::Void home_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	home->BackColor = System::Drawing::Color::Transparent;
}
};
}
