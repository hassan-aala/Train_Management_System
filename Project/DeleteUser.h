#pragma once
#include"Admin.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DeleteUser
	/// </summary>
	public ref class DeleteUser : public System::Windows::Forms::Form
	{
	public:
		DeleteUser(void)
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
		~DeleteUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteUser::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(137, 155);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(361, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter the Username";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &DeleteUser::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25));
			this->label1->Location = System::Drawing::Point(114, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 48);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Delete User Account";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(233, 256);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 72);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DeleteUser::button1_Click);
			// 
			// DeleteUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(553, 428);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"DeleteUser";
			this->Text = L"DeleteUser";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ name;
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		name = textBox1->Text;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Admin del;
		try {
			if (del.DeleteUsername(msclr::interop::marshal_as<std::string>(name->ToString())) == 0)
				throw 0;
			MessageBox::Show("Successfully deleted!");
		}
		catch (...)
		{
			MessageBox::Show("Username not found");
		}
	}
	};
}
