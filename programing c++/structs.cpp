#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{

    int age;
    int standard;
    string first_name, last_name;
};

int main()
{

    Student st;
    cin >> st.first_name >> st.last_name >> st.standard >> endl;

    cout << st.age << "" << st.first_name << "" <<
}