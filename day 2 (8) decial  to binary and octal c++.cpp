#include <iostream>
using namespace std;
int main() 	
{
    int decimal, binary = 0, t,remainder, product = 1, octalNum[50], i=0;
    cout<<"Enter any Decimal number: ";
	cin>>decimal;
	t = decimal;
    while (decimal != 0) 
  {
    remainder = decimal % 2;
    binary = binary + (remainder * product);
    decimal = decimal / 2;
    product *= 10;
  }
  cout << " binary number= " << binary ;
  while(t!=0)
    {
        octalNum[i] = t%8;
        i++;
        t= t/8;
    }
    cout<<"\n Octal Value = ";
    for(i=(i-1); i>=0; i--)
    {
	
        cout<<octalNum[i];
    }
    cout<<endl;
    return 0;
}
