//Exercise no. 12
//November 11, 2019
#include <iostream>
using namespace std;

int main () {
	int age1, age2; 
	
	cout << "Input age of the First Person: ";
	cin >> age1; 
	cout << "Input age of the Second Person: ";
	cin >> age2; 
	
	if (age1 > age2)
	cout << "The First Person is older" <<endl;
	
	else if (age1 == age2)
	cout << "They have the samge age" <<endl;
	
	else 
		cout << "The Second Person is older" <<endl;
	
	/*
	char gencode; 
	
	cout << "Input the gender code <F-Female/M-Male>: ";
	cin >> gencode; 
	
	if (gencode == 'F')
	cout << "Female" <<endl;
	
	else if (gencode  == 'f')
	cout << "Female" <<endl;
	
	else if (gencode == 'M')
	cout << "Male" <<endl;
	
	else if (gencode == 'm')
	cout << "Male" <<endl;
	else 
		cout << "Invalid code! Try again" <<endl;
	*/
	
	
	
	cout << "Programmer Cabs";
	
	
	
	
	system ("pause");
	return 0; 
}	
