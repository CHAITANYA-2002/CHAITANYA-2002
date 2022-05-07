
#include <iostream>
using namespace std;

class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "\nEnter value of x and y:\n";
        cin >> x >> y;
    }
};
class B : public A
{
public:
    void product()
    {
        cout << "\nProduct= " << x * y;
    }
};
class C : public A
{
public:
    void sum()
    {
        cout << "\nSum= " << x + y;
    }
};
int main()
{
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}