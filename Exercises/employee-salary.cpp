#include <iostream>
using namespace std; 

int main () {
	string name, id;
	float sal, net, bon, loan, sss, absences, ca;
	
	cout << "Input Employee Name: ";
	cin >> name; 
	cout << "Input I.D number: ";
	cin >> id; 
	
	cout << "Input Salary: ";
	cin >> sal;
	cout << "Input Deductions" <<endl;
	cout << "Input SSS Contribution: ";
	cin >> sss;
	cout << "Input Loan: ";
	cin >> loan;
	cout << "Input Cash Advance: ";
	cin >> ca;
	cout << "Input Absences: ";
	cin >> absences;
	
	net = sal - (sss + loan + ca + absences); 
	
	cout << "Total Deduction: " <<net <<endl; 

 	system ("cls");
 	cout << " -----Summary----- " <<endl;
 	
 		
	if (net >= 10000)
	{
		bon = sal * .75;
		cout << "Employee Name: " <<name <<endl;
		cout << "Employee ID: " <<id <<endl;
		cout << "Net Salary: Php " <<net <<endl;
		cout << "Bonus: Php " <<bon <<endl;	
}

	else
	{
		bon = sal * .50;
		cout << "Employee Name: " <<name <<endl;
		cout << "Employee ID: " <<id <<endl;
		cout << "Net Salary: Php " <<net <<endl;
		cout << "Bonus: Php " <<bon <<endl;	
		
	}
	
	
	
		
	
	
	
	
	
	
	
	
		cout << "Programmer Cabrera ";
	
		
	system ("pause");
	return 0;
}
