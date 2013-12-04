/*
 * Name: GIACONE, JORDAN
 * Date: 11-20-13
 * Class and Section: CS54, Section E
 * Description: The file containing definitions for the DinosaurPen class
 */
#include "DinosaurPenH.h"

template <typename T>
ostream& operator << (ostream& out, const DinosaurPen<T>& pen)
{
  if(pen.m_numDinos > 0)
  {
    for(int i = 0; i < pen.m_numDinos; i++)
    {
      cout << pen.m_dinosaurs[i] << endl;
    }
  }
  else
  {
    cout << "There are no Dinosaurs in this pen! Round them up quickly!" 
         << endl;
  }
  return out;
}

template <typename T>
bool DinosaurPen<T>::add(T dino)
{
  if(m_numDinos < MAX_DINOS)
  {
    m_dinosaurs[m_numDinos] = dino;
    m_numDinos++;
    return true;
  }

  cout << "The pen is full! You got 'em!" << endl;
  return false;
}
