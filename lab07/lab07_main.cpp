/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 10/09/2013
 * Description: lab07_main.cpp - The file that includes the main function for
                the image program 
 */

#include "lab07Header.h"

int main()
{
  Pixel p;
  char answer;

  srand(time(NULL));
  do
  {
    cout << endl;
    
    p = getPixel();

    output(p, rgbToGray(p));

    cout << "Input another Pixel?(y/n): ";
    cin >> answer;
  }while(answer == 'y');
 
  for(int i = 0; i < NUM_TIMES_TO_LOOP_HUE; i++)
  {
    p = randHue();
    output(p, rgbToGray(p));
  } 
  return 0;  
}
