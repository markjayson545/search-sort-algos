#include <iostream>
using namespace std;

void bubSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

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

    bubSort(arr, size);

    cout << "Sorted Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}