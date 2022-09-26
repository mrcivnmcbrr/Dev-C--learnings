#include <iostream>
#include <cmath>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
using namespace std;
 
int main()
{
    system ("color 1F");
	string password = "grupouno";
    string passwordEnter;
    int attempts = 1;
     
    cout << "*** THIS PROGRAM IS PASSWORD PROTECTED! ***" << endl;
	cout << endl << "Please enter password: ";
    getline(cin, passwordEnter, '\n');
     
    while ( passwordEnter != password && attempts <=2 )
    {
        cout << "Please try again: ";
        getline(cin, passwordEnter, '\n');
        attempts++;    
    }
     
    if ( passwordEnter == password && attempts <=3 )
    {
        cout << endl << "Log - in successful! \n" << endl;  
    }

    else
    {
		system ("cls");
		cout << endl << "Sorry, only 3 attempts are allowed." << endl << "Please restart the program and try again. " << endl;
		system ("pause");
		return 0;
    }

    system ("pause");
    system ("cls");

	string name, gender; 
	int option;
	
	cout << "\n Before proceeding to the main menu, we would like to ask some information from you. " << endl;
	cout << "\n These information are being asked so that the program can address you properly." << endl << "\n Thank you. :) " << endl;
	
	cout << endl << "\n Enter your name: ";
	getline(cin, name, '\n');
	
	cout << "\n Enter your gender (M/F): ";
	getline(cin, gender, '\n');
		
    system ("cls");

	MainMenu1:
	system ("color 1F");
	cout << " - - - - LIST OF AVAILABLE PROGRAMS - - - -" << endl;
	cout << endl << " (1) Cinema Ticket Reservation System \n" << endl;
    cout << " (2) Unscramble the Letters Game \n" << endl;
    cout << " (3) Quiz Score Calculator with Grade Equivalent \n" << endl;
    cout << " (4) Collection of Various Mathematical Programs \n" << endl;
    cout << " (5) 'Oh, Christmas Tree... Oh, Christmas Tree...' \n" << endl;
    cout << " (6) Close the program \n" << endl;
    
    if (gender == "m" || gender == "M" || gender == "Male" || gender == "male")  
	{
		cout << endl << "\n Hello, Mr. " << name << "!" << endl;
	}
	
	else if (gender == "f" || gender == "F" || gender == "Female" || gender == "female")
	{
		cout << endl << " Hello, Ms. " << name << "!" << endl;
	}
	
	else 
	{
		system ("cls");
		cout << "Invalid input. Program will now exit." << endl;
		system ("pause");
		return 0;
	}
	
	cout << endl << "\n Select your desired program (1 / 2 / 3 / 4 / 5 / 6): ";
	cin >> option;
	
	switch (option) 
	{
		MainMenuMovie:
		case 1: 
		{
		system ("cls");
		time_t t = time(NULL);
  		tm* timePtr = localtime(&t);  
  	
		string mov1 = "Bohemian Rhapsody - CINEMA 1";
    	string mov2 = "Wreck It Ralph 2: Ralph Breaks the Internet - CINEMA 2";
    	string mov3 = "Robin Hood - CINEMA 3";
    	string mov4 = "Fantastic Beasts: The Crimes of Grindelwald - CINEMA 4";
    	
		cout << " CINEMA TICKET RESERVATION SYSTEM \n" << endl;
		cout << " **** WELCOME TO BEDA CINEMA! **** \n" << endl;
    	
		cout << " List of movies for today " << (timePtr->tm_mon)+1 <<"/"<< (timePtr->tm_mday) <<"/"<< (timePtr->tm_year)+1900 << ":"<< endl << endl;
    	
		cout << " (1) Bohemian Rhapsody - CINEMA 1" << "\n" 
		<< " (2) Wreck It Ralph 2: Ralph Breaks the Internet - CINEMA 2" << "\n" 
		<< " (3) Robin Hood - CINEMA 3" << "\n" 
		<< " (4) Fantastic Beasts: The Crimes of Grindelwald - CINEMA 4" << "\n" 
		<< " (5) Return to main menu "<<endl;
    	
    	int optmov, numtix, tixprice = 250;
    	string email;
    	
    	cout << "\n Please enter your EMAIL address (your e-ticket will be sent here): ";
    	cin >> email;
    	
    	if (email == "5")
		{
    		system ("cls");
    		goto MainMenu1;
		}
    	
    	cout <<endl << " Choose a movie to reserve tickets (1 / 2 / 3 / 4): ";
    	cin >> optmov;
    	
    	system ("cls");
    	
    	if (optmov == 1)
    	{
    		cout << "\n Selected movie: " << mov1 << endl;
		}
		
		else if (optmov == 2)
		{
    		cout << "\n Selected movie: " << mov2 << endl;
		}
		
		else if (optmov == 3)
		{
    		cout << "\n Selected movie: " << mov3 << endl;
		}
		
		else if (optmov == 4)
		{
    		cout << "\n Selected movie: " << mov4 << endl;
		}
		
		else if (optmov == 5)
		{
    		system ("cls");
			goto MainMenu1;
		}
		
		else 
		{
			system ("cls");
			cout << "Invalid input. Program will now exit." << endl;
			system ("pause");
			return 0;
		}
		
		
		cout << "\n TICKET PRICE: " << "Php " << tixprice << endl;
    	
		cout << "\n Enter quantity of tickets you want to purchase: ";
		cin >> numtix;
		
		cout << "\n Total Ticket Price: " << "Php "<< numtix * tixprice << endl;

		string payment;
		cout << "\n Proceed to payment? (Y / N): ";
		cin >> payment;
		
		system ("cls");
		
		if (payment == "Yes" || payment == "Y" || payment == "y" || payment == "yes")
		{
    		system ("cls");
    		cout << " * * * * * MOVIE TICKET TRANSACTION SUMMARY * * * * * \n" << endl;
			
			switch (optmov)
			{
			
				case 1:
				{
					cout << endl << " CINEMA 1" << endl;
					cout << endl << " Purchased Movie: Bohemian Rhapsody" << endl;
					break;
				}
				
				case 2:
				{
					cout << endl << " CINEMA 2" << endl;
					cout << endl << " Purchased Movie: Wreck It Ralph 2: Ralph Breaks the Internet" << endl;
					break;
				}
				
				case 3:
				{
					cout << endl << " CINEMA 3" << endl;
					cout << endl << " Purchased Movie: Robin Hood" << endl;
					break;
				}
				
				case 4:
				{
					cout << endl << " CINEMA 4" << endl;
					cout << endl << " Purchased Movie: Fantastic Beasts: The Crimes of Grindelwald" << endl;
					break;
				}
			default:
				{
					system ("cls");
					cout << "Invalid input. Program will now exit." << endl;
					system ("pause");
					return 0;	
				}	
			}		
			cout << endl << " Total Amount of Purchased Tickets: " <<"Php "<< numtix * tixprice << endl;
			cout << endl << " Total Number of Reserved Seat/s: You have reserved " << numtix << " seat/s." << endl;
    		cout << endl << " Transaction Status: CONFIRMED! PAYMENT SUCCESSFUL! \n"<< endl << " E-Ticket/s will be sent to your email (" << email << ")." <<endl;
    		cout << endl << " Thank you and enjoy the movie!" << endl;
    		cout << " \n ------------------------------------------------------------------- " << endl;
    		cout << "\n PROGRAMMED BY: ANCHORES, JUAN MIGUEL S. | 1AIT " << endl;
    	}
    	else if (payment == "No" || payment == "N" || payment == "n" || payment == "no")
    	{
    		system ("cls");
			cout << "Program will now exit." << endl;
			system ("pause");
			return 0;
		}
		else 
		{
			system ("cls");
			cout << "Invalid input. Program will now exit." << endl;
			system ("pause");
			return 0;
		}
    	
		string returnmain;
		cout << "\n Purchase ticket/s again? ( Y / N ): ";
    	cin >> returnmain;
    		
		if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
    		{
    			system ("cls");
				goto MainMenuMovie;
			}
		else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
    		{
    			system ("cls");
				cout << "Program will now exit." << endl;
				system ("pause");
				return 0;
			}
		else 
		{
			system ("cls");
			cout << "Invalid input. Program will now exit." << endl;
			system ("pause");
			return 0;
		}
	}

break;
		
case 2:
	{
		system ("cls");
		MainMenuGame:
		cout << "\n UNSCRAMBLE THE LETTERS! \n" << endl;
		cout << "\n Welcome! \n" << endl;
		cout << "\n Instructions: There are three levels in this game. You can choose from EASY, MODERATE, HARD. \n" << endl;
		cout << "\n Good luck and enjoy! :) \n" <<endl;
		
		cout <<"\n (1) EASY LEVEL" << endl;
		cout <<"\n (2) MODERATE LEVEL" << endl;
		cout <<"\n (3) HARD LEVEL" << endl;
		
		cout << "\n (4) Return to main menu " << endl;
		
		int level;
		string guess;
		cout <<"\n Choose any level: ";
		cin >> level;
		
		if (level == 4)
			{	
				system ("cls");
				goto MainMenu1;
			}
		/*else  
		{	
				system ("cls");
				cout << "Invalid input. Program will now exit." << endl;
				system ("pause");
				return 0;
		}*/
		
		switch (level)
		{
			case 1:
			{	
			system ("cls");
			cout << "\n ------------- EASY LEVEL: GUESS THIS WORD -------------" << endl;
			cout << "\n	P	U	T	R	E	M	O	C " << endl;
			cout << "\n Hint: An electronic device for storing and processing data." << endl;
			
			cout << "\n Input your answer (no spaces / all caps or all lower case are accepted): ";
			cin >> guess;
			
		if (guess == "COMPUTER" || guess == "computer") 
			{
				cout << "\n CORRECT! YOU'RE RIGHT!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
			
		else if (guess != "COMPUTER" || guess != "computer")
			{
				cout << "\n INCORRECT! TRY AGAIN!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
		else 
			{
				system ("cls");
				cout << "Invalid input. Program will now exit." << endl;
				system ("pause");
				return 0;
			}
		
			string plyagn;
			cout << "\n Play again? (Y / N): ";
			cin >> plyagn;
		
			if (plyagn == "Yes" || plyagn == "Y" || plyagn == "y" || plyagn == "yes")
			{
				system ("cls");
				goto MainMenuGame;
			}
		
			else if (plyagn == "No" || plyagn == "N" || plyagn == "n" || plyagn == "no")
			{
				system ("cls");
				cout << "Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			else 
			{
				system ("cls");
				cout << "Invalid input. Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			break;
			}
	
		case 2: 
		{
			system ("cls");
			cout << "\n ------------- MODERATE LEVEL: GUESS THIS WORD -------------" << endl;
			cout << "\n	E R S E R I O R V " << endl;
			cout << "\n Hint: A large natural or artificial lake used as a source of water supply." << endl;
			
			cout << "\n Input your answer (no spaces / all caps or all lower case are accepted): ";
			cin >> guess;
			
			if (guess == "reservoir" || guess == "RESERVOIR") 
			{
				cout << "\n CORRECT! YOU'RE RIGHT!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
			
			else if (guess != "RESERVOIR" || guess != "reservoir")
			{
				cout << "\n INCORRECT! TRY AGAIN!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
			
			string plyagn;
			cout << "\n Play again? (Y / N): ";
			cin >> plyagn;
			
			if (plyagn == "Y" || plyagn == "y" || plyagn == "yes" || plyagn == "Yes") 
			{
				system ("cls");
				goto MainMenuGame;
			}
			
			else if (plyagn == "N" || plyagn == "n" || plyagn == "no" || plyagn == "No") 
			{
				system ("cls");
				cout << "Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			
			else 
			{
				system ("cls");
				cout << "Invalid input. Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			
			break;
		}
		
		case 3: 
		{
			system ("cls");
			cout << "\n ------------- HARD LEVEL: GUESS THIS WORD -------------" << endl;
			cout << "\n A E I L N E G " << endl;
			cout << "\n Hint: A lineal descent from an ancestor; ancestry or pedigree." << endl;
			
			cout << "\n Input your answer (no spaces / all caps or all lower case are accepted): ";
			cin >> guess;
			
			if (guess == "lineage" || guess == "LINEAGE") 
			{
				cout << "\n CORRECT! YOU'RE RIGHT!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
			
			else if (guess != "LINEAGE" || guess != "lineage")
			{
				cout << "\n INCORRECT! TRY AGAIN!" << endl;
				cout << "\n PROGRAMMED BY: BONIFACIO, JEREMIE NIGEL D. | 1AIT " << endl;
			}
			
			string plyagn;
			cout << "\n Play again? (Y / N): ";
			cin >> plyagn;
			
			if (plyagn == "Y" || plyagn == "y" || plyagn == "yes" || plyagn == "Yes") 
			{
				system ("cls");
				goto MainMenuGame;
			}
			
			else if (plyagn == "N" || plyagn == "n" || plyagn == "no" || plyagn == "No") 
			{
				system ("cls");
				cout << "Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			
			else 
			{
				system ("cls");
				cout << "Invalid input. Program will now exit." << endl;
				system ("pause");
				return 0;
			}
			
			break;
		}
			
	break;
	}
		
break;
		
}
case 3: 
{
	system ("cls");
	string num, name;
	double fg, A, B, C, D, E, equi;

	cout << "\n W E L C O M E !" << endl;
	cout << endl << "\n This program allows the student to input quiz scores and determine the final grade with the equivalent rating." << endl;
	cout << endl << "\n Note: This program uses the 75% passing rate." << endl;
	
	cout << endl << "\n Input your ID Number: ";
	cin.ignore();
    getline(cin, num);
    
    cout << "\n Input your Name: ";
    getline(cin, name);
    
    cout << "\n Input score for Quiz 1: ";
    cin >> A;
    
    cout << "\n Input score for Quiz 2: ";
    cin >> B;
    
    cout << "\n Input score for Quiz 3: ";
    cin >> C;
    
    cout << "\n Input score for Quiz 4: ";
    cin >> D;
    
    cout << "\n Input score for Quiz 5: ";
    cin >> E;
    
    fg = (A + B + C + D + E) / 5;
    
    cout << "\n The Final Grade is: " << fg <<endl ;
    //cout << "-------------------------" << endl;
    
    system ("pause");
    system ("cls");
    
    cout << endl << "\n --------- SUMMARY ---------" << endl;
    
    cout << endl << "\n Student ID: " << num << endl;
    cout << endl << "\n Student Name: " << name << endl;
    cout << endl << "\n Final Grade: " << fg << endl;
    
    if (fg>=98 && fg<=100)
    {
	
    	cout << endl << "\n Equivalent Grade: 1.00 " ;
    	cout << "- P A S S E D" <<endl;
	}
	
	else if (fg>=95 && fg<=97)
	{
	
		cout << endl << "\n Equivalent Grade: 1.25 ";
		cout << "- P A S S E D" <<endl;
	}	
	
	else if (fg>=92 && fg<=94)
	{
	
		cout << endl << "\n Equivalent Grade: 1.50 " <<endl;
		cout << "- P A S S E D" <<endl;
	}
	
	else if (fg>=89 && fg<=91)
	{
		cout << endl << "\n Equivalent Grade: 1.75" <<endl;
		cout << "P A S S E D" <<endl;
	}

	else if (fg>=86 && fg<=88)
	{
		cout << endl << "\n Equivalent Grade: 2.00 ";
		cout << "- P A S S E D" <<endl;
	}

	
	else if (fg>=83 && fg<=85)
	{
		cout << endl << "\n Equivalent Grade: 2.25 ";
		cout << "- P A S S E D" <<endl;
	}
	
	else if (fg>=80 && fg<=82)
	{
		cout << endl << "\n Equivalent Grade: 2.50 ";
		cout << "- P A S S E D" <<endl;
	}

	else if (fg>=78 && fg<=79)
	{
		cout << endl << "\n Equivalent Grade: 2.75 ";
		cout << "- P A S S E D" <<endl;
	}

	else if (fg>=75 && fg<=77)
	{
		cout << endl << "\n Equivalent Grade: 3.00 ";
		cout << " - P A S S E D" <<endl;
	}

	
	else if (fg>=0 && fg<=74)
	{
		cout << endl << "\n Equivalent Grade: 5.00 ";		
    	cout << "- F A I L E D" <<endl;
	}

    else 
    {
    	cout << endl << "\n Invalid Grade " <<endl;
	}
	

cout << endl << "\n PROGRAMMED BY: CABIGTING, GABRIEL LUIS I. | 1AIT " << endl;
    	
	string returnmain;
	cout << "\n Return to main menu? ( Y / N ): ";
    cin >> returnmain;
    		
		if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
    		{
    			system ("cls");
				goto MainMenu1;
			}
		
		else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
    		{
    			system ("cls");
				cout << "Program will now exit." << endl;
				system ("pause");
				return 0;
			}
    	
    	else 
		{
			system ("cls");
			cout << "Invalid input. Program will now exit." << endl;
			system ("pause");
			return 0;
		}
		
	break;
}

case 4: 
{
	system ("cls");
	
	MainMenuMath:
	int progchoice;
	cout << "\n Welcome to the Collection of Various Mathematical Programs! " << endl;
	cout << endl << " (1) Calculator " << endl;
	cout << endl << " (2) Multiplication Table Generator with a given range " << endl;
	cout << endl << " (3) Factorial of a Number " << endl;
	cout << endl << " (4) Return to main menu" << endl;
	
	cout << endl << " Choose the program you want to use: ";
	cin >> progchoice;
	
switch (progchoice)
{
		case 1:
		{
			system ("cls");
			double num1, num2;
			char op;

			cout << "\n CALCULATOR" << endl;
			cout << "\n Input the first number: ";
			cin >> num1;
			
			cout << "\n Input the second number: " ;
			cin >> num2;
			
			cout << "\n Input an arithmetic operation " 
			<< "\n A/a/+ = Addition \n S/s/- = Subtraction \n D/d/'/' = Division \n M/m/* = Multiplication: ";
			
			cin >> op;
			
			if (op == 'A' || op == 'a' || op == '+')
			cout << "\n The sum is " << num1 + num2 <<endl;
			
			else if (op == 'S' || op == 's' || op == '-')
			cout << "\n The difference is " << num1 - num2 <<endl;
			
			else if (op == 'D' || op == 'd' || op == '/')
			cout << "\n The quotient is " << num1 / num2 <<endl;
			
			else if (op == 'M' || op == 'm' || op == '*')
			cout << "\n The product is " << num1 * num2 <<endl;
			
			else 
			cout << "\n Invalid Choice." << endl;
			
			cout <<"\n Programmed by: CONDE, SOPHIA KATRINA F. | 1AIT" << endl;
			
				string returnmain;
				cout << "\n Return to main menu? ( Y / N ): ";
				cin >> returnmain;
			    		
				if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
			    	{
			    		system ("cls");
						goto MainMenuMath;
					}
					
				else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
			    	{
			    		system ("cls");
						cout << "Program will now exit." << endl;
						system ("pause");
						return 0;
					}
					
				else 
					{
						system ("cls");
						cout << "Invalid input. Program will now exit." << endl;
						system ("pause");
						return 0;
					}
						break;
			}
			
		case 2:
			{
				system ("cls");
				int a, range;

			    cout << " Multiplication Table Generator with a given range" << endl;
				cout << endl << " Enter an integer: ";
			    cin >> a;
			
			    cout << endl << " Enter range: ";
			    cin >> range;
			    
			    for (int i = 1; i <= range; ++i) 
				{
			        cout <<endl << " " << a << " * " << i << " = " << a * i << endl;
			    }
			    cout <<"\n Programmed by: CONDE, SOPHIA KATRINA F. | 1AIT" << endl;
			    
				string returnmain;
				cout << "\n Return to main menu? ( Y / N ): ";
				cin >> returnmain;
			    		
				if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
			    	{
			    		system ("cls");
						goto MainMenuMath;
					}
					
				else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
			    	{
			    		system ("cls");
						cout << "Program will now exit." << endl;
						system ("pause");
						return 0;
					}
					
				else 
					{
						system ("cls");
						cout << "Invalid input. Program will now exit." << endl;
						system ("pause");
						return 0;
					}
			    
			   	break; 
			}
			
		case 3: 
			{
				system ("cls");
				int f, n, factorial = 1;

			    cout <<endl << "\n Factorial of a Number" << endl;
				cout << endl << "\n Enter a positive integer: ";
			    cin >> n;
			
			    for (f = 1; f <= n; ++f) 
				{
			        factorial *= f;  
			    }
			
			    cout << endl << "\n The factorial of "<<n<<" is equal to "<< factorial << endl;
			    cout <<"\n Programmed by: CONDE, SOPHIA KATRINA F. | 1AIT" << endl;
			    
				string returnmain;
				cout << "\n Return to main menu? ( Y / N ): ";
				cin >> returnmain;
			    		
				if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
			    	{
			    		system ("cls");
						goto MainMenuMath;
					}
					
				else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
			    	{
			    		system ("cls");
						cout << "Program will now exit." << endl;
						system ("pause");
						return 0;
					}
					
				else 
					{
						system ("cls");
						cout << "Invalid input. Program will now exit." << endl;
						system ("pause");
						return 0;
					}
			    
				break;
			}
		case 4:
		{
				system ("cls");
				goto MainMenu1;
				break;
		} 
}
    //return 0;	
break;
}

case 5:
{
	system ("cls");
	system ("color A4");
	char Tree;
	int Size, Space, Symbol;

	   cout << "\t CHRISTMAS TREE GENERATOR " << endl;
	   cout << "\n Note: 10 to 15 is the preferable height. " << endl;
	   cout << "\n Enter the height of your christmas tree: ";
	   cin >> Size;
	   cout << "\n Note: '*' is the preferable symbol. " << endl;
	   cout << "\n Enter the symbol you would like to use for your tree: ";
	   cin >> Tree;

   for(int i = 0; i < Size; i++)
   {
      Space = (Size-i)-1;
      Symbol = (2*i)+1;
      string sTree(Symbol, Tree);
      string sSpace(Space, '_');
      cout << sSpace << sTree << sSpace << endl;
   }
  	 	cout << "\n MERRY CHRISTMAS! || MALIGAYANG PASKO! " << endl;
		cout <<"\n Programmed by: ALEJANDRO, JAN VINCENT P. | 1AIT" << endl;
    	
    	string returnmain;
    	
		cout << "\n Return to main menu? ( Y / N ): ";
		cin >> returnmain;
    		
		if (returnmain == "Yes" || returnmain == "Y" || returnmain == "y" || returnmain == "yes") 
    	{
    		system ("cls");
			goto MainMenu1;
		}
		
		else if (returnmain == "No" || returnmain == "N" || returnmain == "n" || returnmain == "no")
    	{
    		system ("cls");
			cout << "Program will now exit." << endl;
			system ("pause");
			return 0;
		}
		
		else 
		{
			system ("cls");
			cout << "Invalid input. Program will now exit." << endl;
			system ("pause");
			return 0;
		}		
	break;		
}
	
	case 6: 
	{
		return 0;
		break;
	}

	default:
	{
		system ("cls");
		cout << "Invalid input. Program will now exit." << endl;
		system ("pause");
		return 0;	
	}
}
    system ("pause");
    return 0;
}
