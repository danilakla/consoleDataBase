#include "menu.h"
int menu::Menu() {
	infMenu();
	cout << endl;
	switch (choice())
	{
	case 1:

		func::creatNewPerson();
		system("cls");



		return Menu();
	case 2:
		system("cls");

		func::print();


		return Menu();

	case 3:
		system("cls");

		func::del();





		return Menu();
	case 4:
		system("cls");

		func::addTofile();





		return Menu();

	case 5:
		system("cls");

		func::File();





		return Menu();
	case 6:
		system("cls");

		func::findthedate();





		return Menu();
	case 7:
		system("cls");

		func::sortDATE();

		return Menu();
	case 8:
		system("cls");

		func::changTheData();

		return Menu();
	case 9:
		return 0;

	default:
		cout << "���������� ��� ���. �� ������ ������� ������ ��������)"<<endl;
		system("pause");
		break;
	}
}
int  menu::choice() {
	int a;
	cin >> a;
	cout << endl << endl;
	return a;
}
void  menu::infMenu()
{
  cout << endl<<"======================================"<<endl;
		cout << "1.�������� ��������					" << endl;

		cout << "2.������ ���������						" << endl;

		cout << "3.������� ��������						" << endl;

		cout << "4.��������� ������ � ����				" << endl;

		cout << "5.�������� ������ ��������� �� �����	" << endl;

		cout << "6.����� ��������						" << endl;

		cout << "7.����������							" << endl;
	
		cout << "8.��������� ������ ��������			" << endl;

		cout << "9.�����								" << endl;
		cout << "========================================";

}

