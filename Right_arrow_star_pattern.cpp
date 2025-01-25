#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            for (int a = 0; a < 2 * i; a++)
                cout << " ";
            for (int b = 0; b <=n/2-i; b++)
                cout << "*";
        }
        else
        {   for(int c=0;c<2*(n-1)-2*i;c++)
            cout<<" ";
            for(int d=0;d<=i-n/2;d++)
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
