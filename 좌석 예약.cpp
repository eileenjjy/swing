#include <iostream>
using namespace std;

int main()
{
    int rev[3][10] = { 0 };
    int a = 0; //가로
    int b = 0; //세로

    {int seat; //예약 여부
    do
    {
        cout << "좌석을 예약하시겠습니까?(0이나 1 선택)";
        cin >> seat;
        if (seat == 1) //예약할 때
        {
            for (int i = 0; i < 10; i++)
                cout << i + 1 << " ";

            cout << '\n';
            cout << "---------------------------------\n";

            for (int k = 0; k < 3; k++) //열
            {
                for (int j = 0; j < 10; j++) //행
                {
                    cout << rev[k][j] << " ";
                }
                cout << endl;
            }
            cout << "몇열, 몇번째 좌석을 예약하시겠습니까?";
            int a;
            int b;
            cin >> a;
            cin >> b;
            if (rev[a - 1][b - 1] == 0)
            {
                rev[a - 1][b - 1] = 1;
                cout << "예약되었습니다" << endl;
            }
            
            else
            {
                cout << "이미 예약된 좌석입니다" << endl;
            }
            cout << '\n';
            for (int k = 0; k < 3; k++)
            {
                for (int j = 0; j < 10; j++)
                {
                    cout << rev[k][j] << " ";
                }
                cout << endl;
            }
        }

        else
        {
            cout << "좌석 예약 종료" << endl;
            break; //이것을 하지 않으면 예약 화면이 계속 뜸
        }

    } while (seat == 1 or seat == 0); }
}