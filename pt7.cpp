#include <iostream>
using namespace std;
int main()
{
    int n, fd, d, i, sum;
    cout << "enter the number" << endl;
    cin >> n;
    fd = n % 10;
    d = n / 10;
    for (i = d; i > 10;)
    {
        i = i / 10;
    }
    sum = i + fd;
    cout << sum << endl;
}