#include<iostream>
#include<limits>
 using namespace std;
 const int Login = 1;
 const int Sign_up = 2;
 int login()
 {
    string Username, password;
    cout << "Username = " ;
     getline(cin, Username);
      cout << "\n";
    cout << "Password = " ;
    getline(cin, password);
     cout << "\n";

 }

 int sign_up()
 {
    string name, password,Gmail, D_O_B;


    cout << "Name = "  ;
    getline(cin, name);
    cout << "\n";

    cout << "Password = " ;
    getline(cin, password);
     cout << "\n";

    cout << "Date of birth = " ;
    getline(cin, D_O_B);
     cout << "\n";

    cout << "Gmail = " ; 
    getline(cin, Gmail);
     cout << "\n";

 }
 int main()
 {
  int choic;
    string User_input;
    cout << "Welcome to the website _________" ;
    cout << " 1 for Login or  2 for signup __________" ;
    cin >> choic;
     cout << "\n";
     
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    if (choic == Login )

    {
        login();    
    }
    else if (choic == Sign_up)
    {
        sign_up();
    }
    else 
    {
        cout << "Enter a valid input" << endl;
    }


 }