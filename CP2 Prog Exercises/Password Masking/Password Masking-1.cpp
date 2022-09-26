#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	string pass = "";
	char x;                       
   	int ctr = 1;
     
   cout << "Enter password: ";
   x = _getch();   	
	while(x != 13)              
   {                           
	  pass.push_back(x);      
      cout << '*';            
      x = _getch();   
	 
   }
   while (pass != "sanbeda" && ctr <= 2)
	{
	ctr ++;
	cout <<"\nInvalid Password!!" <<endl;
	cout <<"\n\nEnter password again: ";
 	x = _getch();   
	 
	 	while(x != 13)              
   	{                           
	  pass.push_back(x);      
      cout << '*';            
      x = _getch();    
  	}          
	}   
    if(pass == "sanbeda")
   {
      cout << "\n\nLogin successful . . . proceed to the Main Menu\n"<<endl <<endl;
   }
   
   else
   {
      cout << "\n\nYou've entered the wrong password three times, \nPlease try again later...\n" <<endl <<endl;
   }
	
system("pause");
return 0;
}

