#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL)); // �� ����ø��� �ٸ� �� ��� 


	int a = rand() % 100 + 1;  // 1-100 ������ ������ �� ����
	int num1; //Ư�� ��� ����

	cout << "���� ��: " << a << endl;
	cout << "Ư�� ��� ����: ";
	cin >> num1;

	

	for (int i = 0; i < 3; i++)
	{
		int num2; //num2�� Ư�� ��� 2
		cout << "\n\n" << i << "��° Ư�� ���:";
		cin >> num2; //���
		
		cout << "\n<Ư�� ����� ����ϴ� ���α׷�>\n";

		int n;
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				cout << n << ",";

			}
			
		}

		cout << "\n\n" << "\n<Ư�� ��� ���� ����ϴ� ���α׷�>\n";
		
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				continue; //��� ����
			} //�̰� ��� �Ʒ��� �־ ���� ��! ���� ���� �����ϱ�

				cout << n << ",";

			

		}
		
	}
}