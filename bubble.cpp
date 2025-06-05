#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

#define SIZE 38
#define N 14
#define MIN_VAL (-20 * N)
#define MAX_VAL (20 * N)

using namespace std;

void printArray(int arr[], int size, int pass) 
{
    cout << "Pass " << pass << ": ";
    for (int i = 0; i < size; i++) 
    {
        if (i == size - pass) cout << ";";
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int a[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = size - 1; j > i; j--) 
        {
            if (a[j] < a[j - 1]) 
            {
                int x = a[j];
                a[j] = a[j - 1];
                a[j - 1] = x;
            }
        }
        printArray(a, size, i + 1);
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int a[SIZE];
    for (int i = 0; i < SIZE; i++) 
    {
        a[i] = MIN_VAL + rand() % (MAX_VAL - MIN_VAL + 1);
    }

    cout << "Bubble array: ";
    for (int i = 0; i < SIZE; i++) cout << a[i] << " ";
    cout << endl << endl;

    bubbleSort(a, SIZE);

    cout << "\nSorted array: ";
    for (int i = 0; i < SIZE; i++) cout << a[i] << " ";
    cout << endl;
    return 0;
}
