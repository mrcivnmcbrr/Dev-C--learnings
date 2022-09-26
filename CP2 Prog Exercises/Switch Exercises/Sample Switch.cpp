//Sample Switch
#include <iostream> 
using namespace std;
int main( )
{
system ("color 0E");

int ycode;
cout << "Input a code from 1 to 4:" <<endl;
cout<< "(1-Freshman, 2-Sophomore" <<endl ;
cout<< "3-Junior, 4-Senior): " ;
cin>>ycode;
switch (ycode)
{
   case 1: cout << "Freshmen" <<endl;
        break;
   case 2: cout << "Sophomore" <<endl;
        break;
   case 3: cout << "Junior" <<endl;
        break;
   case 4: cout << "Senior" <<endl;
        break;
   default:
        cout << "Out of School-Youth" <<endl;    
}
    
system ("pause");
return 0;    
}
