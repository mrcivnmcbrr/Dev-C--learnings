#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

int score [4][3] = {{80,85,87}, {82,75,76}, 
{84,88,90}, {70,75,60}};
for(int r=0;r<4;r++)
{ 
	for(int c=0;c<3;c++)
	cout<<setw(10)<<score[r][c];
	
	cout<<endl;
}

/*
cout<<setw(10) <<score[0][0] <<endl;
cout<<setw(10) <<score[1][0] <<endl;   
cout<<setw(10) <<score[2][0] <<endl;  
cout<<setw(10) <<score[3][0] <<endl;  
cout<< "-------------------" <<endl;
cout<<setw(10) <<score[0][1] <<endl;
cout<<setw(10) <<score[1][1] <<endl;   
cout<<setw(10) <<score[2][1] <<endl;  
cout<<setw(10) <<score[3][1] <<endl;  
cout<< "-------------------" <<endl;
cout<<setw(10) <<score[0][2] <<endl;
cout<<setw(10) <<score[1][2] <<endl;   
cout<<setw(10) <<score[2][2] <<endl;  
cout<<setw(10) <<score[3][2] <<endl; 
*/



	
system ("pause");
return 0;
}
