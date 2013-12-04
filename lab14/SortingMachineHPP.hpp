// Name: GIACONE, JORDAN
// Class & Section: CS54, Section E
// Date: Dec. 4 2013
// Description: The templated implementation file for the sortint algorithm
//              that used to belong to the SortingMachine class

#include<iostream>
using namespace std;

/*
 * Description: Takes a SortingMachine<T> and a T[] and implements a sorting
                algorithm while displaying realtime progress
 * Pre: 
    - The array unsorted should be filled with elements.
    - The member m_size in SortingMachine MUST be the size of unsorted
 * Params:
    - m: The SortingMacine to use for sorting
    - unsorted: The unsorted array to become sorted
 * Post: The array will be sorted
 * Return: none
 */
template<typename T>
void sort(SortingMachine<T> m, T unsorted[])
{
  cout << endl << "Sorting";
  signed long outputMarker = m.m_size/m.m_MARKER;
  signed long i = 1;
  while(i < m.m_size)
  {
    if(i % outputMarker == 0)
      (cout << ".").flush();

    T key = unsorted[i];
    
    signed long j = i-1;
    
    while( j >= 0 && key < unsorted[j])
    {
      unsorted[j+1] = unsorted[j];
      j--;
    }
    unsorted[j+1] = key;
    i++;
  }
  cout << "Done." << endl;
  return;
}

