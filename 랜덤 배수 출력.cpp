#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL)); // 매 실행시마다 다른 값 출력 


	int a = rand() % 100 + 1;  // 1-100 범위의 무작위 수 생성
	int num1; //특정 배수 개수

	cout << "랜덤 수: " << a << endl;
	cout << "특정 배수 개수: ";
	cin >> num1;

	

	for (int i = 0; i < 3; i++)
	{
		int num2; //num2는 특정 배수 2
		cout << "\n\n" << i << "번째 특정 배수:";
		cin >> num2; //배수
		
		cout << "\n<특정 배수만 출력하는 프로그램>\n";

		int n;
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				cout << n << ",";

			}
			
		}

		cout << "\n\n" << "\n<특정 배수 제외 출력하는 프로그램>\n";
		
		for (n = 1; n <= a; n++)
		{
			if (n % num2 == 0)
			{
				continue; //배수 제외
			} //이걸 계속 아래에 넣어서 오류 남! 제발 범위 생각하기

				cout << n << ",";

			

		}
		
	}
}