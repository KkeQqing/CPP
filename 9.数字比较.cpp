#include <iostream>
using namespace std;

int main()
{
	/*cout << "��ֱ���������ֵ����Ϊp1,p2,p3." << "\n";
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	cin >> p1;
	cin >> p2;
	cin >> p3;
	cout << "����ֵ�ֱ�Ϊ;" << p1 << "\n" << p2 << "\n" << p3 << "\n";
	if (p1 > p2)
	{   
		if (p1 > p3)
		{
			cout << "p1���" << endl;
		}
	}
	else
	{
	if(p2>p3)
		cout << "p2���" << endl;
	else
	{
		cout << "p3���" << endl;
	}
	}*/
	cout << "����������ֵ��" << endl;
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "a=";
	cin >> a;
	cout << "\n";
	cout << "b=" ;
	cin >> b;

	c = (a > b ? a : b);
	cout << "���ֵΪ��" << c << endl;
	system("pause");
	return 0;
}