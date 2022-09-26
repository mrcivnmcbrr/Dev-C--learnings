#include <iostream>
using namespace std;
int main ()
{
	float num;

	cout<<"Please enter a number: ";

		if (!(cin>>num))
			cout<<"Invalid Input!"<<endl;

		else if (num < 0)
			cout<<"NEGATIVE NUMBER"<<endl;

		else if (num > 0)
			cout<<"POSITIVE NUMBER"<<endl;

		else
			cout<<"Entered number is Zero!"<<endl;


system ("pause");
return 0;
}
