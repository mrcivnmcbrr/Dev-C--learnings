//Programmer: Lizel Rose Q. Natividad
//Password Masking

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
   string pass ="sanbeda";              
   char x;                       
   cout << "Enter password: ";
   x = _getch();   		       
   while(x != 13)              
   {                           
      pass.push_back(x);      //Transferring the values from x to pass
      cout << '*';            //Masking value
      x = _getch();           //Continue reading the value from keystroke.
   }
   
   if(pass == "sanbeda")
   {
      cout << "\nLogin successful . . .\n";
   }else
   {
      cout << "\nAccess Denied...\n";
   }

system("pause");
return 0;
}

