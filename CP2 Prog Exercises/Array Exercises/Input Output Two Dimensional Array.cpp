#include <iostream>

using namespace std;
int main()
{
    
//to input and display the result
int score [2][3];
cout<<"Input score [2][3]: ";
for (int r=0; r<2; r++)
{
for (int c=0; c<3; c++)
cin>>score[r][c];
cout<<endl;    
}
cout<< "The scores are: " <<endl;
for (int r=0; r<2; r++)
{
for (int c=0; c<3; c++)
cout<<score[r][c] <<"     " ;
cout<<endl;    
}  
    
system("pause");
return 0;
}


