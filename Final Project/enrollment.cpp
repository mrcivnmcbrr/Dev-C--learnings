#include <iostream>
using namespace std;
int main ()

{
	
cout<<" 		                              	San Beda University						" <<endl;
cout<<"                                  638 Mendiola Street, San Miguel, Metro Manila      " <<endl;
cout<<"                              C E R T I F I C A T E   O F   R E G I S T R A T I O N    " <<endl;
cout<<"           Registration No: 000017743                                      Academic Year/Term: 2019-2020, 1st Semester     " <<endl;
cout<<endl;
cout<<"----------------------------------------------STUDENT GENERAL INFORMATION-----------------------------------------------"<<endl;
string name,number,gender,age,section,course,yearlevel,units;
float ta,tf,cl,h,po,av,id,cai,md,a,g,ef,r,lf;

cout<<"Student number: ";
cin>>number;
cout<<"Student name: ";
cin>>name;
cout<<"Gender: ";
cin>>gender; 
cout<<"Age: ";
cin>>age;
cout<<"section: ";
cin>>section;
cout<<"course: ";
cin>>course;
cout<<"year level: ";
cin>>yearlevel;
cout<<endl;
cout<<"-----CODE--------------SUBJECT TITLE-----------------------U    N    I   T----------------SECTION-----------------------" <<endl;
cout<<"		                                          Lec  Lab  Credit                     " <<endl;
cout<<"    MATH       Mathematics in the modern world            3.0  0.0   3.0                   AIT1 " <<endl;
cout<<"    PCOMM      Purposive Communication                    3.0  0.0   3.0            	   AIT1 " <<endl;
cout<<"    CC101      Introduction to Computing                  3.0  0.0   3.0                   AIT1 " <<endl;
cout<<"    CC102      Computer Programming 1                     0.0  0.0   3.0              	   AIT1 " <<endl;	
cout<<"    IT101      Social and Professional Issues             3.0  0.0   3.0               	   AIT1 " <<endl;
cout<<"    NSTP1      National Service Traning Program 1        (3.0) 0.0  (3.0)                  AIT1 " <<endl;
cout<<"    HKD01      Physical Fitness Test/Gymnastic/aerobics  (2.0) 0.0  (2.0)                  AIT1 " <<endl;
cout<<"    BENE01     The Life and Miracles of St. Benedict and (2.0) 0.0  (2.0)                  AIT1 " <<endl;
cout<<"               the benedictine Hallmarks" <<endl;
cout<<"    PEPBA      Bedan Awareness and Personality           (1.0) 0.0  (1.0)                  AIT1 " <<endl;
cout<<"               Development Program                       ________________                       " <<endl;
cout<<"                                         Total Unit(s)    12.0 3.0  15.0                        " <<endl;
cout<<endl;

cout<<"-------------------A S S E S S E D   F E E S--------------------"<<endl;
cout<<" TUITION FEE"<<endl;
cout<<"   Tuition fee:                                       ";
cin>>tf;
cout<<" MISCELLEANEOUS"<<endl;
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







system ("pause");
return 0;		
}
