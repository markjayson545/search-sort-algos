#include <iostream>

using namespace std;

int main(){
    int size, target;
    bool found = false;
    cout << "Enter Number of Elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter "<< size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number you want to find: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        { 
            found = true;
            cout << "Element found at index " << i << endl;
        }
    }
    if (!found)
    {
        cout << "Element not found in the array";
    }

    return 0;
}