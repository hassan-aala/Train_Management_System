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
	/// Summary for cancellation
	/// </summary>
	public ref class cancellation : public System::Windows::Forms::Form
	{
	public:
		cancellation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		cancellation(String ^username)
		{
			InitializeComponent();
			
			name1 = username;
			user->Text = username;
			
		}
		void show()
		{
			String ^type, ^from, ^to, ^train, ^fares, ^compart;

			int read,fee;
			double pen,re;
			
			if (count > 0)
			{
				read = TicketInfo::cancel(msclr::interop::marshal_as<std::string>(name1->ToString()), msclr::interop::marshal_as<std::string>(seatno->ToString()), &compart, &type, &from, &to, &train, &fares);
				if (read == 1)
				{
					paid->Text = fares;
					fee = int::Parse(fares);
					pen = fee * 0.2;
					re = fee - pen;
					penalty->Text = System::Convert::ToString(pen);
					ret->Text = System::Convert::ToString(re);
					count = 4;
				}
				else if (read == 2)
				{
					MessageBox::Show("There is no booking associated with you,\nwith this Seat No ");
				}
				else if (read == 0)
				{
					MessageBox::Show("No any Booking found with your name");
				}
			}
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cancellation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  name;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::Label^  fare;
	private: System::Windows::Forms::Label^  rfare;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  user;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  paid;
	private: System::Windows::Forms::Label^  penalty;
	private: System::Windows::Forms::Label^  ret;



	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::ToolTip^  toolTip2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->user = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->paid = (gcnew System::Windows::Forms::Label());
			this->penalty = (gcnew System::Windows::Forms::Label());
			this->ret = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(736, 40);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Note:20% will be deducted on cancellation";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(12, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(196, 40);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Username:";
			// 
			// user
			// 
			this->user->AutoSize = true;
			this->user->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->user->Location = System::Drawing::Point(336, 141);
			this->user->Name = L"user";
			this->user->Size = System::Drawing::Size(196, 40);
			this->user->TabIndex = 2;
			this->user->Text = L"Username:";
			this->user->Click += gcnew System::EventHandler(this, &cancellation::user_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(159, 40);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Seat No:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 301);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(185, 40);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Paid Fare:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 376);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(155, 40);
			this->label10->TabIndex = 5;
			this->label10->Text = L"Penalty:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 437);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(226, 40);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Return Fare:";
			// 
			// paid
			// 
			this->paid->AutoSize = true;
			this->paid->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->paid->Location = System::Drawing::Point(336, 301);
			this->paid->Name = L"paid";
			this->paid->Size = System::Drawing::Size(196, 40);
			this->paid->TabIndex = 7;
			this->paid->Text = L"Username:";
			this->paid->Click += gcnew System::EventHandler(this, &cancellation::paid_Click);
			// 
			// penalty
			// 
			this->penalty->AutoSize = true;
			this->penalty->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->penalty->Location = System::Drawing::Point(336, 376);
			this->penalty->Name = L"penalty";
			this->penalty->Size = System::Drawing::Size(196, 40);
			this->penalty->TabIndex = 8;
			this->penalty->Text = L"Username:";
			this->penalty->Click += gcnew System::EventHandler(this, &cancellation::penalty_Click);
			// 
			// ret
			// 
			this->ret->AutoSize = true;
			this->ret->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ret->Location = System::Drawing::Point(336, 437);
			this->ret->Name = L"ret";
			this->ret->Size = System::Drawing::Size(196, 40);
			this->ret->TabIndex = 9;
			this->ret->Text = L"Username:";
			this->ret->Click += gcnew System::EventHandler(this, &cancellation::ret_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(343, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 45);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &cancellation::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(296, 489);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 78);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &cancellation::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(343, 264);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 29);
			this->button2->TabIndex = 12;
			this->button2->Text = L"ok";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &cancellation::button2_Click);
			// 
			// cancellation
			// 
			this->ClientSize = System::Drawing::Size(796, 569);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->ret);
			this->Controls->Add(this->penalty);
			this->Controls->Add(this->paid);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->user);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Name = L"cancellation";
			this->Text = L"Cancellation";
			this->toolTip2->SetToolTip(this, L"Just Provide the seat no");
			this->Load += gcnew System::EventHandler(this, &cancellation::cancellation_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String ^name1,^seatno;
		int count=0;
	private: System::Void cancellation_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void cancellation_Load_1(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void user_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void paid_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void penalty_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ret_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (count >1)
	{
		MessageBox::Show("Booking Cancelled with Seat No:" + seatno);
		this->Hide();
	}
	else
		MessageBox::Show("ERROR");
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	count = 0;
	seatno = textBox2->Text;
	

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	count=1;
	show();
}
};
}
