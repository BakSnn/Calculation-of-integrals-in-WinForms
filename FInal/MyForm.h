#pragma once
#include "r1.h"
#include "r2.h"
#include "r3.h"
namespace FInal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������3ToolStripMenuItem;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->��������������������������ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(346, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������������������������ToolStripMenuItem
			// 
			this->��������������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�������1ToolStripMenuItem,
					this->�������2ToolStripMenuItem, this->�������3ToolStripMenuItem
			});
			this->��������������������������ToolStripMenuItem->Name = L"��������������������������ToolStripMenuItem";
			this->��������������������������ToolStripMenuItem->Size = System::Drawing::Size(253, 24);
			this->��������������������������ToolStripMenuItem->Text = L"����� ������ ���������������";
			this->��������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������������������������ToolStripMenuItem_Click);
			// 
			// �������1ToolStripMenuItem
			// 
			this->�������1ToolStripMenuItem->Name = L"�������1ToolStripMenuItem";
			this->�������1ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������1ToolStripMenuItem->Text = L"������� 1";
			this->�������1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������1ToolStripMenuItem_Click);
			// 
			// �������2ToolStripMenuItem
			// 
			this->�������2ToolStripMenuItem->Name = L"�������2ToolStripMenuItem";
			this->�������2ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������2ToolStripMenuItem->Text = L"������� 2";
			this->�������2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������2ToolStripMenuItem_Click);
			// 
			// �������3ToolStripMenuItem
			// 
			this->�������3ToolStripMenuItem->Name = L"�������3ToolStripMenuItem";
			this->�������3ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������3ToolStripMenuItem->Text = L"������� 3";
			this->�������3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������3ToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(346, 332);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void �������1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		r1^ f = gcnew r1();
		f->ShowDialog();
	}
private: System::Void ��������������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void �������2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r2^ f = gcnew r2();
	f->ShowDialog();

}
private: System::Void �������3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r3^ f = gcnew r3();
	f->ShowDialog();
}
};
}