#pragma once
#include"User.h"
#include "msclr\marshal_cppstd.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  SIGNUP;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SIGNUP = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Maroon;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(109, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(308, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm2::textBox1_Click);
			this->textBox1->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TabIndexChanged);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Maroon;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(109, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(308, 45);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Password";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm2::textBox2_Click);
			this->textBox2->CursorChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_CursorChanged);
			this->textBox2->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TabIndexChanged);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Maroon;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox3->Location = System::Drawing::Point(109, 270);
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(308, 45);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Confirm Password";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm2::textBox3_Click);
			this->textBox3->CursorChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_CursorChanged);
			this->textBox3->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TabIndexChanged);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::textBox3_KeyUp);
			this->textBox3->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_MouseCaptureChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::Color::DarkGray;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(104, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 39);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Create an account";
			// 
			// SIGNUP
			// 
			this->SIGNUP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SIGNUP.BackgroundImage")));
			this->SIGNUP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->SIGNUP->ForeColor = System::Drawing::Color::DarkGray;
			this->SIGNUP->Location = System::Drawing::Point(176, 352);
			this->SIGNUP->Name = L"SIGNUP";
			this->SIGNUP->Size = System::Drawing::Size(138, 65);
			this->SIGNUP->TabIndex = 5;
			this->SIGNUP->Text = L"SIGNUP";
			this->SIGNUP->UseVisualStyleBackColor = true;
			this->SIGNUP->Click += gcnew System::EventHandler(this, &MyForm2::SIGNUP_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(557, 454);
			this->Controls->Add(this->SIGNUP);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ username, ^pass, ^confirm;
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		if(textBox2->Text == "Username")
		textBox1->Text = "";
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	username = textBox1->Text;
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	pass= textBox2->Text;
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	confirm = textBox3->Text;
}
private: System::Void SIGNUP_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pass == confirm)
	{
		MessageBox::Show("Successfully Registered");
		User obj;
		obj.set(msclr::interop::marshal_as<std::string>(username->ToString()), msclr::interop::marshal_as<std::string>(pass->ToString()));
		this->Hide();
	}
	else if (pass != confirm)
	{
		MessageBox::Show("Password not matched!!Please re-enter");
	}
}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	//if(textBox2->Text =="Password")
	textBox2->Text = "";
}
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	//if(textBox2->Text == "Confirm Password")
	textBox3->Text = "";
}
private: System::Void textBox3_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	//textBox3->Text = "Confirm Password";
}
private: System::Void textBox3_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//textBox3->Text = "Confirm Password";
}
private: System::Void textBox1_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//textBox1->Text = "Username";
}
private: System::Void textBox2_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	//textBox2->Text = "Password";
}
private: System::Void textBox3_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
	//if (textBox3->Text == "")
		//textBox3->Text= "Confirm Password";
}
private: System::Void textBox2_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
	//if (textBox3->Text == "")
		//textBox2->Text = "Password";
}
};
}
