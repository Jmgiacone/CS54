/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 11-6-13
 * Description: A header file containing prototypes for Hero 
 */

#include <string>

using namespace std;
#ifndef HERO_H
#define HERO_H
const int MAX_HEALTH = 100, MAX_POISON = 20, STRENGTH = 20;
class Hero
{
  private:
    string m_name;
    int m_health;
    bool m_isPoisoned;
    int m_strength;
  public:
    //FOR UNDOCUMENTED FUNCTIONS, SEE COURSE WEBSITE

    /*
     * Description: A constructor that constructs a Hero object with given name
     * Pre: None
     * Post: None
     * Return: None
     */
    Hero(const string name);
    bool takeDamage(const int damage);
    void wanderAround();
    void setPoisoned(const bool isPoisoned);
   
    /*
     * Description: An accessor for the strength field of this Hero
     * Pre: None
     * Post: None
     * Return: The strength of this Hero
     */
    int getStrength() const {return m_strength;};
};
#endif
