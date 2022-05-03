#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL)); // 매 실행시마다 다른 값 출력 


	int a = rand() % 100 + 1;  // 1-100 범위의 난수 생성
	int num1;

	cout << "랜덤 수: " << a << endl;
	cout << "특정 배수 개수: ";
	cin >> num1;

	cout << "<특정 배수만 출력하는 프로그램>" << endl;


	for (int i = 0; i < 3; i++)
	{
		int num2; //입력하는 특정 배수1
		cout << i << "번째 특정 배수:";
		cin >> num2;

		int n;
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				cout << n << ",";

			}
			
		}

		cout << "<특정 배수 제외 출력하는 프로그램>" << endl;

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
