#include <iostream>
using namespace std;
int main ()
{

int arr[5];
cout<<"Input five numbers: ";
for (int i=0; i<5; i++)
cin>>arr[i];
cout<<endl;

for (int i=0; i<5; i++)
{
  int smallest = arr[i];
  int smallestIndex = i;

      for (int m=i; m<5; m++)
          {
               if (arr[m] < smallest)
                  {
                          smallest = arr[m];
                          smallestIndex = m;
                          }    
          }
swap(arr[i], arr[smallestIndex]);
}
cout<<"\nLowest to Highest: ";
for (int i=0; i<5; i++)
cout<<arr[i] <<" ";
cout<<endl;

system ("pause");
return 0;
}

