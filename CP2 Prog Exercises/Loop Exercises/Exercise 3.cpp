//Exercise No. 3
#include <iostream>
using namespace std;
int main ()
{
	char answer;
	cout << "----- Exercise No. 3 -----" <<endl;
	cout<<endl;	
	do {
	cin.ignore();
	cout << "\t\t ********* \t\t *** \t\t * \t\t*" <<endl;
	cout << "\t\t *       *\t       *     * \t\t***           *   *" <<endl;
	cout << "\t\t *       *\t      *       *        *****         *     *"<<endl;
	cout << "\t\t *       *\t      *       *          *          *       *"<<endl;
	cout << "\t\t *       *\t      *       *          *         *         *"<<endl;
	cout << "\t\t *       *\t      *       *          *          *       *"<<endl;
	cout << "\t\t *       *\t      *       *          *           *     *"<<endl;
	cout << "\t\t *       *\t       *     *           *            *   *"<<endl;
	cout << "\t\t *********\t         ***             *              *  "<<endl;
	cout <<endl;
	cout << "Do you want to try again? (Y/y): ";
	cin >> answer;
	
	system ("cls");
	}while (answer == 'Y' || answer == 'y');
	
	cout << "Programmer: MIM Cabrera" <<endl;
	
	
	system ("pause");
	return 0;
}
