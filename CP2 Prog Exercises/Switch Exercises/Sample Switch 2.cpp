//Sample Switch 2
#include <iostream> 
using namespace std;
int main( )
{
system ("color 0E");
double num1,num2,sum, product,quotient,difference;
char arithmetic;

cout<<"Input the first number: ";
cin>> num1;
cout<<"Input the second number: ";
cin>> num2;

cout << "Choose Arithmetic Operation to use for calculation: " <<endl;
cout<< "('A' for Addition, 'S' for Subtraction," <<endl;
cout<< "'D' for division and 'M' for multiplication): ";
cin >> arithmetic;

switch (arithmetic)
{
   case 'A': sum = num1+num2;
        cout << " The sum is "<<sum <<endl;
        break;
   case 'S': difference=num1-num2;
        cout << "The difference is " <<difference<<endl;
        break;
   case 'M': product= num1*num2;
        cout << "The Product is " <<product<<endl;
        break;
   case 'D': quotient=num1/num2;
        cout << "The quotient is " <<quotient<<endl;
        break;
   default:
        cout << "Invalid Code." <<endl;   
   }

system ("pause");
return 0;    
}
