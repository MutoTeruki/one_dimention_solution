#include<iostream>
using namespace std;

int main()
{
	float a, b, c, d = 0;
	//y = ax + b ��2��1���������������v���O����

	cout << "���ꂩ��y=ax+b�̌`�̘A���ꎟ�������������܂��B�K�v�ȏ�����͂��ĉ������B" << endl;
	cout << "�����P�̌X������͂��Ă�������" << endl;
	cin >> a;
	cout << "�����P�̐ؕЂ���͂��Ă��������B" << endl;
	cin >> b;
	cout << "�����Q�̌X������͂��Ă��������B" << endl;
	cin >> c;
	cout << "�����Q�̐ؕЂ���͂��Ă��������B" << endl;
	cin >> d;

	if ((a == 0 && b == 0) || (c == 0 && d == 0))
	{
		cout << "�G���[�ł��B�����ł͂Ȃ��l�����͂���܂���" << endl;
	}
	else if (a == c && b == d)
	{
		cout << "���������ł�" << endl;
	}
	else if (a == c)
	{
		cout << "���s�ł��B��_�͂���܂���" << endl;
	}
	else if (b == d)
	{
		cout << "��_��x���W��0�ł��B" << "y���W��" << b << "�ł��B" << endl;
	}
	else
	{
		cout << "��_��x���W��" << (d - b) / (a - c) << "�ł��B" << "y���W��" << a * (d - b) / (a - c) + b << "�ł��B" << endl;
	}
}

