//Exercise No. 12
#include <iostream>
using namespace std;
int main ()
{
		cout << " ----- Exercise No. 12 ----- " <<endl;
		
		cout << "[5x5] Multiplication Table" <<endl;
		
		for (int row= 1; row <= 5; row++)
		{
			cout <<endl << row;
		for (int column = 2; column <= 5; column++)	
			cout << "\t " <<row * column;
		}
			cout <<endl;
	
	
	cout <<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
