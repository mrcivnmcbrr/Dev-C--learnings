#include <iostream>
using namespace std;
int main ()
{
	string sn, name, section, course;
	float q1, q2, midterm, fg;
	
	MainMenu:
	cout << "-------- Student Information --------" <<endl;
	cout << "Input your student number: ";
	cin >> sn;
	cout << "Input your name: ";
	cin >> name;
	cout << "Input your section: ";
	cin >> section;
	cout << "Input your course: ";
	cin >> course;
	cout << endl;
	cout <<"-------- Student Grading Window --------" <<endl;
	cout << "Input your grade in quiz no. 1: ";
	cin >> q1;
	cout << "Input your grade in quiz no. 2: ";
	cin >> q2;
	cout << "Input your Midterm Grade: ";
	cin >> midterm;
	fg = ((q1+q2)/2)*.50 + (midterm*.50);
	cout << "The Final Grade is: " <<fg <<endl;
	
	system ("pause");
	system ("cls");
	
	cout << "-------- Summary --------" <<endl;
	cout << "Student Number: " <<sn <<endl;
	cout << "Student Name: " <<name <<endl;
	cout << "Student Section: " <<section <<endl;
	cout << "Student Course: " <<course <<endl;
	cout << "Final Grade: " <<fg <<endl;
	
	
	char choice; 
	
		cout << "\nDo you want to go back? (Y/N): ";
		cin >> choice;
		
		if (choice == 'Y' || choice == 'y')
		{
			system ("cls");
			goto MainMenu;
		}
			
		else 
		{
			system ("cls");
			cout << "\nGoodbye! ";
		}
	
	system ("pause");
	return 0;
}
