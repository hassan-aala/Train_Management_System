#pragma once
#include"Cities.h"
#include"Fare.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String ^obj;
			Cities obj2;
			for (int i = 0; i <10; i++)
			{
				obj2.readname(&obj, i);
				comboBox1->Items->Add(obj);
				comboBox2->Items->Add(obj);
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:

	private: System::Windows::Forms::ComboBox^  comboBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(186, 260);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(342, 46);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"--From--";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm4::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(186, 408);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(342, 46);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"--To--";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm4::comboBox2_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->button1->Location = System::Drawing::Point(258, 529);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 54);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(98, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(336, 67);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Check Fare";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(714, 605);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm4";
			this->Text = L"FARE Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ from, ^to, ^economy,^bussiness,^lowerAc;
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		from = comboBox1->Text;

	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	to = comboBox2->Text;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Fare obj,obj1,obj2;
	economy = obj.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()),1);

	lowerAc = obj1.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), 2);

	bussiness = obj2.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()),3);

	MessageBox::Show("Economy Fare="+economy+"\nLower Ac Fare="+lowerAc+"\nBussiness class Fare="+bussiness, "FareChecker", MessageBoxButtons::OK, MessageBoxIcon::None);
	
}

};
}
