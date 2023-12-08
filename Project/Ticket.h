#pragma once
#include"TicketInfo.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ticket
	/// </summary>
	public ref class Ticket : public System::Windows::Forms::Form
	{
	public:
		Ticket(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Ticket(String^Username, String ^from, String^to, int seat,String ^type,String ^tname)
		{
		
			InitializeComponent();
			
			Fare calcu;
			if (type == "Economy")
				ShowFare=calcu.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), 1);
			else if (type == "LowerAc")
				ShowFare = calcu.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), 2);
			else if (type == "Bussiness")
				ShowFare = calcu.fare_cal(msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), 3);

			TicketInfo saveinfo;
			saveinfo.SaveInfo(msclr::interop::marshal_as<std::string>(Username->ToString()), msclr::interop::marshal_as<std::string>(type->ToString()),seat, msclr::interop::marshal_as<std::string>(from->ToString()), msclr::interop::marshal_as<std::string>(to->ToString()), msclr::interop::marshal_as<std::string>(ShowFare->ToString()),(seat/10)+1, msclr::interop::marshal_as<std::string>(tname->ToString()));
		
			name->Text = Username;
			Depart->Text = from;
			Arr->Text = to;
			fare->Text = ShowFare;
			seatno->Text = System::Convert::ToString(seat);
			compart->Text = System::Convert::ToString((seat/10)+1);
			lType->Text = type;
			train->Text = tname;
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ticket()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::Label^  Depart;
	private: System::Windows::Forms::Label^  Arr;
	private: System::Windows::Forms::Label^  seatno;
	private: System::Windows::Forms::Label^  compart;
	private: System::Windows::Forms::Label^  fare;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lType;
	private: System::Windows::Forms::Label^  train;
	private: System::Windows::Forms::Label^  label10;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ticket::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->Depart = (gcnew System::Windows::Forms::Label());
			this->Arr = (gcnew System::Windows::Forms::Label());
			this->seatno = (gcnew System::Windows::Forms::Label());
			this->compart = (gcnew System::Windows::Forms::Label());
			this->fare = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lType = (gcnew System::Windows::Forms::Label());
			this->train = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label2->Location = System::Drawing::Point(81, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label3->Location = System::Drawing::Point(81, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(236, 39);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Departure City";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label4->Location = System::Drawing::Point(81, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 39);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Arrival City";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label5->Location = System::Drawing::Point(81, 499);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 39);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Fare";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->label6->Location = System::Drawing::Point(12, 359);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 67);
			this->label6->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label7->Location = System::Drawing::Point(81, 359);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(140, 39);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Seat No";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label8->Location = System::Drawing::Point(81, 431);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(275, 39);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Compartment No";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->name->Location = System::Drawing::Point(415, 53);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(324, 50);
			this->name->TabIndex = 8;
			this->name->Click += gcnew System::EventHandler(this, &Ticket::name_Click);
			// 
			// Depart
			// 
			this->Depart->BackColor = System::Drawing::Color::Transparent;
			this->Depart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Depart->Location = System::Drawing::Point(415, 129);
			this->Depart->Name = L"Depart";
			this->Depart->Size = System::Drawing::Size(324, 51);
			this->Depart->TabIndex = 9;
			this->Depart->Click += gcnew System::EventHandler(this, &Ticket::Depart_Click);
			// 
			// Arr
			// 
			this->Arr->BackColor = System::Drawing::Color::Transparent;
			this->Arr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->Arr->Location = System::Drawing::Point(415, 207);
			this->Arr->Name = L"Arr";
			this->Arr->Size = System::Drawing::Size(324, 51);
			this->Arr->TabIndex = 10;
			this->Arr->Click += gcnew System::EventHandler(this, &Ticket::Arr_Click);
			// 
			// seatno
			// 
			this->seatno->BackColor = System::Drawing::Color::Transparent;
			this->seatno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->seatno->Location = System::Drawing::Point(439, 359);
			this->seatno->Name = L"seatno";
			this->seatno->Size = System::Drawing::Size(324, 51);
			this->seatno->TabIndex = 11;
			this->seatno->Click += gcnew System::EventHandler(this, &Ticket::seatno_Click);
			// 
			// compart
			// 
			this->compart->BackColor = System::Drawing::Color::Transparent;
			this->compart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->compart->Location = System::Drawing::Point(439, 431);
			this->compart->Name = L"compart";
			this->compart->Size = System::Drawing::Size(324, 51);
			this->compart->TabIndex = 12;
			this->compart->Click += gcnew System::EventHandler(this, &Ticket::compart_Click);
			// 
			// fare
			// 
			this->fare->BackColor = System::Drawing::Color::Transparent;
			this->fare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->fare->Location = System::Drawing::Point(439, 499);
			this->fare->Name = L"fare";
			this->fare->Size = System::Drawing::Size(324, 51);
			this->fare->TabIndex = 13;
			this->fare->Click += gcnew System::EventHandler(this, &Ticket::fare_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->button1->Location = System::Drawing::Point(677, 628);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 90);
			this->button1->TabIndex = 14;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Ticket::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label1->Location = System::Drawing::Point(90, 566);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 39);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Type";
			// 
			// lType
			// 
			this->lType->BackColor = System::Drawing::Color::Transparent;
			this->lType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->lType->Location = System::Drawing::Point(439, 566);
			this->lType->Name = L"lType";
			this->lType->Size = System::Drawing::Size(324, 51);
			this->lType->TabIndex = 16;
			this->lType->Click += gcnew System::EventHandler(this, &Ticket::lType_Click);
			// 
			// train
			// 
			this->train->BackColor = System::Drawing::Color::Transparent;
			this->train->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->train->Location = System::Drawing::Point(415, 282);
			this->train->Name = L"train";
			this->train->Size = System::Drawing::Size(324, 51);
			this->train->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->label10->Location = System::Drawing::Point(90, 282);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(95, 39);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Train";
			// 
			// Ticket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1542, 718);
			this->Controls->Add(this->train);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->lType);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->fare);
			this->Controls->Add(this->compart);
			this->Controls->Add(this->seatno);
			this->Controls->Add(this->Arr);
			this->Controls->Add(this->Depart);
			this->Controls->Add(this->name);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"Ticket";
			this->Text = L"Ticket";
			this->Load += gcnew System::EventHandler(this, &Ticket::Ticket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ ShowFare;
private: System::Void name_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Depart_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Arr_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void seatno_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void compart_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void fare_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Successfully booked ticket!");
	this->Hide();
}
private: System::Void lType_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Ticket_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}


