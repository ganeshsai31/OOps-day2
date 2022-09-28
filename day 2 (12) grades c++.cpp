#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,total;
	float avg;
	char grade[10];
	cout<<"enter the marks:";
	cin>>m1>>m2>>m3>>m4;
	total = m1+m2+m3+m4;
	avg = total/4;
	cout<<"average = "<<avg;
	if(avg>75)
	{
		cout<<"distinction";
	}
	else if(avg<=75 and avg>60)
	{
		cout<<"first division";
	}
	else if(avg<=60 and avg>50)
	{
		cout<<"second division";
	}
		else if(avg<=50 and avg>40)
	{
		cout<<"third division";
	}
	else
	{
		cout<<"fail";
	}
	return 0;
}
