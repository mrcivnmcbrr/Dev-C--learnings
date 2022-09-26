#include <iostream>
using namespace std;
int main ()
{
	string pine, oak, mahogany;
	char choice;
	
	cout << "				Welcome to Uratex Table Furnitures";
	cout <<endl <<endl;
	cout << "\t\t\t\tSELECT your chosen type of Wood" <<endl; 
	cout << "\t\t			('p', 'P' for Pine)" <<endl;
	cout << "\t\t			('o', 'O' for Oak)" <<endl;
	cout << "\t\t			('m', 'M' for Mahogany)" <<endl;
	
	cout <<endl <<endl;
	cout << "Enter the type of Wood: ";
	cin >> choice;
	
	if (choice == 'p' || choice == 'P')
		cout << "Pine table costs $100. " <<endl;
	
	else if (choice == 'o' || choice == 'O')
		cout << "Oak table costs $225. " <<endl;

	else if (choice == 'm' || choice == 'M')
		cout << "Mahogany table costs $310. " <<endl;
	
	else 
		cout << "Invalid input! Please restart the program ... " <<endl;
	
	
	
	
	
	
	
	
	
		
	
	system ("pause");
	return 0;
}
