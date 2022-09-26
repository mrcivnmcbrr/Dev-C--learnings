#include <iostream>
using namespace std;
int main ()
{
	string name, sid;
	float q1, q2, q3, q4, fg; 
	
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
	
	
	
	
	
	
	system ("pause");
	return 0;
}
