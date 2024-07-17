#include <iostream>
#include "Varparm.h"

using namespace std;
using namespace Varparm;


int main()
{
	setlocale(LC_ALL, "rus");
	cout << "1\n\n";
	cout << "������������: " << ivarparm(1, 2) << endl;
	cout << "������������ ��������: " << svarparm(1, -345) << endl;
	cout << "�����: " << fvarparm(1.5, FLT_MAX) << endl;
	cout << "�����: " << dvarparm(2.32, DBL_MAX) << endl;
	cout << "\n\n";

	cout << "2\n\n";
	cout << "������������: " << ivarparm(2, 2, 10) << endl;
	cout << "������������ ��������: " << svarparm(2, -345, 865) << endl;
	cout << "�����: " << fvarparm(1.5, 2.0, FLT_MAX) << endl;
	cout << "�����: " << dvarparm(2.32, -6.76, DBL_MAX) << endl;
	cout << "\n\n";

	cout << "3\n\n";
	cout << "������������: " << ivarparm(3, 2, 10, 20) << endl;
	cout << "������������ ��������: " << svarparm(3, -345, 865, 248) << endl;
	cout << "�����: " << fvarparm(1.5, 2.0, 3.5, 4.0, FLT_MAX) << endl;
	cout << "�����: " << dvarparm(2.32, -6.76, 8.34, DBL_MAX) << endl;
	cout << "\n\n";

	cout << "4\n\n";
	cout << "������������: " << ivarparm(7, 2, 10, 20, 30, -2, 3, -1) << endl;
	cout << "������������ ��������: " << svarparm(7, -345, 865, 248, 999, -52, 2004, -3754) << endl;
	cout << "�����: " << fvarparm(1.5, 2.0, 3.5, 4.0, 5.73, 7.89, 13.0026, FLT_MAX) << endl;
	cout << "�����: " << dvarparm(2.32, -6.76, 8.34, 90.826, 14.346, 78.9801, 326.732, DBL_MAX) << endl;
	cout << "\n\n";

	return 0;
}