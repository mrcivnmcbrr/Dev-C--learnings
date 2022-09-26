//Exercise no. 13
//November 11, 2019
#include <iostream>
using namespace std;

int main () {
char gencode; 
	
	cout << "Input the gender code <F-Female/M-Male>: ";
	cin >> gencode; 
	
		if (gencode == 'F' || gencode =='f')
			cout << "Female" <<endl;
	
	
		else if (gencode == 'M' || gencode == 'm')
			cout << "Male" <<endl;
	
		else 
			cout << "Invalid code! Try again..." <<endl;


	cout << "Programmer Cabs ";
	
	
	system ("pause");
	return 0;	
}	
