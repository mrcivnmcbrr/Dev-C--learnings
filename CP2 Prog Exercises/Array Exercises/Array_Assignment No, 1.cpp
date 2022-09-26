#include <iostream>
using namespace std;
int main ()
{
	int num[5];
	cout << "Input five numbers: ";
	for (int i=0; i < 5; i++)
	cin>> num[i];
	
	for (int i=0; i<5; i++)
	{
		int smallest = num[i];
		int smallestIndex = i;
		
			for (int v=i; v<5; v++)
			{
				if (num[v] < smallest)
				{
					smallest = num[v];
					smallestIndex = v;
				}
			}
		swap(num[i], num[smallestIndex]);
	}
	cout << "Lowest to Highest: \n";
	for (int i=0; i < 5; i++)
		cout  << num[i] << " " <<endl;;

	
	system ("pause");
	return 0;
}
