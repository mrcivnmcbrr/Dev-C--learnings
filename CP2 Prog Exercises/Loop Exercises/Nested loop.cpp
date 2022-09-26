//Nested loop
#include <iostream>
using namespace std;
int main ()
{
	/*a nested loop that is inside the body of another loop
	  outer loop (row) is a loop that completely contains another         
	  a loop that falls entirely within the body of another is an inner loop (column)
	  you can place one loop (the inner, or nested loop) inside another loop (the outer loop)
	  
	  
	  char answer;
	  do {
	  	for (int i = 1; i <= 10; i++)
	  	
		  {
		  cout << i <<endl;
	  	}
	  	cout << "Do you want to try again? (Y/y): ";
	  	cin >> answer;
	  }while (answer == 'Y' || answer == 'y');
	 
	  
		for (int row= 1; row <= 3; row++) //outer
		{
			cout <<row << "\t\t" <<row + 1 << "\t\t" << row + 2 << "\t\t" <<row + 3<<endl;
		} */
		for (int row= 1; row <= 3; row++)
		{
			cout <<endl << row;
		for (int column = 1; column <= 4; column++)	
			cout << "\t " << row + column;
		}
			cout <<endl;
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
