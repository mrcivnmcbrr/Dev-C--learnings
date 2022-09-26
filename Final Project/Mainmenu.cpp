#include <iostream>
using namespace std; 

int main () {
	 int pass, ctr=1; 
	 char choice;
	 
	 cout << "Input Password: ";
	 cin >> pass; 
	 
	 while (pass != 12345 && ctr <3)
	 {
	 	ctr ++;
	 	cout <<"Invalid Password!!" <<endl;
	 	cout <<"Input the password again: ";
	 	cin >> pass; 
	 }
	
	if (pass == 12345)
	cout <<"Successful Password! Proceed to the Main Menu ..." <<endl;
	
	else 
	{
		cout <<"Sorry, only 3 attempts are allowed." <<endl;
		cout <<"Please restart the program and try again." <<endl;
	}
	
	system ("cls");
	cout << " ------------- Good day! Welcome to the Main Menu -------------- " <<endl;
 	cout << " --------------------------------------------------------------- " <<endl;
 	cout << "		('A') Payroll System" <<endl;
 	cout << "		('B') Grading System" <<endl;
 	cout << "		('C') Enrollment" <<endl;
	cout << "		('D') Quit the Program" <<endl;
	cout << " --------------------------------------------------------------- " <<endl;
	cout << "Enter your choice: ";
	cin >> choice; 
	
	system ("cls");
	if (choice == 'A' || choice == 'a')
	{
		cout << "Welcome to Pay Roll ";
		cout <<endl <<endl;
		
		do {
		cout << "Do you want to Return to the main Menu (Y/N): ";
			cin >> choice; 
				system ("cls");
	cout << " ------------- Good day! Welcome to the Main Menu -------------- " <<endl;
 	cout << " --------------------------------------------------------------- " <<endl;
 	cout << "		('A') Payroll System" <<endl;
 	cout << "		('B') Grading System" <<endl;
 	cout << "		('C') Enrollment" <<endl;
	cout << "		('D') Quit the Program" <<endl;
	cout << " --------------------------------------------------------------- " <<endl;
	cout << "Enter your choice: ";
	cin >> choice; 
		}while(choice == 'Y' || choice == 'y');
	
	}
	
	else if (choice == 'B' || choice == 'b')
	{
		cout << "Welcome to Grading System ";
		cout <<endl <<endl;
	}
	
	else if (choice == 'C' || choice == 'c')
	{
		cout << "Welcome to Enrollment system ";
		cout <<endl <<endl;
	}

	else if (choice == 'D' || choice == 'd')
	{
	cout<<"Submitted By: Group 2" <<endl <<endl;
	
	cout<<"Leader: Marc Ivan Cabrera" <<endl <<endl;
	
	cout<<"Members: "<<endl;
	
	cout<<"Jared Dayanghirang "<<endl;
	
	cout<<"Veron Catanyag"<<endl;
	
	cout<<"Justine Patricio"<<endl;
	
	cout<<"Jayr Castro"<<endl <<endl;
	
	cout<<"Section: 1AIT" <<endl <<endl;
	
	cout<<"Submitted To: " <<endl;
	
	cout<<"Engr. Lizel Rose Natividad" <<endl <<endl;
	
	cout<<"Date of Submission:" <<endl;
	
	cout<<"November 29, 2019" <<endl <<endl;

	}
	
	else 
		cout << "ERROR input! Please restart the program ...";

	
	
	system ("pause");
	return 0;
}
