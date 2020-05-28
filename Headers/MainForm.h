#pragma once
#include "MainSystem.h"
#include "CatasterArea.h"
#include "Property.h"
#include "SplayTree.h"

#include "Realty.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
namespace AUS2___SemUdaj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void printCatasterAreas();
		void printProperties_CA_NA();
		void printCitizenProperties();
		void printAllCitizenProperties();
		void printCitizens();
		void printStayPropertyCitizens(Property * prop);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listViewKU;
	protected:
	private: System::Windows::Forms::ColumnHeader^  catasterAreaName;
	private: System::Windows::Forms::ColumnHeader^  catasterAreaNumber;
	private: System::Windows::Forms::GroupBox^  groupBoxLabelCA;

	private: System::Windows::Forms::Label^  labelTitleCatasterAreas;





	private: System::Windows::Forms::Label^  labelTitlePersons;
	private: System::Windows::Forms::GroupBox^  groupBoxPersons;


	private:
		MainSystem *mainSystem;
	private: System::Windows::Forms::TextBox^  textBoxCatasterArea_NA;
	private: System::Windows::Forms::Label^  labelNameOfCatasterArea;
	private: System::Windows::Forms::Button^  buttonSearchCA_NA;
	private: System::Windows::Forms::ListView^  listViewProperties;
	private: System::Windows::Forms::ColumnHeader^  propertyId;
	private: System::Windows::Forms::ColumnHeader^  propertyAdress;
	private: System::Windows::Forms::ColumnHeader^  propertyDescription;
	private: System::Windows::Forms::Label^  labelProperties;

	private: System::Windows::Forms::TextBox^  textBoxNameOfNewCA;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonConfirmAddCA;
	private: System::Windows::Forms::Label^  labelNumberOfNewCA;
	private: System::Windows::Forms::TextBox^  textBoxNumberOfNewCA;
	private: System::Windows::Forms::GroupBox^  groupBoxAddNewCa;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  katastrálneÚzemiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menustripbuttonCA;

	private: System::Windows::Forms::GroupBox^  groupBoxCU;
	private: System::Windows::Forms::GroupBox^  groupBoxPropweries;
	private: System::Windows::Forms::Label^  labelNumberofCA;

	private: System::Windows::Forms::Button^  buttonSearchCitizens;
	private: System::Windows::Forms::TextBox^  textBoxNumberCA;


	private: System::Windows::Forms::Label^  labelBornNumber;
	private: System::Windows::Forms::TextBox^  textBoxBornNumber;
	private: System::Windows::Forms::ListView^  listViewCitizenProperties;

	private: System::Windows::Forms::ColumnHeader^  columnHeaderPropertyNumber;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderPart;
	private: System::Windows::Forms::ToolStripMenuItem^  občaniaToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBoxCitizens;
	private: System::Windows::Forms::GroupBox^  groupBoxAddCitizen;


	private: System::Windows::Forms::Button^  buttonConfirmAddCitizen;
	private: System::Windows::Forms::TextBox^  textBoxNewStayProperty;

	private: System::Windows::Forms::Label^  labelStayProperty;
	private: System::Windows::Forms::TextBox^  textBoxDateOfRorn;
	private: System::Windows::Forms::Label^  labeldateOfBorn;
	private: System::Windows::Forms::TextBox^  textBoxNewBornNumber;
	private: System::Windows::Forms::Label^  labelNewBornNumber;
	private: System::Windows::Forms::TextBox^  textBoxNewName;
	private: System::Windows::Forms::Label^  labelNewName;
	private: System::Windows::Forms::Button^  buttonAddCitizen;
	private: System::Windows::Forms::ListView^  listViewCitizens;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderName;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderBornNumber;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderDateOfBorn;
	private: System::Windows::Forms::ColumnHeader^  columnHeaderStayProperty;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  labelITitleCitizens;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
private: System::Windows::Forms::TextBox^  textBoxNewNameCa;
private: System::Windows::Forms::Label^  labelNewNameCA;
private: System::Windows::Forms::ToolStripMenuItem^  pridaťToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  listVlastníctvaDoKUToolStripMenuItem;
private: System::Windows::Forms::GroupBox^  groupBoxAddPropertyList;
private: System::Windows::Forms::Button^  buttonNewPLConfirm;
private: System::Windows::Forms::TextBox^  textBoxNewPLnumberOfNewPL;
private: System::Windows::Forms::Label^  labelNewPLnumberOfNewPL;
private: System::Windows::Forms::TextBox^  textBoxNewPLnameOfCA;

private: System::Windows::Forms::Label^  labelNameOfCAtasterAreaNewPL;
private: System::Windows::Forms::GroupBox^  groupBoxAddPropertyToPL;
private: System::Windows::Forms::Button^  buttonNewPtoPLConfirm;

private: System::Windows::Forms::TextBox^  textBoxNewPtoPLnumberOfPL;

private: System::Windows::Forms::Label^  labelNewPropertyToPLNumberOfPL;

private: System::Windows::Forms::TextBox^  textBoxNewPropertyToPLcatasterNumber;

private: System::Windows::Forms::Label^  labelNewPropertyToPLCAname;
private: System::Windows::Forms::TextBox^  textBoxNewPtoPLpropertyNumber;
private: System::Windows::Forms::Label^  labelNewPtoPLpropertyNumber;
private: System::Windows::Forms::ToolStripMenuItem^  nehnueľnosťDoListuVlstníctvaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  majetkovýPodielToolStripMenuItem;
private: System::Windows::Forms::GroupBox^  groupBoxAddOwnerPart1;

private: System::Windows::Forms::TextBox^  textBoxAddPartPart;

private: System::Windows::Forms::Label^  labelPart;
private: System::Windows::Forms::TextBox^  textBoxAddPartBornNumber;
private: System::Windows::Forms::Label^  labelAddPartBornNumber;
private: System::Windows::Forms::Button^  buttonAddPartConfirm;

private: System::Windows::Forms::TextBox^  textBoxAddPartNumberPL;
private: System::Windows::Forms::Label^  labelAddPartnumberPL;
private: System::Windows::Forms::TextBox^  textBoxAddPartNumberCA;
private: System::Windows::Forms::Label^  labelAddPartNumbeCA;
private: System::Windows::Forms::Button^  buttonImport;
private: System::Windows::Forms::Button^  buttonFindCitizen;
private: System::Windows::Forms::GroupBox^  groupBoxFindCitizen;
private: System::Windows::Forms::Button^  buttonFindCitizenFind;

private: System::Windows::Forms::TextBox^  textBoxFindCitizenBornNumber;

private: System::Windows::Forms::Label^  labelFindCitizenBornNumber;

private: System::Windows::Forms::GroupBox^  groupBoxCitizenProperties;


private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::GroupBox^  groupBoxCatasterAreaProperties;
private: System::Windows::Forms::Button^  buttonPropertiesInCA;
private: System::Windows::Forms::Button^  buttonFindCitizenPropertyFind;
private: System::Windows::Forms::Label^  labelFindCitizenPropertyPropertyNumber;
private: System::Windows::Forms::TextBox^  textBoxFindPropertyPropertyNumber;
private: System::Windows::Forms::Button^  buttonDeletepropertyFromPL;

private: System::Windows::Forms::GroupBox^  groupBoxDeletePropertyFromPL;
private: System::Windows::Forms::Label^  labelDeletePropertyFromPLnumberPL;
private: System::Windows::Forms::TextBox^  textBoxDeletePropertyFromPLnumberPL;
private: System::Windows::Forms::Button^  buttonDeletePropertyFromPLConfirm;
private: System::Windows::Forms::Label^  labelDeletePropertyFromPLpropertynumber;
private: System::Windows::Forms::TextBox^  textBoxDeletePropertyFromPLpropertyNumber;
private: System::Windows::Forms::TextBox^  textBoxDeletePropertyFromPLcANumber;
private: System::Windows::Forms::Label^  labelDeletePropertyFromPLcANumber;
private: System::Windows::Forms::Button^  buttonDeletePL;
private: System::Windows::Forms::GroupBox^  groupBoxDeletePL;
private: System::Windows::Forms::Label^  labelDeletePLnumberPL;
private: System::Windows::Forms::TextBox^  textBoxDeletePLnumberPL;
private: System::Windows::Forms::Button^  buttonDeletePLConfirm;
private: System::Windows::Forms::Label^  labelDeletePLNewPL;
private: System::Windows::Forms::TextBox^  textBoxDeletePLnewPL;
private: System::Windows::Forms::TextBox^  textBoxDeletePLcANumber;
private: System::Windows::Forms::Label^  labelDeletePLCaNumber;
private: System::Windows::Forms::GroupBox^  groupBoxDeletePart;
private: System::Windows::Forms::Label^  labelDeletePartBornNumber;
private: System::Windows::Forms::TextBox^  textBoxDeletePartBornNumber;
private: System::Windows::Forms::Button^  buttonDeletePartConfirm;
private: System::Windows::Forms::Label^  labelDeletePartPLnumber;
private: System::Windows::Forms::TextBox^  textBoxDeletePartPLnumber;
private: System::Windows::Forms::TextBox^  textBoxDeletePartCaNumber;
private: System::Windows::Forms::Label^  labelDeletePatCaNumber;
private: System::Windows::Forms::Button^  buttonDeletePart;
private: System::Windows::Forms::GroupBox^  groupBoxOwnerChange;

private: System::Windows::Forms::Label^  labelOwnerChangeBornNumber;
private: System::Windows::Forms::TextBox^  textBoxOwnerChangeBornNumber;
private: System::Windows::Forms::Button^  buttonOwnerChangeConfirm;



private: System::Windows::Forms::Label^  labelOwnerChangePropertyNumber;
private: System::Windows::Forms::TextBox^  textBoxOwnerChangePropertyNumber;


private: System::Windows::Forms::TextBox^  textBoxOwnerChangeCaNumber;

private: System::Windows::Forms::Label^  labelOwnerChangeCaNumber;

private: System::Windows::Forms::Button^  buttonOwnerChange;
private: System::Windows::Forms::Label^  labelOwnerChangeNewBornNumber;
private: System::Windows::Forms::TextBox^  textBoxOwnerChangeNewBornNumber;
private: System::Windows::Forms::GroupBox^  groupBoxSPropertyChange;
private: System::Windows::Forms::TextBox^  textBoxSPropertyChangeCaName;
private: System::Windows::Forms::Label^  labellSPropertyChangeCaName;





private: System::Windows::Forms::TextBox^  textBoxlSPropertyChangePropertyNumber;

private: System::Windows::Forms::Label^  labelSPropertyChangePropertyNumber;
private: System::Windows::Forms::Button^  buttonSPropertyChangeConfirm;


private: System::Windows::Forms::TextBox^  textBoxSPropertyChangeBornuNumber;

private: System::Windows::Forms::Label^  labelSPropertyChangeBornuNumber;

private: System::Windows::Forms::Button^  buttonStayPropertyChange;
private: System::Windows::Forms::Button^  buttonAllCitizenProeprties;
private: System::Windows::Forms::GroupBox^  groupBoxAllCitizenproperties;
private: System::Windows::Forms::Button^  buttonAllCitizenPropertiesConfirm;

private: System::Windows::Forms::TextBox^  textBoxAllCitizenPropertiesBornNumber;

private: System::Windows::Forms::Label^  labelAllCitizenPropertiesBornNumber;
private: System::Windows::Forms::GroupBox^  groupBoxFindPropertyList;
private: System::Windows::Forms::Button^  buttonFindPropertyListCaNumber;
private: System::Windows::Forms::Label^  labelFinPropertyListPLNumber;
private: System::Windows::Forms::TextBox^  textBoxFinPropertyListPLNumber;
private: System::Windows::Forms::TextBox^  textBoxFindPropertyListNumberCa;
private: System::Windows::Forms::Label^  labelFindPropertyListNumberCa;
private: System::Windows::Forms::Button^  buttonFindProperyListCaName;
private: System::Windows::Forms::TextBox^  textBoxFindPropertyListNameCa;
private: System::Windows::Forms::Label^  labelFindPropertyListNameCa;
private: System::Windows::Forms::Button^  buttonFindPropertyList;
private: System::Windows::Forms::GroupBox^  groupBoxFindProperty;
private: System::Windows::Forms::TextBox^  textBoxFindPropertyCaNumber;


