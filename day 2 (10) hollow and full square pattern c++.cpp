#include <iostream>
using namespace std;

void hollowSquare(int rows)
{
	int i, j;
	for (i=1; i<=rows; i++)
	{
		if (i==1 || i==rows)
			for (j=1; j<=rows; j++)
				cout << "*";
		else
			for (j=1; j<=rows; j++)
				if (j==1 || j==rows)
					cout << "*";
				else
					cout << " ";
		cout << "\n";
	}
}
void solidSquare(int rows)
{
	int i, j;
	for (i=1; i<=rows; i++)
	{
		for (j=1; j<=rows; j++)
			cout << "*";
		cout << "\n";
	}

}
void printPattern(int rows)
{
	cout << "\nSolid Square:\n";
	solidSquare(rows);
	
	cout << "\nHollow Square:\n";
	hollowSquare(rows);
}
int main()
{
	int rows;
	cout<<"enter no of rows : ";
	cin>>rows;
	
	printPattern (rows);
	return 0;
}

