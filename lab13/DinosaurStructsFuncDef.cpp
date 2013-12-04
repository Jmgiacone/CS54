/*
 * Name: GIACONE, JORDAN
 * Date: 11-20-13
 * Class and Section: CS54, Section E
 * Description: A function definition file containing definitions for the
                overloaded operator in the dinosaur structs
 */

#include "dinosaurStructs.h"

ostream& operator << (ostream& stream, Xinjiangovenator x)
{
  stream << "I am a Xinjiangovenator! Hear me roar!";//"roar!";

  return stream;
}

ostream& operator << (ostream& stream, Dilophosaurus d)
{
  stream << "I am a Dilophosaurus! Hear me rawr!";//"rawr";

  return stream;
}
