#include <iostream>
using namespace std;

int main(){
    int size;
    printf("Enter array size: ");
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " elements!!!\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
    }

    cout << "Sorted array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}