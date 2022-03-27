#include <iostream>
using namespace std;

int main()

{

    int n;
    cin >> n;

    int counter;
    int sum = 0;

    for (counter = 1; counter <= n; counter = counter + 1)
    {
        sum = sum + counter;
    }

    cout << sum << endl;

    return 0;
}
