#include <iostream>
#include <iomanip> 
using namespace std;
int main ()
{

float studQuiz [4][3], sum=0;
cout<<showpoint<<setprecision(2)<<fixed; 

//input for two-dimensional array (student no. and quiz)
cout<< "Enter the three quiz scores of each student" <<endl;
for (int r=0; r<4; r++) //rows
{
cout<< "Student No. " << r+1 <<endl;
for (int c=0; c<3; c++) //columns
 {
  cout<< "Quiz No. " <<c+1 << ": ";
  cin>> studQuiz [r][c];
 }
}

//display the average of students and quizzes
cout<< setw(10) <<  "Student"<< setw(20) <<  "Quizzes"<< setw(20) 
<<  "Average"<<endl;

for (int r=0; r<4; r++) 
{
cout << setw(10) << r+1;
for (int c=0; c<3; c++) 
{
 cout<< setw(10) << studQuiz [r] [c];
sum+=studQuiz[r][c];
}
cout<< setw(10) <<sum/3 <<endl;
sum=0;
}    	
system ("pause");
return 0;    
}
