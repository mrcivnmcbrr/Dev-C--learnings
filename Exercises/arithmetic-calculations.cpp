#include <iostream>
using namespace std; 

int main (){
	float fn, sn, sum, diff, prod, quo; 
	char operatoor; 
	
	cout << "Input the First number: ";
	cin >> fn;	
	cout << "Input the Second number: ";
	cin >> sn;	

	cout << "\t\tYou can SELECT any Arithmethic Symbol to use for calculations" <<endl; 
	cout << "\t\t-------------------------------------------------------------"	<<endl;
	cout << "\t\t               ('a' , '+' , 'A' for Addition)" <<endl;
	cout << "\t\t               ('s' , '-' , 'S' for Subtraction)" <<endl;
	cout << "\t\t               ('m' , '*' , 'M' for Multiplication)" <<endl;
	cout << "\t\t               ('d' , '/' , 'D' for Division)" <<endl;
	cout << "\t\t-------------------------------------------------------------"	<<endl;
	
	cout << "Enter the Arithmetic Choice: ";
	cin >> operatoor;
	
	if (operatoor == 'a' || operatoor == '+' || operatoor == 'A')
	{
		sum = fn + sn; 
		cout << "The sum is: " <<sum <<endl;
	}
	
	else if (operatoor == 's' || operatoor == '-' || operatoor == 'S')
	{
		diff = fn - sn; 
		cout << "The difference is: " <<diff <<endl;
	}
	
	else if (operatoor == 'm' || operatoor == '*' || operatoor == 'M')
	{
		prod = fn * sn; 
		cout << "The product is: " <<prod <<endl;
	}
	
	else if (operatoor == 'd' || operatoor == '/' || operatoor == 'D')
	{
		quo = fn / sn; 
		cout << "The quotient is: " <<quo <<endl;
	}
	
	else 
		cout << " invalid input! Try again... "<< endl;
	
	system ("pause");
	return 0;
}
