#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    char sec;
};

int main()
{

    student s1;
    cout << "enter your name" << endl;
    cin >> s1.name;

    cout << "enter your roll no" << endl;
    cin >> s1.rollno;

    cout << "enter your section" << endl;
    cin >> s1.sec;

    cout << "displaying information" << endl;
    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << s1.sec << endl;

    return 0;
}
