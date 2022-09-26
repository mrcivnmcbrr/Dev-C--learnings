//Exercise no. 4
#include <iostream>
using namespace std;
int main ()
{
	int num;
	char answer;
	
	cout << "----- Exercise No. 4 -----" <<endl;
	cout<<endl;
	do {
	cin.ignore();
	cout << "Input a number: ";
	cin >> num;
	
	if (num % 2 == 0)
	cout << "\nThe number is even" <<endl;
	
	else	
	cout << "\nThe number is odd" <<endl;
	
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	cout << "Programmer: MIM Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
