#pragma once
#include "Property.h"
#include "PropertyList.h"
namespace AUS2___SemUdaj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Realty
	/// </summary>
	public ref class Realty : public System::Windows::Forms::Form
	{
	public:
		void printPropertyInfo(int numberProp, std::string adress, std::string description, int propertyListNumber, std::string catasterName, SplayTree<int,Property> *propertiesInPL, SplayTree<std::string, Part> * partsInPL);
		void printPropertyListInfo(int propertyListNumber, std::string catasterName, SplayTree<int, Property> *propertiesInPL, SplayTree<std::string, Part> * partsInPL);

		Realty(void)
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
		~Realty()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Label^  labelTitleRealty;
	private: System::Windows::Forms::GroupBox^  groupBoxRealty;
	private: System::Windows::Forms::Label^  labelTPropertyNumber;
	private: System::Windows::Forms::Label^  labelPropertyNumber;
	private: System::Windows::Forms::Label^  labelAdress;

	private: System::Windows::Forms::Label^  labelTAdress;
	private: System::Windows::Forms::Label^  labelDescription;


	private: System::Windows::Forms::Label^  labelTDescription;
	private: System::Windows::Forms::Label^  labelPropertyListNumber;
	private: System::Windows::Forms::Label^  labelTPropertyLitNumber;
	private: System::Windows::Forms::Label^  labelCatasterArea;
	private: System::Windows::Forms::Label^  labelTCAtasterArea;
	private: System::Windows::Forms::ListView^  listViewPropertiesOnPL;

	private: System::Windows::Forms::ColumnHeader^  propertyId;
	private: System::Windows::Forms::ColumnHeader^  propertyAdress;
	private: System::Windows::Forms::ColumnHeader^  propertyDescription;
	private: System::Windows::Forms::Label^  labelTPropertiesOnPL;
	private: System::Windows::Forms::ListView^  listViewPartsOnPL;

	private: System::Windows::Forms::ColumnHeader^  columnHeaderPropertyNumber;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderPart;
	private: System::Windows::Forms::Label^  label1PartsOnPL;
	private: System::Windows::Forms::Label^  labelTitlePropertyList;









	protected:

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
			this->labelTitleRealty = (gcnew System::Windows::Forms::Label());
			this->groupBoxRealty = (gcnew System::Windows::Forms::GroupBox());
			this->labelTPropertyNumber = (gcnew System::Windows::Forms::Label());
			this->labelPropertyNumber = (gcnew System::Windows::Forms::Label());
			this->labelAdress = (gcnew System::Windows::Forms::Label());
			this->labelTAdress = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->labelTDescription = (gcnew System::Windows::Forms::Label());
			this->labelPropertyListNumber = (gcnew System::Windows::Forms::Label());
			this->labelTPropertyLitNumber = (gcnew System::Windows::Forms::Label());
			this->labelCatasterArea = (gcnew System::Windows::Forms::Label());
			this->labelTCAtasterArea = (gcnew System::Windows::Forms::Label());
			this->listViewPropertiesOnPL = (gcnew System::Windows::Forms::ListView());
			this->propertyId = (gcnew System::Windows::Forms::ColumnHeader());
			this->propertyAdress = (gcnew System::Windows::Forms::ColumnHeader());
			this->propertyDescription = (gcnew System::Windows::Forms::ColumnHeader());
			this->labelTPropertiesOnPL = (gcnew System::Windows::Forms::Label());
			this->listViewPartsOnPL = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderPropertyNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderPart = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1PartsOnPL = (gcnew System::Windows::Forms::Label());
			this->labelTitlePropertyList = (gcnew System::Windows::Forms::Label());
			this->groupBoxRealty->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelTitleRealty
			// 
			this->labelTitleRealty->AutoSize = true;
			this->labelTitleRealty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitleRealty->Location = System::Drawing::Point(6, 7);
			this->labelTitleRealty->Name = L"labelTitleRealty";
			this->labelTitleRealty->Size = System::Drawing::Size(187, 31);
			this->labelTitleRealty->TabIndex = 1;
			this->labelTitleRealty->Text = L"Nehnutelnost";
			// 
			// groupBoxRealty
			// 
			this->groupBoxRealty->Controls->Add(this->labelTitlePropertyList);
			this->groupBoxRealty->Controls->Add(this->labelTitleRealty);
			this->groupBoxRealty->Location = System::Drawing::Point(13, 12);
			this->groupBoxRealty->Name = L"groupBoxRealty";
			this->groupBoxRealty->Size = System::Drawing::Size(759, 41);
			this->groupBoxRealty->TabIndex = 2;
			this->groupBoxRealty->TabStop = false;
			// 
			// labelTPropertyNumber
			// 
			this->labelTPropertyNumber->AutoSize = true;
			this->labelTPropertyNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTPropertyNumber->Location = System::Drawing::Point(25, 60);
			this->labelTPropertyNumber->Name = L"labelTPropertyNumber";
			this->labelTPropertyNumber->Size = System::Drawing::Size(105, 16);
			this->labelTPropertyNumber->TabIndex = 3;
			this->labelTPropertyNumber->Text = L"Supisne cislo:";
			// 
			// labelPropertyNumber
			// 
			this->labelPropertyNumber->AutoSize = true;
			this->labelPropertyNumber->Location = System::Drawing::Point(188, 62);
			this->labelPropertyNumber->Name = L"labelPropertyNumber";
			this->labelPropertyNumber->Size = System::Drawing::Size(35, 13);
			this->labelPropertyNumber->TabIndex = 4;
			this->labelPropertyNumber->Text = L"label2";
			// 
			// labelAdress
			// 
			this->labelAdress->AutoSize = true;
			this->labelAdress->Location = System::Drawing::Point(188, 98);
			this->labelAdress->Name = L"labelAdress";
			this->labelAdress->Size = System::Drawing::Size(35, 13);
			this->labelAdress->TabIndex = 6;
			this->labelAdress->Text = L"label2";
			// 
			// labelTAdress
			// 
			this->labelTAdress->AutoSize = true;
			this->labelTAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTAdress->Location = System::Drawing::Point(25, 96);
			this->labelTAdress->Name = L"labelTAdress";
			this->labelTAdress->Size = System::Drawing::Size(62, 16);
			this->labelTAdress->TabIndex = 5;
			this->labelTAdress->Text = L"Adresa:";
			// 
			// labelDescription
			// 
			this->labelDescription->AutoSize = true;
			this->labelDescription->Location = System::Drawing::Point(188, 134);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(82, 13);
			this->labelDescription->TabIndex = 8;
			this->labelDescription->Text = L"labelDescription";
			// 
			// labelTDescription
			// 
			this->labelTDescription->AutoSize = true;
			this->labelTDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTDescription->Location = System::Drawing::Point(25, 132);
			this->labelTDescription->Name = L"labelTDescription";
			this->labelTDescription->Size = System::Drawing::Size(52, 16);
			this->labelTDescription->TabIndex = 7;
			this->labelTDescription->Text = L"Popis:";
			// 
			// labelPropertyListNumber
			// 
			this->labelPropertyListNumber->AutoSize = true;
			this->labelPropertyListNumber->Location = System::Drawing::Point(188, 173);
			this->labelPropertyListNumber->Name = L"labelPropertyListNumber";
			this->labelPropertyListNumber->Size = System::Drawing::Size(35, 13);
			this->labelPropertyListNumber->TabIndex = 10;
			this->labelPropertyListNumber->Text = L"label2";
			// 
			// labelTPropertyLitNumber
			// 
			this->labelTPropertyLitNumber->AutoSize = true;
			this->labelTPropertyLitNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelTPropertyLitNumber->Location = System::Drawing::Point(25, 171);
			this->labelTPropertyLitNumber->Name = L"labelTPropertyLitNumber";
			this->labelTPropertyLitNumber->Size = System::Drawing::Size(157, 16);
			this->labelTPropertyLitNumber->TabIndex = 9;
			this->labelTPropertyLitNumber->Text = L"Cislo listu vlastnictva:";
			// 
			// labelCatasterArea
			// 
			this->labelCatasterArea->AutoSize = true;
			this->labelCatasterArea->Location = System::Drawing::Point(188, 209);
			this->labelCatasterArea->Name = L"labelCatasterArea";
			this->labelCatasterArea->Size = System::Drawing::Size(35, 13);
			this->labelCatasterArea->TabIndex = 12;
			this->labelCatasterArea->Text = L"label2";
			// 
			// labelTCAtasterArea
			// 
			this->labelTCAtasterArea->AutoSize = true;
			this->labelTCAtasterArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTCAtasterArea->Location = System::Drawing::Point(25, 207);
			this->labelTCAtasterArea->Name = L"labelTCAtasterArea";
			this->labelTCAtasterArea->Size = System::Drawing::Size(143, 16);
			this->labelTCAtasterArea->TabIndex = 11;
			this->labelTCAtasterArea->Text = L"Katastralne uzemie:";
			// 
			// listViewPropertiesOnPL
			// 
			this->listViewPropertiesOnPL->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->propertyId,
					this->propertyAdress, this->propertyDescription
			});
			this->listViewPropertiesOnPL->GridLines = true;
			this->listViewPropertiesOnPL->Location = System::Drawing::Point(28, 274);
			this->listViewPropertiesOnPL->Name = L"listViewPropertiesOnPL";
			this->listViewPropertiesOnPL->Size = System::Drawing::Size(558, 256);
			this->listViewPropertiesOnPL->TabIndex = 13;
			this->listViewPropertiesOnPL->UseCompatibleStateImageBehavior = false;
			this->listViewPropertiesOnPL->View = System::Windows::Forms::View::Details;
			// 
			// propertyId
			// 
			this->propertyId->Text = L"ID";
			this->propertyId->Width = 72;
			// 
			// propertyAdress
			// 
			this->propertyAdress->Text = L"Adresa";
			this->propertyAdress->Width = 262;
			// 
			// propertyDescription
			// 
			this->propertyDescription->Text = L"Popis";
			this->propertyDescription->Width = 220;
			// 
			// labelTPropertiesOnPL
			// 
			this->labelTPropertiesOnPL->AutoSize = true;
			this->labelTPropertiesOnPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTPropertiesOnPL->Location = System::Drawing::Point(25, 246);
			this->labelTPropertiesOnPL->Name = L"labelTPropertiesOnPL";
			this->labelTPropertiesOnPL->Size = System::Drawing::Size(272, 20);
			this->labelTPropertiesOnPL->TabIndex = 14;
			this->labelTPropertiesOnPL->Text = L"Nehnutelnosti na liste vlastnictva";
			// 
			// listViewPartsOnPL
			// 
			this->listViewPartsOnPL->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeaderPropertyNumber,
					this->columnHeaderPart
			});
			this->listViewPartsOnPL->GridLines = true;
			this->listViewPartsOnPL->Location = System::Drawing::Point(604, 274);
			this->listViewPartsOnPL->Name = L"listViewPartsOnPL";
			this->listViewPartsOnPL->Size = System::Drawing::Size(154, 256);
			this->listViewPartsOnPL->TabIndex = 15;
			this->listViewPartsOnPL->UseCompatibleStateImageBehavior = false;
			this->listViewPartsOnPL->View = System::Windows::Forms::View::Details;
			// 
			// columnHeaderPropertyNumber
			// 
			this->columnHeaderPropertyNumber->Text = L"Súpisné císlo";
			this->columnHeaderPropertyNumber->Width = 93;
			// 
			// columnHeaderPart
			// 
			this->columnHeaderPart->Text = L"Podiel";
			this->columnHeaderPart->Width = 55;
			// 
			// label1PartsOnPL
			// 
			this->label1PartsOnPL->AutoSize = true;
			this->label1PartsOnPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1PartsOnPL->Location = System::Drawing::Point(600, 246);
			this->label1PartsOnPL->Name = L"label1PartsOnPL";
			this->label1PartsOnPL->Size = System::Drawing::Size(66, 20);
			this->label1PartsOnPL->TabIndex = 16;
			this->label1PartsOnPL->Text = L"Podiely";
			// 
			// labelTitlePropertyList
			// 
			this->labelTitlePropertyList->AutoSize = true;
			this->labelTitlePropertyList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelTitlePropertyList->Location = System::Drawing::Point(6, 7);
			this->labelTitlePropertyList->Name = L"labelTitlePropertyList";
			this->labelTitlePropertyList->Size = System::Drawing::Size(209, 31);
			this->labelTitlePropertyList->TabIndex = 17;
			this->labelTitlePropertyList->Text = L"List vlastnictva";
			// 
			// Realty
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label1PartsOnPL);
			this->Controls->Add(this->listViewPartsOnPL);
			this->Controls->Add(this->labelTPropertiesOnPL);
			this->Controls->Add(this->listViewPropertiesOnPL);
			this->Controls->Add(this->labelCatasterArea);
			this->Controls->Add(this->labelTCAtasterArea);
			this->Controls->Add(this->labelPropertyListNumber);
			this->Controls->Add(this->labelTPropertyLitNumber);
			this->Controls->Add(this->labelDescription);
			this->Controls->Add(this->labelTDescription);
			this->Controls->Add(this->labelAdress);
			this->Controls->Add(this->labelTAdress);
			this->Controls->Add(this->labelPropertyNumber);
			this->Controls->Add(this->labelTPropertyNumber);
			this->Controls->Add(this->groupBoxRealty);
			this->Name = L"Realty";
			this->Text = L"Realty";
			this->groupBoxRealty->ResumeLayout(false);
			this->groupBoxRealty->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
