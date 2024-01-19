#pragma once
#include "ScientificCalc.h"
namespace CalculatorProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScientificCalcForm
	/// </summary>
	public ref class ScientificCalcForm : public System::Windows::Forms::Form
	{
	public:
		ScientificCalcForm(void)
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
		~ScientificCalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ clearButton;
	protected:
	private: System::Windows::Forms::Button^ squareButton;
	private: System::Windows::Forms::Button^ squareRootButton;
	private: System::Windows::Forms::Button^ divideButton;
	private: System::Windows::Forms::Button^ multiplyButton;
	private: System::Windows::Forms::Button^ minusButton;
	private: System::Windows::Forms::Button^ plusButton;
	private: System::Windows::Forms::Button^ equalsButton;
	private: System::Windows::Forms::Button^ decimalButton;

	private: System::Windows::Forms::Button^ zeroButton;
	private: System::Windows::Forms::Button^ nineButton;
	private: System::Windows::Forms::Button^ eightButton;
	private: System::Windows::Forms::Button^ sevenButton;
	private: System::Windows::Forms::Button^ sixButton;
	private: System::Windows::Forms::Button^ fiveButton;
	private: System::Windows::Forms::Button^ fourButton;
	private: System::Windows::Forms::Button^ threeButton;
	private: System::Windows::Forms::Button^ twoButton;
	private: System::Windows::Forms::Button^ oneButton;
	private: System::Windows::Forms::Panel^ displayPanel;
	private: System::Windows::Forms::Label^ displayRow2;
	private: System::Windows::Forms::TextBox^ displayRow1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ sinNegButton;
	private: System::Windows::Forms::Button^ cosNegButton;
	private: System::Windows::Forms::Button^ tanNegButton;
	private: System::Windows::Forms::Button^ factorialButton;


	private: System::Windows::Forms::Button^ logButton;
	private: System::Windows::Forms::Button^ tanButton;
	private: System::Windows::Forms::Button^ cosButton;
	private: System::Windows::Forms::Button^ exponentButton;

	private: System::Windows::Forms::Button^ sinButton;
	private: System::Windows::Forms::Button^ piButton;


	private: System::Windows::Forms::Button^ absButton;
	private: System::Windows::Forms::Button^ backspaceButton;
	private: System::Windows::Forms::Button^ menuButton;




		   int operatorCount = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ScientificCalcForm::typeid));
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->squareButton = (gcnew System::Windows::Forms::Button());
			this->squareRootButton = (gcnew System::Windows::Forms::Button());
			this->divideButton = (gcnew System::Windows::Forms::Button());
			this->multiplyButton = (gcnew System::Windows::Forms::Button());
			this->minusButton = (gcnew System::Windows::Forms::Button());
			this->plusButton = (gcnew System::Windows::Forms::Button());
			this->equalsButton = (gcnew System::Windows::Forms::Button());
			this->decimalButton = (gcnew System::Windows::Forms::Button());
			this->zeroButton = (gcnew System::Windows::Forms::Button());
			this->nineButton = (gcnew System::Windows::Forms::Button());
			this->eightButton = (gcnew System::Windows::Forms::Button());
			this->sevenButton = (gcnew System::Windows::Forms::Button());
			this->sixButton = (gcnew System::Windows::Forms::Button());
			this->fiveButton = (gcnew System::Windows::Forms::Button());
			this->fourButton = (gcnew System::Windows::Forms::Button());
			this->threeButton = (gcnew System::Windows::Forms::Button());
			this->twoButton = (gcnew System::Windows::Forms::Button());
			this->oneButton = (gcnew System::Windows::Forms::Button());
			this->displayPanel = (gcnew System::Windows::Forms::Panel());
			this->displayRow2 = (gcnew System::Windows::Forms::Label());
			this->displayRow1 = (gcnew System::Windows::Forms::TextBox());
			this->sinNegButton = (gcnew System::Windows::Forms::Button());
			this->cosNegButton = (gcnew System::Windows::Forms::Button());
			this->tanNegButton = (gcnew System::Windows::Forms::Button());
			this->factorialButton = (gcnew System::Windows::Forms::Button());
			this->logButton = (gcnew System::Windows::Forms::Button());
			this->tanButton = (gcnew System::Windows::Forms::Button());
			this->cosButton = (gcnew System::Windows::Forms::Button());
			this->exponentButton = (gcnew System::Windows::Forms::Button());
			this->sinButton = (gcnew System::Windows::Forms::Button());
			this->piButton = (gcnew System::Windows::Forms::Button());
			this->absButton = (gcnew System::Windows::Forms::Button());
			this->backspaceButton = (gcnew System::Windows::Forms::Button());
			this->menuButton = (gcnew System::Windows::Forms::Button());
			this->displayPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearButton->Location = System::Drawing::Point(39, 700);
			this->clearButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(112, 68);
			this->clearButton->TabIndex = 41;
			this->clearButton->Text = L"C";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::clearButton_Click);
			// 
			// squareButton
			// 
			this->squareButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->squareButton->Location = System::Drawing::Point(161, 392);
			this->squareButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->squareButton->Name = L"squareButton";
			this->squareButton->Size = System::Drawing::Size(112, 68);
			this->squareButton->TabIndex = 40;
			this->squareButton->Text = L"x²";
			this->squareButton->UseVisualStyleBackColor = true;
			this->squareButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::squareButton_Click);
			// 
			// squareRootButton
			// 
			this->squareRootButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->squareRootButton->Location = System::Drawing::Point(283, 392);
			this->squareRootButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->squareRootButton->Name = L"squareRootButton";
			this->squareRootButton->Size = System::Drawing::Size(112, 68);
			this->squareRootButton->TabIndex = 39;
			this->squareRootButton->Text = L"√";
			this->squareRootButton->UseVisualStyleBackColor = true;
			this->squareRootButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::squareRootButton_Click);
			// 
			// divideButton
			// 
			this->divideButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divideButton->Location = System::Drawing::Point(404, 392);
			this->divideButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->divideButton->Name = L"divideButton";
			this->divideButton->Size = System::Drawing::Size(112, 68);
			this->divideButton->TabIndex = 38;
			this->divideButton->Text = L"÷";
			this->divideButton->UseVisualStyleBackColor = true;
			this->divideButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::divideButton_Click);
			// 
			// multiplyButton
			// 
			this->multiplyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiplyButton->Location = System::Drawing::Point(404, 469);
			this->multiplyButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->multiplyButton->Name = L"multiplyButton";
			this->multiplyButton->Size = System::Drawing::Size(112, 68);
			this->multiplyButton->TabIndex = 37;
			this->multiplyButton->Text = L"x";
			this->multiplyButton->UseVisualStyleBackColor = true;
			this->multiplyButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::multiplyButton_Click);
			// 
			// minusButton
			// 
			this->minusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusButton->Location = System::Drawing::Point(404, 546);
			this->minusButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->minusButton->Name = L"minusButton";
			this->minusButton->Size = System::Drawing::Size(112, 68);
			this->minusButton->TabIndex = 36;
			this->minusButton->Text = L"-";
			this->minusButton->UseVisualStyleBackColor = true;
			this->minusButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::minusButton_Click);
			// 
			// plusButton
			// 
			this->plusButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusButton->Location = System::Drawing::Point(404, 623);
			this->plusButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->plusButton->Name = L"plusButton";
			this->plusButton->Size = System::Drawing::Size(112, 68);
			this->plusButton->TabIndex = 35;
			this->plusButton->Text = L"+";
			this->plusButton->UseVisualStyleBackColor = true;
			this->plusButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::plusButton_Click);
			// 
			// equalsButton
			// 
			this->equalsButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equalsButton->Location = System::Drawing::Point(404, 700);
			this->equalsButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->equalsButton->Name = L"equalsButton";
			this->equalsButton->Size = System::Drawing::Size(112, 68);
			this->equalsButton->TabIndex = 34;
			this->equalsButton->Text = L"=";
			this->equalsButton->UseVisualStyleBackColor = true;
			this->equalsButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::equalsButton_Click);
			// 
			// decimalButton
			// 
			this->decimalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimalButton->Location = System::Drawing::Point(283, 700);
			this->decimalButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->decimalButton->Name = L"decimalButton";
			this->decimalButton->Size = System::Drawing::Size(112, 68);
			this->decimalButton->TabIndex = 33;
			this->decimalButton->Text = L".";
			this->decimalButton->UseVisualStyleBackColor = true;
			this->decimalButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::decimalButton_Click);
			// 
			// zeroButton
			// 
			this->zeroButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zeroButton->Location = System::Drawing::Point(161, 700);
			this->zeroButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zeroButton->Name = L"zeroButton";
			this->zeroButton->Size = System::Drawing::Size(112, 68);
			this->zeroButton->TabIndex = 31;
			this->zeroButton->Text = L"0";
			this->zeroButton->UseVisualStyleBackColor = true;
			this->zeroButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::zeroButton_Click);
			// 
			// nineButton
			// 
			this->nineButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nineButton->Location = System::Drawing::Point(283, 469);
			this->nineButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->nineButton->Name = L"nineButton";
			this->nineButton->Size = System::Drawing::Size(112, 68);
			this->nineButton->TabIndex = 30;
			this->nineButton->Text = L"9";
			this->nineButton->UseVisualStyleBackColor = true;
			this->nineButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::nineButton_Click);
			// 
			// eightButton
			// 
			this->eightButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eightButton->Location = System::Drawing::Point(161, 469);
			this->eightButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->eightButton->Name = L"eightButton";
			this->eightButton->Size = System::Drawing::Size(112, 68);
			this->eightButton->TabIndex = 29;
			this->eightButton->Text = L"8";
			this->eightButton->UseVisualStyleBackColor = true;
			this->eightButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::eightButton_Click);
			// 
			// sevenButton
			// 
			this->sevenButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sevenButton->Location = System::Drawing::Point(39, 469);
			this->sevenButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sevenButton->Name = L"sevenButton";
			this->sevenButton->Size = System::Drawing::Size(112, 68);
			this->sevenButton->TabIndex = 28;
			this->sevenButton->Text = L"7";
			this->sevenButton->UseVisualStyleBackColor = true;
			this->sevenButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::sevenButton_Click);
			// 
			// sixButton
			// 
			this->sixButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sixButton->Location = System::Drawing::Point(283, 546);
			this->sixButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sixButton->Name = L"sixButton";
			this->sixButton->Size = System::Drawing::Size(112, 68);
			this->sixButton->TabIndex = 27;
			this->sixButton->Text = L"6";
			this->sixButton->UseVisualStyleBackColor = true;
			this->sixButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::sixButton_Click);
			// 
			// fiveButton
			// 
			this->fiveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fiveButton->Location = System::Drawing::Point(161, 546);
			this->fiveButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->fiveButton->Name = L"fiveButton";
			this->fiveButton->Size = System::Drawing::Size(112, 68);
			this->fiveButton->TabIndex = 26;
			this->fiveButton->Text = L"5";
			this->fiveButton->UseVisualStyleBackColor = true;
			this->fiveButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::fiveButton_Click);
			// 
			// fourButton
			// 
			this->fourButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fourButton->Location = System::Drawing::Point(39, 546);
			this->fourButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->fourButton->Name = L"fourButton";
			this->fourButton->Size = System::Drawing::Size(112, 68);
			this->fourButton->TabIndex = 25;
			this->fourButton->Text = L"4";
			this->fourButton->UseVisualStyleBackColor = true;
			this->fourButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::fourButton_Click);
			// 
			// threeButton
			// 
			this->threeButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threeButton->Location = System::Drawing::Point(283, 623);
			this->threeButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->threeButton->Name = L"threeButton";
			this->threeButton->Size = System::Drawing::Size(112, 68);
			this->threeButton->TabIndex = 24;
			this->threeButton->Text = L"3";
			this->threeButton->UseVisualStyleBackColor = true;
			this->threeButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::threeButton_Click);
			// 
			// twoButton
			// 
			this->twoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->twoButton->Location = System::Drawing::Point(161, 623);
			this->twoButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->twoButton->Name = L"twoButton";
			this->twoButton->Size = System::Drawing::Size(112, 68);
			this->twoButton->TabIndex = 23;
			this->twoButton->Text = L"2";
			this->twoButton->UseVisualStyleBackColor = true;
			this->twoButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::twoButton_Click);
			// 
			// oneButton
			// 
			this->oneButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oneButton->Location = System::Drawing::Point(39, 623);
			this->oneButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->oneButton->Name = L"oneButton";
			this->oneButton->Size = System::Drawing::Size(112, 68);
			this->oneButton->TabIndex = 22;
			this->oneButton->Text = L"1";
			this->oneButton->UseVisualStyleBackColor = true;
			this->oneButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::oneButton_Click);
			// 
			// displayPanel
			// 
			this->displayPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->displayPanel->Controls->Add(this->displayRow2);
			this->displayPanel->Controls->Add(this->displayRow1);
			this->displayPanel->Location = System::Drawing::Point(39, 34);
			this->displayPanel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->displayPanel->Name = L"displayPanel";
			this->displayPanel->Size = System::Drawing::Size(475, 99);
			this->displayPanel->TabIndex = 21;
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
			// sinNegButton
			// 
			this->sinNegButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sinNegButton->Location = System::Drawing::Point(39, 315);
			this->sinNegButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sinNegButton->Name = L"sinNegButton";
			this->sinNegButton->Size = System::Drawing::Size(112, 68);
			this->sinNegButton->TabIndex = 42;
			this->sinNegButton->Text = L"sin-1";
			this->sinNegButton->UseVisualStyleBackColor = true;
			this->sinNegButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::sinNegButton_Click);
			// 
			// cosNegButton
			// 
			this->cosNegButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cosNegButton->Location = System::Drawing::Point(161, 315);
			this->cosNegButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cosNegButton->Name = L"cosNegButton";
			this->cosNegButton->Size = System::Drawing::Size(112, 68);
			this->cosNegButton->TabIndex = 43;
			this->cosNegButton->Text = L"cos-1";
			this->cosNegButton->UseVisualStyleBackColor = true;
			this->cosNegButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::cosNegButton_Click);
			// 
			// tanNegButton
			// 
			this->tanNegButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tanNegButton->Location = System::Drawing::Point(283, 315);
			this->tanNegButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tanNegButton->Name = L"tanNegButton";
			this->tanNegButton->Size = System::Drawing::Size(112, 68);
			this->tanNegButton->TabIndex = 44;
			this->tanNegButton->Text = L"tan-1";
			this->tanNegButton->UseVisualStyleBackColor = true;
			this->tanNegButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::tanNegButton_Click);
			// 
			// factorialButton
			// 
			this->factorialButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->factorialButton->Location = System::Drawing::Point(404, 315);
			this->factorialButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->factorialButton->Name = L"factorialButton";
			this->factorialButton->Size = System::Drawing::Size(112, 68);
			this->factorialButton->TabIndex = 45;
			this->factorialButton->Text = L"!";
			this->factorialButton->UseVisualStyleBackColor = true;
			this->factorialButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::factorialButton_Click);
			// 
			// logButton
			// 
			this->logButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logButton->Location = System::Drawing::Point(404, 238);
			this->logButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->logButton->Name = L"logButton";
			this->logButton->Size = System::Drawing::Size(112, 68);
			this->logButton->TabIndex = 46;
			this->logButton->Text = L"log";
			this->logButton->UseVisualStyleBackColor = true;
			this->logButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::logButton_Click);
			// 
			// tanButton
			// 
			this->tanButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tanButton->Location = System::Drawing::Point(283, 238);
			this->tanButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->tanButton->Name = L"tanButton";
			this->tanButton->Size = System::Drawing::Size(112, 68);
			this->tanButton->TabIndex = 47;
			this->tanButton->Text = L"tan";
			this->tanButton->UseVisualStyleBackColor = true;
			this->tanButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::tanButton_Click);
			// 
			// cosButton
			// 
			this->cosButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cosButton->Location = System::Drawing::Point(161, 238);
			this->cosButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->cosButton->Name = L"cosButton";
			this->cosButton->Size = System::Drawing::Size(112, 68);
			this->cosButton->TabIndex = 48;
			this->cosButton->Text = L"cos";
			this->cosButton->UseVisualStyleBackColor = true;
			this->cosButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::cosButton_Click);
			// 
			// exponentButton
			// 
			this->exponentButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exponentButton->Location = System::Drawing::Point(39, 392);
			this->exponentButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->exponentButton->Name = L"exponentButton";
			this->exponentButton->Size = System::Drawing::Size(112, 68);
			this->exponentButton->TabIndex = 49;
			this->exponentButton->Text = L"x^y";
			this->exponentButton->UseVisualStyleBackColor = true;
			this->exponentButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::exponentButton_Click);
			// 
			// sinButton
			// 
			this->sinButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sinButton->Location = System::Drawing::Point(39, 238);
			this->sinButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->sinButton->Name = L"sinButton";
			this->sinButton->Size = System::Drawing::Size(112, 68);
			this->sinButton->TabIndex = 50;
			this->sinButton->Text = L"sin";
			this->sinButton->UseVisualStyleBackColor = true;
			this->sinButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::sinButton_Click);
			// 
			// piButton
			// 
			this->piButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->piButton->Location = System::Drawing::Point(283, 161);
			this->piButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->piButton->Name = L"piButton";
			this->piButton->Size = System::Drawing::Size(112, 68);
			this->piButton->TabIndex = 51;
			this->piButton->Text = L"𝝅";
			this->piButton->UseVisualStyleBackColor = true;
			this->piButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::piButton_Click);
			// 
			// absButton
			// 
			this->absButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->absButton->Location = System::Drawing::Point(161, 161);
			this->absButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->absButton->Name = L"absButton";
			this->absButton->Size = System::Drawing::Size(112, 68);
			this->absButton->TabIndex = 57;
			this->absButton->Text = L"|x|";
			this->absButton->UseVisualStyleBackColor = true;
			this->absButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::absButton_Click);
			// 
			// backspaceButton
			// 
			this->backspaceButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->backspaceButton->Location = System::Drawing::Point(39, 161);
			this->backspaceButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->backspaceButton->Name = L"backspaceButton";
			this->backspaceButton->Size = System::Drawing::Size(112, 68);
			this->backspaceButton->TabIndex = 58;
			this->backspaceButton->Text = L"<--";
			this->backspaceButton->UseVisualStyleBackColor = true;
			this->backspaceButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::backspaceButton_Click);
			// 
			// menuButton
			// 
			this->menuButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuButton->Location = System::Drawing::Point(404, 161);
			this->menuButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(112, 68);
			this->menuButton->TabIndex = 59;
			this->menuButton->Text = L"Menu";
			this->menuButton->UseVisualStyleBackColor = true;
			this->menuButton->Click += gcnew System::EventHandler(this, &ScientificCalcForm::menuButton_Click);
			// 
			// ScientificCalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 791);
			this->Controls->Add(this->menuButton);
			this->Controls->Add(this->backspaceButton);
			this->Controls->Add(this->absButton);
			this->Controls->Add(this->piButton);
			this->Controls->Add(this->sinButton);
			this->Controls->Add(this->exponentButton);
			this->Controls->Add(this->cosButton);
			this->Controls->Add(this->tanButton);
			this->Controls->Add(this->logButton);
			this->Controls->Add(this->factorialButton);
			this->Controls->Add(this->tanNegButton);
			this->Controls->Add(this->cosNegButton);
			this->Controls->Add(this->sinNegButton);
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
			this->Name = L"ScientificCalcForm";
			this->Text = L"ScientificCalcForm";
			this->Load += gcnew System::EventHandler(this, &ScientificCalcForm::ScientificCalcForm_Load);
			this->displayPanel->ResumeLayout(false);
			this->displayPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ScientificCalcForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text = "";
		this->displayRow2->Text = "";
		operatorCount = 0;
		EnableDigits(true);
		EnableOperators(true);
	}
	private: System::Void squareButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			ScientificCalc calc = { this->displayRow1->Text };
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
			ScientificCalc calc = { this->displayRow1->Text };
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

		//this->displayRow1->Text += "-";

	}
	private: System::Void zeroButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->displayRow1->Text += "0";
		EnableOperators(true);
	}
	private: System::Void decimalButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			ScientificCalc calc = { this->displayRow1->Text };
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
			ScientificCalc calc = { this->displayRow1->Text };
			if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {
				if (isLastDecimal(calc.getExpression())) {

					ScientificCalc calc = { this->displayRow1->Text };
					this->displayRow1->Text += "0";
					double value = calc.Equals();
					this->displayRow2->Text = value + "";
				}
			}
			else {
				ScientificCalc calc = { this->displayRow1->Text };
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
	private: System::Void absButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			ScientificCalc calc = { this->displayRow1->Text };
			if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

			}
			else {
				if (this->operatorCount > 0) {
					string value;
					this->displayRow1->Text = gcnew String("|" + calc.Equals() + "|");
					value = to_string(calc.Equals());
					calc.setExpression(value + "|");
					this->displayRow2->Text = gcnew String(calc.Equals() + "");
				}
				else {
					this->displayRow1->Text = gcnew String("|" + this->displayRow1->Text + "|");
					calc.setExpression(calc.getExpression() + "|");
					this->displayRow2->Text = gcnew String(calc.Equals() + "");
					operatorCount++;
				}
			}
		}
	}
	private: System::Void piButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			ScientificCalc calc = { this->displayRow1->Text };
			if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {
				this->displayRow1->Text += "3.141592";
			}
			else {
				string value = to_string(calc.Equals());
				String^ newExp = calc.Equals() + "*3.1415692";
				calc.setExpression(value + "*3.1415692");
				this->displayRow1->Text = gcnew String(calc.Equals() + "");
				this->displayRow2->Text = gcnew String("");
			}

			EnableDigits(false);
			EnableOperators(true);
		}
		else {
			this->displayRow1->Text = "3.141592";
		}


	}

	private: System::Void sinButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length()> 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0){
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("sin(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "s");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("sin(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "s");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void cosNegButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("cos-1(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "C");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("cos-1(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "C");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void cosButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("cos(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "c");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("cos(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "c");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void tanButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("tan(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "t");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("tan(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "t");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void logButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("log(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "L");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("log(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "L");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void sinNegButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("sin-1(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "S");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("sin-1(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "S");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void tanNegButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScientificCalc calc = { this->displayRow1->Text };
		if (calc.getExpression().length() > 0 && opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {

		}
		else if (calc.getExpression().length() > 0) {
			if (this->operatorCount > 0) {
				string value;
				this->displayRow1->Text = gcnew String("tan-1(" + calc.Equals() + ")");
				value = to_string(calc.Equals());
				calc.setExpression(value + "T");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
			}
			else {
				this->displayRow1->Text = gcnew String("tan-1(" + this->displayRow1->Text + ")");
				calc.setExpression(calc.getExpression() + "T");
				this->displayRow2->Text = gcnew String(calc.Equals() + "");
				operatorCount++;
			}
		}
	}
	private: System::Void factorialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("!");
			EnableDigits(false);
			EnableOperators(true);
		}
	}
	private: System::Void exponentButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->displayRow1->Text != "") {
			writeToDisplay("^");
			EnableDigits(true);
			EnableOperators(false);
		}
	}
	private: System::Void writeToDisplay(string str) {

		ScientificCalc calc = { this->displayRow1->Text };
		if (opCheck(calc.getExpression().substr(calc.getExpression().length() - 1))) {
			if (isLastDecimal(calc.getExpression())) {

				ScientificCalc calc = { this->displayRow1->Text };
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
			if (opCheck(msclr::interop::marshal_as<std::string>(temp->Substring(temp->Length - 1, 1))) || temp->Substring(temp->Length - 1, 1) == "½" || temp->Substring(temp->Length - 1, 1) == "²") {
				operatorCount--;
				EnableDigits(true);
				EnableOperators(true);
			}
			if (temp->Contains("sin") || temp->Contains("cos") || temp->Contains("tan")) {
				this->displayRow1->Text = "";
				this->displayRow2->Text = "";
			}
			else {
				this->displayRow1->Text = temp->Substring(0, temp->Length - 1);
			}
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
		this->sinButton->Enabled = state;
		this->cosButton->Enabled = state;
		this->tanButton->Enabled = state;
		this->sinNegButton->Enabled = state;
		this->cosNegButton->Enabled = state;
		this->tanNegButton->Enabled = state;
		this->logButton->Enabled = state;
		this->absButton->Enabled = state;
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
