//Name: GIACONE, JORDAN 
//Class and Section: CS 54, Section E
//Date: 8-28-2013
//Description: Calculates the area of a rectangle based on the length and width

#include <iostream>
using namespace std;

int main()
{
  //Declarations
  float length, width;
  float area;
  
  //Prompt user for length
  cout << "Please enter the length of the rectangle: " << endl;
  
  cin >> length;
  
  //Prompt user for width
  cout << "Please enter the width of the rectangle: " <<  endl;
  
  cin >> width;
  
  //Calculate area
  area = length * width;
  
  //Output results
  cout << "You entered length: " << length << " and width: " ;
  cout << width << " which results in area: " << area << ".";
  cout << endl;
  
  //end program
  return 0;
}
