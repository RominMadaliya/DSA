#include <iostream>

using namespace std;

class Array
{

    int *arr;
    int size;

public:
    Array(int size1)
    {
        size = size1;
        arr = new int[size];
    }
    ~Array()
    {
        delete[] arr;
    }

    void random()
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = (rand() % size) + 1;
        }
        cout << endl
             << endl
             << "Unsorted array is ->" << endl
             << endl;
    }

    void selection_sort()
    {
        int temp = 0;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << endl
             << endl
             << "sorted array is ->" << endl
             << endl;
    }

    void print_data()
    {
        for (int i = 0; i < size; i++)
        {
            cout << "  " << arr[i];
        }
    }
};

int main()
{

    int n;

    cout << "Enter the size of the array :";
    cin >> n;

    Array obj1(n);
    Array obj2(obj1);
    obj1.random();
    obj1.print_data();
    obj1.selection_sort();
    obj1.print_data();

    return 0;
}