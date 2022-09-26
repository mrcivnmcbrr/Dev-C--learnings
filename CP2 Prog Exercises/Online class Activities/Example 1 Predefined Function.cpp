//Example 1 Predefined Functions

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    int a = -128;
    double x = 15.8, y = 0.89, z = -0.75;
    
    cout<<showpoint <<setprecision(2) <<fixed; 
    
    cout<<"1. " <<abs(a) <<endl;
    cout<<"2. " <<fabs(z) <<endl;
    cout<<"3. " <<islower('H') <<endl;
    cout<<"4. " <<isupper('P') <<endl;
    cout<<"5. " <<cos(y) <<endl;
    cout<<"6. " <<ceil(x) <<endl;
    cout<<"7. " <<floor(16.9) <<endl;
    cout<<"8. " <<pow(2.0,2.0) <<endl;
    cout<<"9. " <<sqrt(16.0) <<endl;
    cout<<"10. " <<toupper('a');
    cout<<" Uppercase of a is " <<static_cast<char>(toupper('a')) <<endl;
    cout<<"11. " <<toupper('a') <<endl;
    
    system ("pause");
    return 0;
}
