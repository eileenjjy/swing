#include <iostream> <string>

using namespace std;

int main() {
	string str1 = "swing";
	string str2 = "fighting!";

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << endl;


	//at

	cout << "01. at()" << endl; // ���� ���� ����
	cout << "str1.at(2): " << str1.at(2) << endl;

	//�ش� ��ġ() ���� ��ȯ, ������ 0����: swing�� i�� ��µ�




	// []
	cout << "02. '[]'" << endl;
	cout << "str1[1]: " << str1[1] << endl;

	// index�� 0���� ����, [n] ��° ���ڸ� ���




	// front()
	cout << "03. front()" << endl;
	cout << "str2.front(): " << str2.front() << endl;

	// str2�� �� �� ���ڸ� ���: f




	// back
	cout << "04. back()" << endl;
	cout << "str1.back(): " << str1.back() << endl;

	//str1�� �� �� ���� ���: g



	// length()
	cout << "05. length()" << endl;
	cout << "str1.length(): " << str1.length() << endl;

	//str1�� ���� ���� ��ȯ, size()�� ����
	
	

	// append
	cout << "06. append()" << endl;
	string str3 = str1.append(" oh my god");
	cout << str3 << endl;

	//���ڿ��� ����



	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	// ���� ���� Ȯ�ο� 




	// insert()
	cout << "07. insert()" << endl;
	cout << "str1.insert(str2): " << str1.insert(2, str2) << endl;

	/*str1�� 2��° ���� �ڿ� str2 ����
	* ����
	str1: swing oh my god
	str2: fighting!
	>> swfighting!ing oh my god
	*/
	



	
	// clear()
	cout << "09. clear()" << endl;
	str1.clear(); cout << str1 << endl;

	//����ִ� ���ڿ��� ����� �Լ�

}