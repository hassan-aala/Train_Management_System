#pragma once
#include"Cities.h"
#include"Admin.h"
#include"Fare.h"

namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String ^obj;
			Cities obj2;
			for (int i = 0; i < 10; i++)
			{
				obj2.readname(&obj, i);
				comboBox1->Items->Add(obj);
				comboBox2->Items->Add(obj);
			}
			String ^eco = "Economy", ^b = "Bussiness", ^c = "LowerAc";
			comboBox3->Items->Add(eco);
			comboBox3->Items->Add(c);
			comboBox3->Items->Add(b);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm7::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(186, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(317, 46);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Select City--from--";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(186, 104);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(317, 46);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Select City--to--";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::comboBox2_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(186, 293);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 45);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Enter updated fare";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm7::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm7::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(255, 375);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 58);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ok";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click_1);
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(186, 175);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(317, 46);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->Text = L"Select Type";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm7::comboBox3_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(292, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 48);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Check Current";
			this->toolTip1->SetToolTip(this->button2, L"Check the current fare");
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm7::button2_Click);
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(671, 460);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm7";
			this->Text = L"Update fares";
			this->Load += gcnew System::EventHandler(this, &MyForm7::MyForm7_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ from, ^to,^fare,^fares;
		int type;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void MyForm7_Load(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		to= comboBox2->Text;
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		from = comboBox1->Text;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		fare = textBox1->Text;
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
		
		Admin obj;
		if (obj.updatefares(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), msclr::interop::marshal_as<std::string>(fare->ToString()), 1) == 0)
			MessageBox::Show("Error Occurred!");
		else
		{
			MessageBox::Show("Successfully Updated!");
			this->Hide();
		}

	
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	Fare obj;
	if (comboBox3->Text == "Bussiness")

	fare = obj.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()),3);

	if (comboBox3->Text == "LowerAc")

		fare = obj.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()),2);

	if (comboBox3->Text =="Economy")

		fare = obj.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()),1);

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(comboBox3->Text+"="+fare);
}
private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
}
};
}
