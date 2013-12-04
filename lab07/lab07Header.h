/*
 * Name: GIACONE, JORDAN
 * Class and Section: CS54, Section E
 * Date: 10/09/2013
 * Description: lab07Header.h - The header file for the image lab. This file 
                contains function prototypes and structs that will 
                be used elsewhere
 */

#ifndef LAB07HEADER_H
#define LAB07HEADER_H
#include <iostream>
#include <cstdlib>
using namespace std;

const float RED_CONVERSION = .2126, 
            GREEN_CONVERSION = .7152, 
            BLUE_CONVERSION = .0722;
const short HUE_MIN_VALUE = 0, HUE_MAX_VALUE = 255, NUM_TIMES_TO_LOOP_HUE = 17;

//A structure to represent a pixel. A pixel has a red, green, and blue value.
struct Pixel
{
  int m_red, m_green, m_blue;
};

/*
 * Description: A template function to turn 3 like types that represent rgb
                values into a single grayscale value
 * Pre: The operators '*' and '+' must be defined for type T
 * Params:
     red - The red value of the image
     green - The green value of the image
     blue - The blue value of the image
 * Post: None
 * Return: A variable of type T that is the result of the grayscale function     
 */
template <typename T>
T rgbToGray(const T red, const T green, const T blue)
{
  return (RED_CONVERSION * red) + (GREEN_CONVERSION * green) + 
         (BLUE_CONVERSION * blue); 
}

/*
 * Description: An overloaded version of the rgbToGray function previously.
                This function takes a single pixel and operates upon its'
                respective rgb values
 * Pre: p must be an initialized struct
 * Params: 
     p - The pixel to be converted into grayscale
 * Post: None
 * Return: The grayscale value (in char form) of the given pixel
 */
unsigned char rgbToGray(const Pixel p);

/*
 * Description: Outputs the rgb value and grayscale value of a given point. 
                It will output in the format: <r, g, b> -> gray
 * Pre: p must be an initialized struct. grayValue must have a value
 * Params: 
     p - The pixel to be dislayed
     grayValue - The grayscale value of the pixel being displayed
 * Post: Text is output to the screen
 * Return: None
 */
void output(const Pixel p, const unsigned char grayValue);

/*
 * Description: Prompts the user for a Red, Green, and Blue value for the pixel
                and returns a Pixel object
 * Pre: None
 * Params: None
 * Post: Text is output to the screen
 * Return: A pixel representation of the given rgb values
 */
Pixel getPixel();

/*
 * Description: Generates a random hue. A hue is defined as a Pixel with:
	One value of 255
	One value of 0
	One value between 0 and 255
 * Pre: None
 * Params: None
 * Post: None
 * Return: Returns a pixel with the generated hue
 */
Pixel randHue();

#endif
