#pragma once
#include <string>
#include "BasicCalc.h"
namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for BasicCalcForm
	/// </summary>
	public ref class BasicCalcForm : public System::Windows::Forms::Form
	{
	public:
		BasicCalcForm(void)
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
		~BasicCalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ displayPanel;
	protected:


	private: System::Windows::Forms::TextBox^ displayRow1;
	private: System::Windows::Forms::Button^ oneButton;
	private: System::Windows::Forms::Button^ twoButton;
	private: System::Windows::Forms::Button^ threeButton;
	private: System::Windows::Forms::Button^ fourButton;
	private: System::Windows::Forms::Button^ fiveButton;


	protected:







	private: System::Windows::Forms::Button^ sixButton;
	private: System::Windows::Forms::Button^ sevenButton;
	private: System::Windows::Forms::Button^ eightButton;
	private: System::Windows::Forms::Button^ nineButton;
	private: System::Windows::Forms::Button^ zeroButton;

	private: System::Windows::Forms::Button^ decimalButton;
	private: System::Windows::Forms::Button^ equalsButton;
	private: System::Windows::Forms::Button^ plusButton;
	private: System::Windows::Forms::Button^ minusButton;
	private: System::Windows::Forms::Button^ multiplyButton;
	private: System::Windows::Forms::Button^ divideButton;

	private: System::Windows::Forms::Button^ squareRootButton;
	private: System::Windows::Forms::Button^ squareButton;
	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Label^ displayRow2;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		int operatorCount = 0;
	private: System::Windows::Forms::Button^ backspaceButton;
	private: System::Windows::Forms::Button^ menuButton;


		   int posNegStatus = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BasicCalcForm::typeid));
			this->displayPanel = (gcnew System::Windows::Forms::Panel());
			this->displayRow2 = (gcnew System::Windows::Forms::Label());
			this->displayRow1 = (gcnew System::Windows::Forms::TextBox());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->decimalButton = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->squareRootButton = (gcnew System::Windows::Forms::Button());
			this->squareButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->backspaceButton = (gcnew System::Windows::Forms::Button());
			this->menuButton = (gcnew System::Windows::Forms::Button());
			this->displayPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// displayPanel
			// 
			this->displayPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->displayPanel->Controls->Add(this->displayRow2);
			this->displayPanel->Controls->Add(this->displayRow1);
			this->displayPanel->Location = System::Drawing::Point(27, 18);
			this->displayPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->displayPanel->Name = L"displayPanel";
			this->displayPanel->Size = System::Drawing::Size(475, 99);
			this->displayPanel->TabIndex = 0;
			// 
			// displayRow2
			// 
			this->displayRow2->BackColor = System::Drawing::SystemColors::Window;
			this->displayRow2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->displayRow2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayRow2->Location = System::Drawing::Point(0, 47);
			this->displayRow2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->displayRow2->Name = L"displayRow2";
			this->displayRow2->Size = System::Drawing::Size(471, 48);
			this->displayRow2->TabIndex = 1;
			this->displayRow2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// displayRow1
			// 
			this->displayRow1->BackColor = System::Drawing::SystemColors::Window;
			this->displayRow1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->displayRow1->Dock = System::Windows::Forms::DockStyle::Top;
			this->displayRow1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->displayRow1->Location = System::Drawing::Point(0, 0);
			this->displayRow1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->displayRow1->Name = L"displayRow1";
			this->displayRow1->ReadOnly = true;
			this->displayRow1->Size = System::Drawing::Size(471, 46);
			this->displayRow1->TabIndex = 0;
			this->displayRow1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// oneButton
			// 
			this->oneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneButton->Location = System::Drawing::Point(27, 446);
			this->oneButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(112, 68);
			this->oneButton->TabIndex = 1;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = true;
			this->oneButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::oneButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoButton->Location = System::Drawing::Point(148, 446);
			this->twoButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(112, 68);
			this->twoButton->TabIndex = 2;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = true;
			this->twoButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::twoButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeButton->Location = System::Drawing::Point(270, 446);
			this->threeButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(112, 68);
			this->threeButton->TabIndex = 3;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = true;
			this->threeButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::threeButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourButton->Location = System::Drawing::Point(27, 369);
			this->fourButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(112, 68);
			this->fourButton->TabIndex = 4;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = true;
			this->fourButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::fourButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveButton->Location = System::Drawing::Point(148, 369);
			this->fiveButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(112, 68);
			this->fiveButton->TabIndex = 5;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = true;
			this->fiveButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::fiveButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixButton->Location = System::Drawing::Point(270, 369);
			this->sixButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(112, 68);
			this->sixButton->TabIndex = 6;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = true;
			this->sixButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::sixButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenButton->Location = System::Drawing::Point(27, 292);
			this->sevenButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(112, 68);
			this->sevenButton->TabIndex = 7;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = true;
			this->sevenButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::sevenButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightButton->Location = System::Drawing::Point(148, 292);
			this->eightButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(112, 68);
			this->eightButton->TabIndex = 8;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = true;
			this->eightButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::eightButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nineButton->Location = System::Drawing::Point(270, 292);
			this->nineButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(112, 68);
			this->nineButton->TabIndex = 9;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = true;
			this->nineButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::nineButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroButton->Location = System::Drawing::Point(148, 523);
			this->zeroButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(112, 68);
			this->zeroButton->TabIndex = 10;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = true;
			this->zeroButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::zeroButton_Click);
			// 
			// decimalButton
			// 
			this->decimalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimalButton->Location = System::Drawing::Point(270, 523);
			this->decimalButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->decimalButton->Name = L"decimalButton";
			this->decimalButton->Size = System::Drawing::Size(112, 68);
			this->decimalButton->TabIndex = 12;
			this->decimalButton->Text = L".";
			this->decimalButton->UseVisualStyleBackColor = true;
			this->decimalButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::decimalButton_Click);
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(392, 523);
			this->equalsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(112, 68);
			this->equalsButton->TabIndex = 13;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			this->equalsButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::equalsButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusButton->Location = System::Drawing::Point(392, 446);
			this->plusButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(112, 68);
			this->plusButton->TabIndex = 14;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::plusButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusButton->Location = System::Drawing::Point(392, 369);
			this->minusButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(112, 68);
			this->minusButton->TabIndex = 15;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::minusButton_Click);
			// 
			// multiplyButton
			// 
			this->multiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplyButton->Location = System::Drawing::Point(392, 292);
			this->multiplyButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(112, 68);
			this->multiplyButton->TabIndex = 16;
			this->multiplyButton->Text = L"x";
			this->multiplyButton->UseVisualStyleBackColor = true;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::multiplyButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divideButton->Location = System::Drawing::Point(392, 215);
			this->divideButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(112, 68);
			this->divideButton->TabIndex = 17;
			this->divideButton->Text = L"÷";
			this->divideButton->UseVisualStyleBackColor = true;
			this->divideButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::divideButton_Click);
			// 
			// squareRootButton
			// 
			this->squareRootButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->squareRootButton->Location = System::Drawing::Point(270, 215);
			this->squareRootButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->squareRootButton->Name = L"squareRootButton";
			this->squareRootButton->Size = System::Drawing::Size(112, 68);
			this->squareRootButton->TabIndex = 18;
			this->squareRootButton->Text = L"√";
			this->squareRootButton->UseVisualStyleBackColor = true;
			this->squareRootButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::squareRootButton_Click);
			// 
			// squareButton
			// 
			this->squareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->squareButton->Location = System::Drawing::Point(148, 215);
			this->squareButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->squareButton->Name = L"squareButton";
			this->squareButton->Size = System::Drawing::Size(112, 68);
			this->squareButton->TabIndex = 19;
			this->squareButton->Text = L"x²";
			this->squareButton->UseVisualStyleBackColor = true;
			this->squareButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::squareButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(27, 523);
			this->clearButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(112, 68);
			this->clearButton->TabIndex = 20;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::clearButton_Click);
			// 
			// backspaceButton
			// 
			this->backspaceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->backspaceButton->Location = System::Drawing::Point(27, 215);
			this->backspaceButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->backspaceButton->Name = L"backspaceButton";
			this->backspaceButton->Size = System::Drawing::Size(112, 68);
			this->backspaceButton->TabIndex = 21;
			this->backspaceButton->Text = L"<--";
			this->backspaceButton->UseVisualStyleBackColor = true;
			this->backspaceButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::backspaceButton_Click);
			// 
			// menuButton
			// 
			this->menuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuButton->Location = System::Drawing::Point(27, 137);
			this->menuButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(112, 68);
			this->menuButton->TabIndex = 22;
			this->menuButton->Text = L"Menu";
			this->menuButton->UseVisualStyleBackColor = true;
			this->menuButton->Click += gcnew System::EventHandler(this, &BasicCalcForm::menuButton_Click);
			// 
			// BasicCalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 609);
			this->Controls->Add(this->menuButton);
			this->Controls->Add(this->backspaceButton);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->squareButton);
			this->Controls->Add(this->squareRootButton);
			this->Controls->Add(this->divideButton);
			this->Controls->Add(this->multiplyButton);
			this->Controls->Add(this->minusButton);
			this->Controls->Add(this->plusButton);
			this->Controls->Add(this->equalsButton);
			this->Controls->Add(this->decimalButton);
			this->Controls->Add(this->zeroButton);
			this->Controls->Add(this->nineButton);
			this->Controls->Add(this->eightButton);
			this->Controls->Add(this->sevenButton);
			this->Controls->Add(this->sixButton);
			this->Controls->Add(this->fiveButton);
			this->Controls->Add(this->fourButton);
			this->Controls->Add(this->threeButton);
			this->Controls->Add(this->twoButton);
			this->Controls->Add(this->oneButton);
			this->Controls->Add(this->displayPanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"BasicCalcForm";
			this->Text = L"BasicCalcForm";
			this->displayPanel->ResumeLayout(false);
			this->displayPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text = "";
		this->displayRow2->Text = "";
		operatorCount = 0;
		EnableDigits(true);
		EnableOperators(true);
	}
	private: System::Void squareButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			BasicCalc calc = { this->displayRow1->Text };
			string ch = calc.getExpression().substr(calc.getExpression().length() - 1);
			if (ch == "x" || ch == "/" || ch == "+" || ch == "-") {

			}
			else if (isLastDecimal(ch)) {
				calc.setExpression(calc.getExpression() + "0²");
				string value;
				value = to_string(calc.Equals());
				this->displayRow1->Text = gcnew String(value.c_str());
			}
			else {
				writeToDisplay("²");
			}
			EnableDigits(false);
			EnableOperators(true);
		}
	}
	private: System::Void squareRootButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			BasicCalc calc = { this->displayRow1->Text };
			string ch = calc.getExpression().substr(calc.getExpression().length() - 1);
			if (ch == "x" || ch == "/" || ch == "+" || ch == "-") {

			}
			else if (isLastDecimal(ch)) {
				calc.setExpression(calc.getExpression() + "0½");
				string value;
				value = to_string(calc.Equals());
				this->displayRow1->Text = gcnew String(value.c_str());
			}
			else {
				writeToDisplay("½");
			}
			EnableDigits(false);
			EnableOperators(true);
		}
	}
	private: System::Void sevenButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "7";
		EnableOperators(true);
	}
	private: System::Void eightButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "8";
		EnableOperators(true);
	}
	private: System::Void nineButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "9";
		EnableOperators(true);
	}
	private: System::Void multiplyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("x");
			EnableDigits(true);
			EnableOperators(false);
		}
	}
	private: System::Void fourButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "4";
		EnableOperators(true);
	}
	private: System::Void fiveButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "5";
		EnableOperators(true);
	}
	private: System::Void sixButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "6";
		EnableOperators(true);
	}
	private: System::Void minusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("-");
			EnableDigits(true);
			EnableOperators(false);
		}
	}
	private: System::Void oneButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "1";
		EnableOperators(true);
	}
	private: System::Void twoButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "2";
		EnableOperators(true);
	}
	private: System::Void threeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "3";
		EnableOperators(true);
	}
	private: System::Void plusButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("+");
			EnableDigits(true);
			EnableOperators(false);
		}
	}
	private: System::Void posNegButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*if (posNegStatus == 1) {
			this->displayRow1->Text += "";
			posNegStatus = 0;
		}
		else if (posNegStatus == 0) {
			this->displayRow1->Text += "-";
			posNegStatus = 1;
		}*/
		
	}
	private: System::Void zeroButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "0";
		EnableOperators(true);
	}
	private: System::Void decimalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if(this->displayRow1->Text != ""){
			BasicCalc calc = { this->displayRow1->Text };
			string ch = calc.getExpression().substr(calc.getExpression().length() - 1);
			if (ch == "²" || ch == "½") {

			}
			else {
				this->displayRow1->Text += ".";
			}
		}
		else {
			this->displayRow1->Text += "0.";
		}
		EnableDigits(true);
	}
	private: System::Void equalsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			BasicCalc calc = { this->displayRow1->Text };
			if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {
				if (isLastDecimal(calc.getExpression())) {

					BasicCalc calc = { this->displayRow1->Text };
					this->displayRow1->Text += "0";
					double value = calc.Equals();
					this->displayRow2->Text = value + "";
				}
			}
			else {
				BasicCalc calc = { this->displayRow1->Text };
				double value = calc.Equals();
				this->displayRow2->Text = value + "";
			}
		}
	}
	private: System::Void divideButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("/");
			EnableDigits(true);
			EnableOperators(false);
		}
	}
	private: System::Void writeToDisplay(string str) {
		
		BasicCalc calc = { this->displayRow1->Text };
		if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {
			if (isLastDecimal(calc.getExpression())) {
				
				BasicCalc calc = { this->displayRow1->Text };
				this->displayRow1->Text += "0";
				this->displayRow1->Text += gcnew String(str.c_str());
		
			}
		}
		else {
			if (this->operatorCount > 0) {
				string value;
				value = to_string(calc.Equals()) + str;
				if (value.find(".") > 0) {
					while (value[value.length() - 2] == '0' || value[value.length() - 2] == '.') {
						if (value[value.length() - 2] == '.') {
							value.erase(value.length() - 2, 1);
							break;
						}
						else {
							value.erase(value.length() - 2, 1);
						}
					}
				}
				this->displayRow1->Text = gcnew String(value.c_str());
			}
			else {
				this->displayRow1->Text += gcnew String(str.c_str());
				operatorCount++;
			}
		}
		
	}
	private: System::Boolean opCheck(string ch) {
		if (ch == "x" || ch == "/" || ch == "+" || ch == "-" || ch == ".") {
			return true;
		}
		return false;
	}
	private: System::Void backspaceButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ temp = this->displayRow1->Text;
		if (temp->Length != 0) {
			if (opCheck(msclr::interop::marshal_as<std::string>(temp->Substring(temp->Length - 1, 1))) || temp->Substring(temp->Length - 1, 1) == "½" || temp->Substring(temp->Length - 1, 1) == "²"){
				operatorCount--;
				EnableDigits(true);
				EnableOperators(true);
			}
			this->displayRow1->Text = temp->Substring(0, temp->Length - 1);
		}
	}

	private: System::Void menuButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	bool EnableDigits(bool state) {
		this->zeroButton->Enabled = state;
		this->oneButton->Enabled = state;
		this->twoButton->Enabled = state;
		this->threeButton->Enabled = state;
		this->fourButton->Enabled = state;
		this->fiveButton->Enabled = state;
		this->sixButton->Enabled = state;
		this->sevenButton->Enabled = state;
		this->eightButton->Enabled = state;
		this->nineButton->Enabled = state;
		return state;
	}
	bool EnableOperators(bool state) {
		this->squareButton->Enabled = state;
		this->squareRootButton->Enabled = state;
		this->divideButton->Enabled = state;
		this->multiplyButton->Enabled = state;
		this->minusButton->Enabled = state;
		this->plusButton->Enabled = state;
		return state;
	}
	bool isLastDecimal(string str) {
		if (str[str.length() - 1] == '.') {
			return true;
		}
		return false;
	}
};
}
