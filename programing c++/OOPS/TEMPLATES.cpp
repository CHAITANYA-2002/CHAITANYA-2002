

#include <iostream>
using namespace std;
template <class Big>
Big maxoftwo(Big a, Big b)
{
    Big MAX;
    MAX = a > b ? a : b;
    return (MAX);
}
int main()
{
    int a = 10, b = 20;
    float x = 3.14, y = 4.2;
    char ch1;
    char ch = x;
    cout << maxoftwo(x, y);
    return 0;
}
