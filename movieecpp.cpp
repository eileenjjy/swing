#include <iostream>
using namespace std;

int main()
{
    int reservation[3][10] = //���࿡ ���� ������ reservation ���
    {
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
          {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int seat;
    do
    {
        cout << "������ ����, �¼��� �����Ͻðڽ��ϱ�? (0(�ƴϿ�)�̳� 1(��)����)";
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
            cout << "�� ��, �� ��° �¼��� �����Ͻðڽ��ϱ�?";
            int a; //���� (��)
            int b; //���� 
            cin >> a;
            cin >> b;
            if (reservation[a - 1][b - 1] == 0)
            {
                reservation[a - 1][b - 1] = 1;
                cout << "����Ǿ����ϴ�." << endl;
            }
            else
            {
                cout << "�̹� ����� �ڸ��Դϴ�." << endl;
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
            cout << "�¼� ������ �����մϴ�." << endl;
            break; 
            
            //�߿�! break ���� ���� �� ��� �¼� ���� â�� ���.
        }

    } while (seat == 1 or seat == 0);
}