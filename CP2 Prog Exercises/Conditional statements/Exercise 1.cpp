//Exercise No. 1
#include <iostream>
using namespace std;
int main ()
{
	string name, sid;
	float q1, q2, q3, q4, fg; 
	
	cout << "----- Exercise No. 1 -----" <<endl;
	cout <<endl;
	
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
	
	if (fg >= 90.00 &&  fg <= 100.00)
	{
		cout << "------- S U M M A R Y -------";
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Excellent" <<endl;
	}
	
	else if (fg >= 70.00 &&  fg <= 89.99)
	{
		cout << "------- S U M M A R Y -------";
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Very Good" <<endl;
	}

	else if (fg >= 60.00 &&  fg <= 69.99)
	{
		cout << "------- S U M M A R Y -------";
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Good" <<endl;
	}

	else if (fg >= 0.00 &&  fg <= 59.99)
	{
		cout << "------- S U M M A R Y -------";
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Poor" <<endl;
	}

	else 
	{
		cout << "------- S U M M A R Y -------" ;
		cout << endl;
		cout << "Student Name: " <<name <<endl;
		cout << "Student ID: " <<sid <<endl;
		cout << "Final Grade: " <<fg <<endl;
		cout << "Remark: Invalid Grade" <<endl;
	}
	
	
	cout << "Programmer: MIM Cabrera" <<endl;
	
	
	
	system ("pause");
	return 0;
}
