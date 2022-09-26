#include <iostream>
using namespace std;
int main()
{
int first[80], second[80], n;
char choice;
do{
 
cout << "Enter the number of elements in the array: ";
cin >> n;
cout<< "---------------------------------------------------" <<endl;
cout << "Enter elements of first array: ";
for ( int i = 0 ; i<n ; i++)
cin >> first[i];
cout << "Enter elements of second array: " ;
for ( int i=0 ; i<n; i++)
cin >> second[i];
cout << "The sum of elements of two arrays: " <<endl;
for ( int i=0 ; i<n;i++ )
cout<< first[i] + second[i] <<endl;

cout<<endl;
cout<< "Do you want to try again? <Y/N>: ";
cin>>choice;

}while (choice == 'Y' || choice == 'y');
cout<<endl;

system ("pause");
return 0;
}
