// Name: GIACONE, JORDAN 
// Section: E
// Class: CS54
// Date: 9/25/13
// Description: An improved version of "Random Statistics I" 
// that utilizes functions and their versatility

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//A constan that represents the threshold for the bonus
const int RANGE_THRESHOLD = 100;

// ========================================================================= //
// =========================== Function Prototypes ========================= //
// ========================================================================= //

// Purpose: Returns the root of the range if its > 100 and the square otherwise
// Pre: Min and Max both set, min < max
// Post: Returns either the root or square of the range
// Params:
//   min - The minumum value for the random number
//   max - The maximum value for the random number
// Return: Returns either the root or square of the range
  
float calcRange(int min, int max);
// Purpose: Outputs a prompt to the user for what they want to do
// Pre: None
// Post: Message is printed to the screen
// Return: void
void promptUser();

// Purpose: Outputs the value average, numRands, min, and max
// Pre: All variables must be set. min must be less than max and numRands must
// be > 0
// Post: The message is printed to the screen
// Return: void
void outputAverage(int numRands, int min, int max, float average);

// Purpose: Generates a random number in a specified range
// Pre: min and max must be set and the condition (min < max) must hold. If
//   these conditions are not met, the function may not behave as expected
// Post: Returns a random number in the specified range
// Params:
//   min - The minimum of the range the random number will be selected from
//   max - The maximum of the range the random number will be selected from
// Return: Returns a random number in the specified range
int randInRange(int min, int max);

// Purpose: Generates the specified number of random numbers in the specified
//   range and returns their average
// Pre: all values parameters must be set before this function is called and
//   the condition (min < max) must hold. If these conditions are not met, the
//   function may not behave as expected
// Params:
//   min - The minimum of the range the random number will be selected from
//   max - The maximum of the range the random number will be selected from
//   numValues - The number of random values that will be generated and 
//     averaged
// Post: Returns the average of the random numbers generated
// Return: Returns the average of the random numbers generated
float averageRand(int min, int max, int numValues);


// ========================================================================= //
// ================================= Main ================================== //
// ========================================================================= //

int main()
{

  char userMenuChoice;
  int rangeMin, rangeMax, numRands;
  float average;
  bool rangeIsSet = false;
  bool doExit = false;

  srand(time(NULL));

  do
  {
    promptUser();
    cin >> userMenuChoice;

    //This converts UPPERCASE characters to lowercase ones	
    if(userMenuChoice <= 'Z' && userMenuChoice >= 'A')
    {
      userMenuChoice += 'a' - 'A';
    }

    switch(userMenuChoice)
    {
      //Setting the range
      case 'a':
        do
        {
          cout << "Enter the minimum range value: ";
          cin >> rangeMin;
          cout << "Enter the maximum range value: ";
          cin >> rangeMax;
          if(rangeMin >= rangeMax)
            cout << "The minimum value must be less than the maximum" << endl;
        }while(rangeMax <= rangeMin);
        
        rangeIsSet = true;
        break;
      //Get a single random number
      case 'b':
        if(rangeIsSet)
        {
          cout << "Your random number is: " << randInRange(rangeMin, rangeMax) 
               << endl;
        }
        else
        {
          cout << "Error, you have to set the range first!" << endl;
        }
        break;
      //Average a bunch of random numbers
      case 'c':  
        if(rangeIsSet)
        {
          cout << "How many random numbers would you like?\nChoice: ";
          cin >> numRands;
          
          average = averageRand(rangeMin, rangeMax, numRands);
 
          outputAverage(numRands, rangeMin, rangeMax, average);
        }
        else
        {
          cout << "Error, you have to set the range first!" << endl;
        }
        break;
      //Do the bonus problem
      case 'd':   
        if(rangeIsSet)
        {
          cout << "The range [" << rangeMin << ", " << rangeMax << "] is " 
               << ((rangeMax - rangeMin + 1 > RANGE_THRESHOLD) ? "greater" : 
                                                                 "less") 
               << " than " << RANGE_THRESHOLD << "." << "\nTherefore, you get: " 
               << calcRange(rangeMin, rangeMax) << "." << endl;
        }
        else
        {
          cout << "Error, you have to set the range first!" << endl;
        } 
        break;
      //EXIT
      case 'e':
        doExit = true;
        break;
      default:
        cout << "Error, please choose from one of the following options: " 
             << endl;
    }
  }while(!doExit);

  return 0;
}

// ========================================================================= //
// ========================== Function Definitions ========================= //
// ========================================================================= //

float calcRange(int min, int max)
{
  return max - min + 1 > RANGE_THRESHOLD ? sqrt(max - min + 1) : 
                                           pow(max - min + 1, 2);
}

void promptUser()
{
  cout << "============ Options ============\n"
       << "(a) Define Range\n"
       << "(b) Output one random number\n"
       << "(c) Average some random numbers\n"
       << "(d) Bonus\n"
       << "(e) Exit\n"
       << " > ";
  return;
}

void outputAverage(int numRands, int min, int max, float avg)
{
  cout << numRands << " random numbers in [" << min << ", " << max 
       << "] resulted in an average of: " << avg << endl;
  return;
}

int randInRange(int min, int max)
{
  //Formula: rand() % (max - min + 1) + min
  return rand() % (max - min + 1) + min;
}

float averageRand(int min, int max, int numValues)
{
  int sum = 0;
  for(int i = 0; i < numValues; i++)
    sum += randInRange(min, max);
  return static_cast<float>(sum) / static_cast<float>(numValues);
}
