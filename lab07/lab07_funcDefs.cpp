/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date 10/09/13
 * Description: lab07_funcDefs.cpp - The .cpp file that holds al of the 
                definitions for the prototypes contained in lab07Header.h
 */

#include "lab07Header.h"
#include <iostream>
using namespace std;

unsigned char rgbToGray(const Pixel p)
{
  return static_cast<unsigned char> (rgbToGray(p.m_red, p.m_green, p.m_blue));
}

void output(const Pixel p, const unsigned char grayValue)
{
  cout << "<" << p.m_red << ", " << p.m_green << ", " << p.m_blue << ">" 
       << " -> " << static_cast<int>(grayValue) << endl;
}

Pixel getPixel()
{
  Pixel p;
  cout << "Please enter a Pixel" << endl;

  do
  {
    cout << "Red: ";
    cin >> p.m_red;

    if(p.m_red < 0 || p.m_red > 255)
    {
      cout << p.m_red << " is an invalid value. Try again." << endl;
    }
  }while(p.m_red < 0 || p.m_red > 255);

  do
  {
    cout << "Green: ";
    cin >> p.m_green;

    if(p.m_green < 0 || p.m_green > 255)
    {
      cout << p.m_green << " is an invalid value. Try again." << endl;
    }
  }while(p.m_green < 0 || p.m_green > 255);
  
  do
  {
    cout << "Blue: ";
    cin >> p.m_blue;

    if(p.m_blue < 0 || p.m_blue > 255)
    {
      cout << p.m_blue << " is an invalid value. Try again." << endl;
    }
  }while(p.m_blue < 0 || p.m_blue > 255);

  return p;
}

Pixel randHue()
{
  Pixel p;
  int rgbValue = HUE_MIN_VALUE, count = 0;  

  p.m_red = -1;
  p.m_green = -1;
  p.m_blue = -1;

  do
  {
    switch(rand() % 3)
    {
      case 0:
        if(p.m_red == -1)
        {
          p.m_red = rgbValue;
          count++;
        }
        break;
      case 1:
        if(p.m_green == -1)
        {
          p.m_green = rgbValue;
          count++;
        }
        break;
      case 2:
        if(p.m_blue == -1)
        {
          p.m_blue = rgbValue;
          count++;
        }
        break;
      default:
        cout << "ERROR" << endl;
    }
    
    switch(count)
    {
      case 1:
        rgbValue = HUE_MAX_VALUE;
        break;
      case 2:
        rgbValue = rand() % 256;
        break;
    }
  }while(p.m_red == -1 || p.m_green == -1 || p.m_blue == -1);

  return p;
}
