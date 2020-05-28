#include "Realty.h"

void AUS2___SemUdaj::Realty::printPropertyInfo(int numberProp, std::string adress, std::string description, int propertyListNumber, std::string catasterName, SplayTree<int, Property> *propertiesInPL, SplayTree<std::string, Part> * partsInPL)
{
	labelTitlePropertyList->Hide();
	labelPropertyNumber->Text = gcnew String(std::to_string(numberProp).c_str());
	labelAdress->Text = gcnew String(adress.c_str());
	labelDescription->Text = gcnew String(description.c_str());
	labelPropertyListNumber->Text = gcnew String(std::to_string(propertyListNumber).c_str());
	labelCatasterArea->Text = gcnew String(catasterName.c_str());
	
	BSTIterator<int, Property> it(propertiesInPL->getRoot());
	while (it.existNext()) {
		Property *prop = it.current();
		ListViewItem^ item = gcnew ListViewItem();

		int id = prop->getId();
		item->Text = gcnew String(std::to_string(id).c_str());
		item->SubItems->Add("");


		std::string adress = prop->getAdress();
		item->SubItems[1]->Text = gcnew String(adress.c_str());
		item->SubItems->Add("");

		std::string desc = prop->getDescription();
		item->SubItems[2]->Text = gcnew String(desc.c_str());
		item->SubItems->Add("");

		listViewPropertiesOnPL->Items->Add(item);

	}
	BSTIterator<std::string, Part> it2(partsInPL->getRoot());
	while (it2.existNext()) {
		Part *currpart = it2.current();

		ListViewItem^ item = gcnew ListViewItem();

		std::string ownerName = currpart->getOwner();
		item->Text = gcnew String(ownerName.c_str());
		item->SubItems->Add("");


		double part = currpart->getPart();
		item->SubItems[1]->Text = gcnew String(std::to_string(part).c_str());
		item->SubItems->Add("");

		listViewPartsOnPL->Items->Add(item);
	}
}

void AUS2___SemUdaj::Realty::printPropertyListInfo(int propertyListNumber, std::string catasterName, SplayTree<int, Property> *propertiesInPL, SplayTree<std::string, Part> * partsInPL)
{
	labelAdress->Hide();
	labelDescription->Hide();
	labelPropertyNumber->Hide();
	labelTAdress->Hide();
	labelTDescription->Hide();
	labelTPropertyNumber->Hide();
	labelTitleRealty->Hide();
	labelPropertyListNumber->Text = gcnew String(std::to_string(propertyListNumber).c_str());
	labelCatasterArea->Text = gcnew String(catasterName.c_str());

	BSTIterator<int, Property> it(propertiesInPL->getRoot());
	while (it.existNext()) {
		Property *prop = it.current();
		ListViewItem^ item = gcnew ListViewItem();

		int id = prop->getId();
		item->Text = gcnew String(std::to_string(id).c_str());
		item->SubItems->Add("");


		std::string adress = prop->getAdress();
		item->SubItems[1]->Text = gcnew String(adress.c_str());
		item->SubItems->Add("");

		std::string desc = prop->getDescription();
		item->SubItems[2]->Text = gcnew String(desc.c_str());
		item->SubItems->Add("");

		listViewPropertiesOnPL->Items->Add(item);

	}
	BSTIterator<std::string, Part> it2(partsInPL->getRoot());
	while (it2.existNext()) {
		Part *currpart = it2.current();

		ListViewItem^ item = gcnew ListViewItem();

		std::string ownerName = currpart->getOwner();
		item->Text = gcnew String(ownerName.c_str());
		item->SubItems->Add("");


		double part = currpart->getPart();
		item->SubItems[1]->Text = gcnew String(std::to_string(part).c_str());
		item->SubItems->Add("");

		listViewPartsOnPL->Items->Add(item);
	}
}
