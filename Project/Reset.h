#pragma once
#include"User.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm5
	/// </summary>
	public ref class Reset : public System::Windows::Forms::Form
	{
	public:
		Reset(void)
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
		~Reset()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reset::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(97, 94);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter Username";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Reset::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(97, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 45);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Enter Pin";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Reset::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(185, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 56);
			this->button1->TabIndex = 2;
			this->button1->Text = L"RESET";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Reset::button1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(90, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(314, 53);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Reset Password";
			// 
			// Reset
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(582, 429);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Reset";
			this->Text = L"RESET";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^username, ^pin;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		username = textBox1->Text;
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	pin = textBox2->Text;
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^reset;

	User obj;
	
		reset = obj.reset(msclr::interop::marshal_as<std::string>(username->ToString()), msclr::interop::marshal_as<std::string>(pin->ToString()));
		MessageBox::Show("Your password is:" + reset);

}
};
}
