#pragma once
#include"Cities.h"
#include"Confirm Reservation.h"
#include"Train.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm6
	/// </summary>
	public ref class Reservation : public System::Windows::Forms::Form
	{
	public:
		Reservation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Reservation(String ^username)
		{
			InitializeComponent();
			
			String ^obj;
			Cities cities;
			Train names;
			for (int i = 0; i < 10; i++)
			{
				cities.readname(&obj, i);
				comboBox1->Items->Add(obj);
				comboBox2->Items->Add(obj);
			}
			for (int i = 0; ; i++)
			{
				int no;
				no=names.readname(&obj, i);
				if (no == 0)
					break;
				comboBox4->Items->Add(obj);
				
			}
		
			name = username;
			String ^name1, ^name2, ^name3;
			
			name1 = "Economy";
			name2 = "LowerAc";
			name3 = "Bussiness";

			comboBox3->Items->Add(name1);
		
			comboBox3->Items->Add(name2);

			comboBox3->Items->Add(name3);
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reservation::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(294, 93);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(364, 63);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"--From--";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(294, 183);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(364, 63);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"--To--";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(217, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(474, 49);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choose Your Destination";
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(294, 272);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(364, 66);
			this->comboBox3->TabIndex = 3;
			this->comboBox3->Text = L"-Journey Type-";
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::comboBox3_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(378, 437);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 71);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Check Seats";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reservation::button1_Click);
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(294, 358);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(364, 66);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->Text = L"--Select Train--";
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Reservation::comboBox4_SelectedIndexChanged);
			// 
			// Reservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(947, 530);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Reservation";
			this->Text = L"RESERVATION";
			this->Load += gcnew System::EventHandler(this, &Reservation::Reservation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^from, ^to, ^type,^name,^trainName;
		int count = 0;
	private: System::Void Reservation_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		from = comboBox1->Text;
		count++;
	}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		to = comboBox2->Text;
		count++;
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		type = comboBox3->Text;
		count++;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		String ^ex;
		
		if (count<4)
		{
			ex = "Items unselected!";
			throw ex;
		}
		if (from == to)
		{
			ex = "Same Cities Entered!";
			throw ex;
		}

		this->Hide();
		ConfirmReservation ^reserve = gcnew ConfirmReservation(name,type,from,to,trainName);
		reserve->ShowDialog();
		
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	trainName = comboBox4->Text;
	count++;
}
};
}
