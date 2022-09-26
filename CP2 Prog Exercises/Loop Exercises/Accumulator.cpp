//Accumulator
#include <iostream>
using namespace std;
int main ()
{	
	float total = 0, purchase, ave, ctr = 0;
	
	cout << "Input the first purchase (or zero to stop): Php ";
	cin >> purchase; //sentinel
	
	while (purchase != 0) //user controls the loop	
	{
		total += purchase;
		ctr++;
																		
	cout << "Input the next purchase (or zero to stop): Php ";
	cin >> purchase;
	}
	
	cout << "The total purchase is: Php " <<total <<endl;
	ave = total/ctr;
	cout << "The average purchase is: Php" <<ave <<endl;
	
	
	cout<<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
