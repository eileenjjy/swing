#include <iostream>
using namespace std;

int main()
{
    int reservation[3][10] = //예약에 대한 변수는 reservation 사용
    {
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int seat;
    do
    {
        cout << "정지윤 고객님, 좌석을 예약하시겠습니까? (0(아니오)이나 1(예)선택)";
        cin >> seat;
        if (seat == 1)
        {
            for (int i = 0; i < 10; i++)
                cout << i + 1 << ' ';
            cout << '\n';
            cout << "---------------------------------\n";
            for (int k = 0; k < 3; k++)
            {
                for (int j = 0; j < 10; j++)
                {
                    cout << reservation[k][j] << " ";
                }
                cout << endl;
            }
            cout << "몇 열, 몇 번째 좌석을 예약하시겠습니까?";
            int a; //세로 (열)
            int b; //가로 
            cin >> a;
            cin >> b;
            if (reservation[a - 1][b - 1] == 0)
            {
                reservation[a - 1][b - 1] = 1;
                cout << "예약되었습니다." << endl;
            }
            else
            {
                cout << "이미 예약된 자리입니다." << endl;
            }
            cout << '\n';
            for (int k = 0; k < 3; k++)
            {
                for (int j = 0; j < 10; j++)
                {
                    cout << reservation[k][j] << " ";
                }
                cout << endl;
            }
        }

        else
        {
            cout << "좌석 예약을 종료합니다." << endl;
            break; 
            
            //중요! break 하지 않을 시 계속 좌석 예약 창이 뜬다.
        }

    } while (seat == 1 or seat == 0);
}