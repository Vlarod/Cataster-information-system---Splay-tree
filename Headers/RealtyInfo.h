#pragma once

namespace AUS2___SemUdaj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RealtyInfo
	/// </summary>
	public ref class RealtyInfo : public System::Windows::Forms::Form
	{
	public:
		RealtyInfo(void)
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
		~RealtyInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelTitleRealtyInfo;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBoxRealtyInfo1;
	private: System::Windows::Forms::Label^  labelTitleAdress;
	private: System::Windows::Forms::Label^  labelTitleDescription;
	private: System::Windows::Forms::Label^  labelTitlePSC;

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
			this->labelTitleRealtyInfo = (gcnew System::Windows::Forms::Label());
			this->groupBoxRealtyInfo1 = (gcnew System::Windows::Forms::GroupBox());
			this->labelTitlePSC = (gcnew System::Windows::Forms::Label());
			this->labelTitleDescription = (gcnew System::Windows::Forms::Label());
			this->labelTitleAdress = (gcnew System::Windows::Forms::Label());
			this->groupBoxRealtyInfo1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelTitleRealtyInfo
			// 
			this->labelTitleRealtyInfo->AutoSize = true;
			this->labelTitleRealtyInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelTitleRealtyInfo->Location = System::Drawing::Point(213, 9);
			this->labelTitleRealtyInfo->Name = L"labelTitleRealtyInfo";
			this->labelTitleRealtyInfo->Size = System::Drawing::Size(360, 31);
			this->labelTitleRealtyInfo->TabIndex = 0;
			this->labelTitleRealtyInfo->Text = L"Informácie o nehnute¾nosti";
			// 
			// groupBoxRealtyInfo1
			// 
			this->groupBoxRealtyInfo1->Controls->Add(this->labelTitleAdress);
			this->groupBoxRealtyInfo1->Controls->Add(this->labelTitleDescription);
			this->groupBoxRealtyInfo1->Controls->Add(this->labelTitlePSC);
			this->groupBoxRealtyInfo1->Location = System::Drawing::Point(13, 62);
			this->groupBoxRealtyInfo1->Name = L"groupBoxRealtyInfo1";
			this->groupBoxRealtyInfo1->Size = System::Drawing::Size(600, 487);
			this->groupBoxRealtyInfo1->TabIndex = 1;
			this->groupBoxRealtyInfo1->TabStop = false;
			// 
			// labelTitlePSC
			// 
			this->labelTitlePSC->AutoSize = true;
			this->labelTitlePSC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitlePSC->Location = System::Drawing::Point(7, 20);
			this->labelTitlePSC->Name = L"labelTitlePSC";
			this->labelTitlePSC->Size = System::Drawing::Size(125, 20);
			this->labelTitlePSC->TabIndex = 0;
			this->labelTitlePSC->Text = L"Súpisné èíslo: ";
			// 
			// labelTitleDescription
			// 
			this->labelTitleDescription->AutoSize = true;
			this->labelTitleDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitleDescription->Location = System::Drawing::Point(7, 101);
			this->labelTitleDescription->Name = L"labelTitleDescription";
			this->labelTitleDescription->Size = System::Drawing::Size(63, 20);
			this->labelTitleDescription->TabIndex = 1;
			this->labelTitleDescription->Text = L"Popis: ";
			// 
			// labelTitleAdress
			// 
			this->labelTitleAdress->AutoSize = true;
			this->labelTitleAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitleAdress->Location = System::Drawing::Point(7, 60);
			this->labelTitleAdress->Name = L"labelTitleAdress";
			this->labelTitleAdress->Size = System::Drawing::Size(76, 20);
			this->labelTitleAdress->TabIndex = 2;
			this->labelTitleAdress->Text = L"Adresa: ";
			// 
			// RealtyInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->groupBoxRealtyInfo1);
			this->Controls->Add(this->labelTitleRealtyInfo);
			this->Name = L"RealtyInfo";
			this->Text = L"RealtyInfo";
			this->groupBoxRealtyInfo1->ResumeLayout(false);
			this->groupBoxRealtyInfo1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
