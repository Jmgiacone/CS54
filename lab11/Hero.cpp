/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 11-6-13
 * Description: A function definition file for Hero 
 */

#include "Hero.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Hero::Hero(const string name)
{
  m_name = name;
  m_health = MAX_HEALTH;
  m_isPoisoned = false;
  m_strength = STRENGTH;
}

bool Hero::takeDamage(const int damage)
{
  if(m_health > 0)
  {
    m_health -= damage;

    if(m_health > MAX_HEALTH)
    {
      m_health = MAX_HEALTH;
    }
    else if(m_health < 0)
    {
      m_health = 0;
    }
  
    m_health <= 0 ? cout << "Alas! " + m_name + " has met their fate!" << endl : 
                    cout << m_name + "'s health: " << m_health << endl;
  }
  return m_health <= 0;  
}

void Hero::wanderAround()
{
  if(m_isPoisoned)
  {
    takeDamage(rand() % MAX_POISON + 1);
  }
}

void Hero::setPoisoned(bool isPoisoned)
{
  m_isPoisoned = isPoisoned;
}
