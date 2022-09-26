#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	double rad, circ, sphe;
	cout <<showpoint <<setprecision(2) <<fixed;
	 
	 cout <<"------ Area of a Circle Based on Radius ------" <<endl <<endl;
	 cout << "Input the radius to get the Area of the Circle: ";
	 cin >> rad;
	 cout <<endl; 
	 circ = 3.1416 * pow (rad, 2);
	 cout << "The Area of the Circle is: " <<circ <<endl;
	 cout <<endl;
	 
	 cout <<"------ Volume of a Sphere Based on Radius ------" <<endl <<endl;
	 cout << "Input the radius to get the Volume of the Sphere: ";
	 cin >> rad;
	 cout <<endl; 
	 sphe = 4/3 * 3.1416 * pow (rad, 3);
	 cout << "The Volume of the Sphere is: " <<sphe <<endl;
	 cout <<endl;
	 cout << "---------------------------------------------" <<endl;
	
	
	
	
	
	 system ("pause");
    return 0;
}
