/*
 * Name: GIACONE, JORDAN
 * Date: 11-20-13
 * Class and Section: CS54, Section E
 * Description: The header file with class declarations and function prototypes
 */
#ifndef DINOSAUR_PEN_H
#define DINOSAUR_PEN_H

#include <iostream>

using namespace std;
const int MAX_DINOS = 4;

template<typename T>
class DinosaurPen;

template<typename T>
ostream& operator << (ostream& out, const DinosaurPen<T>& pen);

template<typename T>
class DinosaurPen
{
  private:
    T m_dinosaurs[MAX_DINOS];
    int m_numDinos;

  public:
    /*
     * Description: A constructor for the DinosaurPen class. 
                    This initializes the number of dinosaurs to zero 
     * Pre: None
     * Params: None
     * Post: The object is constructed
     * Return: None
     */
    DinosaurPen() : m_numDinos(0) {};
    
    /*
     * Description: An overloaded '<<' operator that will output a sound
     * Pre: The << operator must be defined for type T
     * Params:
        - out: The stream to be pushed to 
        - pen: The pen to draw data from
     * Post: The stream will be altered
     * Return: The altered stream
     */
    friend ostream& operator << <T>(ostream& out, const DinosaurPen<T>& pen);
    
    /*
     * Description: A function that adds the given thing to the pen
     * Pre: None
     * Param: dino: The thing to be added
     * Post: dino may or may not be added
     * Return: True if added, false if not
     */
    bool add(T dino);
};

#include "DinosaurPenHPP.hpp"
#endif
