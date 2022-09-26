//Exercise No. 11
#include <iostream>
using namespace std;
int main ()
{
	string name, sid;
	float q1, q2, q3, q4, fg; 
	char answer;	
	
	cout << " ----- Exercise No. 11 ----- " <<endl;
	
	do {
	cin.ignore();
	
	cout << "Enter Student Name: "; 
	getline (cin, name);
	cout << "Enter Student Number: ";
	getline (cin, sid);
	cout << "--------------------" <<endl;
	cout << "Enter Quiz 1: ";
	cin >> q1; 
	cout << "Enter Quiz 2: ";
	cin >> q2; 
	cout << "Enter Quiz 3: ";
	cin >> q3; 
	cout << "Enter Quiz 4: ";
	cin >> q4;
	
	fg = (q1 + q2 + q3 + q4)/4;
	
	cout << "Final Grade: " <<fg <<endl;
	system ("pause");
	system ("cls");
	
	if (fg >= 100)
	{
		cout << "------- S U M M A R Y -------";
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Pass" <<endl;
	}
	
	else 
	{
		cout << "------- S U M M A R Y -------" ;
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Fail" <<endl;
	}
	
	cout <<endl;
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	cout<<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	
	
	system ("pause");
	return 0;
}
