/*
 * Name: GIACONE, JORDAN
 * Date: 11-13-13
 * Class and Section: CS54, Section E
 * Description: A header file that contains all function prototypes for Compound
 */
#ifndef COMPOUND_H
#define COMPOUND_H

#include <iostream>
#include <string>

using namespace std;

const int ELEMENT_COUNT = 112;

const string ELEMENTS[] = {"H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne",
                           "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar", "K", 
                           "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", 
                           "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb",
                           "Sr", "Y", "Zr", "Nb", "Mo", "Tc", "Ru", "Rh", "Pd", 
                           "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs",
                           "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", 
                           "Tb", "Dy", "Ho", "Er", "Tm", "Yb", "Lu", "Hf", "Ta",
                           "W", "Re", "Os", "Ir", "Pt", "Au", "Gh", "Tl", "Pb", 
                           "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa", 
                           "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm", 
                           "Md", "No", "Lr", "Rf", "Db", "Sg", "Bh", "Hs", "Mt",
                           "Ds", "Rg", "Cn"};
class Compound
{
  private:
    string m_name;
    int m_elements[ELEMENT_COUNT];
    float m_kg;

  public:
    // Desc: Default Constructor
    // Pre: None
    // Post: Name is initialized to "unknown, mass is initialized to zero, and
    // all elements are initialized to zero.
    Compound():m_name("unknown"), m_elements(), m_kg(0) {}
    
    /*
     * Description: An operator that will 'multiply' a compound by a number.
                    Actually multiplies the kg by the given number
     * Pre: None
     * Params:
        - amount: The amount to 'multiply' by. 
     * Post: None
     * Return: A new Compound with a new m_kg value
     */
    Compound operator * (const float amount);
    
    /*
     * Description: An operator that will 'add' two compounds 
     * Pre: None
     * Params:
        - other: The other compound to be added
     * Post: None
     * Return: a new Compound with all member variables 'added'
     */
    Compound operator + (const Compound& other);
    
    /*
     * Description: An extraction operator that will help with streams
     * Pre: The stream must have been opened to somewhere (cout, file, etc...)
     * Params:
        - stream: The stream to do the extracting
        - value: The Copound to be extracted
     * Post: The stream will be changed
     * Return: The stream that did the extracting
     */
    friend ostream& operator << (ostream& stream, const Compound& value);
    
    /*
     * Description: An instertion operator that will insert information into 
                    a Compound
     * Pre: stream must have been opened to somewhere
     * Params:
        - stream: The stream to do the inserting
        - value: The Copound to have information added to it
     * Post: The stream will be changed
     * Return: The stream that did the inserting 
     */
    friend istream& operator >> (istream& stream, Compound& value);
};
#endif
