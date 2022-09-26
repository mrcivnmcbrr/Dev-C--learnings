#include <iostream>
using namespace std;
int main()
{
	cout<<"													San Beda University" <<endl;
	cout<<"										            639 Mendiola Street, San Miguel, Metro Manila" <<endl;
	cout<<"								                    C E R T I F I C A T I O N   O F   R E G I S T R A T I O N" <<endl;
	cout<<"											        Academic Year 2019-2020, 1st Semester" <<endl;
	
	string name,num,gender;
	float tf,lab,hb,po,av,id,cai,md,athletics,guidance,ef,registration,lf,ttf,sum;
	char choice;
	
	
	cout<<"Enter Student Name: ";
	getline(cin,name);
	cout<<"Enter Student Number: ";
	getline(cin,num);
	cout<<"Enter Gender (F/M): ";
	getline(cin,gender);
	
	cout<<"****************************************************************************************************************************************************************************************************************" <<endl;
	cout<<"CODE                 SUBJECT TITLE                                                           Lec  Lab  Credit                            " <<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"MATH        Mathematics in the Modern World                                                  3.0  0.0  3.0                               " <<endl;
	cout<<"PCOMM       Purposive Communication                                                          3.0  0.0  3.0                               " <<endl;
	cout<<"CC101       Introduction to Computing                                                        3.0  0.0  3.0                               " <<endl;
	cout<<"CC102       Computer Programming 1                                                           0.0  3.0  3.0                               " <<endl;
	cout<<"IT101       Social and Professional Issues                                                   3.0  0.0  3.0                               " <<endl;
	cout<<"NSTP1       National Service Training Program 1                                              3.0  0.0  3.0                               " <<endl;
	cout<<"HKD01       Physical Fitness Test/Gymnastics/Aerobics                                        2.0  0.0  2.0                               " <<endl;
	cout<<"BENE01      The Life and Miracles of St. Benedict and the Benedictine Hallmarks              2.0  0.0  2.0                               " <<endl;
	cout<<"PEPBA       Bedan Awareness and Personality Developmant Program                              1.0  0.0  1.0                               " <<endl;
	cout<<"                                                                                            -------------------                           " <<endl;
	cout<<"                                                                              Total Unit(s) 12.0  3.0  15.0                               " <<endl;
	
	cout<<"***************************************************************************************************************************************************************************************************************" <<endl;
	cout<<"*                                                                                                             A S S E S S E D   F E E S                                                                         *" <<endl;
	cout<<"***************************************************************************************************************************************************************************************************************" <<endl;
	
	cout<<"Enter Tuition Fee: " ;
	cin>>tf;
	cout<<"Enter Computer Laboratory Fee: " ;
	cin>>lab;
	
	cout<<"MISCELLEANOUS";
	cout<<"Handbook: ";
	cin>>hb;
	cout<<"Parents Orientation: ";
	cin>>po;
	cout<<"Audio Visual: ";
	cin>>av;
	cout<<"I.D. Card: ";
	cin>>id;
	cout<<"Computer Aided Instructions: ";
	cin>>cai;
	cout<<"Medical & Dental: ";
	cin>>md;
	cout<<"Atheletics: ";
	cin>>athletics;
	cout<<"Guidance: ";
	cin>>guidance;
	cout<<"Energy Fee: ";
	cin>>ef;
	cout<<"Registration: ";
	cin>>registration;
	cout<<"Library Fee: ";
	cin>>lf;
	cout<<endl;
	
	ttf=tf+lab+hb+po+av+id+cai+md+athletics+guidance+ef+registration+lf;
	
	cout<<"Total Assessment: php " <<ttf <<endl;
	
	
	
	system ("pause");
	return 0;
}
