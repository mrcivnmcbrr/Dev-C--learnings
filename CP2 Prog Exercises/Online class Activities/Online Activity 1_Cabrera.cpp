#include <iostream>
using namespace std;
int main ()
{
	string sn, name, section, address, course;
	float q1, q2, q3, mg, fg, nq;
	char answer;
	
do {
	cout << "------ Student Information ------" <<endl;
	cout<<endl;
	cin.ignore();
	cout << "Enter Student Number: ";
	getline (cin, sn);
	cout << "Enter Student Name: "; 
	getline (cin, name);
	cout << "Enter Student Section: "; 
	getline (cin, section);
	cout << "Enter Address: "; 
	getline (cin, address);
	cout << "Enter Student Course: "; 
	getline (cin, course);
	cout <<endl <<endl;

	cout << "------ Student Grading Window ------" <<endl;
	cout<<endl;
	cout << "Input the number of quizzes you have: ";
	cin >> nq;
	
	if (nq == 3)
		{
			cout << "Enter the score of your Quiz #1: ";
			cin >> q1; 
			cout << "Enter the score of your Quiz #2: ";
			cin >> q2; 
			cout << "Enter the score of your Quiz #3: ";
			cin >> q3; 
			cout << "Input your Midterm Grade: ";
			cin >> mg;
		cout<<endl<<endl;
		fg = ((q1+q2+q3)/3)*.50 + (mg*.50);
		
			cout << "The Final Grade is: " <<fg <<endl;
			
		if  (fg >= 97 && fg <= 100)
		{
			cout << "The Grade Equivalent is: 1.00 (Passed)" <<endl;
		}
		else if  (fg >= 92 && fg <= 96)
		{
			cout << "The Grade Equivalent is: 1.25 (Passed)" <<endl;
		}
		else if  (fg >= 87 && fg <= 91)
		{
			cout << "The Grade Equivalent is: 1.50 (Passed)" <<endl;
		}
		else if  (fg >= 92 && fg <= 96)
		{
			cout << "The Grade Equivalent is: 1.75 (Passed)" <<endl;
		}
		else if  (fg >= 77 && fg <= 81)
		{
			cout << "The Grade Equivalent is: 2.00 (Passed)" <<endl;
		}
		else if  (fg >= 72 && fg <= 76)
		{
			cout << "The Grade Equivalent is: 2.25 (Passed)" <<endl;
		}
		else if  (fg >= 68 && fg <= 71)
		{
			cout << "The Grade Equivalent is: 2.50 (Passed)" <<endl;
		}
		else if  (fg >= 64 && fg <= 67)
		{
			cout << "The Grade Equivalent is: 2.75 (Passed)" <<endl;
		}
		else if  (fg >= 60 && fg <= 63)
		{
			cout << "The Grade Equivalent is: 3.00 (Passed)" <<endl;
		}
		else 
		{
			cout << "The Grade Equivalent is: 5.00 (Failed)" <<endl;
		}
	system ("pause");
	system ("cls");
		
		if  (fg >= 97 && fg <= 100)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 1.00 (Passed)" <<endl;
		}
		else if  (fg >= 92 && fg <= 96)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 1.25 (Passed)" <<endl;
		}
		else if  (fg >= 87 && fg <= 91)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;	
			cout << "The Grade Equivalent is: 1.50 (Passed)" <<endl;
		}
		else if  (fg >= 92 && fg <= 96)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 1.75 (Passed)" <<endl;
		}
		else if  (fg >= 77 && fg <= 81)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 2.00 (Passed)" <<endl;
		}
		else if  (fg >= 72 && fg <= 76)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 2.25 (Passed)" <<endl;
		}
		else if  (fg >= 68 && fg <= 71)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 2.50 (Passed)" <<endl;
		}
		else if  (fg >= 64 && fg <= 67)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;	
			cout << "The Grade Equivalent is: 2.75 (Passed)" <<endl;
		}
		else if  (fg >= 60 && fg <= 63)
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 3.00 (Passed)" <<endl;
		}
		else 
		{
			cout << "------ Student Summary ------" <<endl;
			cout << "Student Number: " <<sn <<endl;
			cout << "Student Name: " <<name <<endl;
			cout << "Student Section: " <<section <<endl;
			cout << "Student Course: " <<course <<endl;
			cout << "Final Grade: " <<fg <<endl;
			cout << "The Grade Equivalent is: 5.00 (Failed)" <<endl;
		}	
		}
	else 
		{
			cout << "Invali input! Try again.. " <<endl;
		}
	cout << "---------------------------------------";
	cout<<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	cout<<endl;
	cout << "Do you want to try again? (Y for Yes and any key for No): ";
	cin >> answer;
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	cout<<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	
	
	
	
	
	
	system ("pause");
	return 0;
}
