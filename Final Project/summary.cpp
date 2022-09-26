#include <iostream>
using namespace std;
int main()
{

	system ("color 0A");
	string sn, sec, gd, age, ge;
	float fg;

	/*system ("pause");
	system ("cls");*/
	
	cout<<"input Final Grade: " <<endl;
	cin>>fg;
	
	cout<<"- - - S U M M A R Y - - - \n" <<endl;
	
	cout<<"Student Name: " <<sn <<endl;

	cout<<"Section: " <<sec <<endl;

	cout<<"Final Grade: " <<fg <<endl;
	
	
	if (fg>=96)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 1.00" <<endl;
}

	else if (fg>=94)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 1.25" <<endl;
}

	else if (fg>=91)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 1.50" <<endl;
}

	else if (fg>=89)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 1.75" <<endl;
}

	else if (fg>=86)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 2.00" <<endl;
}

	else if (fg>=83)
{
	cout<<"Grade Description: Excellent " <<ge <<endl;
	cout<<"Grade Equivalent: 2.25" <<endl;
}

	else if (fg>=80)
{
	cout<<"Grade Description: Average " <<ge <<endl;
	cout<<"Grade Equivalent: 2.50" <<endl;
}

	else if (fg>=77)
{
	cout<<"Grade Description: Below Average " <<ge <<endl;
	cout<<"Grade Equivalent: 2.75" <<endl;
}

	else if (fg>=75)
{
	cout<<"Grade Description: Pass " <<ge <<endl;
	cout<<"Grade Equivalent: 3.00" <<endl;
}

	else if (fg>=74)
{
	cout<<"Grade Description: Fail " <<ge <<endl;
	cout<<"Grade Equivalent: 5.00" <<endl;
}
	
	system ("pause");
	return 0;
}
