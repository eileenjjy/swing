#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL)); // �� ����ø��� �ٸ� �� ��� 


	int a = rand() % 100 + 1;  // 1-100 ������ ���� ����
	int num1;

	cout << "���� ��: " << a << endl;
	cout << "Ư�� ��� ����: ";
	cin >> num1;

	cout << "<Ư�� ����� ����ϴ� ���α׷�>" << endl;


	for (int i = 0; i < 3; i++)
	{
		int num2; //num2�� Ư�� ��� 2
		cout << i << "��° Ư�� ���:";
		cin >> num2;

		int n;
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				cout << n << ",";

			}
			
		}

		cout << "<Ư�� ��� ���� ����ϴ� ���α׷�>" << endl;

		int v{};
		for (v = 1; v <= a; v++)
		{
			if (v != n % num2 == 0)
			{

				cout << v << ",";

			}

		}
		
	}
}