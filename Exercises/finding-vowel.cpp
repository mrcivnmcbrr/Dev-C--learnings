#include <iostream>
#include <ctype.h>
using namespace std; 

int main ()
{
	char vowel;
		
	cout << "Enter a letter: ";
	cin >> vowel; 
	
	if (isdigit(vowel))
		cout << "Invalid input! You entered a number. Please Restart the program... " <<endl;
	
	else if (isalpha(vowel))
	{
		if (vowel == 'a' || vowel == 'A')
			cout <<vowel << " is a vowel. ";
	
		else if (vowel == 'e' || vowel == 'E')
			cout <<vowel << " is a vowel. ";
	
		else if (vowel == 'i' || vowel == 'I')
			cout <<vowel << " is a vowel. ";
	
		else if (vowel == 'o' || vowel == 'O')
			cout <<vowel << " is a vowel. ";
	
		else if (vowel == 'u' || vowel == 'U')
			cout <<vowel << " is a vowel. ";
	
		else 
			cout <<vowel << " is a consonant. ";
	}

	else 
		cout << "Invalid input! You entered a special character. Please restart the program... " <<endl;
	
	
	
	
	
	
	
	
	
	system ("pause");
	return 0;
}
	
	
