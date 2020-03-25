#pragma once
#include <iostream> 
#include <cstdlib> 
using namespace std;
class IntegerList
{
private:
    int* list;                // Pointer to the array. 
    int numElements;          // Number of elements. 
    bool isValid(int) const;        // Validates subscripts. 
public:
    IntegerList(int);          // Constructor 
    ~IntegerList();            // Destructor 
    void setElement(int, int);  // Sets an element to a value. 
    int getElement(int) const; // Returns an element.
    void sortArray(int);
    int getNNumElements() const;
    int getLowest(int)const;
    int getHighest(int) const;
    void displayLowestandHighest(int)const;

};
