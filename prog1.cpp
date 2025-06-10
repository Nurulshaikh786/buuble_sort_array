#include <iostream>
using namespace std;

void PrintArray(int[], int);
void BubbleSort(int[], int);

int main()
{

    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter array of element[" << i << "] : ";
        cin >> array[i];
    }

    PrintArray(array, n);
    cout << endl;
    BubbleSort(array, n);
    cout << endl;
    PrintArray(array, n);
    cout << endl;
}

void PrintArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void BubbleSort(int array[], int n)
{
    int i, j;
    for (i = 0; i < n ; i++)
    {
        for (j = 0; j < n - i ; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}
