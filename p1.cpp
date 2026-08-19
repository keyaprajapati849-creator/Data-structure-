#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, i, pos, value, key;

    cout << "Enter no. of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nArray elements are: ";       // Traversal
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Insertion
    cout << "\n\nEnter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;

    cout << "Enter value to insert: ";
    cin >> value;

    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "Array after insertion: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Deletion
    cout << "\n\nEnter position to delete (1 to " << n << "): ";
    cin >> pos;

    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "Array after deletion: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Search
    cout << "\n\nEnter element to search: ";
    cin >> key;

    bool found = false;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at position: " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found." << endl;
    }

    return o;
}