#include <iostream>
using namespace std;

class IntArray
{
    int *arr;
    int size;

public:
    IntArray(int n) : arr(new int[n]), size(n) {} 

    ~IntArray() { delete[] arr; } 

    void EnterEle()
    {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    void FindMax()
    {
        int max = -1;
        for (int i = 0; i < size; i++)
        {
            if (max < arr[i])
                max = arr[i];
        }
        cout << "Max: " << max;
    }
};

int main()
{
    int n;
    cin >> n;
    IntArray a(n);
    a.EnterEle();
    a.FindMax();
    return 0;
}
