//Exercise No. 2
#include <iostream>
using namespace std;
int main ()
{
	char choice, answer;
	float first, second, sum, diff, prod, quo;
	
	cout << "----- Exercise No. 2 -----" <<endl;
	cout <<endl;
	
	do {
	cin.ignore();
	cout << "Input First Number: ";
	cin >> first;
	cout << "Input Second Number: ";
	cin >> second;
	cout << endl;
	cout << "\t\tYou can SELECT any Arithmetic Symbol to use for calculation" <<endl;
	cout << "\t\t-----------------------------------------------------------" <<endl;
	cout << "\t\t                  ('a' , '+' , 'A' for Addition)" <<endl;
	cout << "\t\t                  ('s' , '-' , 'S' for Subtraction)" <<endl;	
	cout << "\t\t                  ('m' , '*' , 'M' for Multiplication)" <<endl;
	cout << "\t\t                  ('d' , '/' , 'D' for Division)" <<endl;
	cout << "\t\t-----------------------------------------------------------" <<endl;
	
	cout << "Enter the Arithmetic Choice: ";
	cin >> choice;
	
	switch (choice)
	{
		case 'a': sum = first + second;
		cout << "The sum is " <<sum <<endl;
		break;
		case 's': diff = first - second;
		cout << "The difference is " <<sum <<endl;
		break;
		case 'm': prod = first * second;
		cout << "The product is " <<sum <<endl;
		break;
		case 'd': quo = first / second;
		cout << "The quotient is " <<sum <<endl;
		break;
		
		
		case 'A': sum = first + second;
		cout << "The sum is " <<sum <<endl;
		break;
		case 'S': diff = first - second;
		cout << "The difference is " <<sum <<endl;
		break;
		case 'M': prod = first * second;
		cout << "The product is " <<sum <<endl;
		break;
		case 'D': quo = first / second;
		cout << "The quotient is " <<sum <<endl;
		break;
		
		case '+': sum = first + second;
		cout << "The sum is " <<sum <<endl;
		break;
		case '-': diff = first - second;
		cout << "The difference is " <<sum <<endl;
		break;
		case '*': prod = first + second;
		cout << "The product is " <<sum <<endl;
		break;
		case '/': quo = first + second;
		cout << "The quotient is " <<sum <<endl;
		break;
		default:
			cout << "Invalid Code." <<endl;
		
	
	}
	cout <<endl;
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	cout << "Programmer: MIM Cabrera" <<endl;
	
	
	system ("pause");
	return 0;
}
