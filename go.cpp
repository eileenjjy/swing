#include <iostream> <string>

using namespace std;

int main() {
	string str1 = "swing";
	string str2 = "fighting!";

	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << endl;


	//at

	cout << "01. at()" << endl; // 숫자 넣은 거임
	cout << "str1.at(2): " << str1.at(2) << endl;

	//해당 위치() 문자 반환, 시작은 0부터: swing의 i가 출력됨




	// []
	cout << "02. '[]'" << endl;
	cout << "str1[1]: " << str1[1] << endl;

	// index는 0부터 시작, [n] 번째 인자를 출력




	// front()
	cout << "03. front()" << endl;
	cout << "str2.front(): " << str2.front() << endl;

	// str2의 맨 앞 인자를 출력: f




	// back
	cout << "04. back()" << endl;
	cout << "str1.back(): " << str1.back() << endl;

	//str1의 맨 뒤 인자 출력: g



	// length()
	cout << "05. length()" << endl;
	cout << "str1.length(): " << str1.length() << endl;

	//str1의 인자 길이 변환, size()와 같음
	
	

	// append
	cout << "06. append()" << endl;
	string str3 = str1.append(" oh my god");
	cout << str3 << endl;

	//문자열을 결합



	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	// 현재 상태 확인용 




	// insert()
	cout << "07. insert()" << endl;
	cout << "str1.insert(str2): " << str1.insert(2, str2) << endl;

	/*str1의 2번째 인자 뒤에 str2 삽입
	* 현재
	str1: swing oh my god
	str2: fighting!
	>> swfighting!ing oh my god
	*/
	



	
	// clear()
	cout << "09. clear()" << endl;
	str1.clear(); cout << str1 << endl;

	//들어있는 문자열을 지우는 함수

}