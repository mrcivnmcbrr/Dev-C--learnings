//Exercise No. 7
#include <iostream>
using namespace std;
int main ()
{
	int ctr = 1; 
	string pass;
	char answer;
	
	
	cout << "----- Exercise No. 7 -----" <<endl;
	cout<<endl;
	
	do {
	cin.ignore();
	cout << "Input password first!" <<endl;
	cout << "Input Password: ";
	 cin >> pass; 
	 
	 while (pass != "1234" && ctr >0)
	 {
	 	ctr ++;
	 	cout <<"\nInvalid Password!!" <<endl;
	 	cout <<"Input the password again: ";
	 	cin >> pass; 
	 }
	
	if (pass == "1234")
	cout <<"\nSuccessful Password! Apps now loading ..." <<endl;
	else if (pass != "1234")
	{
		cout <<"\nInvalid Password!" <<endl;
		cout <<"Please try again: " <<endl;
		cin >> pass;
	}
	else 
	{
		cout <<"\nInvalid Password!" <<endl;
		cout <<"Please try again: "<<endl;
		cin >> pass;
	}
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	
	
	
	
	cout << "Programmer: Marc Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
