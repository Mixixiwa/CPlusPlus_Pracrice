#include <iostream>
using namespace std;

void main()
{
	cout << "请输入两个数字和一个预算符（+，-，*，/）" << endl;
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
		cout << "计算结果为：" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '-':
		result = number1 - number2;
		cout << "计算结果为：" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '*':
		result = number1 * number2;
		cout << "计算结果为：" << number1 << calculate << number2 << "=" << result << endl;
		break;
	case '/':
		if (number2 != 0)
		{
			result = number1 / number2;
			cout << "计算结果为：" << number1 << calculate << number2 << "=" << result << endl;
			break;
		}
		else
		{
			cout << "分母为0，运算错误。" << endl;
			break;
		}
	}



}