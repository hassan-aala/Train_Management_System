#pragma once
#include"Cities.h"
#include"Fare.h"
#include "msclr\marshal_cppstd.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String ^obj;
			Cities obj2;
			for (int i = 0; i <10; i++)
			{
				obj2.readname(&obj,i);
				comboBox1->Items->Add(obj);
				comboBox2->Items->Add(obj);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button1;



	protected:

	protected:


	protected:












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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(365, 68);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(304, 46);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"--Select from--";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(365, 205);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(304, 46);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->Text = L"--Select to--";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(450, 279);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 76);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1380, 471);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm3";
			this->Text = L"Booking";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
		String^ from, ^to,^show;
	
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		from = comboBox1->Text;
		
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	to = comboBox2->Text;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if(from==to)
		MessageBox::Show("Same Cities Selected!!", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
	else

	{
		Fare obj;
		show = obj.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), 1);

		MessageBox::Show(show);
	}
}
private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
