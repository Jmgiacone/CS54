// Name: GIACONE, JORDAN
// Class & Section: CS54, Section E
// Date: Dec. 4 2013
// Description: The templated header file for the now demoted SortingMachine 
//              STRUCT

#ifndef SORTSH_H
#define SORTSH_H

template<typename T>
struct SortingMachine
{
  int m_size;
  const static int m_MARKER = 50;
};

#include "SortingMachineHPP.hpp"
#endif
