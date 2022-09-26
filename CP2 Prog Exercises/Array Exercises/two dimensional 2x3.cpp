#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

int score[2][3] = {{80,70,100}, {50,60,85}};
for (int r=0; r<2; r++)
{
for (int c=0; c<3; c++)
cout<<setw(5) <<score[r][c];   
cout<<endl;  
}
cout<<endl;



/*
cout<<setw(5) <<score[0][0]<<endl;
cout<<setw(5) <<score[1][0] <<endl;
cout<<"------"<<endl;
cout<<setw(5) <<score[0][1] <<endl;;
cout<<setw(5) <<score[1][1]<<endl;;
cout<<"------"<<endl;
cout<<setw(5) <<score[0][2]<<endl;;
cout<<setw(5) <<score[1][2]<<endl;;
cout<<endl;
*/
	system("pause");
	return 0;
}
