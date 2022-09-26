#include <iostream>
using namespace std;
int main ()
{
	string sn, name;
	float q1, q2, q3, q4, fg, eg;
	
	Information:
	cout << "Enter Student's number: ";
	cin >> sn;
	cout << "Enter Student's name: ";
	cin >> name;
	
	cout <<endl <<endl;

	cout << "Enter Student's Quiz No. 1 Grade: ";
	cin >> q1; 
	cout << "Enter Student's Quiz No. 2 Grade: ";
	cin >> q2; 
	cout << "Enter Student's Quiz No. 3 Grade: ";
	cin >> q3; 
	cout << "Enter Student's Quiz No. 4 Grade: ";
	cin >> q4; 
	
	
	fg = (q1 + q2 + q3 + q4)/4; 
	

	
	
	system ("pause");
	system ("cls");
	
	
	
	
	cout <<"-------- Student Information --------" <<endl;
	cout << "Student Number: " <<sn <<endl;
	cout << "Student Name: " <<name <<endl;
	cout << "Student Section: 1AIT " <<endl;
	cout << "Student Course: B.S. IT "<<endl;

	cout << endl;

	cout <<"-------- Student Grading Window --------" <<endl;
	cout << "Quiz No. 1 Grade: " <<q1 <<endl;
	cout << "Quiz No. 2 Grade: " <<q2 <<endl;
	cout << "Quiz No. 3 Grade: " <<q3 <<endl;
	cout << "Quiz No. 4 Grade: " <<q4 <<endl;
	cout << "The Final Grade is: " <<fg <<endl;
	
	if (fg >= 60)
	cout << "Grade Description: Pass ";
	
	else 
	cout << "Grade Description: Fail ";
	
	
	char choice; 
		cout << endl;
		cout << "Do you want to go back to the Main Menu? (Y/N): ";
		cin >> choice;
		
		if (choice == 'Y' || choice == 'y')
		{
			system ("cls");
			goto Information;
		}
			
		else 
		{
			system ("cls");
			cout << "Goodbye! ";
		}
	
	
	
	
	
	
	system ("pause");
	return 0;
}
