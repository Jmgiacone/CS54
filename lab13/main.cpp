/*
 * Name: GIACONE, JORDAN
 * Date: 11-20-13
 * Class and Section: CS54, Section E
 * Description: The main file that adds Dinosaurs to pens
 */

#include "DinosaurPenH.h"
#include "dinosaurStructs.h"

int main()
{
  Xinjiangovenator x;
  
  //This Dinosaur killed Dennis Nedry on Isla Nublar 
  //in the 1993 movie Jurassic Park  
  Dilophosaurus d;

  DinosaurPen<Xinjiangovenator> xPen;
  DinosaurPen<Dilophosaurus> dPen;

  cout << xPen << endl;

  xPen.add(x);

  cout << xPen << endl;

  for(int i = 0; i < 4; i++)
  {
    xPen.add(x);
  }

  cout << xPen << endl;
  dPen.add(d);

  cout << dPen << endl;
  return 0;

  //Bonus 3:
  //Can you make a DinosaurPen of integers?
  //Answer: Yes you can
  //What would hapend if you tried to make a DinosaurPen of TRex objects if the 
  //TRex type does not have an overloaded insertion operator?
  //Answer: The compiler would throw the biggest fit that i've ever seen
  //Could the DinosaurPen class have been implemented as a struct instead of a 
  //class? If so, what (if any) changes would be needed, if not, why not?
  //Answer: Yes. If we had functions defined to initialize the m_numDinos to 
  //zero and another function to add Dinosaurs to the array. We could then 
  //overload the instertion operator and have it work the same way as before.
}
