/*
 * Name: GIACONE, JORDAN
 * Date: 10-30-13
 * Class and Section: CS54, Section E
 * Description: Reads in an encoded version of 
                MOBY DICK by: HERMAN MELLVILLE, decodes it and outputs it to 
                a file
 */

#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

const int NUM_CHARACTERS_TO_MESSAGE = 500, BYTES_TO_KB = 1024;
long decode(ifstream& input, ofstream& output, ofstream& submit); 

int main()
{
  long numChars;
  ifstream encodedFileIn;
  ofstream decodedFileOut, messageFileOut;

  encodedFileIn.open("encoded.input");
  decodedFileOut.open("decoded.output");
  messageFileOut.open("message.txt");

  cout << "Decoding..." << endl;
  numChars = decode(encodedFileIn, decodedFileOut, messageFileOut);

  cout << "Done!"<< endl;
  cout << "decoded.output is " << 
          static_cast<long>(
           sizeof(char) * numChars / BYTES_TO_KB) << " KB!" << endl;
  encodedFileIn.close();
  decodedFileOut.close();
  messageFileOut.close();
  
  return 0;
}

/*
 * Description: Decodes an input file encoded in ROT13. It
                then outputs it to the 2 given files
 * Pre: All streams must be opened
 * Param:
    - input: The encoded input file
    - output: The decoded output file
    - submit: The subission file that will contain NUM_CHAACTERS_TO_MESSAGE 
              characters
 * Post: All 3 file streams will be brouht to the EOF
 * Return: A long representing the number of characters in the input file
 */
long decode(ifstream& input, ofstream& output, ofstream& submit)
{
  long count = 0;
  char temp;
  while(input)
  {
    input.get(temp);

    if(isalpha(temp))
    {
      temp += temp <= 'm' ? 13 : -13;
    }
    
    if(count < NUM_CHARACTERS_TO_MESSAGE)
    {
      submit << temp;
    }

     output << temp;
     count++;
  }  

  return count;
}
