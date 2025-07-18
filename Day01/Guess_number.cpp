#include<iostream>
#include<cstdlib>//包含rand() 和 srand()函数
#include<ctime>//包含time()函数
using namespace std;

void main()
{
	srand(time(0));  //初始化随机种子，只需调用一次
	int number = rand() % 100 + 1;//随机生成1`100的随机数
	int guess_number, counter;
	counter = 0;
	while (1)
	{
		counter++;
		cout << "请猜测1~100的数。" << endl;
		cout << "输入你的猜测：";
		cin >> guess_number;
		if (guess_number == number)
		{
			cout << "恭喜你，猜对了！" << "你猜了" << counter << "次！" << endl;
			break;
		}
		if (guess_number < number)
		{
			cout << "太小了" << endl;
		}
		if (guess_number > number)
		{
			cout << "太大了" << endl;
		}

	}
}