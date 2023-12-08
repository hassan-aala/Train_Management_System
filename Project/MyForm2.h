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
	using namespace System::Speech::Synthesis;
	using namespace Windows::Media::TextFormatting;
	//using namespace Concurrency;
	//using System::Drawing::Imaging;


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

	private: System::Windows::Forms::Button^  SIGNUP;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SIGNUP = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Maroon;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox1->Location = System::Drawing::Point(190, 305);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox1->Size = System::Drawing::Size(301, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm2::textBox1_Click);
			this->textBox1->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TabIndexChanged);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Maroon;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox2->Location = System::Drawing::Point(190, 353);
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox2->Size = System::Drawing::Size(301, 45);
			this->textBox2->TabIndex = 1;
			this->toolTip1->SetToolTip(this->textBox2, L"Password");
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm2::textBox2_Click);
			this->textBox2->CursorChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_CursorChanged);
			this->textBox2->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TabIndexChanged);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			this->textBox2->MouseLeave += gcnew System::EventHandler(this, &MyForm2::textBox2_MouseLeave);
			this->textBox2->MouseHover += gcnew System::EventHandler(this, &MyForm2::textBox2_MouseHover);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Maroon;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox3->Location = System::Drawing::Point(188, 404);
			this->textBox3->Name = L"textBox3";
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox3->Size = System::Drawing::Size(303, 45);
			this->textBox3->TabIndex = 2;
			this->toolTip1->SetToolTip(this->textBox3, L"Confirm Password");
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm2::textBox3_Click);
			this->textBox3->CursorChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_CursorChanged);
			this->textBox3->TabIndexChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TabIndexChanged);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			this->textBox3->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::textBox3_KeyUp);
			this->textBox3->MouseCaptureChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_MouseCaptureChanged);
			this->textBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm2::textBox3_MouseLeave);
			this->textBox3->MouseHover += gcnew System::EventHandler(this, &MyForm2::textBox3_MouseHover);
			// 
			// SIGNUP
			// 
			this->SIGNUP->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SIGNUP.BackgroundImage")));
			this->SIGNUP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SIGNUP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->SIGNUP->ForeColor = System::Drawing::Color::DarkGray;
			this->SIGNUP->Location = System::Drawing::Point(191, 506);
			this->SIGNUP->Name = L"SIGNUP";
			this->SIGNUP->Size = System::Drawing::Size(138, 65);
			this->SIGNUP->TabIndex = 5;
			this->SIGNUP->Text = L"SIGNUP";
			this->SIGNUP->UseVisualStyleBackColor = true;
			this->SIGNUP->Click += gcnew System::EventHandler(this, &MyForm2::SIGNUP_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(108, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 299);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Maroon;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->ForeColor = System::Drawing::Color::DarkGray;
			this->textBox4->Location = System::Drawing::Point(188, 455);
			this->textBox4->Name = L"textBox4";
			this->textBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox4->Size = System::Drawing::Size(303, 45);
			this->textBox4->TabIndex = 3;
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm2::textBox4_Click);
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox4_TextChanged);
			this->textBox4->MouseHover += gcnew System::EventHandler(this, &MyForm2::textBox4_MouseHover);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm2::toolTip1_Popup);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"see-no-evil-monkey.png");
			this->imageList1->Images->SetKeyName(1, L"see-no-evil-monkey.png");
			this->imageList1->Images->SetKeyName(2, L"see-no-evil-monkey.png");
			this->imageList1->Images->SetKeyName(3, L"emoji-clipart-iphone-595643-8609404.png");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(291, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"upload image";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(-8, 306);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 41);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 20, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(-6, 354);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 41);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 20, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(-6, 405);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 41);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Confirm";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 20, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(-6, 459);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(72, 41);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Pin";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(503, 565);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->SIGNUP);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"REGISTRATION";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ username, ^pass, ^confirm,^Pin,^filename;
		int check,count=0;
		SpeechSynthesizer^ speech=gcnew SpeechSynthesizer();
	
	private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	username = textBox1->Text;
	count++;
	User obj;
	if ((check=obj.check(msclr::interop::marshal_as<std::string>(username->ToString()))) == 1)
		MessageBox::Show("Username already exist!!");
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//imageList1->ImageSize = System::Drawing::Size(200, 200);
	pictureBox1->Image =imageList1->Images[2];
	pass= textBox2->Text;
	count++;
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[2];
	confirm = textBox3->Text;
	count++;
}
private: System::Void SIGNUP_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (count < 4)
			throw 1;
		if (pass == confirm)
		{
			if (check == 1)
			{
				speech->Speak("Username with name" + username + "already exist");
				MessageBox::Show("Username already exist");
			}
			else {
				speech->Speak("Welcome to our app," + username);
				MessageBox::Show("Successfully Registered");
				User obj(msclr::interop::marshal_as<std::string>(username->ToString()), msclr::interop::marshal_as<std::string>(pass->ToString()), msclr::interop::marshal_as<std::string>(Pin->ToString()));

				obj.put_data();

				this->Hide();
			}
		}
		else if (pass != confirm)
		{
			MessageBox::Show("Password not matched!!Please re-enter");
		}
	}
	catch (int)
	{
		MessageBox::Show("Unselected items");
	}
}
private: System::Void textBox2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox3_Click(System::Object^  sender, System::EventArgs^  e) {

}


private: System::Void textBox3_MouseCaptureChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
}
private: System::Void textBox3_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TabIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_CursorChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	toolTip1->SetToolTip(this->textBox4, "Pin will be required for restoring password!");

}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Pin = textBox4->Text;
	count++;
}
private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
}
private: System::Void textBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[3];
}
private: System::Void textBox2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[3];
}
private: System::Void textBox2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[2];
}
private: System::Void textBox3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[2];
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "All supported graphics|*.jpg;*.jpeg;*.png|" +
		"JPEG (*.jpg;*.jpeg)|*.jpg;*.jpeg|" +
		"Portable Network Graphic (*.png)|*.png";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		string name = msclr::interop::marshal_as<std::string>((openFileDialog1->FileName)->ToString());
		imageList1->Images[0] = Image::FromFile(openFileDialog1->FileName);
		pictureBox1->Image= imageList1->Images[0];
		User obj;
	//	obj.saveImage(msclr::interop::marshal_as<std::string>(username->ToString()),name);
		

		//SaveFileDialog ^sfd = new SaveFileDialog();
		//string name = (msclr::interop::marshal_as<std::string>(username->ToString()));
	//	CLSID pngClsid;
		
		//pictureBox1->Image->Save(L"Mosaic2.png", pngClsid, NULL);
		
		//pictureBox1->Image->Save("myfile.png",System::Drawing::Imaging::ImageFormat Png);
	}
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
	speech->Speak("Welcome to our app!");
}
};
}
