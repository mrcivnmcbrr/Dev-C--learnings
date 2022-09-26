//Example 2 Predefined Functions

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	
	
    double a, b, c, x;
    cout<<showpoint <<setprecision(2) <<fixed;
    
    cout<<"------ Quadratic Equation ------" <<endl <<endl;
	 
    cout<<"Input a value for a: ";
    cin>>a;
    cout<<endl;
    cout<<"Input a value for b: ";
    cin>>b;
    cout<<endl;
    cout<<"Input a value for c: ";
    cin>>c;
    cout<<endl;
    
    x = (-b + sqrt(pow(b,2)-4*a*c)) / (2*a);
    
    cout<<"The value in quadratic equation is: " <<x <<endl;
    
    
    system ("pause");
    return 0;
}
