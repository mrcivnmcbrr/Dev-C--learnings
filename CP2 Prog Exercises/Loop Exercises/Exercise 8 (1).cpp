//Exercise No. 8
//February 17, 2020
#include <iostream>
using namespace std;
int main ()
{
	system ("color 5E");
	cout << "----- Exercise No. 8 -----" <<endl;
	cout<<endl;
		float total = 0, sales, ave, ctr = 0;
		char answer;
	do {
	cin.ignore();
	cout << "Input the first sales (or negative number to stop): Php ";
	cin >> sales;
	
	while (sales > 0)
	{
		total += sales;
		ctr++;
														
	cout << "Input the next sales (or negative number to stop): Php ";
	cin >> sales;
	}
	
	if (ctr > 0)
	{
	cout << "The total sales is: Php " <<total <<endl;
	ave = total/ctr;
	cout << "The average sales is: Php " <<ave <<endl;
		}
	else 
		cout << "No sales entered." <<endl;
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	cout << "Programmer: Marc Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
