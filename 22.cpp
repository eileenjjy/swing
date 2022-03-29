#include <iostream>
using namespace std;
int main()
{

	cout << "당신의 이름은 무엇입니까? : \n";

	char name[10];
	cin.getline(name, 10, '\n');

	cout << "반갑습니다." << name << "님.\n\n";

	cout << "-----------SWING 30-----------" << endl;
	int coke;
	int water;
	int fanta;

	int c_number;
	int w_number;
	int f_number;


	cout << "음료의 가격 입력을 시작합니다.\n\n";


	cout << "콜라의 가격 :";
	cin >> coke;

	cout << "삼다수의 가격 : ";
	cin >> water;

	cout << "환타의 가격 : ";
	cin >> fanta;

	cout << "" << endl;

	cout << "개수를 입력해주세요.\n\n";

	cout << "콜라 수량 : ";
	cin >> c_number;

	cout << "삼다수 수량 : ";
	cin >> w_number;

	cout << "환타 수량 : ";
	cin >> f_number;

	cout << "------------------------------" << endl;

	int price;
	price = coke * c_number + water * w_number + fanta * f_number;

	cout << "500원 할인받아 총" << price - 500 << "원 입니다." << endl;
}