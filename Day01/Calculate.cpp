#include <iostream>
using namespace std;

void main()
{
	cout << "�������������ֺ�һ��Ԥ�����+��-��*��/��" << endl;
	int number1, number2, result;
	char calculate;
	cin >> number1;
	cin >> calculate;
	cin >> number2;
	result = 0;
	switch (calculate)
	{
	case '+':
		result = number1 + number2;
		cout << "������Ϊ��" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '-':
		result = number1 - number2;
		cout << "������Ϊ��" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '*':
		result = number1 * number2;
		cout << "������Ϊ��" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '/':
		if (number2 != 0)
		{
			result = number1 / number2;
			cout << "������Ϊ��" << number1 << calculate << number2 << "=" << result << endl;
			break;
		}
		else
		{
			cout << "��ĸΪ0���������" << endl;
			break;
		}
	}



}