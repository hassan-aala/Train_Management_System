#pragma once
#include"Seats.h"
#include"Ticket.h"

namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ConfirmReservation
	/// </summary>
	public ref class ConfirmReservation : public System::Windows::Forms::Form
	{
	public:
		ConfirmReservation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ConfirmReservation(String ^username, String ^type, String^ from, String ^to,String^ train)
		{
			InitializeComponent();
			name = username;
			Cityfrom = from;
			Cityto = to;
			label6->Text = "Type:" + type;
			JourType = type;
			trainName = train;
			Seats check;
			int no;
			for (int i = 1;; i++)
			{

				no = check.checkseats((msclr::interop::marshal_as<std::string>(type->ToString())), msclr::interop::marshal_as<std::string>(train->ToString()),i);
				if (no == -1)
				{	
					MessageBox::Show("SERVER ERROR");
					break;
				}
				if (no == 0)
					break;
				if (no == 1)
					button1->Text = "Full";
				if (no == 2)
					button2->Text = "Full";
				if (no == 3)
					button3->Text = "Full";
				if (no == 4)
					button4->Text = "Full";
				if (no == 5)
					button5->Text = "Full";
				if (no == 6)
					button6->Text = "Full";
				if (no == 7)
					button7->Text = "Full";
				if (no == 8)
					button8->Text = "Full";
				if (no == 9)
					button9->Text = "Full";
				if (no == 10)
					button10->Text = "Full";
				if (no == 11)
					button11->Text = "Full";
				if (no == 12)
					button12->Text = "Full";
				if (no == 13)
					button13->Text = "Full";
				if (no == 14)
					button14->Text = "Full";
				if (no == 15)
					button15->Text = "Full";
				if (no == 16)
					button16->Text = "Full";
				if (no == 17)
					button17->Text = "Full";
				if (no == 18)
					button18->Text = "Full";
				if (no == 19)
					button19->Text = "Full";
				if (no == 20)
					button20->Text = "Full";
				if (no == 21)
					button21->Text = "Full";
				if (no == 22)
					button22->Text = "Full";
				if (no == 23)
					button23->Text = "Full";
				if (no == 24)
					button24->Text = "Full";
				if (no == 25)
					button25->Text = "Full";
				if (no == 26)
					button26->Text = "Full";
				if (no == 27)
					button27->Text = "Full";
				if (no == 28)
					button28->Text = "Full";
				if (no == 29)
					button29->Text = "Full";
				if (no == 30)
					button30->Text = "Full";
				if (no == 31)
					button31->Text = "Full";
				if (no == 32)
					button32->Text = "Full";
				if (no == 33)
					button33->Text = "Full";
				if (no == 34)
					button34->Text = "Full";
				if (no == 35)
					button35->Text = "Full";
				if (no == 36)
					button36->Text = "Full";

			}
			
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConfirmReservation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;

	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  label6;













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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(46, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(421, 332);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ConfirmReservation::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(141, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Compartment 1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(46, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 49);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Empty";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConfirmReservation::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(193, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Empty";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConfirmReservation::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(358, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 49);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Empty";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ConfirmReservation::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(46, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 49);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Empty";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ConfirmReservation::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(46, 307);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 49);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Empty";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ConfirmReservation::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(193, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(109, 49);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Empty";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &ConfirmReservation::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(358, 209);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 49);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Empty";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &ConfirmReservation::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(193, 307);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(109, 49);
			this->button8->TabIndex = 15;
			this->button8->Text = L"Empty";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &ConfirmReservation::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(358, 307);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(109, 49);
			this->button9->TabIndex = 16;
			this->button9->Text = L"Empty";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &ConfirmReservation::button9_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(488, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 17);
			this->label5->TabIndex = 61;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(389, 781);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(270, 61);
			this->button37->TabIndex = 62;
			this->button37->Text = L"Book Seat";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &ConfirmReservation::button37_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(918, 294);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(109, 49);
			this->button10->TabIndex = 73;
			this->button10->Text = L"Empty";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &ConfirmReservation::button10_Click_1);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(753, 294);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(109, 49);
			this->button11->TabIndex = 72;
			this->button11->Text = L"Empty";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &ConfirmReservation::button11_Click_1);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(918, 196);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(109, 49);
			this->button12->TabIndex = 71;
			this->button12->Text = L"Empty";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &ConfirmReservation::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(753, 196);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(109, 49);
			this->button13->TabIndex = 70;
			this->button13->Text = L"Empty";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &ConfirmReservation::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(606, 294);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(109, 49);
			this->button14->TabIndex = 69;
			this->button14->Text = L"Empty";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &ConfirmReservation::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(606, 196);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(109, 49);
			this->button15->TabIndex = 68;
			this->button15->Text = L"Empty";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &ConfirmReservation::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(918, 95);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(109, 49);
			this->button16->TabIndex = 67;
			this->button16->Text = L"Empty";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &ConfirmReservation::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(753, 95);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(109, 49);
			this->button17->TabIndex = 66;
			this->button17->Text = L"Empty";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &ConfirmReservation::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(606, 95);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(109, 49);
			this->button18->TabIndex = 65;
			this->button18->Text = L"Empty";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &ConfirmReservation::button18_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(718, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(188, 29);
			this->label2->TabIndex = 64;
			this->label2->Text = L"Compartment 2";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(606, 46);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(421, 332);
			this->pictureBox2->TabIndex = 63;
			this->pictureBox2->TabStop = false;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(358, 690);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(109, 49);
			this->button19->TabIndex = 84;
			this->button19->Text = L"Empty";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &ConfirmReservation::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(193, 690);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(109, 49);
			this->button20->TabIndex = 83;
			this->button20->Text = L"Empty";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &ConfirmReservation::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(358, 592);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(109, 49);
			this->button21->TabIndex = 82;
			this->button21->Text = L"Empty";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &ConfirmReservation::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(193, 592);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(109, 49);
			this->button22->TabIndex = 81;
			this->button22->Text = L"Empty";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &ConfirmReservation::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(46, 690);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(109, 49);
			this->button23->TabIndex = 80;
			this->button23->Text = L"Empty";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &ConfirmReservation::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(46, 592);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(109, 49);
			this->button24->TabIndex = 79;
			this->button24->Text = L"Empty";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &ConfirmReservation::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(358, 491);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(109, 49);
			this->button25->TabIndex = 78;
			this->button25->Text = L"Empty";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &ConfirmReservation::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(193, 491);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(109, 49);
			this->button26->TabIndex = 77;
			this->button26->Text = L"Empty";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &ConfirmReservation::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(46, 491);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(109, 49);
			this->button27->TabIndex = 76;
			this->button27->Text = L"Empty";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &ConfirmReservation::button27_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(141, 442);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 29);
			this->label3->TabIndex = 75;
			this->label3->Text = L"Compartment 3";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Location = System::Drawing::Point(46, 429);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(421, 332);
			this->pictureBox3->TabIndex = 74;
			this->pictureBox3->TabStop = false;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(918, 690);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(109, 49);
			this->button28->TabIndex = 95;
			this->button28->Text = L"Empty";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &ConfirmReservation::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(753, 690);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(109, 49);
			this->button29->TabIndex = 94;
			this->button29->Text = L"Empty";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &ConfirmReservation::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(918, 592);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(109, 49);
			this->button30->TabIndex = 93;
			this->button30->Text = L"Empty";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &ConfirmReservation::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(753, 592);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(109, 49);
			this->button31->TabIndex = 92;
			this->button31->Text = L"Empty";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &ConfirmReservation::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(606, 690);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(109, 49);
			this->button32->TabIndex = 91;
			this->button32->Text = L"Empty";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &ConfirmReservation::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(606, 592);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(109, 49);
			this->button33->TabIndex = 90;
			this->button33->Text = L"Empty";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &ConfirmReservation::button33_Click_1);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(918, 491);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(109, 49);
			this->button34->TabIndex = 89;
			this->button34->Text = L"Empty";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &ConfirmReservation::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(753, 491);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(109, 49);
			this->button35->TabIndex = 88;
			this->button35->Text = L"Empty";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &ConfirmReservation::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(606, 491);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(109, 49);
			this->button36->TabIndex = 87;
			this->button36->Text = L"Empty";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &ConfirmReservation::button36_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(701, 442);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(188, 29);
			this->label4->TabIndex = 86;
			this->label4->Text = L"Compartment 4";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Location = System::Drawing::Point(606, 429);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(421, 332);
			this->pictureBox4->TabIndex = 85;
			this->pictureBox4->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(515, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 17);
			this->label6->TabIndex = 96;
			// 
			// ConfirmReservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1041, 864);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ConfirmReservation";
			this->Text = L"ConfirmReservation";
			this->Load += gcnew System::EventHandler(this, &ConfirmReservation::ConfirmReservation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int seatno,no_clickedButton=0;
		String ^name,^Cityfrom,^Cityto,^JourType,^trainName;
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^ex;
		try {
			if (no_clickedButton > 0)
			{
				ex = "Please select one Seat!";
				throw ex;
			}

			if (button33->Text == "Full")
			{
				ex = "Kindly Select Empty Seats!";
				throw ex;
			}
			button33->Text = "_/";
			seatno = 33;
			no_clickedButton++;
		}
		catch (String ^excep)
		{
			MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void ConfirmReservation_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button1->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button1->Text = "_/";
		seatno = 1;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button2->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button2->Text = "_/";
		seatno = 2;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button3->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button3->Text = "_/";
		seatno = 3;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button4->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button4->Text = "_/";
		seatno = 4;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button6->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button6->Text = "_/";
		seatno = 6;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button7->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button7->Text = "_/";
		seatno = 7;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button5->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button5->Text = "_/";
		seatno = 5;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button8->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button8->Text = "_/";
		seatno = 8;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button9->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button9->Text = "_/";
		seatno = 9;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button10->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button10->Text = "_/";
		seatno = 10;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button11->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button11->Text = "_/";
		seatno = 11;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button18->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button18->Text = "_/";
		seatno = 18;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button17->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button17->Text = "_/";
		seatno = 17;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button16->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button16->Text = "_/";
		seatno = 16;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button15->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button15->Text = "_/";
		seatno = 15;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button13->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button13->Text = "_/";
		seatno = 13;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button12->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button12->Text = "_/";
		seatno = 12;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button14->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button14->Text = "_/";
		seatno = 14;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button11->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button11->Text = "_/";
		seatno = 11;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button10->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button10->Text = "_/";
		seatno = 10;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button27->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button27->Text = "_/";
		seatno = 27;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button26->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button26->Text = "_/";
		seatno = 26;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button25->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button25->Text = "_/";
		seatno = 25;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button24->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button24->Text = "_/";
		seatno = 24;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button22->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button22->Text = "_/";
		seatno = 22;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button21->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button21->Text = "_/";
		seatno = 21;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button23->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button23->Text = "_/";
		seatno = 23;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button20->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button20->Text = "_/";
		seatno = 20;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button19->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button19->Text = "_/";
		seatno = 19;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button36->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button36->Text = "_/";
		seatno = 36;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button35->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button35->Text = "_/";
		seatno = 35;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button34->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button34->Text = "_/";
		seatno = 34;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button33_Click_1(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Please select one Seat!";
			throw ex;
		}

		if (button33->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button33->Text = "_/";
		seatno = 33;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button31->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button31->Text = "_/";
		seatno = 31;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button30->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button30->Text = "_/";
		seatno = 30;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button32->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button32->Text = "_/";
		seatno = 32;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button29->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button29->Text = "_/";
		seatno = 29;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton > 0)
		{
			ex = "Can't select more than one Seat!";
			throw ex;
		}

		if (button28->Text == "Full")
		{
			ex = "Kindly Select Empty Seats!";
			throw ex;
		}
		button28->Text = "_/";
		seatno = 28;
		no_clickedButton++;
	}
	catch (String ^excep)
	{
		MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ex;
	try {
		if (no_clickedButton == 0)
		{
			ex = "No seat Selected\nPlease Select the seat first!";
			throw ex;
		}
		this->Hide();
		Ticket ^t = gcnew Ticket(name, Cityfrom, Cityto, seatno,JourType,trainName);
		t->ShowDialog();
	}
	catch (String ^excep)
		{
			MessageBox::Show(excep, "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
}
};
}
