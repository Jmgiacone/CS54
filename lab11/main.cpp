/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 11-6-13
 * Description: A main method to test Hero and Dragon 
 */

#include "Hero.h"
#include "Dragon.h"
#include "main.h"
#include <cstdlib>
#include <ctime>

int main()
{
  srand(time(NULL));
  Hero jordan("Jordan"), dovahkiin("Dovahkiin");
  Dragon alduin("Alduin");

  jordan.takeDamage(5);
  jordan.takeDamage(-7);

  jordan.setPoisoned(true);
  for(int i = 0; i < NUM_LOOPS; i++)
  {
    jordan.wanderAround();
  }

  cout << "\nBehold! An epic Battle to the Death!" << endl;
  fightToTheDeath(dovahkiin, alduin); 
  return 0;
}

void fightToTheDeath(Hero h, Dragon d)
{
  int dragon = d.getFirepower(), hero = h.getStrength();
  bool heroDead = false, dragonDead = false;
  while(!(heroDead || dragonDead))
  {
    dragonDead = d.takeDamage(hero);
    heroDead = h.takeDamage(dragon);
  }
}
