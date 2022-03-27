#include <iostream>
#include <malloc.h>
#include <string.h>
using namespace std;

class Myclass
{
    char *str;

public:
    Myclass(char *s) : str(s) {} 

    ~Myclass() { delete str; } 

    Myclass &operator=(Myclass &m)
    { 

        free(str);
        str = strdup(m.str);
        return *this;
    }
    void update(char *x)
    {
        strcat(str, " ");
        strcat(str, x); 
    }

    void print()
    {
        cout << str << endl;
    }
};

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    Myclass m1(&str1[0]);
    Myclass m2 = m1;
    m2.update(&str2[0]);
    m2.print();
    return 0;
}