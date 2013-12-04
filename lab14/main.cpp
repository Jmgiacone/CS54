// Name: GIACONE, JORDAN
// Class & Section: CS54, Section E
// Date: Dec. 4 2013
// Description: The main file tha runs everything

#include<iostream>
#include<cstdlib>
#include<ctime>
#include "SortingMachineH.h"

using namespace std;

int main()
{
  const int SMALL  = 1000;
  const int MEDIUM = 10000;
  const int LARGE  = 100000;
  
  srand(time(NULL));
  
  int smallArray[SMALL];
  int mediumArray[MEDIUM];
  int largeArray[LARGE];
  char charArray[LARGE];
  
  for(int i = 0; i < SMALL; i++)
    smallArray[i] = rand();
	
  for(int i = 0; i < MEDIUM; i++)
    mediumArray[i] = rand();
	
  for(int i = 0; i < LARGE; i++)
    largeArray[i] = rand();
  
  for(int i = 0; i < LARGE; i++)
  {
    charArray[i] = rand() % 256;
  }
	
  SortingMachine<int> smallMachine;
  smallMachine.m_size = SMALL;
  SortingMachine<int> mediumMachine;
  mediumMachine.m_size = MEDIUM;
  SortingMachine<int> largeMachine;
  largeMachine.m_size = LARGE;
  SortingMachine<char> charMachine;
  charMachine.m_size = LARGE;
  
  cout << endl << SMALL << " ints";
  clock_t start = clock();
  sort(smallMachine, smallArray);
  float duration = (clock() - start) / static_cast<float>(CLOCKS_PER_SEC);
  cout << "Time: " << duration << " seconds" << endl;

  cout << endl << MEDIUM << " ints";
  start = clock();
  sort(mediumMachine, mediumArray);
  duration = (clock() - start) / static_cast<float>(CLOCKS_PER_SEC);
  cout << "Time: " << duration << " seconds" << endl;

  cout << endl << LARGE << " ints";
  start = clock();
  sort(largeMachine, largeArray);
  duration = (clock() - start) / static_cast<float>(CLOCKS_PER_SEC); 
  cout << "Time: " << duration << " seconds" << endl;  
  
  cout << endl << LARGE << " characters";
  start = clock();
  sort(charMachine, charArray);
  duration = (clock() - start) / static_cast<float>(CLOCKS_PER_SEC); 
  cout << "Time: " << duration << " seconds" << endl;

  return 0;
}
