#include <iostream>
using namespace std;
int main ()
{
	string name, section, sn;
	float q1, q2, ass1, ass2, lab1, lab2, lab3, me, fe, fg, cs, ge, gd;
	
	cout << "Enter Student Name: ";
	cin >> name;
	cout << "Enter Student Number: ";
	cin >> sn;
	cout << "Enter Section: ";
	cin >> section;
	cout << endl <<endl;
	cout << "Input for Class Standing " <<endl;
	cout << "Input grade in Quiz No. 1: ";
	cin >> q1;
	cout << "Input grade in Quiz No. 2: ";
	cin >> q2;
	cout << "Input grade in Assignment No. 1 : ";
	cin >> ass1;
	cout << "Input grade in Assignment No. 2: ";
	cin >> ass2;
	cout << "Input grade in Lab Exercise No. 1: ";
	cin >> lab1;
	cout << "Input grade in Lab Exercise No. 2: ";
	cin >> lab2;
	cout << "Input grade in Lab Exercise No. 3: ";
	cin >> lab3;
	cout <<endl;
	cout << "Input grade in Midterm Exam: ";
	cin >> me;
	cout << "Input grade in Final Exam: ";
	cin >> fe;
	
	cs = ((q1 + q2)/2)*.40 + ((ass1 + ass2)/2)*.20 + ((lab1 + lab2 + lab3)/3)*.40;
	cout << "Class Standing: " <<cs <<endl; 
	
	fg = ((cs )*.50 + ((me)*.20) + (fe)*.30);
	cout << "Final Grade: " <<fg <<endl;
	
	system ("pause");
	system ("cls");	
	
	cout << "------ SUMMARY OF GRADING REPORT ------" <<endl <<endl;
	cout << "Student Name: " <<name <<endl;
	cout << "Student Number: " <<sn <<endl;
	cout << "Section: " <<section <<endl;
	cout << "Final Grade: " <<fg <<endl;
	
	
	 if (fg >=96.00 && fg <= 100.00)
		{
			cout << "Grade Equivalent: 1.00 " <<endl;
			cout << "Grade Description: A+ " <<endl;
		}
	else if (fg >= 94.00 && fg <= 95.99)
		{
			cout << "Grade Equivalent: 1.25 " <<endl;
			cout << "Grade Description: A " <<endl;
		}
	else if (fg >=91.00 && fg <= 93.99)
		{
			cout << "Grade Equivalent: 1.50 " <<endl;
			cout << "Grade Description: A- " <<endl;
		}
	else if (fg  >=89.00 && fg <= 90.99)
		{
			cout << "Grade Equivalent: 1.75 " <<endl;
			cout << "Grade Description: B+ " <<endl;
		}
	else if (fg >= 86.00 && fg <= 88.99)
		{
			cout << "Grade Equivalent: 2.00 " <<endl;
			cout << "Grade Description: B " <<endl;
		}
	else if (fg >= 83.00 && fg <= 85.99)
		{
			cout << "Grade Equivalent: 2.25 " <<endl;
			cout << "Grade Description: B- " <<endl;
		}
	else if (fg >= 80.00 && fg <= 82.99)
		{
			cout << "Grade Equivalent: 2.50 " <<endl;
			cout << "Grade Description: C+ " <<endl;
		}	
	else if (fg >= 77.00 && fg <= 79.99)
		{
			cout << "Grade Equivalent: 2.25 " <<endl;
			cout << "Grade Description: C " <<endl;
		}	
	else if (fg >= 75.00 && fg <= 76.99)
		{
			cout << "Grade Equivalent: 3.00 " <<endl;
			cout << "Grade Description: C- " <<endl;
		}		
	else 
		{
			cout << "Grade Equivalent: 5.00 " <<endl;
			cout << "Grade Description: F " <<endl;
		}	
		
		
		
		
	system ("pause");
	return 0;
}
