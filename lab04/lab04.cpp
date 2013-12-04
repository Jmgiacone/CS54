//Name: GIACONE, JORDAN
//Date: 9/18/13
//Class and Section: CS54, Section E
//Description: Computes the average of X number of numbers between REG_UPPER and REG_LOWER
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const long REG_UPPER = 100, REG_LOWER = -100, 
           BONUS_UPPER = 1000000000000, BONUS_LOWER = -1000000000000, 
           REGULAR_MOD_CONSTANT = REG_UPPER - REG_LOWER + 1,
           BONUS_MOD_CONSTANT = BONUS_UPPER - BONUS_LOWER + 1;

int main()
{
  srand((unsigned)time(NULL));
  long numOfNumbers, total, currentNum, bonusTotal;
  char quit;
  
  do
  {
    do
    {
      total = 0;
      bonusTotal = 0;
      cout << "Please enter an integer number of values to be averaged: ";
      cin >> numOfNumbers;

      if(numOfNumbers <= 0)
      {
        cout << numOfNumbers << " is not greater than 0. Please try again" 
             << endl;
      }
    }while(numOfNumbers <= 0);
  
    for(int i = 0; i < numOfNumbers; i++)
    {
      currentNum = rand() % REGULAR_MOD_CONSTANT + REG_LOWER;
      
      if(numOfNumbers <= 20)
      {
        cout << currentNum << " ";
        
        if(i == numOfNumbers - 1)
        {
          cout << endl;
        }
      }

      total += currentNum;
      currentNum = ((rand() / static_cast<double>(RAND_MAX)) * 2 * BONUS_UPPER) - BONUS_UPPER;
      bonusTotal += currentNum;
      //rand() % (b-a+1)+a
      //bonusTotal = 
    }
    
    cout << numOfNumbers << " random numbers on [" 
         << REG_LOWER << "," << REG_UPPER << "]"
         << " produced an average of " 
         << (total / (static_cast<float>(numOfNumbers))) 
         << "\n" << numOfNumbers << " random numbers on [" 
         << BONUS_LOWER << "," << BONUS_UPPER << "]"
         << "\nproduced an average of "
         << (bonusTotal / (static_cast<double>(numOfNumbers)))
         <<  endl;

    cout << "Repeat with a new number of random values? (y/n): ";
    cin >> quit;
  }while(quit != 'n' && quit != 'N');
  
  cout << "\nAll done!" << endl; 
  return 0;
}
