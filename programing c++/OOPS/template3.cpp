
#include <iostream>

using namespace std;
template <class Sky1, class Sky2>
void show(Sky1a, Sky2b)
{
    cout << "typeid (a).name()";
    cout << "typeid (b).name()";
}
void main()
{
    show(12, 'A');
    show(3.14, "ABC");
    getch();
}