private: System::Windows::Forms::Label^  labelFindPropertyCaNumber;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::GroupBox^  groupBoxSPAC;
private: System::Windows::Forms::TextBox^  textBoxSPACcAnumber;
private: System::Windows::Forms::Label^  labelSPACcAnumber;
private: System::Windows::Forms::TextBox^  textBoxSPACpropertyNumber;
private: System::Windows::Forms::Label^  labelSPACpropertynumber;
private: System::Windows::Forms::Button^  buttonSPACconfirm;
private: System::Windows::Forms::TextBox^  textBoxSPACpropertyList;
private: System::Windows::Forms::Label^  labelSPACpropertyList;
private: System::Windows::Forms::Button^  buttonStayPropertyOfAllCitizen;
private: System::Windows::Forms::GroupBox^  groupBoxDeleteCa;
private: System::Windows::Forms::TextBox^  textBoxDeleteCaDelCaNumber;
private: System::Windows::Forms::TextBox^  textBoxDeleteCaNewCaNumber;
private: System::Windows::Forms::Label^  labelDeleteCaDelCaNumber;
private: System::Windows::Forms::Label^  labelDeleteCaNewCaNumber;
private: System::Windows::Forms::Button^  buttonDeleteCaConfirm;
private: System::Windows::Forms::Button^  buttonDeleteCa;
private: System::Windows::Forms::Button^  buttonExport;
private: System::Windows::Forms::GroupBox^  groupBoxGenerate;
private: System::Windows::Forms::TextBox^  textBoxGenerateCitizen;
private: System::Windows::Forms::Label^  labelGenerateCitizen;
private: System::Windows::Forms::Label^  labelGeneratePL;
private: System::Windows::Forms::TextBox^  textBoxGeneratePL;
private: System::Windows::Forms::Button^  buttonGenerateConfirm;
private: System::Windows::Forms::Label^  labelGenereateProperty;
private: System::Windows::Forms::TextBox^  textBoxGenerateProperty;
private: System::Windows::Forms::TextBox^  textBoxGenereateCA;
private: System::Windows::Forms::Label^  labelGenerateCA;
private: System::Windows::Forms::Button^  buttonGenerateData;


















	private: System::ComponentModel::IContainer^  components;








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
			this->listViewKU = (gcnew System::Windows::Forms::ListView());
			this->catasterAreaName = (gcnew System::Windows::Forms::ColumnHeader());
			this->catasterAreaNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBoxLabelCA = (gcnew System::Windows::Forms::GroupBox());
			this->labelTitleCatasterAreas = (gcnew System::Windows::Forms::Label());
			this->labelTitlePersons = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersons = (gcnew System::Windows::Forms::GroupBox());
			this->labelProperties = (gcnew System::Windows::Forms::Label());
			this->textBoxCatasterArea_NA = (gcnew System::Windows::Forms::TextBox());
			this->labelNameOfCatasterArea = (gcnew System::Windows::Forms::Label());
			this->buttonSearchCA_NA = (gcnew System::Windows::Forms::Button());
			this->listViewProperties = (gcnew System::Windows::Forms::ListView());
			this->propertyId = (gcnew System::Windows::Forms::ColumnHeader());
			this->propertyAdress = (gcnew System::Windows::Forms::ColumnHeader());
			this->propertyDescription = (gcnew System::Windows::Forms::ColumnHeader());
			this->textBoxNameOfNewCA = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmAddCA = (gcnew System::Windows::Forms::Button());
			this->labelNumberOfNewCA = (gcnew System::Windows::Forms::Label());
			this->textBoxNumberOfNewCA = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxAddNewCa = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->katastrálneÚzemiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menustripbuttonCA = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->občaniaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pridaťToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listVlastníctvaDoKUToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->majetkovýPodielToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxCU = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDeleteCa = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxDeleteCaDelCaNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeleteCaNewCaNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDeleteCaDelCaNumber = (gcnew System::Windows::Forms::Label());
			this->labelDeleteCaNewCaNumber = (gcnew System::Windows::Forms::Label());
			this->buttonDeleteCaConfirm = (gcnew System::Windows::Forms::Button());
			this->buttonDeleteCa = (gcnew System::Windows::Forms::Button());
			this->groupBoxPropweries = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxDeletePL = (gcnew System::Windows::Forms::GroupBox());
			this->labelDeletePLnumberPL = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePLnumberPL = (gcnew System::Windows::Forms::TextBox());
			this->buttonDeletePLConfirm = (gcnew System::Windows::Forms::Button());
			this->labelDeletePLNewPL = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePLnewPL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeletePLcANumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDeletePLCaNumber = (gcnew System::Windows::Forms::Label());
			this->groupBoxDeletePart = (gcnew System::Windows::Forms::GroupBox());
			this->labelDeletePartBornNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePartBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonDeletePartConfirm = (gcnew System::Windows::Forms::Button());
			this->labelDeletePartPLnumber = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePartPLnumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeletePartCaNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDeletePatCaNumber = (gcnew System::Windows::Forms::Label());
			this->groupBoxOwnerChange = (gcnew System::Windows::Forms::GroupBox());
			this->labelOwnerChangeNewBornNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxOwnerChangeNewBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelOwnerChangeBornNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxOwnerChangeBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->buttonOwnerChangeConfirm = (gcnew System::Windows::Forms::Button());
			this->labelOwnerChangePropertyNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxOwnerChangePropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxOwnerChangeCaNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelOwnerChangeCaNumber = (gcnew System::Windows::Forms::Label());
			this->groupBoxCitizenProperties = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNumberCA = (gcnew System::Windows::Forms::TextBox());
			this->buttonSearchCitizens = (gcnew System::Windows::Forms::Button());
			this->labelNumberofCA = (gcnew System::Windows::Forms::Label());
			this->textBoxBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelBornNumber = (gcnew System::Windows::Forms::Label());
			this->groupBoxCatasterAreaProperties = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBoxFindProperty = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxFindPropertyCaNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelFindPropertyCaNumber = (gcnew System::Windows::Forms::Label());
			this->buttonFindCitizenPropertyFind = (gcnew System::Windows::Forms::Button());
			this->labelFindCitizenPropertyPropertyNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxFindPropertyPropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxFindPropertyList = (gcnew System::Windows::Forms::GroupBox());
			this->buttonFindPropertyListCaNumber = (gcnew System::Windows::Forms::Button());
			this->labelFinPropertyListPLNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxFinPropertyListPLNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFindPropertyListNumberCa = (gcnew System::Windows::Forms::TextBox());
			this->labelFindPropertyListNumberCa = (gcnew System::Windows::Forms::Label());
			this->buttonFindProperyListCaName = (gcnew System::Windows::Forms::Button());
			this->textBoxFindPropertyListNameCa = (gcnew System::Windows::Forms::TextBox());
			this->labelFindPropertyListNameCa = (gcnew System::Windows::Forms::Label());
			this->buttonFindPropertyList = (gcnew System::Windows::Forms::Button());
			this->groupBoxAllCitizenproperties = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAllCitizenPropertiesConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxAllCitizenPropertiesBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelAllCitizenPropertiesBornNumber = (gcnew System::Windows::Forms::Label());
			this->buttonAllCitizenProeprties = (gcnew System::Windows::Forms::Button());
			this->buttonOwnerChange = (gcnew System::Windows::Forms::Button());
			this->buttonDeletePart = (gcnew System::Windows::Forms::Button());
			this->buttonDeletePL = (gcnew System::Windows::Forms::Button());
			this->groupBoxDeletePropertyFromPL = (gcnew System::Windows::Forms::GroupBox());
			this->labelDeletePropertyFromPLnumberPL = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePropertyFromPLnumberPL = (gcnew System::Windows::Forms::TextBox());
			this->buttonDeletePropertyFromPLConfirm = (gcnew System::Windows::Forms::Button());
			this->labelDeletePropertyFromPLpropertynumber = (gcnew System::Windows::Forms::Label());
			this->textBoxDeletePropertyFromPLpropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeletePropertyFromPLcANumber = (gcnew System::Windows::Forms::TextBox());
			this->labelDeletePropertyFromPLcANumber = (gcnew System::Windows::Forms::Label());
			this->buttonDeletepropertyFromPL = (gcnew System::Windows::Forms::Button());
			this->buttonPropertiesInCA = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listViewCitizenProperties = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderPropertyNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderPart = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBoxGenerate = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxGenerateCitizen = (gcnew System::Windows::Forms::TextBox());
			this->labelGenerateCitizen = (gcnew System::Windows::Forms::Label());
			this->labelGeneratePL = (gcnew System::Windows::Forms::Label());
			this->textBoxGeneratePL = (gcnew System::Windows::Forms::TextBox());
			this->buttonGenerateConfirm = (gcnew System::Windows::Forms::Button());
			this->labelGenereateProperty = (gcnew System::Windows::Forms::Label());
			this->textBoxGenerateProperty = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGenereateCA = (gcnew System::Windows::Forms::TextBox());
			this->labelGenerateCA = (gcnew System::Windows::Forms::Label());
			this->buttonGenerateData = (gcnew System::Windows::Forms::Button());
			this->groupBoxCitizens = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxAddCitizen = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNewNameCa = (gcnew System::Windows::Forms::TextBox());
			this->labelNewNameCA = (gcnew System::Windows::Forms::Label());
			this->buttonConfirmAddCitizen = (gcnew System::Windows::Forms::Button());
			this->textBoxNewStayProperty = (gcnew System::Windows::Forms::TextBox());
			this->labelStayProperty = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfRorn = (gcnew System::Windows::Forms::TextBox());
			this->labeldateOfBorn = (gcnew System::Windows::Forms::Label());
			this->textBoxNewBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelNewBornNumber = (gcnew System::Windows::Forms::Label());
			this->textBoxNewName = (gcnew System::Windows::Forms::TextBox());
			this->labelNewName = (gcnew System::Windows::Forms::Label());
			this->groupBoxFindCitizen = (gcnew System::Windows::Forms::GroupBox());
			this->buttonFindCitizenFind = (gcnew System::Windows::Forms::Button());
			this->textBoxFindCitizenBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelFindCitizenBornNumber = (gcnew System::Windows::Forms::Label());
			this->groupBoxSPAC = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSPACcAnumber = (gcnew System::Windows::Forms::TextBox());
			this->labelSPACcAnumber = (gcnew System::Windows::Forms::Label());
			this->textBoxSPACpropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelSPACpropertynumber = (gcnew System::Windows::Forms::Label());
			this->buttonSPACconfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxSPACpropertyList = (gcnew System::Windows::Forms::TextBox());
			this->labelSPACpropertyList = (gcnew System::Windows::Forms::Label());
			this->buttonStayPropertyOfAllCitizen = (gcnew System::Windows::Forms::Button());
			this->groupBoxSPropertyChange = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxSPropertyChangeCaName = (gcnew System::Windows::Forms::TextBox());
			this->labellSPropertyChangeCaName = (gcnew System::Windows::Forms::Label());
			this->textBoxlSPropertyChangePropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelSPropertyChangePropertyNumber = (gcnew System::Windows::Forms::Label());
			this->buttonSPropertyChangeConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxSPropertyChangeBornuNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelSPropertyChangeBornuNumber = (gcnew System::Windows::Forms::Label());
			this->buttonStayPropertyChange = (gcnew System::Windows::Forms::Button());
			this->buttonFindCitizen = (gcnew System::Windows::Forms::Button());
			this->buttonAddCitizen = (gcnew System::Windows::Forms::Button());
			this->listViewCitizens = (gcnew System::Windows::Forms::ListView());
			this->columnHeaderName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderBornNumber = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderDateOfBorn = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeaderStayProperty = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->labelITitleCitizens = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->groupBoxAddPropertyList = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNewPLConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxNewPLnumberOfNewPL = (gcnew System::Windows::Forms::TextBox());
			this->labelNewPLnumberOfNewPL = (gcnew System::Windows::Forms::Label());
			this->textBoxNewPLnameOfCA = (gcnew System::Windows::Forms::TextBox());
			this->labelNameOfCAtasterAreaNewPL = (gcnew System::Windows::Forms::Label());
			this->groupBoxAddPropertyToPL = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxNewPtoPLpropertyNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelNewPtoPLpropertyNumber = (gcnew System::Windows::Forms::Label());
			this->buttonNewPtoPLConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxNewPtoPLnumberOfPL = (gcnew System::Windows::Forms::TextBox());
			this->labelNewPropertyToPLNumberOfPL = (gcnew System::Windows::Forms::Label());
			this->textBoxNewPropertyToPLcatasterNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelNewPropertyToPLCAname = (gcnew System::Windows::Forms::Label());
			this->groupBoxAddOwnerPart1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxAddPartPart = (gcnew System::Windows::Forms::TextBox());
			this->labelPart = (gcnew System::Windows::Forms::Label());
			this->textBoxAddPartBornNumber = (gcnew System::Windows::Forms::TextBox());
			this->labelAddPartBornNumber = (gcnew System::Windows::Forms::Label());
			this->buttonAddPartConfirm = (gcnew System::Windows::Forms::Button());
			this->textBoxAddPartNumberPL = (gcnew System::Windows::Forms::TextBox());
			this->labelAddPartnumberPL = (gcnew System::Windows::Forms::Label());
			this->textBoxAddPartNumberCA = (gcnew System::Windows::Forms::TextBox());
			this->labelAddPartNumbeCA = (gcnew System::Windows::Forms::Label());
			this->buttonImport = (gcnew System::Windows::Forms::Button());
			this->buttonExport = (gcnew System::Windows::Forms::Button());
			this->groupBoxLabelCA->SuspendLayout();
			this->groupBoxPersons->SuspendLayout();
			this->groupBoxAddNewCa->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBoxCU->SuspendLayout();
			this->groupBoxDeleteCa->SuspendLayout();
			this->groupBoxPropweries->SuspendLayout();
			this->groupBoxDeletePL->SuspendLayout();
			this->groupBoxDeletePart->SuspendLayout();
			this->groupBoxOwnerChange->SuspendLayout();
			this->groupBoxCitizenProperties->SuspendLayout();
			this->groupBoxCatasterAreaProperties->SuspendLayout();
			this->groupBoxFindProperty->SuspendLayout();
			this->groupBoxFindPropertyList->SuspendLayout();
			this->groupBoxAllCitizenproperties->SuspendLayout();
			this->groupBoxDeletePropertyFromPL->SuspendLayout();
			this->groupBoxGenerate->SuspendLayout();
			this->groupBoxCitizens->SuspendLayout();
			this->groupBoxAddCitizen->SuspendLayout();
			this->groupBoxFindCitizen->SuspendLayout();
			this->groupBoxSPAC->SuspendLayout();
			this->groupBoxSPropertyChange->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBoxAddPropertyList->SuspendLayout();
			this->groupBoxAddPropertyToPL->SuspendLayout();
			this->groupBoxAddOwnerPart1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listViewKU
			// 
			this->listViewKU->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->catasterAreaName,
					this->catasterAreaNumber
			});
			this->listViewKU->GridLines = true;
			this->listViewKU->Location = System::Drawing::Point(12, 99);
			this->listViewKU->Name = L"listViewKU";
			this->listViewKU->Size = System::Drawing::Size(374, 328);
			this->listViewKU->TabIndex = 0;
			this->listViewKU->UseCompatibleStateImageBehavior = false;
			this->listViewKU->View = System::Windows::Forms::View::Details;
			// 
			// catasterAreaName
			// 
			this->catasterAreaName->Text = L"Názov";
			this->catasterAreaName->Width = 195;
			// 
			// catasterAreaNumber
			// 
			this->catasterAreaNumber->Text = L"Èíslo";
			this->catasterAreaNumber->Width = 174;
			// 
			// groupBoxLabelCA
			// 
			this->groupBoxLabelCA->Controls->Add(this->labelTitleCatasterAreas);
			this->groupBoxLabelCA->Location = System::Drawing::Point(12, 19);
			this->groupBoxLabelCA->Name = L"groupBoxLabelCA";
			this->groupBoxLabelCA->Size = System::Drawing::Size(378, 45);
			this->groupBoxLabelCA->TabIndex = 1;
			this->groupBoxLabelCA->TabStop = false;
			this->groupBoxLabelCA->UseWaitCursor = true;
			// 
			// labelTitleCatasterAreas
			// 
			this->labelTitleCatasterAreas->AutoSize = true;
			this->labelTitleCatasterAreas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelTitleCatasterAreas->Location = System::Drawing::Point(-3, 8);
			this->labelTitleCatasterAreas->Name = L"labelTitleCatasterAreas";
			this->labelTitleCatasterAreas->Size = System::Drawing::Size(264, 31);
			this->labelTitleCatasterAreas->TabIndex = 0;
			this->labelTitleCatasterAreas->Text = L"Katastrálne územia";
			this->labelTitleCatasterAreas->UseWaitCursor = true;
			// 
			// labelTitlePersons
			// 
			this->labelTitlePersons->AutoSize = true;
			this->labelTitlePersons->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTitlePersons->Location = System::Drawing::Point(6, 8);
			this->labelTitlePersons->Name = L"labelTitlePersons";
			this->labelTitlePersons->Size = System::Drawing::Size(98, 31);
			this->labelTitlePersons->TabIndex = 1;
			this->labelTitlePersons->Text = L"Osoby";
			// 
			// groupBoxPersons
			// 
			this->groupBoxPersons->Controls->Add(this->labelProperties);
			this->groupBoxPersons->Controls->Add(this->labelTitlePersons);
			this->groupBoxPersons->Location = System::Drawing::Point(12, 19);
			this->groupBoxPersons->Name = L"groupBoxPersons";
			this->groupBoxPersons->Size = System::Drawing::Size(374, 45);
			this->groupBoxPersons->TabIndex = 3;
			this->groupBoxPersons->TabStop = false;
			// 
			// labelProperties
			// 
			this->labelProperties->AutoSize = true;
			this->labelProperties->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelProperties->Location = System::Drawing::Point(6, 8);
			this->labelProperties->Name = L"labelProperties";
			this->labelProperties->Size = System::Drawing::Size(194, 31);
			this->labelProperties->TabIndex = 2;
			this->labelProperties->Text = L"Nehnutelnosti";
			// 
			// textBoxCatasterArea_NA
			// 
			this->textBoxCatasterArea_NA->Location = System::Drawing::Point(9, 32);
			this->textBoxCatasterArea_NA->Name = L"textBoxCatasterArea_NA";
			this->textBoxCatasterArea_NA->Size = System::Drawing::Size(92, 20);
			this->textBoxCatasterArea_NA->TabIndex = 5;
			this->textBoxCatasterArea_NA->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxCatasterArea_NA_TextChanged);
			// 
			// labelNameOfCatasterArea
			// 
			this->labelNameOfCatasterArea->AutoSize = true;
			this->labelNameOfCatasterArea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelNameOfCatasterArea->Location = System::Drawing::Point(6, 16);
			this->labelNameOfCatasterArea->Name = L"labelNameOfCatasterArea";
			this->labelNameOfCatasterArea->Size = System::Drawing::Size(175, 13);
			this->labelNameOfCatasterArea->TabIndex = 6;
			this->labelNameOfCatasterArea->Text = L"Názov katastrálneho územia: ";
			this->labelNameOfCatasterArea->Click += gcnew System::EventHandler(this, &MyForm::labelNameOfCatasterArea_Click);
			// 
			// buttonSearchCA_NA
			// 
			this->buttonSearchCA_NA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSearchCA_NA->Location = System::Drawing::Point(187, 11);
			this->buttonSearchCA_NA->Name = L"buttonSearchCA_NA";
			this->buttonSearchCA_NA->Size = System::Drawing::Size(130, 54);
			this->buttonSearchCA_NA->TabIndex = 7;
			this->buttonSearchCA_NA->Text = L"Hladaj nehnutelnosti K. uzemia";
			this->buttonSearchCA_NA->UseVisualStyleBackColor = true;
			this->buttonSearchCA_NA->Click += gcnew System::EventHandler(this, &MyForm::buttonSearchCA_NA_Click);
			// 
			// listViewProperties
			// 
			this->listViewProperties->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->propertyId,
					this->propertyAdress, this->propertyDescription
			});
			this->listViewProperties->GridLines = true;
			this->listViewProperties->Location = System::Drawing::Point(12, 70);
			this->listViewProperties->Name = L"listViewProperties";
			this->listViewProperties->Size = System::Drawing::Size(374, 328);
			this->listViewProperties->TabIndex = 8;
			this->listViewProperties->UseCompatibleStateImageBehavior = false;
			this->listViewProperties->View = System::Windows::Forms::View::Details;
			// 
			// propertyId
			// 
			this->propertyId->Text = L"ID";
			this->propertyId->Width = 115;
			// 
			// propertyAdress
			// 
			this->propertyAdress->Text = L"Adresa";
			this->propertyAdress->Width = 129;
			// 
			// propertyDescription
			// 
			this->propertyDescription->Text = L"Popis";
			this->propertyDescription->Width = 125;
			// 
			// textBoxNameOfNewCA
			// 
			this->textBoxNameOfNewCA->Location = System::Drawing::Point(6, 29);
			this->textBoxNameOfNewCA->Name = L"textBoxNameOfNewCA";
			this->textBoxNameOfNewCA->Size = System::Drawing::Size(166, 20);
			this->textBoxNameOfNewCA->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(6, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Názov nového k. územia";
			// 
			// buttonConfirmAddCA
			// 
			this->buttonConfirmAddCA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonConfirmAddCA->Location = System::Drawing::Point(178, 47);
			this->buttonConfirmAddCA->Name = L"buttonConfirmAddCA";
			this->buttonConfirmAddCA->Size = System::Drawing::Size(75, 23);
			this->buttonConfirmAddCA->TabIndex = 12;
			this->buttonConfirmAddCA->Text = L"Pridaj";
			this->buttonConfirmAddCA->UseVisualStyleBackColor = true;
			this->buttonConfirmAddCA->Click += gcnew System::EventHandler(this, &MyForm::buttonConfirmAddCA_Click);
			// 
			// labelNumberOfNewCA
			// 
			this->labelNumberOfNewCA->AutoSize = true;
			this->labelNumberOfNewCA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNumberOfNewCA->Location = System::Drawing::Point(6, 52);
			this->labelNumberOfNewCA->Name = L"labelNumberOfNewCA";
			this->labelNumberOfNewCA->Size = System::Drawing::Size(140, 13);
			this->labelNumberOfNewCA->TabIndex = 13;
			this->labelNumberOfNewCA->Text = L"Èíslo nového k. územia";
			// 
			// textBoxNumberOfNewCA
			// 
			this->textBoxNumberOfNewCA->Location = System::Drawing::Point(6, 68);
			this->textBoxNumberOfNewCA->Name = L"textBoxNumberOfNewCA";
			this->textBoxNumberOfNewCA->Size = System::Drawing::Size(166, 20);
			this->textBoxNumberOfNewCA->TabIndex = 14;
			// 
			// groupBoxAddNewCa
			// 
			this->groupBoxAddNewCa->Controls->Add(this->textBoxNameOfNewCA);
			this->groupBoxAddNewCa->Controls->Add(this->textBoxNumberOfNewCA);
			this->groupBoxAddNewCa->Controls->Add(this->label1);
			this->groupBoxAddNewCa->Controls->Add(this->labelNumberOfNewCA);
			this->groupBoxAddNewCa->Controls->Add(this->buttonConfirmAddCA);
			this->groupBoxAddNewCa->Location = System::Drawing::Point(12, 433);
			this->groupBoxAddNewCa->Name = L"groupBoxAddNewCa";
			this->groupBoxAddNewCa->Size = System::Drawing::Size(298, 95);
			this->groupBoxAddNewCa->TabIndex = 15;
			this->groupBoxAddNewCa->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Location = System::Drawing::Point(15, 70);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Prida";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->katastrálneÚzemiaToolStripMenuItem,
					this->pridaťToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(967, 24);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// katastrálneÚzemiaToolStripMenuItem
			// 
			this->katastrálneÚzemiaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menustripbuttonCA,
					this->občaniaToolStripMenuItem
			});
			this->katastrálneÚzemiaToolStripMenuItem->Name = L"katastrálneÚzemiaToolStripMenuItem";
			this->katastrálneÚzemiaToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->katastrálneÚzemiaToolStripMenuItem->Text = L"Možnosti";
			// 
			// menustripbuttonCA
			// 
			this->menustripbuttonCA->Name = L"menustripbuttonCA";
			this->menustripbuttonCA->Size = System::Drawing::Size(173, 22);
			this->menustripbuttonCA->Text = L"Katastrálne územia";
			this->menustripbuttonCA->Click += gcnew System::EventHandler(this, &MyForm::menustripbuttonCA_Click);
			// 
			// občaniaToolStripMenuItem
			// 
			this->občaniaToolStripMenuItem->Name = L"občaniaToolStripMenuItem";
			this->občaniaToolStripMenuItem->Size = System::Drawing::Size(173, 22);
			this->občaniaToolStripMenuItem->Text = L"Občania";
			this->občaniaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::občaniaToolStripMenuItem_Click);
			// 
			// pridaťToolStripMenuItem
			// 
			this->pridaťToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->listVlastníctvaDoKUToolStripMenuItem,
					this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem, this->majetkovýPodielToolStripMenuItem
			});
			this->pridaťToolStripMenuItem->Name = L"pridaťToolStripMenuItem";
			this->pridaťToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->pridaťToolStripMenuItem->Text = L"Pridať";
			// 
			// listVlastníctvaDoKUToolStripMenuItem
			// 
			this->listVlastníctvaDoKUToolStripMenuItem->Name = L"listVlastníctvaDoKUToolStripMenuItem";
			this->listVlastníctvaDoKUToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->listVlastníctvaDoKUToolStripMenuItem->Text = L"List vlastníctva do KU";
			this->listVlastníctvaDoKUToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::listVlastníctvaDoKUToolStripMenuItem_Click);
			// 
			// nehnueľnosťDoListuVlstníctvaToolStripMenuItem
			// 
			this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem->Name = L"nehnueľnosťDoListuVlstníctvaToolStripMenuItem";
			this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem->Text = L"Nehnueľnosť do listu vlastníctva";
			this->nehnueľnosťDoListuVlstníctvaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nehnueľnosťDoListuVlstníctvaToolStripMenuItem_Click);
			// 
			// majetkovýPodielToolStripMenuItem
			// 
			this->majetkovýPodielToolStripMenuItem->Name = L"majetkovýPodielToolStripMenuItem";
			this->majetkovýPodielToolStripMenuItem->Size = System::Drawing::Size(245, 22);
			this->majetkovýPodielToolStripMenuItem->Text = L"Majetkový podiel";
			this->majetkovýPodielToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::majetkovýPodielToolStripMenuItem_Click);
			// 
			// groupBoxCU
			// 
			this->groupBoxCU->Controls->Add(this->groupBoxDeleteCa);
			this->groupBoxCU->Controls->Add(this->buttonDeleteCa);
			this->groupBoxCU->Controls->Add(this->groupBoxLabelCA);
			this->groupBoxCU->Controls->Add(this->groupBoxAddNewCa);
			this->groupBoxCU->Controls->Add(this->button1);
			this->groupBoxCU->Controls->Add(this->listViewKU);
			this->groupBoxCU->Location = System::Drawing::Point(12, 61);
			this->groupBoxCU->Name = L"groupBoxCU";
			this->groupBoxCU->Size = System::Drawing::Size(396, 535);
			this->groupBoxCU->TabIndex = 18;
			this->groupBoxCU->TabStop = false;
			// 
			// groupBoxDeleteCa
			// 
			this->groupBoxDeleteCa->Controls->Add(this->textBoxDeleteCaDelCaNumber);
			this->groupBoxDeleteCa->Controls->Add(this->textBoxDeleteCaNewCaNumber);
			this->groupBoxDeleteCa->Controls->Add(this->labelDeleteCaDelCaNumber);
			this->groupBoxDeleteCa->Controls->Add(this->labelDeleteCaNewCaNumber);
			this->groupBoxDeleteCa->Controls->Add(this->buttonDeleteCaConfirm);
			this->groupBoxDeleteCa->Location = System::Drawing::Point(10, 435);
			this->groupBoxDeleteCa->Name = L"groupBoxDeleteCa";
			this->groupBoxDeleteCa->Size = System::Drawing::Size(298, 95);
			this->groupBoxDeleteCa->TabIndex = 16;
			this->groupBoxDeleteCa->TabStop = false;
			// 
			// textBoxDeleteCaDelCaNumber
			// 
			this->textBoxDeleteCaDelCaNumber->Location = System::Drawing::Point(6, 29);
			this->textBoxDeleteCaDelCaNumber->Name = L"textBoxDeleteCaDelCaNumber";
			this->textBoxDeleteCaDelCaNumber->Size = System::Drawing::Size(166, 20);
			this->textBoxDeleteCaDelCaNumber->TabIndex = 10;
			// 
			// textBoxDeleteCaNewCaNumber
			// 
			this->textBoxDeleteCaNewCaNumber->Location = System::Drawing::Point(6, 68);
			this->textBoxDeleteCaNewCaNumber->Name = L"textBoxDeleteCaNewCaNumber";
			this->textBoxDeleteCaNewCaNumber->Size = System::Drawing::Size(166, 20);
			this->textBoxDeleteCaNewCaNumber->TabIndex = 14;
			// 
			// labelDeleteCaDelCaNumber
			// 
			this->labelDeleteCaDelCaNumber->AutoSize = true;
			this->labelDeleteCaDelCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeleteCaDelCaNumber->Location = System::Drawing::Point(6, 14);
			this->labelDeleteCaDelCaNumber->Name = L"labelDeleteCaDelCaNumber";
			this->labelDeleteCaDelCaNumber->Size = System::Drawing::Size(153, 13);
			this->labelDeleteCaDelCaNumber->TabIndex = 11;
			this->labelDeleteCaDelCaNumber->Text = L"Cislo mazaneho k. územia";
			// 
			// labelDeleteCaNewCaNumber
			// 
			this->labelDeleteCaNewCaNumber->AutoSize = true;
			this->labelDeleteCaNewCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeleteCaNewCaNumber->Location = System::Drawing::Point(6, 52);
			this->labelDeleteCaNewCaNumber->Name = L"labelDeleteCaNewCaNumber";
			this->labelDeleteCaNewCaNumber->Size = System::Drawing::Size(138, 13);
			this->labelDeleteCaNewCaNumber->TabIndex = 13;
			this->labelDeleteCaNewCaNumber->Text = L"Cislo nového k. územia";
			// 
			// buttonDeleteCaConfirm
			// 
			this->buttonDeleteCaConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonDeleteCaConfirm->Location = System::Drawing::Point(178, 47);
			this->buttonDeleteCaConfirm->Name = L"buttonDeleteCaConfirm";
			this->buttonDeleteCaConfirm->Size = System::Drawing::Size(75, 23);
			this->buttonDeleteCaConfirm->TabIndex = 12;
			this->buttonDeleteCaConfirm->Text = L"Zmaz";
			this->buttonDeleteCaConfirm->UseVisualStyleBackColor = true;
			this->buttonDeleteCaConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteCaConfirm_Click);
			// 
			// buttonDeleteCa
			// 
			this->buttonDeleteCa->Location = System::Drawing::Point(65, 70);
			this->buttonDeleteCa->Name = L"buttonDeleteCa";
			this->buttonDeleteCa->Size = System::Drawing::Size(60, 23);
			this->buttonDeleteCa->TabIndex = 17;
			this->buttonDeleteCa->Text = L"Odstranit";
			this->buttonDeleteCa->UseVisualStyleBackColor = true;
			this->buttonDeleteCa->Click += gcnew System::EventHandler(this, &MyForm::buttonDeleteCa_Click);
			// 
			// groupBoxPropweries
			// 
			this->groupBoxPropweries->Controls->Add(this->groupBoxCatasterAreaProperties);
			this->groupBoxPropweries->Controls->Add(this->groupBoxFindPropertyList);
			this->groupBoxPropweries->Controls->Add(this->groupBoxDeletePL);
			this->groupBoxPropweries->Controls->Add(this->groupBoxDeletePart);
			this->groupBoxPropweries->Controls->Add(this->groupBoxOwnerChange);
			this->groupBoxPropweries->Controls->Add(this->groupBoxCitizenProperties);
			this->groupBoxPropweries->Controls->Add(this->buttonFindPropertyList);
			this->groupBoxPropweries->Controls->Add(this->groupBoxAllCitizenproperties);
			this->groupBoxPropweries->Controls->Add(this->buttonAllCitizenProeprties);
			this->groupBoxPropweries->Controls->Add(this->buttonOwnerChange);
			this->groupBoxPropweries->Controls->Add(this->buttonDeletePart);
			this->groupBoxPropweries->Controls->Add(this->buttonDeletePL);
			this->groupBoxPropweries->Controls->Add(this->groupBoxDeletePropertyFromPL);
			this->groupBoxPropweries->Controls->Add(this->buttonDeletepropertyFromPL);
			this->groupBoxPropweries->Controls->Add(this->buttonPropertiesInCA);
			this->groupBoxPropweries->Controls->Add(this->button2);
			this->groupBoxPropweries->Controls->Add(this->listViewCitizenProperties);
			this->groupBoxPropweries->Controls->Add(this->groupBoxPersons);
			this->groupBoxPropweries->Controls->Add(this->listViewProperties);
			this->groupBoxPropweries->Location = System::Drawing::Point(416, 63);
			this->groupBoxPropweries->Name = L"groupBoxPropweries";
			this->groupBoxPropweries->Size = System::Drawing::Size(539, 532);
			this->groupBoxPropweries->TabIndex = 17;
			this->groupBoxPropweries->TabStop = false;
			// 
			// groupBoxDeletePL
			// 
			this->groupBoxDeletePL->Controls->Add(this->labelDeletePLnumberPL);
			this->groupBoxDeletePL->Controls->Add(this->textBoxDeletePLnumberPL);
			this->groupBoxDeletePL->Controls->Add(this->buttonDeletePLConfirm);
			this->groupBoxDeletePL->Controls->Add(this->labelDeletePLNewPL);
			this->groupBoxDeletePL->Controls->Add(this->textBoxDeletePLnewPL);
			this->groupBoxDeletePL->Controls->Add(this->textBoxDeletePLcANumber);
			this->groupBoxDeletePL->Controls->Add(this->labelDeletePLCaNumber);
			this->groupBoxDeletePL->Location = System::Drawing::Point(12, 411);
			this->groupBoxDeletePL->Name = L"groupBoxDeletePL";
			this->groupBoxDeletePL->Size = System::Drawing::Size(374, 101);
			this->groupBoxDeletePL->TabIndex = 23;
			this->groupBoxDeletePL->TabStop = false;
			// 
			// labelDeletePLnumberPL
			// 
			this->labelDeletePLnumberPL->AutoSize = true;
			this->labelDeletePLnumberPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePLnumberPL->Location = System::Drawing::Point(223, 16);
			this->labelDeletePLnumberPL->Name = L"labelDeletePLnumberPL";
			this->labelDeletePLnumberPL->Size = System::Drawing::Size(131, 13);
			this->labelDeletePLnumberPL->TabIndex = 20;
			this->labelDeletePLnumberPL->Text = L"Cislo listu vlastnictva:";
			// 
			// textBoxDeletePLnumberPL
			// 
			this->textBoxDeletePLnumberPL->Location = System::Drawing::Point(226, 32);
			this->textBoxDeletePLnumberPL->Name = L"textBoxDeletePLnumberPL";
			this->textBoxDeletePLnumberPL->Size = System::Drawing::Size(129, 20);
			this->textBoxDeletePLnumberPL->TabIndex = 19;
			// 
			// buttonDeletePLConfirm
			// 
			this->buttonDeletePLConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonDeletePLConfirm->Location = System::Drawing::Point(160, 73);
			this->buttonDeletePLConfirm->Name = L"buttonDeletePLConfirm";
			this->buttonDeletePLConfirm->Size = System::Drawing::Size(195, 23);
			this->buttonDeletePLConfirm->TabIndex = 18;
			this->buttonDeletePLConfirm->Text = L"Vymaz";
			this->buttonDeletePLConfirm->UseVisualStyleBackColor = true;
			this->buttonDeletePLConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonDeletePLConfirm_Click);
			// 
			// labelDeletePLNewPL
			// 
			this->labelDeletePLNewPL->AutoSize = true;
			this->labelDeletePLNewPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDeletePLNewPL->Location = System::Drawing::Point(5, 60);
			this->labelDeletePLNewPL->Name = L"labelDeletePLNewPL";
			this->labelDeletePLNewPL->Size = System::Drawing::Size(122, 13);
			this->labelDeletePLNewPL->TabIndex = 17;
			this->labelDeletePLNewPL->Text = L"Novy list vlastnictva";
			// 
			// textBoxDeletePLnewPL
			// 
			this->textBoxDeletePLnewPL->Location = System::Drawing::Point(8, 76);
			this->textBoxDeletePLnewPL->Name = L"textBoxDeletePLnewPL";
			this->textBoxDeletePLnewPL->Size = System::Drawing::Size(119, 20);
			this->textBoxDeletePLnewPL->TabIndex = 16;
			// 
			// textBoxDeletePLcANumber
			// 
			this->textBoxDeletePLcANumber->Location = System::Drawing::Point(9, 32);
			this->textBoxDeletePLcANumber->Name = L"textBoxDeletePLcANumber";
			this->textBoxDeletePLcANumber->Size = System::Drawing::Size(156, 20);
			this->textBoxDeletePLcANumber->TabIndex = 5;
			// 
			// labelDeletePLCaNumber
			// 
			this->labelDeletePLCaNumber->AutoSize = true;
			this->labelDeletePLCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePLCaNumber->Location = System::Drawing::Point(6, 16);
			this->labelDeletePLCaNumber->Name = L"labelDeletePLCaNumber";
			this->labelDeletePLCaNumber->Size = System::Drawing::Size(166, 13);
			this->labelDeletePLCaNumber->TabIndex = 6;
			this->labelDeletePLCaNumber->Text = L"Cislo katastrálneho územia: ";
			// 
			// groupBoxDeletePart
			// 
			this->groupBoxDeletePart->Controls->Add(this->labelDeletePartBornNumber);
			this->groupBoxDeletePart->Controls->Add(this->textBoxDeletePartBornNumber);
			this->groupBoxDeletePart->Controls->Add(this->buttonDeletePartConfirm);
			this->groupBoxDeletePart->Controls->Add(this->labelDeletePartPLnumber);
			this->groupBoxDeletePart->Controls->Add(this->textBoxDeletePartPLnumber);
			this->groupBoxDeletePart->Controls->Add(this->textBoxDeletePartCaNumber);
			this->groupBoxDeletePart->Controls->Add(this->labelDeletePatCaNumber);
			this->groupBoxDeletePart->Location = System::Drawing::Point(10, 408);
			this->groupBoxDeletePart->Name = L"groupBoxDeletePart";
			this->groupBoxDeletePart->Size = System::Drawing::Size(374, 101);
			this->groupBoxDeletePart->TabIndex = 25;
			this->groupBoxDeletePart->TabStop = false;
			// 
			// labelDeletePartBornNumber
			// 
			this->labelDeletePartBornNumber->AutoSize = true;
			this->labelDeletePartBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePartBornNumber->Location = System::Drawing::Point(223, 16);
			this->labelDeletePartBornNumber->Name = L"labelDeletePartBornNumber";
			this->labelDeletePartBornNumber->Size = System::Drawing::Size(74, 13);
			this->labelDeletePartBornNumber->TabIndex = 20;
			this->labelDeletePartBornNumber->Text = L"Rodne cislo";
			// 
			// textBoxDeletePartBornNumber
			// 
			this->textBoxDeletePartBornNumber->Location = System::Drawing::Point(226, 32);
			this->textBoxDeletePartBornNumber->Name = L"textBoxDeletePartBornNumber";
			this->textBoxDeletePartBornNumber->Size = System::Drawing::Size(129, 20);
			this->textBoxDeletePartBornNumber->TabIndex = 19;
			// 
			// buttonDeletePartConfirm
			// 
			this->buttonDeletePartConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonDeletePartConfirm->Location = System::Drawing::Point(160, 73);
			this->buttonDeletePartConfirm->Name = L"buttonDeletePartConfirm";
			this->buttonDeletePartConfirm->Size = System::Drawing::Size(195, 23);
			this->buttonDeletePartConfirm->TabIndex = 18;
			this->buttonDeletePartConfirm->Text = L"Vymaz";
			this->buttonDeletePartConfirm->UseVisualStyleBackColor = true;
			this->buttonDeletePartConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonDeletePartConfirm_Click);
			// 
			// labelDeletePartPLnumber
			// 
			this->labelDeletePartPLnumber->AutoSize = true;
			this->labelDeletePartPLnumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePartPLnumber->Location = System::Drawing::Point(5, 60);
			this->labelDeletePartPLnumber->Name = L"labelDeletePartPLnumber";
			this->labelDeletePartPLnumber->Size = System::Drawing::Size(131, 13);
			this->labelDeletePartPLnumber->TabIndex = 17;
			this->labelDeletePartPLnumber->Text = L"Cislo listu vlastnictva:";
			// 
			// textBoxDeletePartPLnumber
			// 
			this->textBoxDeletePartPLnumber->Location = System::Drawing::Point(8, 76);
			this->textBoxDeletePartPLnumber->Name = L"textBoxDeletePartPLnumber";
			this->textBoxDeletePartPLnumber->Size = System::Drawing::Size(119, 20);
			this->textBoxDeletePartPLnumber->TabIndex = 16;
			// 
			// textBoxDeletePartCaNumber
			// 
			this->textBoxDeletePartCaNumber->Location = System::Drawing::Point(9, 32);
			this->textBoxDeletePartCaNumber->Name = L"textBoxDeletePartCaNumber";
			this->textBoxDeletePartCaNumber->Size = System::Drawing::Size(156, 20);
			this->textBoxDeletePartCaNumber->TabIndex = 5;
			// 
			// labelDeletePatCaNumber
			// 
			this->labelDeletePatCaNumber->AutoSize = true;
			this->labelDeletePatCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePatCaNumber->Location = System::Drawing::Point(6, 16);
			this->labelDeletePatCaNumber->Name = L"labelDeletePatCaNumber";
			this->labelDeletePatCaNumber->Size = System::Drawing::Size(166, 13);
			this->labelDeletePatCaNumber->TabIndex = 6;
			this->labelDeletePatCaNumber->Text = L"Cislo katastrálneho územia: ";
			// 
			// groupBoxOwnerChange
			// 
			this->groupBoxOwnerChange->Controls->Add(this->labelOwnerChangeNewBornNumber);
			this->groupBoxOwnerChange->Controls->Add(this->textBoxOwnerChangeNewBornNumber);
			this->groupBoxOwnerChange->Controls->Add(this->labelOwnerChangeBornNumber);
			this->groupBoxOwnerChange->Controls->Add(this->textBoxOwnerChangeBornNumber);
			this->groupBoxOwnerChange->Controls->Add(this->buttonOwnerChangeConfirm);
			this->groupBoxOwnerChange->Controls->Add(this->labelOwnerChangePropertyNumber);
			this->groupBoxOwnerChange->Controls->Add(this->textBoxOwnerChangePropertyNumber);
			this->groupBoxOwnerChange->Controls->Add(this->textBoxOwnerChangeCaNumber);
			this->groupBoxOwnerChange->Controls->Add(this->labelOwnerChangeCaNumber);
			this->groupBoxOwnerChange->Location = System::Drawing::Point(10, 411);
			this->groupBoxOwnerChange->Name = L"groupBoxOwnerChange";
			this->groupBoxOwnerChange->Size = System::Drawing::Size(374, 101);
			this->groupBoxOwnerChange->TabIndex = 27;
			this->groupBoxOwnerChange->TabStop = false;
			// 
			// labelOwnerChangeNewBornNumber
			// 
			this->labelOwnerChangeNewBornNumber->AutoSize = true;
			this->labelOwnerChangeNewBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelOwnerChangeNewBornNumber->Location = System::Drawing::Point(256, 62);
			this->labelOwnerChangeNewBornNumber->Name = L"labelOwnerChangeNewBornNumber";
			this->labelOwnerChangeNewBornNumber->Size = System::Drawing::Size(103, 13);
			this->labelOwnerChangeNewBornNumber->TabIndex = 22;
			this->labelOwnerChangeNewBornNumber->Text = L"Nove rodne cislo";
			// 
			// textBoxOwnerChangeNewBornNumber
			// 
			this->textBoxOwnerChangeNewBornNumber->Location = System::Drawing::Point(259, 77);
			this->textBoxOwnerChangeNewBornNumber->Name = L"textBoxOwnerChangeNewBornNumber";
			this->textBoxOwnerChangeNewBornNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxOwnerChangeNewBornNumber->TabIndex = 21;
			// 
			// labelOwnerChangeBornNumber
			// 
			this->labelOwnerChangeBornNumber->AutoSize = true;
			this->labelOwnerChangeBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelOwnerChangeBornNumber->Location = System::Drawing::Point(142, 62);
			this->labelOwnerChangeBornNumber->Name = L"labelOwnerChangeBornNumber";
			this->labelOwnerChangeBornNumber->Size = System::Drawing::Size(74, 13);
			this->labelOwnerChangeBornNumber->TabIndex = 20;
			this->labelOwnerChangeBornNumber->Text = L"Rodne cislo";
			// 
			// textBoxOwnerChangeBornNumber
			// 
			this->textBoxOwnerChangeBornNumber->Location = System::Drawing::Point(146, 78);
			this->textBoxOwnerChangeBornNumber->Name = L"textBoxOwnerChangeBornNumber";
			this->textBoxOwnerChangeBornNumber->Size = System::Drawing::Size(89, 20);
			this->textBoxOwnerChangeBornNumber->TabIndex = 19;
			// 
			// buttonOwnerChangeConfirm
			// 
			this->buttonOwnerChangeConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonOwnerChangeConfirm->Location = System::Drawing::Point(193, 30);
			this->buttonOwnerChangeConfirm->Name = L"buttonOwnerChangeConfirm";
			this->buttonOwnerChangeConfirm->Size = System::Drawing::Size(166, 23);
			this->buttonOwnerChangeConfirm->TabIndex = 18;
			this->buttonOwnerChangeConfirm->Text = L"Zmen";
			this->buttonOwnerChangeConfirm->UseVisualStyleBackColor = true;
			this->buttonOwnerChangeConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonOwnerChangeConfirm_Click);
			// 
			// labelOwnerChangePropertyNumber
			// 
			this->labelOwnerChangePropertyNumber->AutoSize = true;
			this->labelOwnerChangePropertyNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelOwnerChangePropertyNumber->Location = System::Drawing::Point(6, 63);
			this->labelOwnerChangePropertyNumber->Name = L"labelOwnerChangePropertyNumber";
			this->labelOwnerChangePropertyNumber->Size = System::Drawing::Size(82, 13);
			this->labelOwnerChangePropertyNumber->TabIndex = 17;
			this->labelOwnerChangePropertyNumber->Text = L"Supisne cislo";
			// 
			// textBoxOwnerChangePropertyNumber
			// 
			this->textBoxOwnerChangePropertyNumber->Location = System::Drawing::Point(9, 79);
			this->textBoxOwnerChangePropertyNumber->Name = L"textBoxOwnerChangePropertyNumber";
			this->textBoxOwnerChangePropertyNumber->Size = System::Drawing::Size(119, 20);
			this->textBoxOwnerChangePropertyNumber->TabIndex = 16;
			// 
			// textBoxOwnerChangeCaNumber
			// 
			this->textBoxOwnerChangeCaNumber->Location = System::Drawing::Point(9, 32);
			this->textBoxOwnerChangeCaNumber->Name = L"textBoxOwnerChangeCaNumber";
			this->textBoxOwnerChangeCaNumber->Size = System::Drawing::Size(156, 20);
			this->textBoxOwnerChangeCaNumber->TabIndex = 5;
			// 
			// labelOwnerChangeCaNumber
			// 
			this->labelOwnerChangeCaNumber->AutoSize = true;
			this->labelOwnerChangeCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelOwnerChangeCaNumber->Location = System::Drawing::Point(6, 16);
			this->labelOwnerChangeCaNumber->Name = L"labelOwnerChangeCaNumber";
			this->labelOwnerChangeCaNumber->Size = System::Drawing::Size(166, 13);
			this->labelOwnerChangeCaNumber->TabIndex = 6;
			this->labelOwnerChangeCaNumber->Text = L"Cislo katastrálneho územia: ";
			// 
			// groupBoxCitizenProperties
			// 
			this->groupBoxCitizenProperties->Controls->Add(this->textBoxNumberCA);
			this->groupBoxCitizenProperties->Controls->Add(this->buttonSearchCitizens);
			this->groupBoxCitizenProperties->Controls->Add(this->labelNumberofCA);
			this->groupBoxCitizenProperties->Controls->Add(this->textBoxBornNumber);
			this->groupBoxCitizenProperties->Controls->Add(this->labelBornNumber);
			this->groupBoxCitizenProperties->Location = System::Drawing::Point(14, 416);
			this->groupBoxCitizenProperties->Name = L"groupBoxCitizenProperties";
			this->groupBoxCitizenProperties->Size = System::Drawing::Size(339, 99);
			this->groupBoxCitizenProperties->TabIndex = 17;
			this->groupBoxCitizenProperties->TabStop = false;
			this->groupBoxCitizenProperties->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// textBoxNumberCA
			// 
			this->textBoxNumberCA->Location = System::Drawing::Point(6, 32);
			this->textBoxNumberCA->Name = L"textBoxNumberCA";
			this->textBoxNumberCA->Size = System::Drawing::Size(166, 20);
			this->textBoxNumberCA->TabIndex = 9;
			this->textBoxNumberCA->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// buttonSearchCitizens
			// 
			this->buttonSearchCitizens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonSearchCitizens->Location = System::Drawing::Point(183, 54);
			this->buttonSearchCitizens->Name = L"buttonSearchCitizens";
			this->buttonSearchCitizens->Size = System::Drawing::Size(142, 23);
			this->buttonSearchCitizens->TabIndex = 11;
			this->buttonSearchCitizens->Text = L"Hladaj osoby";
			this->buttonSearchCitizens->UseVisualStyleBackColor = true;
			this->buttonSearchCitizens->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// labelNumberofCA
			// 
			this->labelNumberofCA->AutoSize = true;
			this->labelNumberofCA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNumberofCA->Location = System::Drawing::Point(6, 16);
			this->labelNumberofCA->Name = L"labelNumberofCA";
			this->labelNumberofCA->Size = System::Drawing::Size(168, 13);
			this->labelNumberofCA->TabIndex = 10;
			this->labelNumberofCA->Text = L"Císlo katastrálneho územia: ";
			this->labelNumberofCA->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBoxBornNumber
			// 
			this->textBoxBornNumber->Location = System::Drawing::Point(6, 71);
			this->textBoxBornNumber->Name = L"textBoxBornNumber";
			this->textBoxBornNumber->Size = System::Drawing::Size(166, 20);
			this->textBoxBornNumber->TabIndex = 12;
			this->textBoxBornNumber->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxBornNumber_TextChanged);
			// 
			// labelBornNumber
			// 
			this->labelBornNumber->AutoSize = true;
			this->labelBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBornNumber->Location = System::Drawing::Point(6, 55);
			this->labelBornNumber->Name = L"labelBornNumber";
			this->labelBornNumber->Size = System::Drawing::Size(80, 13);
			this->labelBornNumber->TabIndex = 13;
			this->labelBornNumber->Text = L"Rodné císlo:";
			this->labelBornNumber->Click += gcnew System::EventHandler(this, &MyForm::labelBornNumber_Click);
			// 
			// groupBoxCatasterAreaProperties
			// 
			this->groupBoxCatasterAreaProperties->Controls->Add(this->button3);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->groupBoxFindProperty);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->textBoxFindPropertyCaNumber);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->labelFindPropertyCaNumber);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->buttonFindCitizenPropertyFind);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->labelFindCitizenPropertyPropertyNumber);
			this->groupBoxCatasterAreaProperties->Controls->Add(this->textBoxFindPropertyPropertyNumber);
			this->groupBoxCatasterAreaProperties->Location = System::Drawing::Point(10, 404);
			this->groupBoxCatasterAreaProperties->Name = L"groupBoxCatasterAreaProperties";
			this->groupBoxCatasterAreaProperties->Size = System::Drawing::Size(518, 122);
			this->groupBoxCatasterAreaProperties->TabIndex = 18;
			this->groupBoxCatasterAreaProperties->TabStop = false;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(373, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 32);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Detail(cislo k.u.)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// groupBoxFindProperty
			// 
			this->groupBoxFindProperty->Controls->Add(this->buttonSearchCA_NA);
			this->groupBoxFindProperty->Controls->Add(this->textBoxCatasterArea_NA);
			this->groupBoxFindProperty->Controls->Add(this->labelNameOfCatasterArea);
			this->groupBoxFindProperty->Location = System::Drawing::Point(6, 9);
			this->groupBoxFindProperty->Name = L"groupBoxFindProperty";
			this->groupBoxFindProperty->Size = System::Drawing::Size(328, 71);
			this->groupBoxFindProperty->TabIndex = 21;
			this->groupBoxFindProperty->TabStop = false;
			// 
			// textBoxFindPropertyCaNumber
			// 
			this->textBoxFindPropertyCaNumber->Location = System::Drawing::Point(343, 39);
			this->textBoxFindPropertyCaNumber->Name = L"textBoxFindPropertyCaNumber";
			this->textBoxFindPropertyCaNumber->Size = System::Drawing::Size(92, 20);
			this->textBoxFindPropertyCaNumber->TabIndex = 19;
			// 
			// labelFindPropertyCaNumber
			// 
			this->labelFindPropertyCaNumber->AutoSize = true;
			this->labelFindPropertyCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelFindPropertyCaNumber->Location = System::Drawing::Point(340, 23);
			this->labelFindPropertyCaNumber->Name = L"labelFindPropertyCaNumber";
			this->labelFindPropertyCaNumber->Size = System::Drawing::Size(166, 13);
			this->labelFindPropertyCaNumber->TabIndex = 20;
			this->labelFindPropertyCaNumber->Text = L"Cislo katastrálneho územia: ";
			// 
			// buttonFindCitizenPropertyFind
			// 
			this->buttonFindCitizenPropertyFind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonFindCitizenPropertyFind->Location = System::Drawing::Point(7, 85);
			this->buttonFindCitizenPropertyFind->Name = L"buttonFindCitizenPropertyFind";
			this->buttonFindCitizenPropertyFind->Size = System::Drawing::Size(139, 32);
			this->buttonFindCitizenPropertyFind->TabIndex = 18;
			this->buttonFindCitizenPropertyFind->Text = L"Detail(nazov k.u.)";
			this->buttonFindCitizenPropertyFind->UseVisualStyleBackColor = true;
			this->buttonFindCitizenPropertyFind->Click += gcnew System::EventHandler(this, &MyForm::buttonFindCitizenPropertyFind_Click);
			// 
			// labelFindCitizenPropertyPropertyNumber
			// 
			this->labelFindCitizenPropertyPropertyNumber->AutoSize = true;
			this->labelFindCitizenPropertyPropertyNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelFindCitizenPropertyPropertyNumber->Location = System::Drawing::Point(202, 78);
			this->labelFindCitizenPropertyPropertyNumber->Name = L"labelFindCitizenPropertyPropertyNumber";
			this->labelFindCitizenPropertyPropertyNumber->Size = System::Drawing::Size(86, 13);
			this->labelFindCitizenPropertyPropertyNumber->TabIndex = 17;
			this->labelFindCitizenPropertyPropertyNumber->Text = L"Supisne cislo:";
			// 
			// textBoxFindPropertyPropertyNumber
			// 
			this->textBoxFindPropertyPropertyNumber->Location = System::Drawing::Point(205, 94);
			this->textBoxFindPropertyPropertyNumber->Name = L"textBoxFindPropertyPropertyNumber";
			this->textBoxFindPropertyPropertyNumber->Size = System::Drawing::Size(93, 20);
			this->textBoxFindPropertyPropertyNumber->TabIndex = 16;
			// 
			// groupBoxFindPropertyList
			// 
			this->groupBoxFindPropertyList->Controls->Add(this->buttonFindPropertyListCaNumber);
			this->groupBoxFindPropertyList->Controls->Add(this->labelFinPropertyListPLNumber);
			this->groupBoxFindPropertyList->Controls->Add(this->textBoxFinPropertyListPLNumber);
			this->groupBoxFindPropertyList->Controls->Add(this->textBoxFindPropertyListNumberCa);
			this->groupBoxFindPropertyList->Controls->Add(this->labelFindPropertyListNumberCa);
			this->groupBoxFindPropertyList->Controls->Add(this->buttonFindProperyListCaName);
			this->groupBoxFindPropertyList->Controls->Add(this->textBoxFindPropertyListNameCa);
			this->groupBoxFindPropertyList->Controls->Add(this->labelFindPropertyListNameCa);
			this->groupBoxFindPropertyList->Location = System::Drawing::Point(8, 423);
			this->groupBoxFindPropertyList->Name = L"groupBoxFindPropertyList";
			this->groupBoxFindPropertyList->Size = System::Drawing::Size(450, 100);
			this->groupBoxFindPropertyList->TabIndex = 31;
			this->groupBoxFindPropertyList->TabStop = false;
			// 
			// buttonFindPropertyListCaNumber
			// 
			this->buttonFindPropertyListCaNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonFindPropertyListCaNumber->Location = System::Drawing::Point(375, 74);
			this->buttonFindPropertyListCaNumber->Name = L"buttonFindPropertyListCaNumber";
			this->buttonFindPropertyListCaNumber->Size = System::Drawing::Size(60, 23);
			this->buttonFindPropertyListCaNumber->TabIndex = 23;
			this->buttonFindPropertyListCaNumber->Text = L"Hladaj nehnutelnost";
			this->buttonFindPropertyListCaNumber->UseVisualStyleBackColor = true;
			this->buttonFindPropertyListCaNumber->Click += gcnew System::EventHandler(this, &MyForm::buttonFindPropertyListCaNumber_Click);
			// 
			// labelFinPropertyListPLNumber
			// 
			this->labelFinPropertyListPLNumber->AutoSize = true;
			this->labelFinPropertyListPLNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelFinPropertyListPLNumber->Location = System::Drawing::Point(160, 60);
			this->labelFinPropertyListPLNumber->Name = L"labelFinPropertyListPLNumber";
			this->labelFinPropertyListPLNumber->Size = System::Drawing::Size(127, 13);
			this->labelFinPropertyListPLNumber->TabIndex = 22;
			this->labelFinPropertyListPLNumber->Text = L"Cislo listu vlastnictva";
			// 
			// textBoxFinPropertyListPLNumber
			// 
			this->textBoxFinPropertyListPLNumber->Location = System::Drawing::Point(163, 76);
			this->textBoxFinPropertyListPLNumber->Name = L"textBoxFinPropertyListPLNumber";
			this->textBoxFinPropertyListPLNumber->Size = System::Drawing::Size(118, 20);
			this->textBoxFinPropertyListPLNumber->TabIndex = 21;
			// 
			// textBoxFindPropertyListNumberCa
			// 
			this->textBoxFindPropertyListNumberCa->Location = System::Drawing::Point(252, 32);
			this->textBoxFindPropertyListNumberCa->Name = L"textBoxFindPropertyListNumberCa";
			this->textBoxFindPropertyListNumberCa->Size = System::Drawing::Size(183, 20);
			this->textBoxFindPropertyListNumberCa->TabIndex = 19;
			// 
			// labelFindPropertyListNumberCa
			// 
			this->labelFindPropertyListNumberCa->AutoSize = true;
			this->labelFindPropertyListNumberCa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelFindPropertyListNumberCa->Location = System::Drawing::Point(249, 16);
			this->labelFindPropertyListNumberCa->Name = L"labelFindPropertyListNumberCa";
			this->labelFindPropertyListNumberCa->Size = System::Drawing::Size(166, 13);
			this->labelFindPropertyListNumberCa->TabIndex = 20;
			this->labelFindPropertyListNumberCa->Text = L"Cislo katastrálneho územia: ";
			// 
			// buttonFindProperyListCaName
			// 
			this->buttonFindProperyListCaName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonFindProperyListCaName->Location = System::Drawing::Point(11, 74);
			this->buttonFindProperyListCaName->Name = L"buttonFindProperyListCaName";
			this->buttonFindProperyListCaName->Size = System::Drawing::Size(60, 23);
			this->buttonFindProperyListCaName->TabIndex = 18;
			this->buttonFindProperyListCaName->Text = L"Hladaj nehnutelnost";
			this->buttonFindProperyListCaName->UseVisualStyleBackColor = true;
			this->buttonFindProperyListCaName->Click += gcnew System::EventHandler(this, &MyForm::buttonFindProperyListCaName_Click);
			// 
			// textBoxFindPropertyListNameCa
			// 
			this->textBoxFindPropertyListNameCa->Location = System::Drawing::Point(9, 32);
			this->textBoxFindPropertyListNameCa->Name = L"textBoxFindPropertyListNameCa";
			this->textBoxFindPropertyListNameCa->Size = System::Drawing::Size(183, 20);
			this->textBoxFindPropertyListNameCa->TabIndex = 5;
			// 
			// labelFindPropertyListNameCa
			// 
			this->labelFindPropertyListNameCa->AutoSize = true;
			this->labelFindPropertyListNameCa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelFindPropertyListNameCa->Location = System::Drawing::Point(6, 16);
			this->labelFindPropertyListNameCa->Name = L"labelFindPropertyListNameCa";
			this->labelFindPropertyListNameCa->Size = System::Drawing::Size(175, 13);
			this->labelFindPropertyListNameCa->TabIndex = 6;
			this->labelFindPropertyListNameCa->Text = L"Názov katastrálneho územia: ";
			// 
			// buttonFindPropertyList
			// 
			this->buttonFindPropertyList->Location = System::Drawing::Point(393, 362);
			this->buttonFindPropertyList->Name = L"buttonFindPropertyList";
			this->buttonFindPropertyList->Size = System::Drawing::Size(140, 36);
			this->buttonFindPropertyList->TabIndex = 30;
			this->buttonFindPropertyList->Text = L"Vyhladanie listu vlastnictva";
			this->buttonFindPropertyList->UseVisualStyleBackColor = true;
			this->buttonFindPropertyList->Click += gcnew System::EventHandler(this, &MyForm::buttonFindPropertyList_Click);
			// 
			// groupBoxAllCitizenproperties
			// 
			this->groupBoxAllCitizenproperties->Controls->Add(this->buttonAllCitizenPropertiesConfirm);
			this->groupBoxAllCitizenproperties->Controls->Add(this->textBoxAllCitizenPropertiesBornNumber);
			this->groupBoxAllCitizenproperties->Controls->Add(this->labelAllCitizenPropertiesBornNumber);
			this->groupBoxAllCitizenproperties->Location = System::Drawing::Point(8, 424);
			this->groupBoxAllCitizenproperties->Name = L"groupBoxAllCitizenproperties";
			this->groupBoxAllCitizenproperties->Size = System::Drawing::Size(339, 75);
			this->groupBoxAllCitizenproperties->TabIndex = 29;
			this->groupBoxAllCitizenproperties->TabStop = false;
			// 
			// buttonAllCitizenPropertiesConfirm
			// 
			this->buttonAllCitizenPropertiesConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonAllCitizenPropertiesConfirm->Location = System::Drawing::Point(203, 33);
			this->buttonAllCitizenPropertiesConfirm->Name = L"buttonAllCitizenPropertiesConfirm";
			this->buttonAllCitizenPropertiesConfirm->Size = System::Drawing::Size(96, 23);
			this->buttonAllCitizenPropertiesConfirm->TabIndex = 11;
			this->buttonAllCitizenPropertiesConfirm->Text = L"Hladaj";
			this->buttonAllCitizenPropertiesConfirm->UseVisualStyleBackColor = true;
			this->buttonAllCitizenPropertiesConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonAllCitizenPropertiesConfirm_Click);
			// 
			// textBoxAllCitizenPropertiesBornNumber
			// 
			this->textBoxAllCitizenPropertiesBornNumber->Location = System::Drawing::Point(8, 35);
			this->textBoxAllCitizenPropertiesBornNumber->Name = L"textBoxAllCitizenPropertiesBornNumber";
			this->textBoxAllCitizenPropertiesBornNumber->Size = System::Drawing::Size(166, 20);
			this->textBoxAllCitizenPropertiesBornNumber->TabIndex = 12;
			// 
			// labelAllCitizenPropertiesBornNumber
			// 
			this->labelAllCitizenPropertiesBornNumber->AutoSize = true;
			this->labelAllCitizenPropertiesBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelAllCitizenPropertiesBornNumber->Location = System::Drawing::Point(8, 19);
			this->labelAllCitizenPropertiesBornNumber->Name = L"labelAllCitizenPropertiesBornNumber";
			this->labelAllCitizenPropertiesBornNumber->Size = System::Drawing::Size(80, 13);
			this->labelAllCitizenPropertiesBornNumber->TabIndex = 13;
			this->labelAllCitizenPropertiesBornNumber->Text = L"Rodné císlo:";
			// 
			// buttonAllCitizenProeprties
			// 
			this->buttonAllCitizenProeprties->Location = System::Drawing::Point(393, 150);
			this->buttonAllCitizenProeprties->Name = L"buttonAllCitizenProeprties";
			this->buttonAllCitizenProeprties->Size = System::Drawing::Size(141, 36);
			this->buttonAllCitizenProeprties->TabIndex = 28;
			this->buttonAllCitizenProeprties->Text = L"Vsetky majetkove podieli obyvatela";
			this->buttonAllCitizenProeprties->UseVisualStyleBackColor = true;
			this->buttonAllCitizenProeprties->Click += gcnew System::EventHandler(this, &MyForm::buttonAllCitizenProeprties_Click);
			// 
			// buttonOwnerChange
			// 
			this->buttonOwnerChange->Location = System::Drawing::Point(393, 325);
			this->buttonOwnerChange->Name = L"buttonOwnerChange";
			this->buttonOwnerChange->Size = System::Drawing::Size(140, 30);
			this->buttonOwnerChange->TabIndex = 26;
			this->buttonOwnerChange->Text = L"Zmena majitela";
			this->buttonOwnerChange->UseVisualStyleBackColor = true;
			this->buttonOwnerChange->Click += gcnew System::EventHandler(this, &MyForm::buttonOwnerChange_Click);
			// 
			// buttonDeletePart
			// 
			this->buttonDeletePart->Location = System::Drawing::Point(393, 280);
			this->buttonDeletePart->Name = L"buttonDeletePart";
			this->buttonDeletePart->Size = System::Drawing::Size(140, 38);
			this->buttonDeletePart->TabIndex = 24;
			this->buttonDeletePart->Text = L"Odstranenie majetkoveho podielu";
			this->buttonDeletePart->UseVisualStyleBackColor = true;
			this->buttonDeletePart->Click += gcnew System::EventHandler(this, &MyForm::buttonDeletePart_Click);
			// 
			// buttonDeletePL
			// 
			this->buttonDeletePL->Location = System::Drawing::Point(393, 236);
			this->buttonDeletePL->Name = L"buttonDeletePL";
			this->buttonDeletePL->Size = System::Drawing::Size(140, 37);
			this->buttonDeletePL->TabIndex = 22;
			this->buttonDeletePL->Text = L"Odstranit list vlastnictva v katastralnom uzemi";
			this->buttonDeletePL->UseVisualStyleBackColor = true;
			this->buttonDeletePL->Click += gcnew System::EventHandler(this, &MyForm::buttonDeletePL_Click);
			// 
			// groupBoxDeletePropertyFromPL
			// 
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->labelDeletePropertyFromPLnumberPL);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->textBoxDeletePropertyFromPLnumberPL);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->buttonDeletePropertyFromPLConfirm);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->labelDeletePropertyFromPLpropertynumber);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->textBoxDeletePropertyFromPLpropertyNumber);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->textBoxDeletePropertyFromPLcANumber);
			this->groupBoxDeletePropertyFromPL->Controls->Add(this->labelDeletePropertyFromPLcANumber);
			this->groupBoxDeletePropertyFromPL->Location = System::Drawing::Point(14, 415);
			this->groupBoxDeletePropertyFromPL->Name = L"groupBoxDeletePropertyFromPL";
			this->groupBoxDeletePropertyFromPL->Size = System::Drawing::Size(370, 100);
			this->groupBoxDeletePropertyFromPL->TabIndex = 21;
			this->groupBoxDeletePropertyFromPL->TabStop = false;
			// 
			// labelDeletePropertyFromPLnumberPL
			// 
			this->labelDeletePropertyFromPLnumberPL->AutoSize = true;
			this->labelDeletePropertyFromPLnumberPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePropertyFromPLnumberPL->Location = System::Drawing::Point(223, 16);
			this->labelDeletePropertyFromPLnumberPL->Name = L"labelDeletePropertyFromPLnumberPL";
			this->labelDeletePropertyFromPLnumberPL->Size = System::Drawing::Size(131, 13);
			this->labelDeletePropertyFromPLnumberPL->TabIndex = 20;
			this->labelDeletePropertyFromPLnumberPL->Text = L"Cislo listu vlastnictva:";
			// 
			// textBoxDeletePropertyFromPLnumberPL
			// 
			this->textBoxDeletePropertyFromPLnumberPL->Location = System::Drawing::Point(226, 32);
			this->textBoxDeletePropertyFromPLnumberPL->Name = L"textBoxDeletePropertyFromPLnumberPL";
			this->textBoxDeletePropertyFromPLnumberPL->Size = System::Drawing::Size(129, 20);
			this->textBoxDeletePropertyFromPLnumberPL->TabIndex = 19;
			// 
			// buttonDeletePropertyFromPLConfirm
			// 
			this->buttonDeletePropertyFromPLConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonDeletePropertyFromPLConfirm->Location = System::Drawing::Point(160, 73);
			this->buttonDeletePropertyFromPLConfirm->Name = L"buttonDeletePropertyFromPLConfirm";
			this->buttonDeletePropertyFromPLConfirm->Size = System::Drawing::Size(195, 23);
			this->buttonDeletePropertyFromPLConfirm->TabIndex = 18;
			this->buttonDeletePropertyFromPLConfirm->Text = L"Vymaz";
			this->buttonDeletePropertyFromPLConfirm->UseVisualStyleBackColor = true;
			this->buttonDeletePropertyFromPLConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonDeletePropertyFromPLConfirm_Click);
			// 
			// labelDeletePropertyFromPLpropertynumber
			// 
			this->labelDeletePropertyFromPLpropertynumber->AutoSize = true;
			this->labelDeletePropertyFromPLpropertynumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePropertyFromPLpropertynumber->Location = System::Drawing::Point(5, 60);
			this->labelDeletePropertyFromPLpropertynumber->Name = L"labelDeletePropertyFromPLpropertynumber";
			this->labelDeletePropertyFromPLpropertynumber->Size = System::Drawing::Size(86, 13);
			this->labelDeletePropertyFromPLpropertynumber->TabIndex = 17;
			this->labelDeletePropertyFromPLpropertynumber->Text = L"Supisne cislo:";
			// 
			// textBoxDeletePropertyFromPLpropertyNumber
			// 
			this->textBoxDeletePropertyFromPLpropertyNumber->Location = System::Drawing::Point(8, 76);
			this->textBoxDeletePropertyFromPLpropertyNumber->Name = L"textBoxDeletePropertyFromPLpropertyNumber";
			this->textBoxDeletePropertyFromPLpropertyNumber->Size = System::Drawing::Size(93, 20);
			this->textBoxDeletePropertyFromPLpropertyNumber->TabIndex = 16;
			// 
			// textBoxDeletePropertyFromPLcANumber
			// 
			this->textBoxDeletePropertyFromPLcANumber->Location = System::Drawing::Point(9, 32);
			this->textBoxDeletePropertyFromPLcANumber->Name = L"textBoxDeletePropertyFromPLcANumber";
			this->textBoxDeletePropertyFromPLcANumber->Size = System::Drawing::Size(156, 20);
			this->textBoxDeletePropertyFromPLcANumber->TabIndex = 5;
			// 
			// labelDeletePropertyFromPLcANumber
			// 
			this->labelDeletePropertyFromPLcANumber->AutoSize = true;
			this->labelDeletePropertyFromPLcANumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelDeletePropertyFromPLcANumber->Location = System::Drawing::Point(6, 16);
			this->labelDeletePropertyFromPLcANumber->Name = L"labelDeletePropertyFromPLcANumber";
			this->labelDeletePropertyFromPLcANumber->Size = System::Drawing::Size(166, 13);
			this->labelDeletePropertyFromPLcANumber->TabIndex = 6;
			this->labelDeletePropertyFromPLcANumber->Text = L"Cislo katastrálneho územia: ";
			// 
			// buttonDeletepropertyFromPL
			// 
			this->buttonDeletepropertyFromPL->Location = System::Drawing::Point(393, 190);
			this->buttonDeletepropertyFromPL->Name = L"buttonDeletepropertyFromPL";
			this->buttonDeletepropertyFromPL->Size = System::Drawing::Size(140, 39);
			this->buttonDeletepropertyFromPL->TabIndex = 20;
			this->buttonDeletepropertyFromPL->Text = L"Odstranit nehnutelnost z listu vlastnictva";
			this->buttonDeletepropertyFromPL->UseVisualStyleBackColor = true;
			this->buttonDeletepropertyFromPL->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// buttonPropertiesInCA
			// 
			this->buttonPropertiesInCA->Location = System::Drawing::Point(392, 70);
			this->buttonPropertiesInCA->Name = L"buttonPropertiesInCA";
			this->buttonPropertiesInCA->Size = System::Drawing::Size(141, 32);
			this->buttonPropertiesInCA->TabIndex = 19;
			this->buttonPropertiesInCA->Text = L"Nehnutelnosti v K.Uzemi";
			this->buttonPropertiesInCA->UseVisualStyleBackColor = true;
			this->buttonPropertiesInCA->Click += gcnew System::EventHandler(this, &MyForm::buttonPropertiesInCA_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(392, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 36);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Majetkove podieli obyvatela v k.u.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_2);
			// 
			// listViewCitizenProperties
			// 
			this->listViewCitizenProperties->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {
				this->columnHeaderPropertyNumber,
					this->columnHeaderPart
			});
			this->listViewCitizenProperties->GridLines = true;
			this->listViewCitizenProperties->Location = System::Drawing::Point(12, 70);
			this->listViewCitizenProperties->Name = L"listViewCitizenProperties";
			this->listViewCitizenProperties->Size = System::Drawing::Size(374, 328);
			this->listViewCitizenProperties->TabIndex = 14;
			this->listViewCitizenProperties->UseCompatibleStateImageBehavior = false;
			this->listViewCitizenProperties->View = System::Windows::Forms::View::Details;
			// 
			// columnHeaderPropertyNumber
			// 
			this->columnHeaderPropertyNumber->Text = L"Súpisné císlo";
			this->columnHeaderPropertyNumber->Width = 115;
			// 
			// columnHeaderPart
			// 
			this->columnHeaderPart->Text = L"Podiel";
			this->columnHeaderPart->Width = 129;
			// 
			// groupBoxGenerate
			// 
			this->groupBoxGenerate->Controls->Add(this->textBoxGenerateCitizen);
			this->groupBoxGenerate->Controls->Add(this->labelGenerateCitizen);
			this->groupBoxGenerate->Controls->Add(this->labelGeneratePL);
			this->groupBoxGenerate->Controls->Add(this->textBoxGeneratePL);
			this->groupBoxGenerate->Controls->Add(this->buttonGenerateConfirm);
			this->groupBoxGenerate->Controls->Add(this->labelGenereateProperty);
			this->groupBoxGenerate->Controls->Add(this->textBoxGenerateProperty);
			this->groupBoxGenerate->Controls->Add(this->textBoxGenereateCA);
			this->groupBoxGenerate->Controls->Add(this->labelGenerateCA);
			this->groupBoxGenerate->Location = System::Drawing::Point(10, 26);
			this->groupBoxGenerate->Name = L"groupBoxGenerate";
			this->groupBoxGenerate->Size = System::Drawing::Size(753, 31);
			this->groupBoxGenerate->TabIndex = 33;
			this->groupBoxGenerate->TabStop = false;
			// 
			// textBoxGenerateCitizen
			// 
			this->textBoxGenerateCitizen->Location = System::Drawing::Point(230, 11);
			this->textBoxGenerateCitizen->Name = L"textBoxGenerateCitizen";
			this->textBoxGenerateCitizen->Size = System::Drawing::Size(32, 20);
			this->textBoxGenerateCitizen->TabIndex = 21;
			// 
			// labelGenerateCitizen
			// 
			this->labelGenerateCitizen->AutoSize = true;
			this->labelGenerateCitizen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelGenerateCitizen->Location = System::Drawing::Point(149, 14);
			this->labelGenerateCitizen->Name = L"labelGenerateCitizen";
			this->labelGenerateCitizen->Size = System::Drawing::Size(75, 13);
			this->labelGenerateCitizen->TabIndex = 22;
			this->labelGenerateCitizen->Text = L"Pocet osob:";
			// 
			// labelGeneratePL
			// 
			this->labelGeneratePL->AutoSize = true;
			this->labelGeneratePL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelGeneratePL->Location = System::Drawing::Point(456, 13);
			this->labelGeneratePL->Name = L"labelGeneratePL";
			this->labelGeneratePL->Size = System::Drawing::Size(144, 13);
			this->labelGeneratePL->TabIndex = 20;
			this->labelGeneratePL->Text = L"Pocet listov vlastnictva:";
			// 
			// textBoxGeneratePL
			// 
			this->textBoxGeneratePL->Location = System::Drawing::Point(604, 10);
			this->textBoxGeneratePL->Name = L"textBoxGeneratePL";
			this->textBoxGeneratePL->Size = System::Drawing::Size(34, 20);
			this->textBoxGeneratePL->TabIndex = 19;
			// 
			// buttonGenerateConfirm
			// 
			this->buttonGenerateConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->buttonGenerateConfirm->Location = System::Drawing::Point(655, 9);
			this->buttonGenerateConfirm->Name = L"buttonGenerateConfirm";
			this->buttonGenerateConfirm->Size = System::Drawing::Size(73, 23);
			this->buttonGenerateConfirm->TabIndex = 18;
			this->buttonGenerateConfirm->Text = L"Generuj";
			this->buttonGenerateConfirm->UseVisualStyleBackColor = true;
			this->buttonGenerateConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerateConfirm_Click);
			// 
			// labelGenereateProperty
			// 
			this->labelGenereateProperty->AutoSize = true;
			this->labelGenereateProperty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelGenereateProperty->Location = System::Drawing::Point(278, 13);
			this->labelGenereateProperty->Name = L"labelGenereateProperty";
			this->labelGenereateProperty->Size = System::Drawing::Size(124, 13);
			this->labelGenereateProperty->TabIndex = 17;
			this->labelGenereateProperty->Text = L"Pocet nehnutelnosti:";
			// 
			// textBoxGenerateProperty
			// 
			this->textBoxGenerateProperty->Location = System::Drawing::Point(405, 10);
			this->textBoxGenerateProperty->Name = L"textBoxGenerateProperty";
			this->textBoxGenerateProperty->Size = System::Drawing::Size(36, 20);
			this->textBoxGenerateProperty->TabIndex = 16;
			// 
			// textBoxGenereateCA
			// 
			this->textBoxGenereateCA->Location = System::Drawing::Point(105, 10);
			this->textBoxGenereateCA->Name = L"textBoxGenereateCA";
			this->textBoxGenereateCA->Size = System::Drawing::Size(33, 20);
			this->textBoxGenereateCA->TabIndex = 5;
			// 
			// labelGenerateCA
			// 
			this->labelGenerateCA->AutoSize = true;
			this->labelGenerateCA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelGenerateCA->Location = System::Drawing::Point(4, 13);
			this->labelGenerateCA->Name = L"labelGenerateCA";
			this->labelGenerateCA->Size = System::Drawing::Size(95, 13);
			this->labelGenerateCA->TabIndex = 6;
			this->labelGenerateCA->Text = L"Pocet k. uzemi:";
			// 
			// buttonGenerateData
			// 
			this->buttonGenerateData->Location = System::Drawing::Point(601, 1);
			this->buttonGenerateData->Name = L"buttonGenerateData";
			this->buttonGenerateData->Size = System::Drawing::Size(140, 22);
			this->buttonGenerateData->TabIndex = 32;
			this->buttonGenerateData->Text = L"Generovat data";
			this->buttonGenerateData->UseVisualStyleBackColor = true;
			this->buttonGenerateData->Click += gcnew System::EventHandler(this, &MyForm::buttonGenerateData_Click);
			// 
			// groupBoxCitizens
			// 
			this->groupBoxCitizens->Controls->Add(this->groupBoxAddCitizen);
			this->groupBoxCitizens->Controls->Add(this->groupBoxFindCitizen);
			this->groupBoxCitizens->Controls->Add(this->groupBoxSPAC);
			this->groupBoxCitizens->Controls->Add(this->buttonStayPropertyOfAllCitizen);
			this->groupBoxCitizens->Controls->Add(this->groupBoxSPropertyChange);
			this->groupBoxCitizens->Controls->Add(this->buttonStayPropertyChange);
			this->groupBoxCitizens->Controls->Add(this->buttonFindCitizen);
			this->groupBoxCitizens->Controls->Add(this->buttonAddCitizen);
			this->groupBoxCitizens->Controls->Add(this->listViewCitizens);
			this->groupBoxCitizens->Controls->Add(this->groupBox2);
			this->groupBoxCitizens->Controls->Add(this->listView2);
			this->groupBoxCitizens->Controls->Add(this->listView3);
			this->groupBoxCitizens->Location = System::Drawing::Point(12, 55);
			this->groupBoxCitizens->Name = L"groupBoxCitizens";
			this->groupBoxCitizens->Size = System::Drawing::Size(396, 541);
			this->groupBoxCitizens->TabIndex = 19;
			this->groupBoxCitizens->TabStop = false;
			// 
			// groupBoxAddCitizen
			// 
			this->groupBoxAddCitizen->Controls->Add(this->textBoxNewNameCa);
			this->groupBoxAddCitizen->Controls->Add(this->labelNewNameCA);
			this->groupBoxAddCitizen->Controls->Add(this->buttonConfirmAddCitizen);
			this->groupBoxAddCitizen->Controls->Add(this->textBoxNewStayProperty);
			this->groupBoxAddCitizen->Controls->Add(this->labelStayProperty);
			this->groupBoxAddCitizen->Controls->Add(this->textBoxDateOfRorn);
			this->groupBoxAddCitizen->Controls->Add(this->labeldateOfBorn);
			this->groupBoxAddCitizen->Controls->Add(this->textBoxNewBornNumber);
			this->groupBoxAddCitizen->Controls->Add(this->labelNewBornNumber);
			this->groupBoxAddCitizen->Controls->Add(this->textBoxNewName);
			this->groupBoxAddCitizen->Controls->Add(this->labelNewName);
			this->groupBoxAddCitizen->Location = System::Drawing::Point(6, 404);
			this->groupBoxAddCitizen->Name = L"groupBoxAddCitizen";
			this->groupBoxAddCitizen->Size = System::Drawing::Size(384, 127);
			this->groupBoxAddCitizen->TabIndex = 16;
			this->groupBoxAddCitizen->TabStop = false;
			// 
			// textBoxNewNameCa
			// 
			this->textBoxNewNameCa->Location = System::Drawing::Point(294, 95);
			this->textBoxNewNameCa->Name = L"textBoxNewNameCa";
			this->textBoxNewNameCa->Size = System::Drawing::Size(80, 20);
			this->textBoxNewNameCa->TabIndex = 10;
			// 
			// labelNewNameCA
			// 
			this->labelNewNameCA->AutoSize = true;
			this->labelNewNameCA->Location = System::Drawing::Point(197, 98);
			this->labelNewNameCA->Name = L"labelNewNameCA";
			this->labelNewNameCA->Size = System::Drawing::Size(98, 26);
			this->labelNewNameCA->TabIndex = 9;
			this->labelNewNameCA->Text = L"          Trvalý pobyt:\r\n(Názov kat.územia)";
			// 
			// buttonConfirmAddCitizen
			// 
			this->buttonConfirmAddCitizen->Location = System::Drawing::Point(303, 14);
			this->buttonConfirmAddCitizen->Name = L"buttonConfirmAddCitizen";
			this->buttonConfirmAddCitizen->Size = System::Drawing::Size(75, 23);
			this->buttonConfirmAddCitizen->TabIndex = 8;
			this->buttonConfirmAddCitizen->Text = L"Pridaj";
			this->buttonConfirmAddCitizen->UseVisualStyleBackColor = true;
			this->buttonConfirmAddCitizen->Click += gcnew System::EventHandler(this, &MyForm::buttonConfirmAddCitizen_Click);
			// 
			// textBoxNewStayProperty
			// 
			this->textBoxNewStayProperty->Location = System::Drawing::Point(111, 95);
			this->textBoxNewStayProperty->Name = L"textBoxNewStayProperty";
			this->textBoxNewStayProperty->Size = System::Drawing::Size(80, 20);
			this->textBoxNewStayProperty->TabIndex = 7;
			this->textBoxNewStayProperty->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxStayProperty_TextChanged);
			// 
			// labelStayProperty
			// 
			this->labelStayProperty->AutoSize = true;
			this->labelStayProperty->Location = System::Drawing::Point(9, 98);
			this->labelStayProperty->Name = L"labelStayProperty";
			this->labelStayProperty->Size = System::Drawing::Size(75, 26);
			this->labelStayProperty->TabIndex = 6;
			this->labelStayProperty->Text = L"Trvalý pobyt:\r\n(súpisné číslo)";
			this->labelStayProperty->Click += gcnew System::EventHandler(this, &MyForm::labelStayProperty_Click);
			// 
			// textBoxDateOfRorn
			// 
			this->textBoxDateOfRorn->Location = System::Drawing::Point(111, 63);
			this->textBoxDateOfRorn->Name = L"textBoxDateOfRorn";
			this->textBoxDateOfRorn->Size = System::Drawing::Size(150, 20);
			this->textBoxDateOfRorn->TabIndex = 5;
			// 
			// labeldateOfBorn
			// 
			this->labeldateOfBorn->AutoSize = true;
			this->labeldateOfBorn->Location = System::Drawing::Point(9, 66);
			this->labeldateOfBorn->Name = L"labeldateOfBorn";
			this->labeldateOfBorn->Size = System::Drawing::Size(88, 26);
			this->labeldateOfBorn->TabIndex = 4;
			this->labeldateOfBorn->Text = L"Dátum narodenia\r\n(DDMMRRRR)\r\n";
			// 
			// textBoxNewBornNumber
			// 
			this->textBoxNewBornNumber->Location = System::Drawing::Point(111, 37);
			this->textBoxNewBornNumber->Name = L"textBoxNewBornNumber";
			this->textBoxNewBornNumber->Size = System::Drawing::Size(150, 20);
			this->textBoxNewBornNumber->TabIndex = 3;
			// 
			// labelNewBornNumber
			// 
			this->labelNewBornNumber->AutoSize = true;
			this->labelNewBornNumber->Location = System::Drawing::Point(9, 40);
			this->labelNewBornNumber->Name = L"labelNewBornNumber";
			this->labelNewBornNumber->Size = System::Drawing::Size(68, 13);
			this->labelNewBornNumber->TabIndex = 2;
			this->labelNewBornNumber->Text = L"Rodné číslo:";
			// 
			// textBoxNewName
			// 
			this->textBoxNewName->Location = System::Drawing::Point(111, 11);
			this->textBoxNewName->Name = L"textBoxNewName";
			this->textBoxNewName->Size = System::Drawing::Size(150, 20);
			this->textBoxNewName->TabIndex = 1;
			// 
			// labelNewName
			// 
			this->labelNewName->AutoSize = true;
			this->labelNewName->Location = System::Drawing::Point(9, 14);
			this->labelNewName->Name = L"labelNewName";
			this->labelNewName->Size = System::Drawing::Size(96, 13);
			this->labelNewName->TabIndex = 0;
			this->labelNewName->Text = L"Meno a priezvisko:";
			// 
			// groupBoxFindCitizen
			// 
			this->groupBoxFindCitizen->Controls->Add(this->buttonFindCitizenFind);
			this->groupBoxFindCitizen->Controls->Add(this->textBoxFindCitizenBornNumber);
			this->groupBoxFindCitizen->Controls->Add(this->labelFindCitizenBornNumber);
			this->groupBoxFindCitizen->Location = System::Drawing::Point(6, 404);
			this->groupBoxFindCitizen->Name = L"groupBoxFindCitizen";
			this->groupBoxFindCitizen->Size = System::Drawing::Size(384, 127);
			this->groupBoxFindCitizen->TabIndex = 17;
			this->groupBoxFindCitizen->TabStop = false;
			// 
			// buttonFindCitizenFind
			// 
			this->buttonFindCitizenFind->Location = System::Drawing::Point(286, 15);
			this->buttonFindCitizenFind->Name = L"buttonFindCitizenFind";
			this->buttonFindCitizenFind->Size = System::Drawing::Size(75, 23);
			this->buttonFindCitizenFind->TabIndex = 8;
			this->buttonFindCitizenFind->Text = L"Hladaj";
			this->buttonFindCitizenFind->UseVisualStyleBackColor = true;
			this->buttonFindCitizenFind->Click += gcnew System::EventHandler(this, &MyForm::buttonFindCitizenFind_Click);
			// 
			// textBoxFindCitizenBornNumber
			// 
			this->textBoxFindCitizenBornNumber->Location = System::Drawing::Point(83, 17);
			this->textBoxFindCitizenBornNumber->Name = L"textBoxFindCitizenBornNumber";
			this->textBoxFindCitizenBornNumber->Size = System::Drawing::Size(150, 20);
			this->textBoxFindCitizenBornNumber->TabIndex = 3;
			// 
			// labelFindCitizenBornNumber
			// 
			this->labelFindCitizenBornNumber->AutoSize = true;
			this->labelFindCitizenBornNumber->Location = System::Drawing::Point(9, 20);
			this->labelFindCitizenBornNumber->Name = L"labelFindCitizenBornNumber";
			this->labelFindCitizenBornNumber->Size = System::Drawing::Size(68, 13);
			this->labelFindCitizenBornNumber->TabIndex = 2;
			this->labelFindCitizenBornNumber->Text = L"Rodné číslo:";
			// 
			// groupBoxSPAC
			// 
			this->groupBoxSPAC->Controls->Add(this->textBoxSPACcAnumber);
			this->groupBoxSPAC->Controls->Add(this->labelSPACcAnumber);
			this->groupBoxSPAC->Controls->Add(this->textBoxSPACpropertyNumber);
			this->groupBoxSPAC->Controls->Add(this->labelSPACpropertynumber);
			this->groupBoxSPAC->Controls->Add(this->buttonSPACconfirm);
			this->groupBoxSPAC->Controls->Add(this->textBoxSPACpropertyList);
			this->groupBoxSPAC->Controls->Add(this->labelSPACpropertyList);
			this->groupBoxSPAC->Location = System::Drawing::Point(0, 408);
			this->groupBoxSPAC->Name = L"groupBoxSPAC";
			this->groupBoxSPAC->Size = System::Drawing::Size(384, 127);
			this->groupBoxSPAC->TabIndex = 19;
			this->groupBoxSPAC->TabStop = false;
			// 
			// textBoxSPACcAnumber
			// 
			this->textBoxSPACcAnumber->Location = System::Drawing::Point(106, 82);
			this->textBoxSPACcAnumber->Name = L"textBoxSPACcAnumber";
			this->textBoxSPACcAnumber->Size = System::Drawing::Size(86, 20);
			this->textBoxSPACcAnumber->TabIndex = 12;
			// 
			// labelSPACcAnumber
			// 
			this->labelSPACcAnumber->AutoSize = true;
			this->labelSPACcAnumber->Location = System::Drawing::Point(9, 85);
			this->labelSPACcAnumber->Name = L"labelSPACcAnumber";
			this->labelSPACcAnumber->Size = System::Drawing::Size(83, 13);
			this->labelSPACcAnumber->TabIndex = 11;
			this->labelSPACcAnumber->Text = L"Cislo k.  uzemia:\r\n";
			// 
			// textBoxSPACpropertyNumber
			// 
			this->textBoxSPACpropertyNumber->Location = System::Drawing::Point(106, 50);
			this->textBoxSPACpropertyNumber->Name = L"textBoxSPACpropertyNumber";
			this->textBoxSPACpropertyNumber->Size = System::Drawing::Size(86, 20);
			this->textBoxSPACpropertyNumber->TabIndex = 10;
			// 
			// labelSPACpropertynumber
			// 
			this->labelSPACpropertynumber->AutoSize = true;
			this->labelSPACpropertynumber->Location = System::Drawing::Point(9, 53);
			this->labelSPACpropertynumber->Name = L"labelSPACpropertynumber";
			this->labelSPACpropertynumber->Size = System::Drawing::Size(73, 26);
			this->labelSPACpropertynumber->TabIndex = 9;
			this->labelSPACpropertynumber->Text = L"Nehnutelnost:\r\n(supisne cislo)\r\n";
			// 
			// buttonSPACconfirm
			// 
			this->buttonSPACconfirm->Location = System::Drawing::Point(233, 53);
			this->buttonSPACconfirm->Name = L"buttonSPACconfirm";
			this->buttonSPACconfirm->Size = System::Drawing::Size(75, 23);
			this->buttonSPACconfirm->TabIndex = 8;
			this->buttonSPACconfirm->Text = L"Hladaj";
			this->buttonSPACconfirm->UseVisualStyleBackColor = true;
			this->buttonSPACconfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonSPACconfirm_Click);
			// 
			// textBoxSPACpropertyList
			// 
			this->textBoxSPACpropertyList->Location = System::Drawing::Point(106, 17);
			this->textBoxSPACpropertyList->Name = L"textBoxSPACpropertyList";
			this->textBoxSPACpropertyList->Size = System::Drawing::Size(86, 20);
			this->textBoxSPACpropertyList->TabIndex = 3;
			// 
			// labelSPACpropertyList
			// 
			this->labelSPACpropertyList->AutoSize = true;
			this->labelSPACpropertyList->Location = System::Drawing::Point(9, 20);
			this->labelSPACpropertyList->Name = L"labelSPACpropertyList";
			this->labelSPACpropertyList->Size = System::Drawing::Size(80, 13);
			this->labelSPACpropertyList->TabIndex = 2;
			this->labelSPACpropertyList->Text = L"List vlastnictva:";
			// 
			// buttonStayPropertyOfAllCitizen
			// 
			this->buttonStayPropertyOfAllCitizen->Location = System::Drawing::Point(232, 71);
			this->buttonStayPropertyOfAllCitizen->Name = L"buttonStayPropertyOfAllCitizen";
			this->buttonStayPropertyOfAllCitizen->Size = System::Drawing::Size(135, 22);
			this->buttonStayPropertyOfAllCitizen->TabIndex = 29;
			this->buttonStayPropertyOfAllCitizen->Text = L"Obcania s tr. pobytom";
			this->buttonStayPropertyOfAllCitizen->UseVisualStyleBackColor = true;
			this->buttonStayPropertyOfAllCitizen->Click += gcnew System::EventHandler(this, &MyForm::buttonStayPropertyOfAllCitizen_Click);
			// 
			// groupBoxSPropertyChange
			// 
			this->groupBoxSPropertyChange->Controls->Add(this->textBoxSPropertyChangeCaName);
			this->groupBoxSPropertyChange->Controls->Add(this->labellSPropertyChangeCaName);
			this->groupBoxSPropertyChange->Controls->Add(this->textBoxlSPropertyChangePropertyNumber);
			this->groupBoxSPropertyChange->Controls->Add(this->labelSPropertyChangePropertyNumber);
			this->groupBoxSPropertyChange->Controls->Add(this->buttonSPropertyChangeConfirm);
			this->groupBoxSPropertyChange->Controls->Add(this->textBoxSPropertyChangeBornuNumber);
			this->groupBoxSPropertyChange->Controls->Add(this->labelSPropertyChangeBornuNumber);
			this->groupBoxSPropertyChange->Location = System::Drawing::Point(6, 401);
			this->groupBoxSPropertyChange->Name = L"groupBoxSPropertyChange";
			this->groupBoxSPropertyChange->Size = System::Drawing::Size(384, 127);
			this->groupBoxSPropertyChange->TabIndex = 18;
			this->groupBoxSPropertyChange->TabStop = false;
			// 
			// textBoxSPropertyChangeCaName
			// 
			this->textBoxSPropertyChangeCaName->Location = System::Drawing::Point(83, 93);
			this->textBoxSPropertyChangeCaName->Name = L"textBoxSPropertyChangeCaName";
			this->textBoxSPropertyChangeCaName->Size = System::Drawing::Size(86, 20);
			this->textBoxSPropertyChangeCaName->TabIndex = 12;
			this->textBoxSPropertyChangeCaName->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// labellSPropertyChangeCaName
			// 
			this->labellSPropertyChangeCaName->AutoSize = true;
			this->labellSPropertyChangeCaName->Location = System::Drawing::Point(9, 85);
			this->labellSPropertyChangeCaName->Name = L"labellSPropertyChangeCaName";
			this->labellSPropertyChangeCaName->Size = System::Drawing::Size(53, 26);
			this->labellSPropertyChangeCaName->TabIndex = 11;
			this->labellSPropertyChangeCaName->Text = L"Nazov k. \r\nuzemia:\r\n";
			// 
			// textBoxlSPropertyChangePropertyNumber
			// 
			this->textBoxlSPropertyChangePropertyNumber->Location = System::Drawing::Point(83, 50);
			this->textBoxlSPropertyChangePropertyNumber->Name = L"textBoxlSPropertyChangePropertyNumber";
			this->textBoxlSPropertyChangePropertyNumber->Size = System::Drawing::Size(86, 20);
			this->textBoxlSPropertyChangePropertyNumber->TabIndex = 10;
			// 
			// labelSPropertyChangePropertyNumber
			// 
			this->labelSPropertyChangePropertyNumber->AutoSize = true;
			this->labelSPropertyChangePropertyNumber->Location = System::Drawing::Point(9, 53);
			this->labelSPropertyChangePropertyNumber->Name = L"labelSPropertyChangePropertyNumber";
			this->labelSPropertyChangePropertyNumber->Size = System::Drawing::Size(73, 26);
			this->labelSPropertyChangePropertyNumber->TabIndex = 9;
			this->labelSPropertyChangePropertyNumber->Text = L"Nehnutelnost:\r\n(supisne cislo)\r\n";
			// 
			// buttonSPropertyChangeConfirm
			// 
			this->buttonSPropertyChangeConfirm->Location = System::Drawing::Point(233, 53);
			this->buttonSPropertyChangeConfirm->Name = L"buttonSPropertyChangeConfirm";
			this->buttonSPropertyChangeConfirm->Size = System::Drawing::Size(75, 23);
			this->buttonSPropertyChangeConfirm->TabIndex = 8;
			this->buttonSPropertyChangeConfirm->Text = L"Zmen";
			this->buttonSPropertyChangeConfirm->UseVisualStyleBackColor = true;
			this->buttonSPropertyChangeConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonSPropertyChangeConfirm_Click);
			// 
			// textBoxSPropertyChangeBornuNumber
			// 
			this->textBoxSPropertyChangeBornuNumber->Location = System::Drawing::Point(83, 17);
			this->textBoxSPropertyChangeBornuNumber->Name = L"textBoxSPropertyChangeBornuNumber";
			this->textBoxSPropertyChangeBornuNumber->Size = System::Drawing::Size(86, 20);
			this->textBoxSPropertyChangeBornuNumber->TabIndex = 3;
			// 
			// labelSPropertyChangeBornuNumber
			// 
			this->labelSPropertyChangeBornuNumber->AutoSize = true;
			this->labelSPropertyChangeBornuNumber->Location = System::Drawing::Point(9, 20);
			this->labelSPropertyChangeBornuNumber->Name = L"labelSPropertyChangeBornuNumber";
			this->labelSPropertyChangeBornuNumber->Size = System::Drawing::Size(68, 13);
			this->labelSPropertyChangeBornuNumber->TabIndex = 2;
			this->labelSPropertyChangeBornuNumber->Text = L"Rodné číslo:";
			// 
			// buttonStayPropertyChange
			// 
			this->buttonStayPropertyChange->Location = System::Drawing::Point(117, 70);
			this->buttonStayPropertyChange->Name = L"buttonStayPropertyChange";
			this->buttonStayPropertyChange->Size = System::Drawing::Size(109, 22);
			this->buttonStayPropertyChange->TabIndex = 28;
			this->buttonStayPropertyChange->Text = L"Zmena trv. pobytu";
			this->buttonStayPropertyChange->UseVisualStyleBackColor = true;
			this->buttonStayPropertyChange->Click += gcnew System::EventHandler(this, &MyForm::buttonStayPropertyChange_Click);
			// 
			// buttonFindCitizen
			// 
			this->buttonFindCitizen->Location = System::Drawing::Point(61, 70);
			this->buttonFindCitizen->Name = L"buttonFindCitizen";
			this->buttonFindCitizen->Size = System::Drawing::Size(50, 22);
			this->buttonFindCitizen->TabIndex = 17;
			this->buttonFindCitizen->Text = L"Hladat";
			this->buttonFindCitizen->UseVisualStyleBackColor = true;
			this->buttonFindCitizen->Click += gcnew System::EventHandler(this, &MyForm::buttonFindCitizen_Click);
			// 
			// buttonAddCitizen
			// 
			this->buttonAddCitizen->Location = System::Drawing::Point(15, 69);
			this->buttonAddCitizen->Name = L"buttonAddCitizen";
			this->buttonAddCitizen->Size = System::Drawing::Size(44, 23);
			this->buttonAddCitizen->TabIndex = 15;
			this->buttonAddCitizen->Text = L"Pridať";
			this->buttonAddCitizen->UseVisualStyleBackColor = true;
			this->buttonAddCitizen->Click += gcnew System::EventHandler(this, &MyForm::buttonAddCitizen_Click);
			// 
			// listViewCitizens
			// 
			this->listViewCitizens->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeaderName,
					this->columnHeaderBornNumber, this->columnHeaderDateOfBorn, this->columnHeaderStayProperty
			});
			this->listViewCitizens->FullRowSelect = true;
			this->listViewCitizens->GridLines = true;
			this->listViewCitizens->Location = System::Drawing::Point(12, 98);
			this->listViewCitizens->Name = L"listViewCitizens";
			this->listViewCitizens->Size = System::Drawing::Size(374, 299);
			this->listViewCitizens->TabIndex = 14;
			this->listViewCitizens->UseCompatibleStateImageBehavior = false;
			this->listViewCitizens->View = System::Windows::Forms::View::Details;
			// 
			// columnHeaderName
			// 
			this->columnHeaderName->Text = L"Meno a Priezvisko";
			this->columnHeaderName->Width = 101;
			// 
			// columnHeaderBornNumber
			// 
			this->columnHeaderBornNumber->Text = L"Rodné číslo";
			this->columnHeaderBornNumber->Width = 84;
			// 
			// columnHeaderDateOfBorn
			// 
			this->columnHeaderDateOfBorn->Text = L"Dátum narodenia";
			this->columnHeaderDateOfBorn->Width = 82;
			// 
			// columnHeaderStayProperty
			// 
			this->columnHeaderStayProperty->Text = L"Trvalý pobyt";
			this->columnHeaderStayProperty->Width = 144;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->labelITitleCitizens);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(12, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(374, 45);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			// 
			// labelITitleCitizens
			// 
			this->labelITitleCitizens->AutoSize = true;
			this->labelITitleCitizens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelITitleCitizens->Location = System::Drawing::Point(6, 8);
			this->labelITitleCitizens->Name = L"labelITitleCitizens";
			this->labelITitleCitizens->Size = System::Drawing::Size(122, 31);
			this->labelITitleCitizens->TabIndex = 2;
			this->labelITitleCitizens->Text = L"Občania";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(6, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 31);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Osoby";
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader3, this->columnHeader4,
					this->columnHeader5
			});
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(12, 99);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(374, 299);
			this->listView2->TabIndex = 2;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Rodné èíslo";
			this->columnHeader3->Width = 115;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Meno";
			this->columnHeader4->Width = 129;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Priezvisko";
			this->columnHeader5->Width = 125;
			// 
			// listView3
			// 
			this->listView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader6, this->columnHeader7,
					this->columnHeader8
			});
			this->listView3->GridLines = true;
			this->listView3->Location = System::Drawing::Point(12, 99);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(374, 299);
			this->listView3->TabIndex = 8;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"ID";
			this->columnHeader6->Width = 115;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Adresa";
			this->columnHeader7->Width = 129;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Popis";
			this->columnHeader8->Width = 125;
			// 
			// groupBoxAddPropertyList
			// 
			this->groupBoxAddPropertyList->Controls->Add(this->buttonNewPLConfirm);
			this->groupBoxAddPropertyList->Controls->Add(this->textBoxNewPLnumberOfNewPL);
			this->groupBoxAddPropertyList->Controls->Add(this->labelNewPLnumberOfNewPL);
			this->groupBoxAddPropertyList->Controls->Add(this->textBoxNewPLnameOfCA);
			this->groupBoxAddPropertyList->Controls->Add(this->labelNameOfCAtasterAreaNewPL);
			this->groupBoxAddPropertyList->Location = System::Drawing::Point(12, 27);
			this->groupBoxAddPropertyList->Name = L"groupBoxAddPropertyList";
			this->groupBoxAddPropertyList->Size = System::Drawing::Size(800, 31);
			this->groupBoxAddPropertyList->TabIndex = 20;
			this->groupBoxAddPropertyList->TabStop = false;
			// 
			// buttonNewPLConfirm
			// 
			this->buttonNewPLConfirm->Location = System::Drawing::Point(605, 9);
			this->buttonNewPLConfirm->Name = L"buttonNewPLConfirm";
			this->buttonNewPLConfirm->Size = System::Drawing::Size(44, 20);
			this->buttonNewPLConfirm->TabIndex = 4;
			this->buttonNewPLConfirm->Text = L"Pridať";
			this->buttonNewPLConfirm->UseVisualStyleBackColor = true;
			this->buttonNewPLConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonNewPLConfirm_Click);
			// 
			// textBoxNewPLnumberOfNewPL
			// 
			this->textBoxNewPLnumberOfNewPL->Location = System::Drawing::Point(484, 9);
			this->textBoxNewPLnumberOfNewPL->Name = L"textBoxNewPLnumberOfNewPL";
			this->textBoxNewPLnumberOfNewPL->Size = System::Drawing::Size(100, 20);
			this->textBoxNewPLnumberOfNewPL->TabIndex = 3;
			// 
			// labelNewPLnumberOfNewPL
			// 
			this->labelNewPLnumberOfNewPL->AutoSize = true;
			this->labelNewPLnumberOfNewPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNewPLnumberOfNewPL->Location = System::Drawing::Point(297, 12);
			this->labelNewPLnumberOfNewPL->Name = L"labelNewPLnumberOfNewPL";
			this->labelNewPLnumberOfNewPL->Size = System::Drawing::Size(181, 13);
			this->labelNewPLnumberOfNewPL->TabIndex = 2;
			this->labelNewPLnumberOfNewPL->Text = L"Číslo nového listu vlastníctva:";
			// 
			// textBoxNewPLnameOfCA
			// 
			this->textBoxNewPLnameOfCA->Location = System::Drawing::Point(184, 9);
			this->textBoxNewPLnameOfCA->Name = L"textBoxNewPLnameOfCA";
			this->textBoxNewPLnameOfCA->Size = System::Drawing::Size(100, 20);
			this->textBoxNewPLnameOfCA->TabIndex = 1;
			// 
			// labelNameOfCAtasterAreaNewPL
			// 
			this->labelNameOfCAtasterAreaNewPL->AutoSize = true;
			this->labelNameOfCAtasterAreaNewPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNameOfCAtasterAreaNewPL->Location = System::Drawing::Point(7, 12);
			this->labelNameOfCAtasterAreaNewPL->Name = L"labelNameOfCAtasterAreaNewPL";
			this->labelNameOfCAtasterAreaNewPL->Size = System::Drawing::Size(171, 13);
			this->labelNameOfCAtasterAreaNewPL->TabIndex = 0;
			this->labelNameOfCAtasterAreaNewPL->Text = L"Názov katastrálneho územia:";
			// 
			// groupBoxAddPropertyToPL
			// 
			this->groupBoxAddPropertyToPL->Controls->Add(this->textBoxNewPtoPLpropertyNumber);
			this->groupBoxAddPropertyToPL->Controls->Add(this->labelNewPtoPLpropertyNumber);
			this->groupBoxAddPropertyToPL->Controls->Add(this->buttonNewPtoPLConfirm);
			this->groupBoxAddPropertyToPL->Controls->Add(this->textBoxNewPtoPLnumberOfPL);
			this->groupBoxAddPropertyToPL->Controls->Add(this->labelNewPropertyToPLNumberOfPL);
			this->groupBoxAddPropertyToPL->Controls->Add(this->textBoxNewPropertyToPLcatasterNumber);
			this->groupBoxAddPropertyToPL->Controls->Add(this->labelNewPropertyToPLCAname);
			this->groupBoxAddPropertyToPL->Location = System::Drawing::Point(12, 27);
			this->groupBoxAddPropertyToPL->Name = L"groupBoxAddPropertyToPL";
			this->groupBoxAddPropertyToPL->Size = System::Drawing::Size(800, 31);
			this->groupBoxAddPropertyToPL->TabIndex = 21;
			this->groupBoxAddPropertyToPL->TabStop = false;
			// 
			// textBoxNewPtoPLpropertyNumber
			// 
			this->textBoxNewPtoPLpropertyNumber->Location = System::Drawing::Point(633, 10);
			this->textBoxNewPtoPLpropertyNumber->Name = L"textBoxNewPtoPLpropertyNumber";
			this->textBoxNewPtoPLpropertyNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxNewPtoPLpropertyNumber->TabIndex = 6;
			// 
			// labelNewPtoPLpropertyNumber
			// 
			this->labelNewPtoPLpropertyNumber->AutoSize = true;
			this->labelNewPtoPLpropertyNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNewPtoPLpropertyNumber->Location = System::Drawing::Point(544, 13);
			this->labelNewPtoPLpropertyNumber->Name = L"labelNewPtoPLpropertyNumber";
			this->labelNewPtoPLpropertyNumber->Size = System::Drawing::Size(84, 13);
			this->labelNewPtoPLpropertyNumber->TabIndex = 5;
			this->labelNewPtoPLpropertyNumber->Text = L"Súpisné číslo";
			// 
			// buttonNewPtoPLConfirm
			// 
			this->buttonNewPtoPLConfirm->Location = System::Drawing::Point(750, 9);
			this->buttonNewPtoPLConfirm->Name = L"buttonNewPtoPLConfirm";
			this->buttonNewPtoPLConfirm->Size = System::Drawing::Size(44, 20);
			this->buttonNewPtoPLConfirm->TabIndex = 4;
			this->buttonNewPtoPLConfirm->Text = L"Pridať";
			this->buttonNewPtoPLConfirm->UseVisualStyleBackColor = true;
			this->buttonNewPtoPLConfirm->Click += gcnew System::EventHandler(this, &MyForm::buttonNewPtoPLConfirm_Click);
			// 
			// textBoxNewPtoPLnumberOfPL
			// 
			this->textBoxNewPtoPLnumberOfPL->Location = System::Drawing::Point(438, 9);
			this->textBoxNewPtoPLnumberOfPL->Name = L"textBoxNewPtoPLnumberOfPL";
			this->textBoxNewPtoPLnumberOfPL->Size = System::Drawing::Size(100, 20);
			this->textBoxNewPtoPLnumberOfPL->TabIndex = 3;
			// 
			// labelNewPropertyToPLNumberOfPL
			// 
			this->labelNewPropertyToPLNumberOfPL->AutoSize = true;
			this->labelNewPropertyToPLNumberOfPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNewPropertyToPLNumberOfPL->Location = System::Drawing::Point(297, 12);
			this->labelNewPropertyToPLNumberOfPL->Name = L"labelNewPropertyToPLNumberOfPL";
			this->labelNewPropertyToPLNumberOfPL->Size = System::Drawing::Size(135, 13);
			this->labelNewPropertyToPLNumberOfPL->TabIndex = 2;
			this->labelNewPropertyToPLNumberOfPL->Text = L"Číslo listu vlastníctva:";
			// 
			// textBoxNewPropertyToPLcatasterNumber
			// 
			this->textBoxNewPropertyToPLcatasterNumber->Location = System::Drawing::Point(184, 9);
			this->textBoxNewPropertyToPLcatasterNumber->Name = L"textBoxNewPropertyToPLcatasterNumber";
			this->textBoxNewPropertyToPLcatasterNumber->Size = System::Drawing::Size(100, 20);
			this->textBoxNewPropertyToPLcatasterNumber->TabIndex = 1;
			// 
			// labelNewPropertyToPLCAname
			// 
			this->labelNewPropertyToPLCAname->AutoSize = true;
			this->labelNewPropertyToPLCAname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelNewPropertyToPLCAname->Location = System::Drawing::Point(7, 12);
			this->labelNewPropertyToPLCAname->Name = L"labelNewPropertyToPLCAname";
			this->labelNewPropertyToPLCAname->Size = System::Drawing::Size(164, 13);
			this->labelNewPropertyToPLCAname->TabIndex = 0;
			this->labelNewPropertyToPLCAname->Text = L"Číslo katastrálneho územia:";
			// 
			// groupBoxAddOwnerPart1
			// 
			this->groupBoxAddOwnerPart1->Controls->Add(this->textBoxAddPartPart);
			this->groupBoxAddOwnerPart1->Controls->Add(this->labelPart);
			this->groupBoxAddOwnerPart1->Controls->Add(this->textBoxAddPartBornNumber);
			this->groupBoxAddOwnerPart1->Controls->Add(this->labelAddPartBornNumber);
			this->groupBoxAddOwnerPart1->Controls->Add(this->buttonAddPartConfirm);
			this->groupBoxAddOwnerPart1->Controls->Add(this->textBoxAddPartNumberPL);
			this->groupBoxAddOwnerPart1->Controls->Add(this->labelAddPartnumberPL);
			this->groupBoxAddOwnerPart1->Controls->Add(this->textBoxAddPartNumberCA);
			this->groupBoxAddOwnerPart1->Controls->Add(this->labelAddPartNumbeCA);
			this->groupBoxAddOwnerPart1->Location = System::Drawing::Point(12, 26);
			this->groupBoxAddOwnerPart1->Name = L"groupBoxAddOwnerPart1";
			this->groupBoxAddOwnerPart1->Size = System::Drawing::Size(800, 31);
			this->groupBoxAddOwnerPart1->TabIndex = 22;
			this->groupBoxAddOwnerPart1->TabStop = false;
			// 
			// textBoxAddPartPart
			// 
			this->textBoxAddPartPart->Location = System::Drawing::Point(673, 10);
			this->textBoxAddPartPart->Name = L"textBoxAddPartPart";
			this->textBoxAddPartPart->Size = System::Drawing::Size(48, 20);
			this->textBoxAddPartPart->TabIndex = 8;
			// 
			// labelPart
			// 
			this->labelPart->AutoSize = true;
			this->labelPart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPart->Location = System::Drawing::Point(621, 14);
			this->labelPart->Name = L"labelPart";
			this->labelPart->Size = System::Drawing::Size(46, 13);
			this->labelPart->TabIndex = 7;
			this->labelPart->Text = L"Podiel:";
			// 
			// textBoxAddPartBornNumber
			// 
			this->textBoxAddPartBornNumber->Location = System::Drawing::Point(533, 11);
			this->textBoxAddPartBornNumber->Name = L"textBoxAddPartBornNumber";
			this->textBoxAddPartBornNumber->Size = System::Drawing::Size(82, 20);
			this->textBoxAddPartBornNumber->TabIndex = 6;
			// 
			// labelAddPartBornNumber
			// 
			this->labelAddPartBornNumber->AutoSize = true;
			this->labelAddPartBornNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddPartBornNumber->Location = System::Drawing::Point(447, 15);
			this->labelAddPartBornNumber->Name = L"labelAddPartBornNumber";
			this->labelAddPartBornNumber->Size = System::Drawing::Size(80, 13);
			this->labelAddPartBornNumber->TabIndex = 5;
			this->labelAddPartBornNumber->Text = L"Rodné číslo:";
			// 
			// buttonAddPartConfirm
			// 
			this->buttonAddPartConfirm->Location = System::Drawing::Point(750, 9);
			this->buttonAddPartConfirm->Name = L"buttonAddPartConfirm";
			this->buttonAddPartConfirm->Size = System::Drawing::Size(44, 20);
			this->buttonAddPartConfirm->TabIndex = 4;
			this->buttonAddPartConfirm->Text = L"Pridať";
			this->buttonAddPartConfirm->UseVisualStyleBackColor = true;
			this->buttonAddPartConfirm->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// textBoxAddPartNumberPL
			// 
			this->textBoxAddPartNumberPL->Location = System::Drawing::Point(373, 10);
			this->textBoxAddPartNumberPL->Name = L"textBoxAddPartNumberPL";
			this->textBoxAddPartNumberPL->Size = System::Drawing::Size(68, 20);
			this->textBoxAddPartNumberPL->TabIndex = 3;
			// 
			// labelAddPartnumberPL
			// 
			this->labelAddPartnumberPL->AutoSize = true;
			this->labelAddPartnumberPL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddPartnumberPL->Location = System::Drawing::Point(232, 13);
			this->labelAddPartnumberPL->Name = L"labelAddPartnumberPL";
			this->labelAddPartnumberPL->Size = System::Drawing::Size(135, 13);
			this->labelAddPartnumberPL->TabIndex = 2;
			this->labelAddPartnumberPL->Text = L"Číslo listu vlastníctva:";
			// 
			// textBoxAddPartNumberCA
			// 
			this->textBoxAddPartNumberCA->Location = System::Drawing::Point(167, 9);
			this->textBoxAddPartNumberCA->Name = L"textBoxAddPartNumberCA";
			this->textBoxAddPartNumberCA->Size = System::Drawing::Size(59, 20);
			this->textBoxAddPartNumberCA->TabIndex = 1;
			// 
			// labelAddPartNumbeCA
			// 
			this->labelAddPartNumbeCA->AutoSize = true;
			this->labelAddPartNumbeCA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddPartNumbeCA->Location = System::Drawing::Point(7, 12);
			this->labelAddPartNumbeCA->Name = L"labelAddPartNumbeCA";
			this->labelAddPartNumbeCA->Size = System::Drawing::Size(164, 13);
			this->labelAddPartNumbeCA->TabIndex = 0;
			this->labelAddPartNumbeCA->Text = L"Číslo katastrálneho územia:";
			// 
			// buttonImport
			// 
			this->buttonImport->Location = System::Drawing::Point(747, 1);
			this->buttonImport->Name = L"buttonImport";
			this->buttonImport->Size = System::Drawing::Size(71, 23);
			this->buttonImport->TabIndex = 23;
			this->buttonImport->Text = L"Import";
			this->buttonImport->UseVisualStyleBackColor = true;
			this->buttonImport->Click += gcnew System::EventHandler(this, &MyForm::buttonImport_Click_1);
			// 
			// buttonExport
			// 
			this->buttonExport->Location = System::Drawing::Point(824, 0);
			this->buttonExport->Name = L"buttonExport";
			this->buttonExport->Size = System::Drawing::Size(71, 23);
			this->buttonExport->TabIndex = 24;
			this->buttonExport->Text = L"Export";
			this->buttonExport->UseVisualStyleBackColor = true;
			this->buttonExport->Click += gcnew System::EventHandler(this, &MyForm::buttonExport_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 607);
			this->Controls->Add(this->groupBoxGenerate);
			this->Controls->Add(this->buttonExport);
			this->Controls->Add(this->buttonGenerateData);
			this->Controls->Add(this->groupBoxAddOwnerPart1);
			this->Controls->Add(this->groupBoxCitizens);
			this->Controls->Add(this->groupBoxCU);
			this->Controls->Add(this->groupBoxAddPropertyToPL);
			this->Controls->Add(this->buttonImport);
			this->Controls->Add(this->groupBoxAddPropertyList);
			this->Controls->Add(this->groupBoxPropweries);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBoxLabelCA->ResumeLayout(false);
			this->groupBoxLabelCA->PerformLayout();
			this->groupBoxPersons->ResumeLayout(false);
			this->groupBoxPersons->PerformLayout();
			this->groupBoxAddNewCa->ResumeLayout(false);
			this->groupBoxAddNewCa->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxCU->ResumeLayout(false);
			this->groupBoxDeleteCa->ResumeLayout(false);
			this->groupBoxDeleteCa->PerformLayout();
			this->groupBoxPropweries->ResumeLayout(false);
			this->groupBoxDeletePL->ResumeLayout(false);
			this->groupBoxDeletePL->PerformLayout();
			this->groupBoxDeletePart->ResumeLayout(false);
			this->groupBoxDeletePart->PerformLayout();
			this->groupBoxOwnerChange->ResumeLayout(false);
			this->groupBoxOwnerChange->PerformLayout();
			this->groupBoxCitizenProperties->ResumeLayout(false);
			this->groupBoxCitizenProperties->PerformLayout();
			this->groupBoxCatasterAreaProperties->ResumeLayout(false);
			this->groupBoxCatasterAreaProperties->PerformLayout();
			this->groupBoxFindProperty->ResumeLayout(false);
			this->groupBoxFindProperty->PerformLayout();
			this->groupBoxFindPropertyList->ResumeLayout(false);
			this->groupBoxFindPropertyList->PerformLayout();
			this->groupBoxAllCitizenproperties->ResumeLayout(false);
			this->groupBoxAllCitizenproperties->PerformLayout();
			this->groupBoxDeletePropertyFromPL->ResumeLayout(false);
			this->groupBoxDeletePropertyFromPL->PerformLayout();
			this->groupBoxGenerate->ResumeLayout(false);
			this->groupBoxGenerate->PerformLayout();
			this->groupBoxCitizens->ResumeLayout(false);
			this->groupBoxAddCitizen->ResumeLayout(false);
			this->groupBoxAddCitizen->PerformLayout();
			this->groupBoxFindCitizen->ResumeLayout(false);
			this->groupBoxFindCitizen->PerformLayout();
			this->groupBoxSPAC->ResumeLayout(false);
			this->groupBoxSPAC->PerformLayout();
			this->groupBoxSPropertyChange->ResumeLayout(false);
			this->groupBoxSPropertyChange->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBoxAddPropertyList->ResumeLayout(false);
			this->groupBoxAddPropertyList->PerformLayout();
			this->groupBoxAddPropertyToPL->ResumeLayout(false);
			this->groupBoxAddPropertyToPL->PerformLayout();
			this->groupBoxAddOwnerPart1->ResumeLayout(false);
			this->groupBoxAddOwnerPart1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		mainSystem = new MainSystem();

		groupBoxGenerate->Hide();
		groupBoxDeleteCa->Show();
		groupBoxSPAC->Hide();
		groupBoxFindPropertyList->Hide();
		groupBoxAllCitizenproperties->Hide();
		groupBoxSPropertyChange->Hide();
		groupBoxOwnerChange->Hide();
		groupBoxDeletePart->Hide();
		groupBoxDeletePL->Hide();
		groupBoxCatasterAreaProperties->Hide();
		groupBoxCitizenProperties->Hide();
		groupBoxFindCitizen->Hide();
		groupBoxAddNewCa->Hide();
		groupBoxCitizens->Hide();
		groupBoxAddCitizen->Hide();
		groupBoxDeletePropertyFromPL->Hide();
		groupBoxAddOwnerPart1->Hide();
		groupBoxAddPropertyList->Hide();
		groupBoxAddPropertyToPL->Hide();
		groupBoxPropweries->Hide();
		groupBoxCU->Hide();
		
		labelProperties->Hide();
		labelTitlePersons->Hide();

		buttonSearchCA_NA->Hide();

		listViewCitizenProperties->Hide();
		listViewProperties->Hide();

		menuStrip1->Hide();

		
	}
