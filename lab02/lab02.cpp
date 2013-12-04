//Name: GIACONE, JORDAN
//Class and Section: CS 54, Section E
//Date: 9-4-13
//Description: Calculates related costs and amounts pertaining to a party
//IE. cups of soda per person, total cost of a party, etc...

#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
  const float TWO_LITERS_TO_CUPS = 8.45351; 
  int attending;
  float pizzaPrice, sodaPrice, cupsTenLiters, moreCupsNeeded, totalPrice;  

  cout << "How many people are attending the party? ";
  cin >> attending;
  
  cupsTenLiters = (10 * TWO_LITERS_TO_CUPS) / attending;

  cout << "How much does one pizza cost? $";
  cin >> pizzaPrice;

  cout << "How much does one bottle of soda cost? $";
  cin  >> sodaPrice;

  cout << "Starting off with 10 liters of soda, everyone gets " << cupsTenLiters 
       << " cups of soda"<< endl;  
  
  moreCupsNeeded = (((3 * attending) / TWO_LITERS_TO_CUPS) - 10) 
                   * TWO_LITERS_TO_CUPS;
  
  cout << "You are going to need " 
       << moreCupsNeeded  
       << " more cups of soda, ";
  cout << "which is ~" << static_cast<int>(moreCupsNeeded / TWO_LITERS_TO_CUPS) 
       << " bottles" << endl;
  //Integer division is intended here
  cout << "In order for everyone to get a quarter pizza, "
       << "you will need " << attending / 4 << " pizzas" << endl;
  cout << "JUST KIDDING. You actually need " << ceil(attending / 4.0) 
       << " pizzas.";

  totalPrice = 
          pizzaPrice * static_cast<int>(attending / 4) + 
          static_cast<int>(moreCupsNeeded / TWO_LITERS_TO_CUPS) * sodaPrice;
  cout << "\nTotal cost of the party: $" << static_cast<int>(totalPrice) 
       << "($" << static_cast<int>((totalPrice +.005) * 100) / 100 
       << "." << static_cast<int>((totalPrice + .005) * 100) % 100 << ")" 
       << endl;

  return 0;
}
