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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^ методПравыйПрямоугольниковToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ функция3ToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->методПравыйПрямоугольниковToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->функция3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->методПравыйПрямоугольниковToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(346, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// методПравыйПрямоугольниковToolStripMenuItem
			// 
			this->методПравыйПрямоугольниковToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->функция1ToolStripMenuItem,
					this->функция2ToolStripMenuItem, this->функция3ToolStripMenuItem
			});
			this->методПравыйПрямоугольниковToolStripMenuItem->Name = L"методПравыйПрямоугольниковToolStripMenuItem";
			this->методПравыйПрямоугольниковToolStripMenuItem->Size = System::Drawing::Size(253, 24);
			this->методПравыйПрямоугольниковToolStripMenuItem->Text = L"Метод правых прямоугольников";
			this->методПравыйПрямоугольниковToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::методПравыйПрямоугольниковToolStripMenuItem_Click);
			// 
			// функция1ToolStripMenuItem
			// 
			this->функция1ToolStripMenuItem->Name = L"функция1ToolStripMenuItem";
			this->функция1ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->функция1ToolStripMenuItem->Text = L"Функция 1";
			this->функция1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция1ToolStripMenuItem_Click);
			// 
			// функция2ToolStripMenuItem
			// 
			this->функция2ToolStripMenuItem->Name = L"функция2ToolStripMenuItem";
			this->функция2ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->функция2ToolStripMenuItem->Text = L"Функция 2";
			this->функция2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция2ToolStripMenuItem_Click);
			// 
			// функция3ToolStripMenuItem
			// 
			this->функция3ToolStripMenuItem->Name = L"функция3ToolStripMenuItem";
			this->функция3ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->функция3ToolStripMenuItem->Text = L"Функция 3";
			this->функция3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::функция3ToolStripMenuItem_Click);
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
	private: System::Void функция1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		r1^ f = gcnew r1();
		f->ShowDialog();
	}
private: System::Void методПравыйПрямоугольниковToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void функция2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r2^ f = gcnew r2();
	f->ShowDialog();

}
private: System::Void функция3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	r3^ f = gcnew r3();
	f->ShowDialog();
}
};
}