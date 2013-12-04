/*
 * Name: GIACONE, JORDAN
 * Date: 11-20-13
 * Class and Section: CS54, Section E
 * Description: The file containing struct definitions for
                those dinosaurs with annoyingly long names
 */

#ifndef DINO_STRUCT_H
#define DINO_STRUCT_H

#include <iostream>
#include <cstdlib>

using namespace std;
//Xinjiangovenator and Dilophosaurus

struct Xinjiangovenator
{
  friend ostream& operator << (ostream& stream, Xinjiangovenator x);  
};

struct Dilophosaurus
{
  friend ostream& operator << (ostream& stream, Dilophosaurus d);
};

#endif
