#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

namespace COMP_POS
{
	enum {CLEK, SENIOR, ASSIST, MANAGER};

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLEK:
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
			break;
		}
	}
}

class NameCard
{
private:
	char* name;
	char* company;
	char* phone;
	int position;

public:
	NameCard(const char* name,const char* company,const char* phone,const int pos)
		: position{ pos }
	{
		this->name = new char[strlen(name) + 1];
		this->company = new char[strlen(company) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->name, name);
		strcpy(this->company, company);
		strcpy(this->phone, phone);
	}

	NameCard(const NameCard& ref) 
		: position(ref.position)
	{
		name = new char[strlen(ref.name) + 1];
		company = new char[strlen(ref.company) + 1];
		phone = new char[strlen(ref.phone) + 1];
		strcpy(name, ref.name);
		strcpy(company, ref.company);
		strcpy(phone, ref.phone);
	}

	void showNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}

	~NameCard()
	{
		delete[]name;
		delete[]company;
		delete[]phone;
	}
};

int main(void)
{
	NameCard manclerk("Hong", "asdfof", "01091230213", COMP_POS::CLEK);
	NameCard copy1 = manclerk;
	NameCard manSENIOR("Lee", "sadf", "019299944", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.showNameCardInfo();
	copy2.showNameCardInfo();

}