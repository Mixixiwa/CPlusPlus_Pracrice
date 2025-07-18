#include<iostream>
using namespace std;

class Student   //定义一个学生类
{
public:
	char m_name;
	int Math_grade;
	int Chinese_grade;
	int English_grade;
	int m_GradeAverage;

	Student() 
	{
		m_name='a';
		Math_grade=0;
		Chinese_grade=0;
		English_grade=0;
		m_GradeAverage=0;
	};
	void getNews(char name, int Math, int Chinese, int English);
	void getAverage();
};
void Student::getNews(char name, int Math, int Chinese, int English)
{
	m_name = name;
	Math_grade = Math;
	Chinese_grade = Chinese;
	English_grade = English;
}
void Student::getAverage()
{
	m_GradeAverage = (Math_grade + Chinese_grade + English_grade) / 3;
}


void main()
{
	Student student[5];
	char name;
	int math, chinese, english;
	for (int i = 0; i < 5;i++)  //获取五名学生的姓名和数学语文英语成绩
	{
		cout << "请输入学生" << i+1 << "的姓名：";
		cin >> name;
		cout << endl;
		cout << "请输入学生" << i+1 << "的数学成绩：";
		cin >> math;
		cout << endl;
		cout << "请输入学生" << i+1<< "的语文成绩：";
		cin >> chinese;
		cout << endl;
		cout << "请输入学生" << i+1 << "的英语成绩：";
		cin >> english;
		cout << endl;

		student[i].getNews(name, math, chinese, english);
		student[i].getAverage();
	}
	
	int Max_index=0;
	for (int i = 0; i < 5; i++)
	{
		if (student[Max_index].m_GradeAverage < student[i].m_GradeAverage)
		{
			Max_index= i;
		}
	}
	
	cout << "平均分最高的是：" << student[Max_index].m_name << "  " << student[Max_index].m_GradeAverage << endl;

}