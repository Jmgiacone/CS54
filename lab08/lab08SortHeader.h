/*
 * Name: GIACONE, JORDAN 
 * Class and Section: CS 54, Section E
 * Date: 10/16/13
 * Description: A header file containing templates for functions to be used in
                the main file.
 */

#include <iostream> 
#include <cstdlib> 
#include<ctime>

using namespace std;


const int ARRAY_SIZE = 21, 
          LOWER_BOUND = -100, 
          UPPER_BOUND = 100;
const float ARBITRARY_PRIME = 13.0;

/*
 * Description: A templated function that will swap two positions of an array 
 * Pre: None
 * Param:
    - num1: The first number to be swapped
    - num2: The second number to be swapped
 * Post: num1 and num2 are passed by reference and will be changed.
 * Return: None
 */
template <typename T>
void swapElements(T& num1, T& num2)
{
  T temp = num1;
  num1 = num2;
  num2 = temp;
}

/*
 * Description: A templated function that will output an array in a readable 
   format 
 * Pre: toBeDisplayed must be larger that or equal to the constant ARRAY_SIZE
 * Param:
    - toBeDisplayed: The array to be displayed to the screen.
 * Post: Text is output to the screen
 * Return: None
 */
template <typename T>
void outputArray(const T toBeDisplayed[])
{
  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    cout << toBeDisplayed[i] << (i == ARRAY_SIZE - 1 ? "\n" : ", ");
  }
}

/*
 * Description: Populates the given array with random numbers in the range
                [LOWER_BOUND, UPPER_BOUND] 
 * Pre: The template type T must be compatible with numerical types
 * Param:
    - toBePopulated: The array that is to be populated
 * Post: toBePopulated is passed by reference and will be changed.
 * Return: None
 */
template <typename T>
void populateArray(T toBePopulated[])
{
  //Multiply by the prime so that you can later divide and get a decimal
  int newLower = LOWER_BOUND * ARBITRARY_PRIME, 
      newUpper = UPPER_BOUND * ARBITRARY_PRIME;

  for(int i = 0; i < ARRAY_SIZE; i++)
  {
    toBePopulated[i] = rand() % (newUpper - newLower + 1) + newLower;
    toBePopulated[i] /= ARBITRARY_PRIME;
  }
} 

/*
 * Description: A function that will sort the given array using selection sort 
 * Pre: 
    - sortMe must  be populated 
    - template type T must have the operator '<' defined
 * Param:
    - sortMe: The array to be sorted 
 * Post: The parameter sortMe will be a sorted array 
 * Return: None
 */
template <typename T>
void sort(T sortMe[])
{
  int minIndex;

  for(int i = 0; i < ARRAY_SIZE - 1; i++)
  {
    minIndex = i;

    for(int j = i + 1; j < ARRAY_SIZE; j++)
    {
      if(sortMe[j] < sortMe[minIndex])
      {
        minIndex = j;
      }
    }

    if(minIndex != i)
    {
      swapElements(sortMe[i], sortMe[minIndex]);
    }
  }
}
