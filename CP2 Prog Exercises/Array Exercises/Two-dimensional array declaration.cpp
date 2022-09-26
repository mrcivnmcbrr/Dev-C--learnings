#include <iostream>
using namespace std;
int main()
{
    
   
//to input two-dimensional array values
int score[2][3];
cout<<"Input scores (2x3 table): " <<endl;
for(int r=0; r<2; r++)
for (int c=0; c<3; c++)
cin>> score[r][c]; 
//cout<< score [r][c] <<endl;

/*

// to display two-dimensional array values 
int score[2][3]= {{80,90,100},{70,50,60}};
cout<<"Two-Dimensional Array" <<endl;
for(int r=0; r<2; r++)
for (int c=0; c<3; c++)
cout<< score[r][c] <<" ";
*/
  
system ("pause");
return 0;
}


