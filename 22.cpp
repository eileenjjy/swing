#include <iostream>
using namespace std;
int main()
{

	cout << "����� �̸��� �����Դϱ�? : \n";

	char name[10];
	cin.getline(name, 10, '\n');

	cout << "�ݰ����ϴ�." << name << "��.\n\n";

	cout << "-----------SWING 30-----------" << endl;
	int coke;
	int water;
	int fanta;

	int c_number;
	int w_number;
	int f_number;


	cout << "������ ���� �Է��� �����մϴ�.\n\n";


	cout << "�ݶ��� ���� :";
	cin >> coke;

	cout << "��ټ��� ���� : ";
	cin >> water;

	cout << "ȯŸ�� ���� : ";
	cin >> fanta;

	cout << "" << endl;

	cout << "������ �Է����ּ���.\n\n";

	cout << "�ݶ� ���� : ";
	cin >> c_number;

	cout << "��ټ� ���� : ";
	cin >> w_number;

	cout << "ȯŸ ���� : ";
	cin >> f_number;

	cout << "------------------------------" << endl;

	int price;
	price = coke * c_number + water * w_number + fanta * f_number;

	cout << "500�� ���ι޾� ��" << price - 500 << "�� �Դϴ�." << endl;
}