private: System::Void buttonImport_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBoxCatasterArea_NA_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonSearchCA_NA_Click(System::Object^  sender, System::EventArgs^  e) {
	listViewCitizenProperties->Hide();
	listViewProperties->Show();
	listViewProperties->Items->Clear();
	printProperties_CA_NA();
}
private: System::Void buttonAddCatasterArea_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void buttonConfirmAddCA_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxNameOfNewCA->Text->Length != 0 && textBoxNumberOfNewCA->Text->Length != 0) {
		std::string nameCA = msclr::interop::marshal_as<std::string>(textBoxNameOfNewCA->Text);
		int numberCA = stoi(msclr::interop::marshal_as<std::string>(textBoxNumberOfNewCA->Text));
		if (mainSystem->AddNewCatasterArea(numberCA, nameCA) == true) {
			System::Windows::Forms::MessageBox::Show("Pridanie prebehlo úspešne.");
			listViewKU->Items->Clear();
			printCatasterAreas();
			groupBoxAddNewCa->Hide();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zadané katastrálne územie už existuje.");
			groupBoxAddNewCa->Hide();
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené obe polia.");
	}
}
private: System::Void toolStripButtonAddCa_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDeleteCa->Hide();
	groupBoxAddNewCa->Show();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void importToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	

}
private: System::Void menustripbuttonCA_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxCitizens->Hide();
	groupBoxPropweries->Show();
	groupBoxCU->Show();
	listViewKU->Items->Clear();
	printCatasterAreas();

	labelProperties->Show();
	labelNameOfCatasterArea->Show();
	textBoxCatasterArea_NA->Show();
	buttonSearchCA_NA->Show();
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxBornNumber->Text->Length != 0 && textBoxNumberCA->Text->Length != 0) {
		listViewProperties->Hide();
		listViewCitizenProperties->Show();
		labelProperties->Hide();
		labelTitlePersons->Show();
		listViewCitizenProperties->Items->Clear();
		printCitizenProperties();

	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené obe polia.");
	}
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBoxStayProperty_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelStayProperty_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void občaniaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	listViewCitizens->Items->Clear();
	printCitizens();
	groupBoxCitizens->Show();
	groupBoxPropweries->Hide();
	groupBoxCU->Hide();
}
private: System::Void buttonAddCitizen_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxSPAC->Hide();
	groupBoxSPropertyChange->Hide();
	groupBoxFindCitizen->Hide();
	groupBoxAddCitizen->Show();
}
private: System::Void buttonConfirmAddCitizen_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxNewName->Text->Length > 0 && textBoxDateOfRorn->Text->Length > 0 && textBoxNewBornNumber->Text->Length > 0) {
		std::string newName = msclr::interop::marshal_as<std::string>(textBoxNewName->Text);
		std::string newBornuNumber = msclr::interop::marshal_as<std::string>(textBoxNewBornNumber->Text);
		int day = stoi(msclr::interop::marshal_as<std::string>(textBoxDateOfRorn->Text).substr(0,2));
		int mounth = stoi(msclr::interop::marshal_as<std::string>(textBoxDateOfRorn->Text).substr(2, 2));
		int year = stoi(msclr::interop::marshal_as<std::string>(textBoxDateOfRorn->Text).substr(4, 4));
		tm newDateOfBorn;
		newDateOfBorn.tm_mday = day;
		newDateOfBorn.tm_mon = mounth;
		newDateOfBorn.tm_year= year;

		std::string propertyNumber = msclr::interop::marshal_as<std::string>(textBoxNewStayProperty->Text);
		std::string CAName = msclr::interop::marshal_as<std::string>(textBoxNewNameCa->Text);

		if (textBoxNewStayProperty->Text->Length > 0 && textBoxNewNameCa->Text->Length > 0) {
			if (mainSystem->getCatasterAreas_NA()->tryFind(CAName) != nullptr && mainSystem->getCatasterAreas_NA()->tryFind(CAName)->getPropetries()->tryFind(stoi(propertyNumber)) != nullptr) {
				Property *newProperty = mainSystem->getCatasterAreas_NA()->tryFind(CAName)->getPropetries()->tryFind(stoi(propertyNumber));
				if (mainSystem->addNewCitizen(newName, newBornuNumber, newDateOfBorn, newProperty,CAName,propertyNumber) == true) {
					System::Windows::Forms::MessageBox::Show("Pridanie občana prebehlo úspešne.");
				}
				else {
					System::Windows::Forms::MessageBox::Show("Nepodarilo sa pridať občana.");
				}
			}
			else {
				System::Windows::Forms::MessageBox::Show("Zadaná nehnuteľnosť v zadanom katastrálnom území neexistuje.");
			}
		}
		else {
			if(mainSystem->addNewCitizen(newName, newBornuNumber, newDateOfBorn, nullptr, CAName, propertyNumber) == true){
			System::Windows::Forms::MessageBox::Show("Pridanie občana prebehlo úspešne.");
		}
	else {
		System::Windows::Forms::MessageBox::Show("Nepodarilo sa pridať občana.");
	}
		}
		
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené prvé tri polia.");
	}

	listViewCitizens->Items->Clear();
	printCitizens();
	groupBoxAddCitizen->Hide();
}
private: System::Void buttonNewPLConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxNewPLnameOfCA->Text->Length > 0 && textBoxNewPLnumberOfNewPL->Text->Length > 0) {
		std::string CAName = msclr::interop::marshal_as<std::string>(textBoxNewPLnameOfCA->Text);
		std::string numberOfPL = msclr::interop::marshal_as<std::string>(textBoxNewPLnumberOfNewPL->Text);

		if (mainSystem->addNewPropertyList(CAName, stoi(numberOfPL)) == true) {
			System::Windows::Forms::MessageBox::Show("Pridanie bolo úspešné.");
		}
		else {
			
			System::Windows::Forms::MessageBox::Show("Pridanie sa nezdarilo.");
		}
	}
	else {
			System::Windows::Forms::MessageBox::Show("Musia by vyplnené obe polia.");
	}

	groupBoxAddPropertyList->Hide();
	textBoxNewPLnameOfCA->Clear();

	textBoxNewPLnameOfCA->Text->Length;
	textBoxNewPLnameOfCA->Text->Length;
	textBoxNewPLnameOfCA->Text->Length;
	textBoxNewPLnumberOfNewPL->Clear();
}
private: System::Void listVlastníctvaDoKUToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxAddOwnerPart1->Hide();
	groupBoxAddPropertyToPL->Hide();
	groupBoxAddPropertyList->Show();
}
private: System::Void buttonNewPtoPLConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxNewPropertyToPLcatasterNumber->Text->Length > 0 && textBoxNewPtoPLnumberOfPL->Text->Length > 0 && textBoxNewPtoPLpropertyNumber->Text->Length > 0) {
		int cAnumber = stoi(msclr::interop::marshal_as<std::string>(textBoxNewPropertyToPLcatasterNumber->Text));
		int pLNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxNewPtoPLnumberOfPL->Text));
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxNewPtoPLpropertyNumber->Text));

		if (mainSystem->addPropertyToPL(cAnumber, pLNumber, propertyNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Pridanie bolo úspešné.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Pridanie sa nezdarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}

	groupBoxAddPropertyToPL->Hide();

}
private: System::Void nehnueľnosťDoListuVlstníctvaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxAddPropertyList->Hide();
	groupBoxAddOwnerPart1->Hide();
	groupBoxAddPropertyToPL->Show();
}
private: System::Void majetkovýPodielToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxAddPropertyList->Hide();
	groupBoxAddPropertyToPL->Hide();
	groupBoxAddOwnerPart1->Show();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxAddPartNumberCA->Text->Length > 0 && textBoxAddPartNumberPL->Text->Length > 0 && textBoxAddPartBornNumber->Text->Length > 0 && textBoxAddPartPart->Text->Length > 0) {
		int cAnumber = stoi(msclr::interop::marshal_as<std::string>(textBoxAddPartNumberCA->Text));
		int pLNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxAddPartNumberPL->Text));
		std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxAddPartBornNumber->Text);
		double part = stod(msclr::interop::marshal_as<std::string>(textBoxAddPartPart->Text));

		if (mainSystem->addPart(cAnumber, pLNumber, bornNumber, part) == true) {
			System::Windows::Forms::MessageBox::Show("Pridanie bolo úspešné.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Pridanie sa nezdarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
	groupBoxAddOwnerPart1->Hide();
}
private: System::Void buttonImport_Click_1(System::Object^  sender, System::EventArgs^  e) {
	mainSystem->importData();
	mainSystem->importData2();
	mainSystem->importData3();
	std::vector<CatasterArea> *vectorCA = new std::vector<CatasterArea>;

	menuStrip1->Show();

	System::Windows::Forms::MessageBox::Show("Import prebehol úspešne.");

	buttonImport->Hide();
}
private: System::Void buttonFindCitizen_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxSPAC->Hide();
	groupBoxSPropertyChange->Hide();
	groupBoxAddCitizen->Hide();
	groupBoxFindCitizen->Show();
}
private: System::Void buttonFindCitizenFind_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxFindCitizenBornNumber->Text->Length > 0) {
		std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxFindCitizenBornNumber->Text);
		if (mainSystem->findCitizen(bornNumber) != nullptr) {
			listViewCitizens->Items->Clear();
			Citizen * citizen = mainSystem->findCitizen(bornNumber);
		
				ListViewItem^ item = gcnew ListViewItem();

				std::string name = citizen->getNameLastName();
				item->Text = gcnew String(name.c_str());
				item->SubItems->Add("");

				std::string bornNumber = citizen->getIdNumber();
				item->SubItems[1]->Text = gcnew String(bornNumber.c_str());
				item->SubItems->Add("");

				std::string dateOfBorn = std::to_string(citizen->getDateOfBorn().tm_mday) + ". " + std::to_string(citizen->getDateOfBorn().tm_mon) + ". " + std::to_string(citizen->getDateOfBorn().tm_year);
				item->SubItems[2]->Text = gcnew String(dateOfBorn.c_str());
				item->SubItems->Add("");

				std::string adress;
				if (citizen->getStayProperty() != nullptr) {
					adress = std::to_string(citizen->getStayProperty()->getId()) + " , " + citizen->getStayProperty()->getAdress() + " , " + citizen->getStayProperty()->getDescription();
				}
				else {
					adress = "-";
				}
				item->SubItems[3]->Text = gcnew String(adress.c_str());
				item->SubItems->Add("");
				listViewCitizens->Items->Add(item);
			
			
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zadany obcan neexistuje.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}

	groupBoxFindCitizen->Hide();
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxBornNumber_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void labelBornNumber_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click_2(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxDeletePart->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxCitizenProperties->Show();
	listViewCitizenProperties->Show();
	listViewProperties->Hide();

}
private: System::Void buttonPropertiesInCA_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxDeletePart->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Show();
	listViewProperties->Show();
}

