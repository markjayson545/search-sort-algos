#include <iostream>
using namespace std;

int binSearch(int arr[], int first, int last, int target){
    while (first <= last)
    {
        int middle = first + (last - first) / 2; // get middle index
        if (arr[middle] == target) // if middle is equal to the target, it will adjust the middle indefinitely until the target match
        {
            return middle;
        }
        if (arr[middle] < target) 
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
    }
    return 404;
}
int main(){
    int size, target;

    printf("Enter Size of the array: ");
    cin >> size;

    int arr[size];
    cout << "Enter sorted " << size << " Elements!!!" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    printf("Enter number you want to find: ");
    cin >> target;

    int findings = binSearch(arr, 0, size - 1, target);

    if (findings == 404)
    {
        cout << "Element not found in the array";
    }

    else
    {
        cout << "Element found at index " << findings; 
    }

    return 0;
}