/*
 * Name: GIACONE, JORDAN
 * Date: 11-13-13
 * Class and Section: CS54, Section E
 * Description: The function Definition file for the Compound Class
 */

#include "Compound.h"

Compound Compound::operator * (const float amount)
{
  Compound other;

  other.m_name = m_name;
  other.m_kg = m_kg * amount;

  for(int i = 0; i < ELEMENT_COUNT; i++)
  {
    other.m_elements[i] = m_elements[i];
  }

  return other;
} 

Compound Compound::operator + (const Compound& other)
{
  Compound result;
  
  result.m_name = m_name + "-" + other.m_name;

  for(int i = 0; i < ELEMENT_COUNT; i++)
  {
    result.m_elements[i] = m_elements[i] + other.m_elements[i];
  }

  result.m_kg = m_kg + other.m_kg;

  return result;
}

ostream& operator << (ostream& stream, const Compound& value)
{
  //bool notFirst = false;
  stream << value.m_name << " (" << value.m_kg << ") ";

  for(int i = 0; i < ELEMENT_COUNT; i++)
  {
    if(value.m_elements[i] != 0)
    {
      stream << ELEMENTS[i];
      
      if(value.m_elements[i] != 1)
      {
        stream << value.m_elements[i];
      }
      /*stream << (notFirst ? ", " : "") << i + 1 << "-" 
             << value.m_elements[i];*/
      
      /*if(!notFirst)
      {
        notFirst = !notFirst;
      }*/
    }
  }
 
  return stream;
}

istream& operator >> (istream& stream, Compound& value)
{
  int numElements, i;
  stream >> value.m_name >> numElements;

  while(numElements)
  {
    stream >> i;
    stream >> value.m_elements[--i];

    numElements--;
  }  


  stream >> value.m_kg;
  return stream;
}
