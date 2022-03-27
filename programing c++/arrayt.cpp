#include <iostream>
using namespace std;

int main()
{

    int arr[100], size, pos, val, i, temp;

    cout << "Enter the size of an array (MAX 100) \n";
    cin >> size;

    // Create an input array
    cout << "Enter an elements in an array \n";

    // Input the value of an array
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Take a position of a new element
    cout << "Enter a position\n";
    cin >> pos;

    // Input value of an element to be inserted
    cout << "Enter a value to insert\n";
    cin >> val;

    // Shift element by one position
    for (i = size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Increase the length of an array
    size++;

    // Insert new value in an array
    arr[pos - 1] = val;

    cout << "Array after inserting a new value \n";

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
