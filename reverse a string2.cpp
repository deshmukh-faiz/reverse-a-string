#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string text1;
    cout << "Enter string" << endl;
    cin >> text1;
    reverse(text1.begin(), text1.end());

    cout << text1;

    return 0;
}