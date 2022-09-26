//Example 3 Predefined Functions

#include<iostream>
#include<cmath>
#include<cctype>
#include<iomanip>


using namespace std;

int main()
{
    cout<<showpoint<<setprecision(2)<<fixed; 
    int a = -128;
    double x=15.8, y=0.89, z= -0.75;
    
    cout<< "--- Math Functions ---" <<endl;
    cout<<"1. " <<abs(a) <<endl ;
    cout<<"2. " <<ceil(x) <<" " <<ceil(y) <<endl;
    cout<<"3. " <<floor(23.3) <<" " <<floor(23.0) <<endl;
    cout<<"4. " <<sqrt(16) <<endl ;
    cout<<"5. " <<pow(0.16, 0.5) <<" " <<pow(4.0,2.0) <<endl ;
    cout<<"6. " <<cos(23.5) <<" " <<cos(-45) <<endl ;
    cout<<"7. " <<sin(0) <<" " <<sin(98.2) <<endl ;
    cout<<"8. " <<tan(0) <<" " <<tan(33.2) <<endl ;
    cout<<"9. " <<tan(5) + sin(12.5)  <<" " <<tan(33.2) <<endl ;
    cout<<"10. " <<islower('H') <<endl;
    cout<<"11. " <<isupper('T') <<" " <<isupper('t')<<endl;
   cout<<"12. " <<tolower('A') <<endl;
   cout<<"13. " <<sqrt(38.44) * pow(2.4, 2) / fabs(-3.2) <<endl;
    cout<<"14. " <<floor(15.99) * ceil(45.88) / abs(-5) * pow(7.5, 3) <<endl;
   // cout << "12. " <<"Lowercase A is: " <<static_cast<char>(tolower('A')) <<endl;

    cout<<"15. " <<abs(-5) * pow(7.5, 3) / floor(15.99) * ceil(45.88) <<endl;
    cout<<"16. " << abs(-5) * pow(7.5, 3) / floor(15.99) * ceil(45.88) <<endl;
    cout<<"17. " <<  sin(15) * cos(5) / tan(45.12) <<endl;
    cout << "18. " <<static_cast<char>(toupper('k')) <<endl;
    cout << "19. " <<static_cast<char>(toupper('#')) <<endl;
      cout << "20. " <<static_cast<char>(tolower('T')) <<endl;
      cout << "21. " <<static_cast<char>(tolower('m')) <<endl;
      cout << "22. " <<isupper('F') <<endl;
      cout << "23. " <<islower('Y') <<endl;
      cout << "24. " <<static_cast<char>(toupper('&')) <<endl;
    
  //  cout<<floor(15.5) + ceil(-6.5) <<endl;
  //  cout<<floor(-18.35) + floor(34.6) <<endl;
   //  cout<<floor(-20.90) + ceil(-10.4) <<endl;
    system("pause");
    return 0;
}
