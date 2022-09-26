#include <iostream>
using namespace std;
int main ()
{

/* to display an array value
int score[5] = {87, 80, 92, 100, 90};
for (int i=0; i<5; i++)
cout<< score[i] <<" ";   
*/
/*

//to input an array value
int score[5];
cout<< "Input five scores: ";
for (int i=0; i<5; i++)
cin>> score[i];
*/

//input and display the value in the array elements
int x[5];
cout<< "Input a number: ";
for (int i=0; i<5; i++)
cin>>x[i];
cout<<"The number inputted are: ";
for (int i=0; i<5; i++)
cout<<" " <<x[i];
cout<<endl;


system ("pause");
return 0;    
}


