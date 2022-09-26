//Exercise no. 5
#include <iostream>
using namespace std;
int main ()
{
	int num1, num2, num3, num4, num5;
	int max, min;
	
	cout << "----- Exercise No. 5 -----" <<endl;
	cout<<endl;
	
	cout << "Input five different integers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	

	max = num1;
		if (num2 > max)
			min = num2;;
		if (num3 > max)
			min = num3;
		if (num4 > max)
			min = num4;
		if (num5 > max)
			min = num5;
	cout << "Largest is " <<min <<endl;





	min = num1;
		if (num2 < min)
			min = num2;;
		if (num3 < min)
			min = num3;
		if (num4 < min)
			min = num4;
		if (num5 < min)
			min = num5;
	cout << "Smallest is " <<min <<endl;
	
	
	
	
	
	
	
	
	
	
	
	
		cout<<endl;
	cout << "Programmer: MIM Cabrera" <<endl;
	
	system ("pause");
	return 0;
}
