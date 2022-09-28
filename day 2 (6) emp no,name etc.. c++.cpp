#include<iostream>
using namespace std;
class employee{
	private:
		int emp_no;
	    char name[100],dept[100];
	    
	friend deptwise(employee);
	public:
		void read();
		void display();
};
void deptwise::read()
{
	cout<<"enter the emp_no ";
	cin>>emp_no;
	cout<<"enter the emp name ";
	cin>>name;
	cout<<"enter the department ";
	cin>>dept;
}
void deptwise::display()
{
	cout<<emp_no<<" "<<name<<" "<<dept;
}
int main()
{
	deptwise d[10];
	int i,n;
	cout<<"enter no of employees : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		d[i].read();

	}
	for(i=1;i<=n;i++)
	{
		d[i].display();

	}
	return 0;
	}
