#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	string pass = "";
	char x;                       

    for (int ctr = 0;  ctr < 3; ctr ++)   
 {
   cout << "Enter password: ";
   x = _getch();   	
  
	while(x != 13)              
   {                           
	  pass.push_back(x);      
      cout << '*';            
      x = _getch();   
	 
   }	
	
    if(pass == "sanbeda")
   {
      cout << "\n\nLogin successful . . . proceed to the Main Menu\n"<<endl <<endl;
      break;
   
   }
  		cout <<endl <<endl << "Invalid Password" <<endl <<endl;
}
   if (pass != "sanbeda")
   
      cout << "\n\nYou've entered the wrong password three times, \nPlease try again later...\n" <<endl <<endl;
   


system("pause");
return 0;
}

