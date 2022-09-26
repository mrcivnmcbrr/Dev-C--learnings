#include <iostream>
using namespace std; 

int main () {
	string name, num, college;
	float sal, tax, sss, pi, ph, loan, absences, tutorial, gross, td, net;
	
	cout << "Company Name: San Beda University" <<endl;
	cout << "Payroll Period: November 1-15, 2019";
	cout <<endl; 
	cout << "Input Employee Name: ";
	cin >> name; 
	cout << "Input Employee Number: ";
	cin >> num; 
	cout << "Input College: ";
	cin >> college; 
	cout <<endl <<endl;
	cout << "INCOME: " <<endl;
	cout << "Input Basic Salary: ";
	cin >> sal;
	cout << "Input Tutorial: ";
	cin >> tutorial; 
	cout <<endl;
	cout << "----------------------------" <<endl;
	gross = sal + tutorial;
	cout << "Gross Income: Php " <<gross <<endl;
	cout << "----------------------------" <<endl;
	cout <<endl <<endl;
	cout << "DEDUCTIONS" <<endl;
	cout << "Input Tax: ";
	cin >> tax;
	cout << "Input SSS: ";
	cin >> sss;
	cout << "Input Pag-ibig: ";
	cin >> pi;
	cout << "Input PhilHealth: ";
	cin >> ph;
	cout << "Input Loan: ";
	cin >> loan;
	cout << "Input Absences: ";
	cin >> absences;
	td = (tax + sss + pi + ph + loan + absences);
	cout << "Total Deductions: Php " <<td <<endl;
	cout << "----------------------------" <<endl;
	cout <<endl;
	cout << "----------------------------" <<endl;
	net = (gross - td);
	cout << "NET INCOME: Php " <<net <<endl;
	cout << "----------------------------" <<endl;
	system ("pause");
	system ("cls");
	cout << "------ SUMMARY OF PAYROLL REPORT ------" <<endl;
	cout <<endl;
	cout << "Employee Name: " <<name <<endl;
	cout << "Employee Number: " <<num <<endl;
	cout << "Gross Income: Php " <<gross <<endl;
	cout << "Total Deductions: Php " <<td <<endl;
	cout << "Net Income: Php " <<net <<endl;
	

	system ("pause");
	return 0;
}
