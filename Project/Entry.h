#pragma once
#include"MyForm.h"
namespace Project18 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Entry
	/// </summary>
	public ref class Entry : public System::Windows::Forms::Form
	{
	public:
		Entry(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}
		Entry(int)
		{
			//for (long long int i = 0; i < 10000000000; i++);
			this->Hide();
			MyForm ^obj = gcnew MyForm();
			obj->ShowDialog();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Entry()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Entry::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label1->Location = System::Drawing::Point(395, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to";
			this->label1->Click += gcnew System::EventHandler(this, &Entry::label1_Click);
			// 
			// Entry
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(757, 351);
			this->Controls->Add(this->label1);
			this->Name = L"Entry";
			this->Text = L"Entry";
			this->Load += gcnew System::EventHandler(this, &Entry::Entry_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Entry_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	};
}
