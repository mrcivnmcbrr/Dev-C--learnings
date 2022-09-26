#include<iostream>
using namespace std;
int main()
{
	int number[5], temp=0, i=0, flag=0;
	
	cout<<"\nInput five integer numbers: ";
	for(i=0;i<5;i++)
	{cin>>number[i];}
	for(i=0;i<5;i++)
	{
		for(flag=i+1;flag<5;flag++)
		{
		if(number[i]>number[flag])
		{
			temp=number[i];
			number[i]=number[flag];
			number[flag]=temp;
		}
		}
	}
	cout<<"\nHighest to lowest: ";
	for(i=4;i>=0;i--)
	{cout<<number[i]<<" ";}
	
	cout<<"\n\n\n\t. . .\n\n\t";
	system("pause");
	return 0;
}
