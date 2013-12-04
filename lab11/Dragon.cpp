/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 11-6-13
 * Description: A function implementation file for Dragon 
 */

#include "Dragon.h"
 
Dragon::Dragon(string name)
{
  m_name = name;
  m_health = DRAGON_HEALTH;
  m_firepower = FIREPOWER;
}

bool Dragon::takeDamage(const int damage)
{
  if(m_health > 0)
  {
    m_health -= damage;

    if(m_health > DRAGON_HEALTH)
    {
      m_health = DRAGON_HEALTH;
    }
    else if(m_health < 0)
    {
      m_health = 0;
    }
  }

  m_health <= 0 ? cout << "Alas! " + m_name + " has met their fate!" << endl: cout << m_name + "'s health: " << m_health << endl;
  return m_health <= 0;  
}
