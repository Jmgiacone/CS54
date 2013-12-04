/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS 54, Section E
 * Date: 10/16/13
 * Description: A main file that will generate 2 arrays filled with random 
                numbers and then sort them.
 */

#include "lab08SortHeader.h"

int main()
{
  srand(time(NULL));
  int intArray[ARRAY_SIZE];
  float floatArray[ARRAY_SIZE];
  
  populateArray(intArray);
  populateArray(floatArray);
  
  cout << "Your arrays BEFORE sorting: " << endl;
  outputArray(intArray);
  outputArray(floatArray);

  cout << endl;
  sort(intArray);
  sort(floatArray);
  
  cout << "Your arrays AFTER sorting: " << endl;
  outputArray(intArray);
  outputArray(floatArray);

  cout << "\nThat's all, folks!" << endl;
  return 0;
}
