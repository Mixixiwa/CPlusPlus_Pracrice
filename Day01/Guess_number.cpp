#include<iostream>
#include<cstdlib>//����rand() �� srand()����
#include<ctime>//����time()����
using namespace std;

void main()
{
	srand(time(0));  //��ʼ��������ӣ�ֻ�����һ��
	int number = rand() % 100 + 1;//�������1`100�������
	int guess_number, counter;
	counter = 0;
	while (1)
	{
		counter++;
		cout << "��²�1~100������" << endl;
		cout << "������Ĳ²⣺";
		cin >> guess_number;
		if (guess_number == number)
		{
			cout << "��ϲ�㣬�¶��ˣ�" << "�����" << counter << "�Σ�" << endl;
			break;
		}
		if (guess_number < number)
		{
			cout << "̫С��" << endl;
		}
		if (guess_number > number)
		{
			cout << "̫����" << endl;
		}

	}
}