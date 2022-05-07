

#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    *ptr = 4;
    std::cout << *ptr << std::endl;
    delete ptr;
    return 0;
}
