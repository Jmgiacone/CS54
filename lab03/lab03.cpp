//Name: GIACONE, JORDAN
//Date: 9-11-13
//Class and Section: CS54 Section E
//Description: A simple menu program that tells the user whether a given
//number is divisible by 49

#include<iostream>
using namespace std;

const int DIVISOR = 49;
int main()
{
  int numberToTest;
  char choice;
  
  do
  {
    do
    {
      cout << "What would you like to do?\nA: Determine if X is divisible by " 
           << DIVISOR << "\nB: Output some message\nC: QUIT"
           << "\nChoice(Case doesn't matter): ";
      cin >> choice;

      if(!(choice == 'a' || choice  == 'A' || 
           choice == 'b' || choice == 'B' || 
           choice == 'c' || choice == 'C'))
      {
        cout << "\n" << choice << " is not a valid option. Try again\n" << endl;
        //The newline at the end was put in to preserve the 80 character limit
      }
    }while(!(choice == 'a' || choice  == 'A' || 
             choice == 'b' || choice == 'B' || 
             choice == 'c' || choice == 'C'));
    //A, B, C and a, b, c are valid inputs. Case insensitive

    if(choice == 'a' || choice == 'A')
    {
      cout << "\nPlease enter an INTEGER to test: ";
      cin >> numberToTest;

      if(numberToTest % DIVISOR == 0)
      {
        cout << "Hooray! " << numberToTest << " is divisible by " << DIVISOR 
             << "!" << endl << endl;  
      }
      else
      {
        cout << "Awww man! " << numberToTest << " is NOT divisible by " 
             << DIVISOR << endl << endl;
      }
    }
    else if(choice  == 'b' || choice  == 'B')
    {
      cout << "\nThe bonus phrase is: Bjarne Stroustrup" << endl << endl;
    }
  }while(!(choice == 'c' || choice == 'C'));
  //I haven't simplified this because I believe it to be clearer.
  
  cout << "You chose to quit. Goodbye, quitter." << endl;
  return 0;
}
