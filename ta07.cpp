#include <iostream>
using namespace std;

// Core requirements
float getValueFromPointer(float* thePointer)
{
   return *thePointer;
}

float* getMinValue(float* a, float* b)
{
   if (*a < *b)
      return a;
   else
      return b;
}

// Stretch goals
void swapElements(float* theArray[], int a, int b);
void sortArray(float* theArray[]);

int main()
{
   // Core Requirement 1
   int arraySize;
   cout << "Enter the array size: ";
   cin >> arraySize;

   // Allocate your array(s) here
   float* propsArray = new float[arraySize];

   // Fill your array with float values
   for(int i = 0; i < arraySize; i++) 
   {
          cout << "Enter a float value: ";
          cin >> propsArray[i];
   }

   // Core Requirement 2
   for (int i = 0; i < arraySize; i++)
   {
      float value = getValueFromPointer(&propsArray[i]);
      cout << "The value of the element " << i << " is: ";
      cout << value << endl;
   }
   
   // Core Requirement 3
   // Print the smaller of the first and last elements of the array
   float *pointerToMin = getMinValue(&propsArray[0], &propsArray[arraySize - 1]);
   cout << *pointerToMin;

   // Clean up your array(s) here
   delete [] propsArray;

   return 0;
}


