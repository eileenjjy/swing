#include <iostream>
using namespace std;

int main()
{
    int rev[3][10] = { 0 };
    int a = 0; //����
    int b = 0; //����

    {int seat; //���� ����
    do
    {
        cout << "�¼��� �����Ͻðڽ��ϱ�?(0�̳� 1 ����)";
        cin >> seat;
        if (seat == 1) //������ ��
        {
            for (int i = 0; i < 10; i++)
                cout << i + 1 << " ";

            cout << '\n';
            cout << "---------------------------------\n";

            for (int k = 0; k < 3; k++) //��
            {
                for (int j = 0; j < 10; j++) //��
                {
                    cout << rev[k][j] << " ";
                }
                cout << endl;
            }
            cout << "�, ���° �¼��� �����Ͻðڽ��ϱ�?";
            int a;
            int b;
            cin >> a;
            cin >> b;
            if (rev[a - 1][b - 1] == 0)
            {
                rev[a - 1][b - 1] = 1;
                cout << "����Ǿ����ϴ�" << endl;
            }
            
            else
            {
                cout << "�̹� ����� �¼��Դϴ�" << endl;
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
            cout << "�¼� ���� ����" << endl;
            break; //�̰��� ���� ������ ���� ȭ���� ��� ��
        }

    } while (seat == 1 or seat == 0); }
}