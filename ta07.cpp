#include <iostream>
using namespace std;

// Core requirements
float getValueFromPointer(float* thePointer)
{
   return *thePointer;
}

float* getMinValue(float* a, float* b);

// Stretch goals
void swapElements(float* theArray[], int a, int b);
void sortArray(float* theArray[]);

int main()
{  
<<<<<<< HEAD
    // Core Requirement 1
=======
   // Core Requirement 1
>>>>>>> e75b6e07901a5466b0117c9bf924513566199dcf
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;

   // Allocate your array(s) here
   int * propsArray[] = new int[]

   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
          cout << "Enter a float value: ";
          cin >> ????
   }

   /* // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(????);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   */

   /* // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(????, ????);
   cout << ?????
   */

   // Clean up your array(s) here

   return 0;
}
