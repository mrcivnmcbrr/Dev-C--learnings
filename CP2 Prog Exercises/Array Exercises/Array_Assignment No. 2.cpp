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
		int highest = num[i];
		int highestIndex = i;
		
			for (int v=i; v<5; v++)
			{
				if (num[v] > highest)
				{
					highest = num[v];
					highestIndex = v;
				}
			}
		swap(num[i], num[highestIndex]);
	}
	cout << "\nHighest to Lowest: ";
	for (int i=0; i < 5; i++)
		cout  << num[i] << " ";
		cout <<endl <<endl;
		

	
	system ("pause");
	return 0;
}
