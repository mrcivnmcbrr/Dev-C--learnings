#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	double r, h, v1, v2, v, c;
	cout <<showpoint <<setprecision(2) <<fixed;
	
	 cout << "------ Volume of a Right Circular Cone ------" <<endl <<endl;
	 cout << "Input the Radius: ";
	 cin >> r;
	 cout<<endl;
	 cout << "Input the Height: ";
	 cin >> h;
	 cout <<endl;
	 v = .33333333333333333333333333333333 * 3.1416 * pow (r,2) * h;
	 cout << "The Volume of the Circular Cone is: " << v <<endl;
	 cout <<endl;
	 
	cout << "------ Hypotenuse of a Right Triangle ------" <<endl <<endl;
	cout << "Input the first value: ";
	cin >> v1;
	cout<<endl;
	cout << "Input the second value: ";
	cin >> v2;
	cout <<endl;
	c = sqrt (pow (v1, 2) + pow (v2, 2));
	cout << "The Volume of the Sphere is: " << c <<endl;
	cout <<endl;
	system ("pause");
    return 0;
}