private: System::Void buttonFindCitizenPropertyFind_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxCatasterArea_NA->Text->Length > 0 && textBoxFindPropertyPropertyNumber->Text->Length > 0) {
		std::string catasterAreaName = msclr::interop::marshal_as<std::string>(textBoxCatasterArea_NA->Text);
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFindPropertyPropertyNumber->Text));

		Property *fProperty = mainSystem->findProperty(catasterAreaName, propertyNumber);
		if (fProperty != nullptr) {
			PropertyList *fPropertyList = mainSystem->findPropertyList(catasterAreaName, fProperty->getPropertyListNumber());

			if (fPropertyList != nullptr) {
				int propertyNumber = fProperty->getId();
				std::string adress = fProperty->getAdress();
				std::string description = fProperty->getDescription();
				int propertyListNumber = fPropertyList->getPropertyListNumber();
				std::string propertyListCA = fPropertyList->getNameOfCA();

				Realty^ propertyInfo = gcnew(Realty);
				propertyInfo->printPropertyInfo(propertyNumber, adress, description, propertyListNumber, propertyListCA, fPropertyList->getPropertiesInPropertyList(), fPropertyList->getParts());
				propertyInfo->ShowDialog();
			}
			else {
				System::Windows::Forms::MessageBox::Show("List vlastnictva neexistuje.");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Nehnutelnost neexistuje.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musite vyplnit nazov katastralneho uzemia a supisne cislo.");
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxDeletePart->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePropertyFromPL->Show();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();	
}
private: System::Void buttonDeletePropertyFromPLConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxDeletePropertyFromPLcANumber->Text->Length > 0 && textBoxDeletePropertyFromPLnumberPL->Text->Length > 0 && textBoxDeletePropertyFromPLpropertyNumber->Text->Length > 0) {
		int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePropertyFromPLcANumber->Text));
		int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePropertyFromPLnumberPL->Text));
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePropertyFromPLpropertyNumber->Text));

		if (mainSystem->removePropertyFromPL(propertyNumber, propertyListNumber, catasterAreaNumber) == true){
			System::Windows::Forms::MessageBox::Show("Zmazanie prebehlo uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmazanie sa nepodarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
}
private: System::Void buttonDeletePL_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxDeletePart->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxDeletePL->Show();
}
private: System::Void buttonDeletePLConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxDeletePLcANumber->Text->Length > 0 && textBoxDeletePLnewPL->Text->Length > 0 && textBoxDeletePLnumberPL->Text->Length > 0) {
		int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePLcANumber->Text));
		int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePLnumberPL->Text));
		int newPropertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePLnewPL->Text));

		if (mainSystem->removePropertyList(propertyListNumber, catasterAreaNumber, newPropertyListNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Zmazanie prebehlo uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmazanie sa nepodarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
}
private: System::Void buttonDeletePart_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePart->Show();
}
private: System::Void buttonDeletePartConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxDeletePartCaNumber->Text->Length > 0 && textBoxDeletePartPLnumber->Text->Length > 0 && textBoxDeletePartBornNumber->Text->Length > 0) {
		int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePartCaNumber->Text));
		int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeletePartPLnumber->Text));
		std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxDeletePartBornNumber->Text);

		if (mainSystem->removePart(bornNumber, propertyListNumber, catasterAreaNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Zmazanie prebehlo uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmazanie sa nepodarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
}
private: System::Void buttonOwnerChange_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxFindPropertyList->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePart->Hide();
	groupBoxOwnerChange->Show();
}
private: System::Void buttonOwnerChangeConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxOwnerChangeCaNumber->Text));
	int property = stoi(msclr::interop::marshal_as<std::string>(textBoxOwnerChangePropertyNumber->Text));
	std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxOwnerChangeBornNumber ->Text);	
	std::string newBornNumber = msclr::interop::marshal_as<std::string>(textBoxOwnerChangeNewBornNumber->Text);

	if (textBoxOwnerChangeCaNumber->Text->Length > 0 && textBoxOwnerChangePropertyNumber->Text->Length > 0 && textBoxOwnerChangeBornNumber->Text->Length > 0 && textBoxOwnerChangeNewBornNumber->Text->Length > 0) {
		if (mainSystem->ownerChange(bornNumber, newBornNumber, property, catasterAreaNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Zmena prebehla uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmena sa nepodarila.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}

}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void buttonStayPropertyChange_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxSPAC->Hide();
	groupBoxAddCitizen->Hide();
	groupBoxFindCitizen->Hide();
	groupBoxSPropertyChange->Show();
}
private: System::Void buttonSPropertyChangeConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxlSPropertyChangePropertyNumber->Text->Length > 0 && textBoxSPropertyChangeCaName->Text->Length > 0 && textBoxSPropertyChangeBornuNumber->Text->Length > 0) {

		int property = stoi(msclr::interop::marshal_as<std::string>(textBoxlSPropertyChangePropertyNumber->Text));
		std::string catAName = msclr::interop::marshal_as<std::string>(textBoxSPropertyChangeCaName->Text);
		std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxSPropertyChangeBornuNumber->Text);

		if (mainSystem->stayPropertyChange(bornNumber, property, catAName) == true) {
			System::Windows::Forms::MessageBox::Show("Zmena prebehla uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmena sa nepodarila.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
}
private: System::Void buttonAllCitizenProeprties_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxAllCitizenproperties->Show();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePart->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxFindPropertyList->Hide();
	listViewCitizenProperties->Show();
	listViewProperties->Hide();
}
private: System::Void buttonAllCitizenPropertiesConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxAllCitizenPropertiesBornNumber->Text->Length != 0) {
		listViewProperties->Hide();
		listViewCitizenProperties->Show();
		listViewCitizenProperties->Items->Clear();
		printAllCitizenProperties();

	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené obe polia.");
	}
}
private: System::Void buttonFindPropertyList_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Hide();
	groupBoxAllCitizenproperties->Hide();
	groupBoxDeletePropertyFromPL->Hide();
	groupBoxCitizenProperties->Hide();
	groupBoxCatasterAreaProperties->Hide();
	groupBoxDeletePL->Hide();
	groupBoxDeletePart->Hide();
	groupBoxOwnerChange->Hide();
	groupBoxFindPropertyList->Show();
}
private: System::Void buttonFindProperyListCaName_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string catasterAreaName = msclr::interop::marshal_as<std::string>(textBoxFindPropertyListNameCa->Text);
	int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFinPropertyListPLNumber->Text));

		PropertyList *fPropertyList = mainSystem->findPropertyList(catasterAreaName, propertyListNumber);

		if (fPropertyList != nullptr) {
			int propertyListNumber = fPropertyList->getPropertyListNumber();
			std::string propertyListCA = fPropertyList->getNameOfCA();

			Realty^ propertyInfo = gcnew(Realty);
			propertyInfo->printPropertyListInfo(propertyListNumber, propertyListCA, fPropertyList->getPropertiesInPropertyList(), fPropertyList->getParts());
			propertyInfo->ShowDialog();
		}
		else {
			System::Windows::Forms::MessageBox::Show("List vlastnictva neexistuje.");
		}
	

}
private: System::Void buttonFindPropertyListCaNumber_Click(System::Object^  sender, System::EventArgs^  e) {
	int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFindPropertyListNumberCa->Text));
	int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFinPropertyListPLNumber->Text));

	PropertyList *fPropertyList = mainSystem->findPropertyListCaNumber(catasterAreaNumber, propertyListNumber);

	if (fPropertyList != nullptr) {
		int propertyListNumber = fPropertyList->getPropertyListNumber();
		std::string propertyListCA = fPropertyList->getNameOfCA();

		Realty^ propertyInfo = gcnew(Realty);
		propertyInfo->printPropertyListInfo(propertyListNumber, propertyListCA, fPropertyList->getPropertiesInPropertyList(), fPropertyList->getParts());
		propertyInfo->ShowDialog();
	}
	else {
		System::Windows::Forms::MessageBox::Show("List vlastnictva neexistuje.");
	}

}
private: System::Void labelNameOfCatasterArea_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxFindPropertyCaNumber->Text->Length > 0 && textBoxFindPropertyPropertyNumber->Text->Length > 0) {
		int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFindPropertyCaNumber->Text));
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxFindPropertyPropertyNumber->Text));

		Property *fProperty = mainSystem->findPropertyCaNumber(catasterAreaNumber, propertyNumber);
		if (fProperty != nullptr) {
			PropertyList *fPropertyList = mainSystem->findPropertyListCaNumber(catasterAreaNumber, fProperty->getPropertyListNumber());

			if (fPropertyList != nullptr) {
				int propertyNumber = fProperty->getId();
				std::string adress = fProperty->getAdress();
				std::string description = fProperty->getDescription();
				int propertyListNumber = fPropertyList->getPropertyListNumber();
				std::string propertyListCA = fPropertyList->getNameOfCA();

				Realty^ propertyInfo = gcnew(Realty);
				propertyInfo->printPropertyInfo(propertyNumber, adress, description, propertyListNumber, propertyListCA, fPropertyList->getPropertiesInPropertyList(), fPropertyList->getParts());
				propertyInfo->ShowDialog();
			}
			else {
				System::Windows::Forms::MessageBox::Show("List vlastnictva neexistuje.");
			}
		}
		else {
			System::Windows::Forms::MessageBox::Show("Nehnutelnost neexistuje.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musite vyplnit cislo katastralnehu uzemia a supisne cislo.");
	}
}
private: System::Void buttonStayPropertyOfAllCitizen_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxAddCitizen->Hide();
	groupBoxFindCitizen->Hide();
	groupBoxSPropertyChange->Hide();
	groupBoxSPAC->Show();
}
private: System::Void buttonSPACconfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxSPACcAnumber->Text->Length > 0 && textBoxSPACpropertyNumber->Text->Length > 0 && textBoxSPACpropertyList->Text->Length > 0) {
		int catasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxSPACcAnumber->Text));
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxSPACpropertyNumber->Text));
		int propertyListNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxSPACpropertyList->Text));

		if (mainSystem->findPropertyCaNumber2(catasterAreaNumber, propertyListNumber, propertyNumber) != nullptr) {
			Property *prop = mainSystem->findPropertyCaNumber2(catasterAreaNumber, propertyListNumber, propertyNumber);
			printStayPropertyCitizens(prop);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Nehnutelnost neexistuje.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
	
}
private: System::Void buttonDeleteCa_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxAddNewCa->Hide();
	groupBoxDeleteCa->Show();
}
private: System::Void buttonDeleteCaConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxDeleteCaDelCaNumber->Text->Length > 0 && textBoxDeleteCaNewCaNumber->Text->Length > 0) {
		int deleteCatasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeleteCaDelCaNumber->Text));
		int newCatasterAreaNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxDeleteCaNewCaNumber->Text));

		if (mainSystem->deleteCatasterArea(deleteCatasterAreaNumber, newCatasterAreaNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Zmazanie bolo uspesne.");
		}
		else {
			System::Windows::Forms::MessageBox::Show("Zmazanie sa nezdarilo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}
}
private: System::Void buttonExport_Click(System::Object^  sender, System::EventArgs^  e) {
	mainSystem->exportData();
	mainSystem->exportData2();
	mainSystem->exportData3();
}
private: System::Void buttonGenerateData_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxGenerate->Show();
	groupBoxAddOwnerPart1->Hide();
	groupBoxAddPropertyToPL->Hide();
	groupBoxAddPropertyList->Hide();
}
private: System::Void buttonGenerateConfirm_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBoxGenereateCA->Text->Length > 0 && textBoxGenerateProperty->Text->Length > 0 && textBoxGeneratePL->Text->Length > 0 && textBoxGenerateCitizen->Text->Length > 0) {
		int cAnumber = stoi(msclr::interop::marshal_as<std::string>(textBoxGenereateCA->Text));
		int propertyNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxGenerateProperty->Text));
		int propertylistsNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxGeneratePL->Text));
		int citizenNumber = stoi(msclr::interop::marshal_as<std::string>(textBoxGenerateCitizen->Text));

		if (mainSystem->generateData(cAnumber, propertyNumber, propertylistsNumber, citizenNumber) == true) {
			System::Windows::Forms::MessageBox::Show("Generovanie sa podarilo.");		
			groupBoxGenerate->Hide();
		}
		else {
			System::Windows::Forms::MessageBox::Show("Generovanie zlyhalo.");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Musia by vyplnené všetky polia.");
	}

}
};
}
