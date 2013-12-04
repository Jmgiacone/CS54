/*
 * Name: GIACONE, JORDAN
 * Date: 10-23-13
 * Class and Section: CS54, Section E
 * Description: Simulates a server login screen. Takes domain, name, username
                and password. This is succeptible to a buffer overflow attack
 */

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

const int DOMAIN_SIZE = 10 +1, 
          FULL_NAME_SIZE = 20 + 1, 
          USERNAME_SIZE = 10 + 1, 
          PASSWORD_SIZE = 10 + 1;
//const char PASSWORD[] = "9a$$w0R6";

int main()
{
  char answer;
  char *buffer = new char[USERNAME_SIZE + PASSWORD_SIZE + 2];
  char *userName = buffer;
  char *PASSWORD = buffer + USERNAME_SIZE + 1;
  strcpy(PASSWORD, "9a$$w0R6");
  char domain[DOMAIN_SIZE], 
       fullName[FULL_NAME_SIZE], 
       password[PASSWORD_SIZE];
       //, userName[USERNAME_SIZE];
  
  do
  {
    cout << "\n======== Log In ========\n" 
         << "Enter a Domain Name: ";
    cin >> domain;

    //Ignore the newline character
    cin.ignore();

    cout << "Enter Full Name: ";
    cin.getline(fullName, FULL_NAME_SIZE); 

    cout << "Enter User Name: ";
    cin.getline(userName, RAND_MAX);
 
    cout << "Enter Password: ";
    cin >> password;
    cout << endl;

    //Convert to upper case
    for(int i = 0; i < DOMAIN_SIZE; i++)
    {
      domain[i] = toupper(domain[i]);
    }  
 
    cout << "-------- Status --------" << endl;
    cout << "Server: " << domain << endl;
 
    if(strcmp(userName, "etnc6d") == 0 || 
       strcmp(userName, "c_price") == 0 || 
       strcmp(userName, "Amy_Briggs") == 0 || 
       strcmp(userName, "lasanthi") == 0 || 
       strcmp(userName, "nateEloe!!") == 0 || 
       strcmp(userName, "eric") == 0)
    {
      cout << "User: " << userName << endl;

      if(strcmp(password, PASSWORD) == 0)
      {
        cout << "ACCESS GRANTED" << endl;
      }
      else
      {
        cout << "ACCESS DENIED" << endl;
      }
    }
    else
    {
      cout << "User " << userName << " not recognized." << endl;
    }
    
    do
    {
      cout << "Go again? (y/n): ";
      cin >> answer;
  
      if(answer != 'n' && answer != 'y')
      {
        cout << "Illegal answer. Try again." << endl;
      }
    }while(answer != 'n' && answer != 'y');
    cout << endl;

  }while(answer != 'n');
  
  return 0;
}
