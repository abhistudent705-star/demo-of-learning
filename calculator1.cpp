#include <iostream>

using namespace std;

int main()
{

    int n;
    int sum = 0;

    cout << "Enter the n number for natural number for sum";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {

        sum = sum + i;
        cout << " sum by the step" << sum << endl;
    }
    cout << "sum of the first number of naruarl number" << sum << endl;

    return 0;
}