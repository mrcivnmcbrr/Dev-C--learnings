#include <iostream>
#include <string>
using namespace std; 

int main () {
	
	system ("color 47");
	string password = "march2023";
	string passWord;
	int counter = 1;
	
		cout << "***** HOLD! PLEASE ENTER THE APPROPRIATE PASSWORD *****" <<endl;
		cout << "Password: ";
		getline (cin, passWord, '\n');
		
		while (passWord != password && counter <3)
		{
			cout << "ERROR!" <<endl;
			cout << "Please try again: ";
			getline (cin, passWord, '\n');
			counter ++;
		}
		
		if (passWord == password && counter <=3)
		{
			cout << "Sucessful log-in! Proceed to the Main Menu" <<endl;
		}
		
		else 
		{
			system ("cls");
			cout <<endl;
			cout << "Sorry, you only have 3 attempts." <<endl;
			cout << "Please restart the program. ";
			
			system ("pause");
			return 0;
		}
	
	system ("pause");
	system ("cls");
	
	string name, gender;
	char choice;
	char choice1;
	
	
	cout << " ********************* ********************* ********************* ********************* *********************" <<endl;
	cout << "  *******************   *******************   *******************   *******************   *******************" <<endl;
	cout << "   *****************     *****************     *****************     *****************     *****************" <<endl;
	cout << "    ***************       ***************       ***************       ***************       ***************" <<endl;	
	cout << "     *************         *************         *************         *************         *************" <<endl;
	cout << "      ***********           ***********           ***********           ***********           ***********" <<endl;
	cout << "       *********             *********             *********             *********             *********" <<endl;
	cout << "        *******               *******               *******               *******               *******" <<endl;
	cout << "         *****                 *****                 *****                 *****                 *****" <<endl;
	cout << "          ***                   ***                   ***                   ***                   ***" <<endl;	
	cout << "           *                     *                     *                     *                     *" <<endl <<endl;	
	
	
	cout << "Good day, please enter the following information so that the program can address you properly." <<endl <<endl;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your gender (F/M): ";
	getline (cin, gender);
	
	if (gender == "m" || gender == "M")
	{
		cout << "Good day, Mr. " <<name << "!" <<endl;
	}
	
	else if (gender == "f" || gender == "F")
	{
		cout << "Good day, Ms. " <<name << "!" <<endl;
	}
	
	else 
	{
		system ("cls");
		cout << "INVALID! Please restart the program." <<endl;
		system ("pause");
		return 0;
	}
	
	do{
	system ("cls");
	Options1:
		system ("color 7C");
	
	cout << " _______________________________________________________________________________ "  <<endl;
	cout << "*                                                                               *"  <<endl;
	cout << "**                                                                             **"  <<endl;
    cout << "***                  Here are the list of programs available                  ***"  <<endl;
    cout << "****                                                                         ****"  <<endl;                
    cout << "*****                     ('1') Payroll System                              *****"  <<endl;   
    cout << "****                      ('2') Grading System                               ****"  <<endl;
	cout << "***                       ('3') Enrollment                                    ***"  <<endl;
	cout << "**                        ('4') Close the Program                              **"  <<endl;
    cout << "*                                                                               *"  <<endl;
    cout << "_________________________________________________________________________________"  <<endl;
	
		if (gender == "m" || gender == "M")
	{
		cout << " \n Good day, Mr. " <<name << "!" <<endl;
	}
	
	else if (gender == "f" || gender == "F")
	{
		cout << " \n Good day, Ms. " <<name << "!" <<endl;
	}
	
	else 
	{
		system ("cls");
		cout << "INVALID! Please restart the program." <<endl;
		system ("pause");
		return 0;
	}
	cout << " \n Please enter your desired program (1 / 2 / 3 / 4): ";
	cin >> choice; 

	system ("cls");
	
	string name, num, college, sn, section;
	float sal, tax, sss, pi, ph, loan, absences, tutorial, gross, td, net, q1, q2, ass1, ass2, lab1, lab2, lab3, me, fe, fg, cs, ge, gd;
	
if (choice == '1'){
	system ("color 04");

cout<<"     **          **          **          **          **          **          **          **          **" <<endl;
cout<<"    ****        ****        ****        ****        ****        ****        ****        ****        ****" <<endl;
cout<<"   ******      ******      ******      ******      ******      ******      ******      ******      ******" <<endl;
cout<<"  ********    ********    ********    ********    ********    ********    ********    ********    ********" <<endl;
cout<<" **********  **********  **********  **********  **********  **********  **********  **********  **********" <<endl <<endl;

cout<<" 		                              	San Beda University						" <<endl;
cout<<"                                  638 Mendiola Street, San Miguel, Metro Manila      " <<endl;
cout<<"                                            P A Y R O L L  S Y S T E M               " <<endl;
	cout <<endl;
	cout <<endl; 
	cout << "---- Employee Information ----" <<endl;
	cin.ignore();
	cout << "Input Employee Name: ";
	getline (cin,name); 
	cout << "Input Employee Number: ";
	getline(cin,num); 
	cout << "Input College: ";
	getline(cin,college); 
	cout << "Payroll Period: November 1-15, 2019" <<endl <<endl;
	
	cout << "     **********************" <<endl;
	cout << "     **********************" <<endl;
	cout << "     ********            ******" <<endl;
	cout << "     ********            ******" <<endl;
	cout << " *************************************" <<endl;
	cout << "     ******              ******" <<endl;
	cout << " *************************************" <<endl;
	cout << "     ******              ******" <<endl;
	cout << "     ******              ******" <<endl;
	cout << "     **********************" <<endl;
	cout << "     **********************" <<endl;
	cout << "     ********" <<endl;
	cout << "     ********" <<endl;
	cout << "     ********" <<endl;
	cout << "     ********" <<endl;
	cout << "     ********" <<endl;
	cout << "     ********" <<endl <<endl;
	
	cout << "INCOME: " <<endl;
	cout << "Input Basic Salary: ";
	cin >> sal;
	cout << "Input Tutorial: ";
	cin >> tutorial; 
	cout <<endl;
	cout << "----------------------------" <<endl;
	gross = sal + tutorial;
	cout << "Gross Income: Php " <<gross <<endl;
	cout << "----------------------------" <<endl;
	cout <<endl <<endl;
	cout << "DEDUCTIONS" <<endl;
	cout << "Input Tax: ";
	cin >> tax;
	cout << "Input SSS: ";
	cin >> sss;
	cout << "Input Pag-ibig: ";
	cin >> pi;
	cout << "Input PhilHealth: ";
	cin >> ph;
	cout << "Input Loan: ";
	cin >> loan;
	cout << "Input Absences: ";
	cin >> absences;
	td = (tax + sss + pi + ph + loan + absences);
	cout << "Total Deductions: Php " <<td <<endl;
	cout << "----------------------------" <<endl;
	cout <<endl;
	cout << "----------------------------" <<endl;
	net = (gross - td);
	cout << "NET INCOME: Php " <<net <<endl;
	cout << "----------------------------" <<endl;
	system ("pause");
	system ("cls");
	system ("color 04");
	cout << "------ SUMMARY OF PAYROLL REPORT ------" <<endl;
	cout <<endl;
	cout << "Employee Name: " <<name <<endl;
	cout << "Employee Number: " <<num <<endl;
	cout << "Gross Income: Php " <<gross <<endl;
	cout << "Total Deductions: Php " <<td <<endl;
	cout << "Net Income: Php " <<net <<endl;

	
		cout << "Do you want to go back to the Main Menu? (Y/N): ";
		cin >> choice1;
	}
	      
	      
	      
	      
	      
	      
	      
	      

	

else if (choice == '2')
	{
	system ("color 4F");
	
cout<<"     **          **          **          **          **          **          **          **          **" <<endl;
cout<<"    ****        ****        ****        ****        ****        ****        ****        ****        ****" <<endl;
cout<<"   ******      ******      ******      ******      ******      ******      ******      ******      ******" <<endl;
cout<<"  ********    ********    ********    ********    ********    ********    ********    ********    ********" <<endl;
cout<<" **********  **********  **********  **********  **********  **********  **********  **********  **********" <<endl <<endl;

cout<<" 		                              	San Beda University						" <<endl;
cout<<"                                  638 Mendiola Street, San Miguel, Metro Manila      " <<endl;
cout<<"                                            G R A D I N G  S Y S T E M " <<endl;
	cout <<endl <<endl;
	cout << "----- Student Information -----" <<endl;
	cin.ignore();
	cout << "Enter Student Name: ";
	getline(cin, name);
	cout << "Enter Student Number: ";
	getline(cin,sn);
	cout << "Enter Section: ";
	getline(cin,section);
	cout << endl <<endl;
	cout << "----- Class Standing -----" <<endl;
	cout << "Input grade in Quiz No. 1: ";
	cin >> q1;
	cout << "Input grade in Quiz No. 2: ";
	cin >> q2;
	cout << "Input grade in Assignment No. 1 : ";
	cin >> ass1;
	cout << "Input grade in Assignment No. 2: ";
	cin >> ass2;
	cout << "Input grade in Lab Exercise No. 1: ";
	cin >> lab1;
	cout << "Input grade in Lab Exercise No. 2: ";
	cin >> lab2;
	cout << "Input grade in Lab Exercise No. 3: ";
	cin >> lab3;
	cout <<endl;
	cout << "Input grade in Midterm Exam: ";
	cin >> me;
	cout << "Input grade in Final Exam: ";
	cin >> fe;
	
	cs = ((q1 + q2)/2)*.40 + ((ass1 + ass2)/2)*.20 + ((lab1 + lab2 + lab3)/3)*.40;
	cout << "Class Standing: " <<cs <<endl; 
	
	fg = ((cs )*.50 + ((me)*.20) + (fe)*.30);
	cout << "Final Grade: " <<fg <<endl;
	
	system ("pause");
	system ("cls");	
	system ("color F4");
	cout << "------ SUMMARY OF GRADING REPORT ------" <<endl <<endl;
	cout << "Student Name: " <<name <<endl;
	cout << "Student Number: " <<sn <<endl;
	cout << "Section: " <<section <<endl;
	cout << "Final Grade: " <<fg <<endl;
	
	
	 if (fg >=96.00 && fg <= 100.00)
		{
			cout << "Grade Equivalent: 1.00 " <<endl;
			cout << "Grade Description: A+ " <<endl;
		}
	else if (fg >= 94.00 && fg <= 95.99)
		{
			cout << "Grade Equivalent: 1.25 " <<endl;
			cout << "Grade Description: A " <<endl;
		}
	else if (fg >=91.00 && fg <= 93.99)
		{
			cout << "Grade Equivalent: 1.50 " <<endl;
			cout << "Grade Description: A- " <<endl;
		}
	else if (fg  >=89.00 && fg <= 90.99)
		{
			cout << "Grade Equivalent: 1.75 " <<endl;
			cout << "Grade Description: B+ " <<endl;
		}
	else if (fg >= 86.00 && fg <= 88.99)
		{
			cout << "Grade Equivalent: 2.00 " <<endl;
			cout << "Grade Description: B " <<endl;
		}
	else if (fg >= 83.00 && fg <= 85.99)
		{
			cout << "Grade Equivalent: 2.25 " <<endl;
			cout << "Grade Description: B- " <<endl;
		}
	else if (fg >= 80.00 && fg <= 82.99)
		{
			cout << "Grade Equivalent: 2.50 " <<endl;
			cout << "Grade Description: C+ " <<endl;
		}	
	else if (fg >= 77.00 && fg <= 79.99)
		{
			cout << "Grade Equivalent: 2.25 " <<endl;
			cout << "Grade Description: C " <<endl;
		}	
	else if (fg >= 75.00 && fg <= 76.99)
		{
			cout << "Grade Equivalent: 3.00 " <<endl;
			cout << "Grade Description: C- " <<endl;
		}		
	else 
		{
			cout << "Grade Equivalent: 5.00 " <<endl;
			cout << "Grade Description: F " <<endl;
		}	
	cout <<endl;
	cout << "Do you want to go back to the Main Menu? (Y/N): ";
		cin >> choice1;
}

else if (choice == '3')
{

	system ("color 40");
	
cout<<"     **          **          **          **          **          **          **          **          **" <<endl;
cout<<"    ****        ****        ****        ****        ****        ****        ****        ****        ****" <<endl;
cout<<"   ******      ******      ******      ******      ******      ******      ******      ******      ******" <<endl;
cout<<"  ********    ********    ********    ********    ********    ********    ********    ********    ********" <<endl;
cout<<" **********  **********  **********  **********  **********  **********  **********  **********  **********" <<endl <<endl;

cout<<" 		                              	San Beda University						" <<endl;
cout<<"                                  638 Mendiola Street, San Miguel, Metro Manila      " <<endl;
cout<<"                              C E R T I F I C A T E   O F   R E G I S T R A T I O N    " <<endl;
cout<<"           Registration No: 000017743                                      Academic Year/Term: 2019-2020, 1st Semester     " <<endl;
cout<<endl;
cout<<"----------------------------------------------STUDENT GENERAL INFORMATION-----------------------------------------------"<<endl;
string name,number,gender,age,section,course,yearlevel,units;
float ta,tf,cl,h,po,av,id,cai,md,a,g,ef,r,lf;
cin.ignore();
cout<<"\t\t Student number: ";
getline(cin,number); 
cout<<"Student name: ";
getline(cin,name); 
cout<<"Gender: ";
getline(cin,gender); 
cout<<"Age: ";
getline(cin,age); 
cout<<"Section: ";
getline(cin,section); 
cout<<"Course: ";
getline(cin,course); 
cout<<"Year Level: ";
getline(cin,yearlevel); 
cout<<endl;

cout<<"-----CODE--------------SUBJECT TITLE-----------------------U    N    I   T----------------SECTION-----------------------" <<endl;
cout<<"		                                          Lec  Lab  Credit                     " <<endl;
cout<<"    MATH       Mathematics in the modern world            3.0  0.0   3.0                   AIT1 " <<endl;
cout<<"    PCOMM      Purposive Communication                    3.0  0.0   3.0            	      AIT1 " <<endl;
cout<<"    CC101      Introduction to Computing                  3.0  0.0   3.0                   AIT1 " <<endl;
cout<<"    CC102      Computer Programming 1                     0.0  0.0   3.0              	  AIT1 " <<endl;	
cout<<"    IT101      Social and Professional Issues             3.0  0.0   3.0               	  AIT1 " <<endl;
cout<<"    NSTP1      National Service Traning Program 1        (3.0) 0.0  (3.0)                  AIT1 " <<endl;
cout<<"    HKD01      Physical Fitness Test/Gymnastic/aerobics  (2.0) 0.0  (2.0)                  AIT1 " <<endl;
cout<<"    BENE01     The Life and Miracles of St. Benedict and (2.0) 0.0  (2.0)                  AIT1 " <<endl;
cout<<"               the benedictine Hallmarks" <<endl;
cout<<"    PEPBA      Bedan Awareness and Personality           (1.0) 0.0  (1.0)                  AIT1 " <<endl;
cout<<"               Development Program                       ________________                       " <<endl;
cout<<"                                         Total Unit(s)    12.0 3.0  15.0                        " <<endl;
cout<<endl;

cout<<"-------------------A S S E S S E D   F E E S--------------------"<<endl;
cout<<"     TUITION FEE"<<endl;
cout<<"     Tuition fee:                                     ";
cin>>tf;
cout<<"     MISCELLEANEOUS"<<endl;
cout<<"     Handbook                                         ";
cin>>h;
cout<<"     Parents orientation                              ";
cin>>po;
cout<<"     Audio visual                                     ";
cin>>av;
cout<<"     I.D. Card                                        ";
cin>>id;
cout<<"     Computer Aided Instruction                       ";
cin>>cai;
cout<<"     Medical & Dental                                 ";
cin>>md;
cout<<"     Athletics                                        ";
cin>>a;
cout<<"     Guidance                                         ";
cin>>g;
cout<<"     Energy Fee                                       ";
cin>>ef;
cout<<"     Registration                                     ";
cin>>r;
cout<<"     Library Fee (with internet)                      ";
cin>>lf;
cout<<"                                              ________________        "<<endl;

ta= (tf+cl+h+po+av+id+cai+md+a+g+ef+r+lf);
cout<<"               Total Assessment:                      " <<ta <<endl;

system ("pause");
system("cls");

system ("color 47");
cout<<"-------- SUMMARY OF ENROLLMENT REPORT --------"<<endl;
cout<<"              Student Name: " <<name <<endl;
cout<<"              Student Number: " <<number <<endl;
cout<<"              Gender: " <<gender <<endl;
cout<<"              Age: " <<age <<endl;
cout<<"              Section: " <<section <<endl;
cout<<"              Program/Course: " <<course <<endl;
cout<<"              Year Level: " <<yearlevel <<endl;
cout<<" Total Unit(s): 15" <<endl;
cout<<"          Total Assessment/Fees: " <<ta <<endl;
cout << endl;
cout << "Do you want to go back to the Main Menu? (Y/N): ";
		cin >> choice1;
}

else 
	{
		system ("cls");
	system("color C0");
	
	cout<<"Submitted By: Group 2" <<endl <<endl;
	
	cout<<"Leader: Marc Ivan Cabrera" <<endl <<endl;
	
	cout<<"Members: "<<endl;
	
	cout<<"Jared Dayanghirang "<<endl;
	
	cout<<"Veron Catanyag"<<endl;
	
	cout<<"Justine Patricio"<<endl;
	
	cout<<"Jayr Castro"<<endl <<endl;
	
	cout<<"Section: 1AIT" <<endl <<endl;
	
	cout<<"Submitted To: " <<endl;
	
	cout<<"Engr. Lizel Rose Natividad <3" <<endl <<endl;
	
	cout<<"Date of Submission:" <<endl;
	
	cout<<"November 29, 2019" <<endl <<endl;
		}

	} while (choice1 == 'Y' || choice1 == 'y');

{
		system ("cls");
	system("color 0C");
	
	cout<<"Submitted By: Group 2" <<endl <<endl;
	
	cout<<"Leader: Marc Ivan Cabrera" <<endl <<endl;
	
	cout<<"Members: "<<endl;
	
	cout<<"Jared Dayanghirang "<<endl;
	
	cout<<"Veron Catanyag"<<endl;
	
	cout<<"Justine Patricio"<<endl;
	
	cout<<"Jayr Castro"<<endl <<endl;
	
	cout<<"Section: 1AIT" <<endl <<endl;
	
	cout<<"Submitted To: " <<endl;
	
	cout<<"Engr. Lizel Rose Natividad <3" <<endl <<endl;
	
	cout<<"Date of Submission:" <<endl;
	
	cout<<"November 29, 2019" <<endl <<endl;
		}

	

system ("pause");
return 0;
}

