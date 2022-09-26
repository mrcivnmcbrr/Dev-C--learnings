#include <iostream>
using namespace std;
int main ()
{										
	float total = 0, qs, ave, ctr = 1; 		// Initialization (Loop Control Variable)
	
	
	while (ctr <= 5) 						//expression/condition
	{																//loop body
	cout << "Input the Region " <<ctr << " Quarterly Sales: $";		
	cin >> qs;
	total += qs;
	ctr ++; 														//update
	}																//loop body
	cout <<endl <<endl;
	cout << "The total quarterly sales is: $" <<total <<endl;
	ave = total/5;
	cout << "The average sales amount is: $" <<ave <<endl;

	
	
	
	
	
	
	cout<<endl;
	cout << "Programmer: Marc Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
