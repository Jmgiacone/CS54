/*
 * Name: GIACONE, JORDAN
 * Date: 11-13-13
 * Class and Section: CS54, Section E
 * Description: A main file that runs and tests the Compound class and 
 *              associated operators
 */
#include "Compound.h"

int main()
{
  Compound unknow, uf6, h2so4, sum;
  float mult;

  cout << "Empty Compound: " << uf6 << endl;

  cout << "Compound 1: ";
  cin >> uf6;
  cout << "You entered: " << uf6 << endl;
  cout << "\nCompound 2: ";
  cin >> h2so4;
  cout << "You entered: " << h2so4 << endl;

  sum = uf6 + h2so4;

  cout << "\nResult: " << sum << endl;
  cout << "Please enter a multiplication factor: ";
  cin >> mult;
  
  cout << "Result: " << sum * mult << endl;
  return 0;
}
