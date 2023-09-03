#include <iostream>
using namespace std;

int main()
{
	/*cout << "请分别输入三个值，记为p1,p2,p3." << "\n";
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	cin >> p1;
	cin >> p2;
	cin >> p3;
	cout << "三个值分别为;" << p1 << "\n" << p2 << "\n" << p3 << "\n";
	if (p1 > p2)
	{   
		if (p1 > p3)
		{
			cout << "p1最大" << endl;
		}
	}
	else
	{
	if(p2>p3)
		cout << "p2最大" << endl;
	else
	{
		cout << "p3最大" << endl;
	}
	}*/
	cout << "请输入两个值：" << endl;
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "a=";
	cin >> a;
	cout << "\n";
	cout << "b=" ;
	cin >> b;

	c = (a > b ? a : b);
	cout << "最大值为；" << c << endl;
	system("pause");
	return 0;
}