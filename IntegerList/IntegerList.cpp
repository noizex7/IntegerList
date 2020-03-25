
// Implementation file for the IntegerList class. 
#include <iostream> 
#include <cstdlib> 
#include "IntegerList.h" 
using namespace std;

//*********************************************************** 
// The constructor sets each element to zero.             * 
//*********************************************************** 

IntegerList::IntegerList(int size)
{
    list = new int[size];
    numElements = size;
    for (int ndx = 0; ndx < size; ndx++)
        list[ndx] = 0;
}
//*********************************************************** 
 // The destructor releases allocated memory.              * 
 //*********************************************************** 

IntegerList::~IntegerList()
{
    delete[] list;
}

//************************************************************* 
// isValid member function.                                * 
// This private member function returns true if the argument * 
// is a valid subscript, or false otherwise.                * 
//************************************************************* 

bool IntegerList::isValid(int element) const
{
    bool status;

    if (element < 0 || element >= numElements)
        status = false;
    else
        status = true;
    return status;
}

//************************************************************ 
// setElement member function.                            * 
// Stores a value in a specific element of the list. If an  * 
// invalid subscript is passed, the program aborts.         * 
//************************************************************ 

void IntegerList::setElement(int element, int value)
{
    if (isValid(element))
        list[element] = value;
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}

//*********************************************************** 
// getElement member function.                           * 
// Returns the value stored at the specified element.      * 
// If an invalid subscript is passed, the program aborts.  * 
//*********************************************************** 

int IntegerList::getElement(int element) const
{
    if (isValid(element))
        return list[element];
    else
    {
        cout << "Error: Invalid subscript\n";
        exit(EXIT_FAILURE);
    }
}

int IntegerList::getNNumElements() const
{
    return numElements;
}

int IntegerList::getLowest(int size) const
{
    int count, lowest;
    lowest = list[0];
    for (count = 1; count <size; count++)
    {
        if (list[count] < lowest)
            lowest = list[count];
    }
    return lowest;
}
int IntegerList::getHighest(int size) const
{
    int count, highest;
    highest = list[0];
    for (count = 1; count < size; count++)
    {
        if (list[count] > highest)
            highest = list[count];
    }
    return highest;
}

void IntegerList::displayLowestandHighest(int size) const
{
    cout << "The highest number on the list is: " << getHighest(size) << endl;
    cout << "The lowest number on the list is: " << getLowest(size) << endl;
}

void IntegerList::sortArray(int n)
{
    bool swap;
    int temp;

    do
    {
        swap = false;
        for (int count = 0; count < (n - 1); count++)
        {
            if (list[count] > list[count + 1])
            {
                temp = list[count];
                list[count] = list[count + 1];
                list[count + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}