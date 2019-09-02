#include <iostream>
#include <string>
using namespace std;

int main()
{
	int  ao, mes, dd;
	cout << "year: ";
	cin >> ao;
	cout << "mes: ";
	cin >> mes;

	switch (mes)
	{
	case 1: dd = 31;
		break;
	case 3: dd = 31;
		break;
	case 5: dd = 31;
		break;
	case 7: dd = 31;
		break;
	case 8: dd = 31;
		break;
	case 10: dd = 31;
		break;
	case 12: dd = 31;
		break;
	case 2: dd = 28;
		break;
	case 4: dd = 30;
		break;
	case 6: dd = 30;
		break;
	case 9: dd = 30;
		break;
	case 11: dd = 30;
		break;

		break;
	}
	if (mes >= 1 && mes <= 12)
	{
		cout << "el mes " << mes << " del ayear " << ao << " tiene " << dd << " dias";

	}

	return 0;
}


