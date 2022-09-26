#include <iostream>
using namespace std; 

int main () {
	string name; 
	int b, s; 
	cout << "Input Name: "; 
	cin >> name;
	cout << "Input Salary: "; 
	cin >> s;
	
	if (s <= 2000)
	{

		b = s * .50;
		cout<< "Name: " << name << endl;
		cout << "Bonus: " <<b <<endl;
	}
	else 
	{

		b = 1500;
		cout<< "Name: " << name << endl;
		cout << "Bonus: " <<b <<endl;
	}
	
	
		cout << "Programmer Cabrera ";
	
	system ("pause");
	return 0;
}
