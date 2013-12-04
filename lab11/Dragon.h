/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 11-6-13
 * Description: A header file containing prototypes for Dragon 
 */

#include <string>
#include <iostream>
using namespace std;

#ifndef DRAGON_H
#define DRAGON_H
const int DRAGON_HEALTH = 1000, FIREPOWER = 25;

class Dragon
{
  private:
    string m_name;
    int m_health;
    int m_firepower;
  public:
    //FOR UNDOCUMENTED FUNCTIONS, SEE COURSE WEBSITE

    /*
     * Description: A constructor that makes a Dragon with the given name
     * Pre: None
     * Post: None
     * Return: None
     */
    Dragon(const string name);

    bool takeDamage(const int damage);
    
    /*
     * Description: Gets the firepower of the Dragon
     * Pre: None
     * Post: None
     * Return: The firepower of the Dragon
     */ 
    int getFirepower() const {return m_firepower;};
};
#endif
