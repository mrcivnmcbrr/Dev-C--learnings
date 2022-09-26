#include <iostream>
using namespace std;
int main ()
{
	int ctr = 1;
	string pass;
	
	cout << "Enter password: ";
	cin >> pass;
	while (pass != "sanbeda" && ctr <= 2)
	{
		ctr ++;
	 	cout <<"Invalid Password!!" <<endl;
	 	cout <<"\n\nEnter password again: ";
	 	cin >> pass; 
	}

	if (pass == "sanbeda")
	{
		cout << "\n\nSuccessful Login.. proceed to the Main Menu" <<endl;
	}
	else 
	{
		cout << "You've entered the wrong password three times, \nPlease try again later... " <<endl;
		cout <<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
