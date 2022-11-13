#include<iostream>
using namespace std;

int main()
{
	float a, b, c, d = 0;
	//y = ax + b の2元1次方程式を解くプログラム

	cout << "これからy=ax+bの形の連立一次方程式を解きます。必要な情報を入力して下さい。" << endl;
	cout << "直線１の傾きを入力してください" << endl;
	cin >> a;
	cout << "直線１の切片を入力してください。" << endl;
	cin >> b;
	cout << "直線２の傾きを入力してください。" << endl;
	cin >> c;
	cout << "直線２の切片を入力してください。" << endl;
	cin >> d;

	if ((a == 0 && b == 0) || (c == 0 && d == 0))
	{
		cout << "エラーです。直線ではない値が入力されました" << endl;
	}
	else if (a == c && b == d)
	{
		cout << "同じ直線です" << endl;
	}
	else if (a == c)
	{
		cout << "平行です。交点はありません" << endl;
	}
	else if (b == d)
	{
		cout << "交点のx座標は0です。" << "y座標は" << b << "です。" << endl;
	}
	else
	{
		cout << "交点のx座標は" << (d - b) / (a - c) << "です。" << "y座標は" << a * (d - b) / (a - c) + b << "です。" << endl;
	}
}

