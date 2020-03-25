#include "IntegerList.h"
int main()
{
    const int SIZE = 20;
    IntegerList numbers(SIZE);
    int val, x, n;

    cout << "Enter he quantity of elements: ";
    cin >> n;
    // Store 9s in the list and display an asterisk 
    // each time a 9 is successfully stored. 
    for (x = 0; x < n; x++)
    {
        cout << "Value #" << x << ":";
        cin >> val;
        numbers.setElement(x, val);

    }
    cout << endl;

    numbers.sortArray(n);

    for (x = 0; x < n; x++)
    {
        //val = numbers.getElement(x);
        cout << numbers.getElement(x) << " ";
    }
    cout << endl;
    numbers.displayLowestandHighest(n);
    // Attempt to store a value outside the list's bounds. 
    /* numbers.setElement(50, 9); */

        // Will this message display? 
       /* cout << "Element 50 successfully set.\n";*/
    return 0;
}