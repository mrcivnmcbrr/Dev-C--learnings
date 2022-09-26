#include <iostream>
using namespace std;

int main () {
	string sn, name, c, s;
	float fg, q1, q2, q3, q4; 
	
	cout << "Input Student Number: "; 
	cin >> sn; 
	cout << "Input Name: "; 
	cin >> name; 
	cout << "Input Course: "; 
	cin >> c; 
	cout << "Input Section: "; 
	cin >> s;
	
	cout << "-------------------" <<endl;
	
	cout << "Input Quiz No. 1: "; 
	cin >> q1;
	
	cout << "Input Quiz No. 2: "; 
	cin >> q2;
	
	cout << "Input Quiz No. 3: "; 
	cin >> q3;
	
	cout << "Input Quiz No. 4: "; 
	cin >> q4;
	
	cout << "-------------------" <<endl;
	
	fg = (q1 + q2 + q3 + q4)/4;
	
	cout << "Student Number: " << sn <<endl; 
	cout << "Name: " << name <<endl;
	cout << "Course: " << c <<endl;
	cout << "Section: " <<s <<endl;
	cout << "Final Grade: " << fg <<endl;
	
	
	
	system ("pause");
	return 0;
}
