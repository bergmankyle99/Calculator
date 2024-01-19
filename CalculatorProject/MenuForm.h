#pragma once
#include "BasicCalcForm.h"
#include "ScientificCalcForm.h"
namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ menuFormBasicButton;
	protected:
	private: System::Windows::Forms::Button^ menuFormSciButton;
	private: System::Windows::Forms::Label^ menuFormLabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->menuFormBasicButton = (gcnew System::Windows::Forms::Button());
			this->menuFormSciButton = (gcnew System::Windows::Forms::Button());
			this->menuFormLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// menuFormBasicButton
			// 
			this->menuFormBasicButton->Location = System::Drawing::Point(47, 98);
			this->menuFormBasicButton->Name = L"menuFormBasicButton";
			this->menuFormBasicButton->Size = System::Drawing::Size(93, 23);
			this->menuFormBasicButton->TabIndex = 0;
			this->menuFormBasicButton->Text = L"Basic";
			this->menuFormBasicButton->UseVisualStyleBackColor = true;
			this->menuFormBasicButton->Click += gcnew System::EventHandler(this, &MenuForm::menuFormBasicButton_Click);
			// 
			// menuFormSciButton
			// 
			this->menuFormSciButton->Location = System::Drawing::Point(197, 98);
			this->menuFormSciButton->Name = L"menuFormSciButton";
			this->menuFormSciButton->Size = System::Drawing::Size(92, 23);
			this->menuFormSciButton->TabIndex = 1;
			this->menuFormSciButton->Text = L"Scientific";
			this->menuFormSciButton->UseVisualStyleBackColor = true;
			this->menuFormSciButton->Click += gcnew System::EventHandler(this, &MenuForm::menuFormSciButton_Click);
			// 
			// menuFormLabel
			// 
			this->menuFormLabel->AutoSize = true;
			this->menuFormLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->menuFormLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuFormLabel->Location = System::Drawing::Point(20, 28);
			this->menuFormLabel->Name = L"menuFormLabel";
			this->menuFormLabel->Size = System::Drawing::Size(303, 33);
			this->menuFormLabel->TabIndex = 2;
			this->menuFormLabel->Text = L"Select a Calculator Type";
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 146);
			this->Controls->Add(this->menuFormLabel);
			this->Controls->Add(this->menuFormSciButton);
			this->Controls->Add(this->menuFormBasicButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void menuFormBasicButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		BasicCalcForm ^form = gcnew BasicCalcForm();
		form->ShowDialog();
		this->Show();

	}
	private: System::Void menuFormSciButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ScientificCalcForm^ form = gcnew ScientificCalcForm();
		form->ShowDialog();
		this->Show();
	}
	

	};

}
