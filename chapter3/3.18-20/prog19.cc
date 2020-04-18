#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ve;
    for (int i = 0; i != 10; ++i) {
        int x;
        cin >> x;
        ve.push_back(x);
    }
    for (vector<int>::iterator it = ve.begin(); it != ve.end(); ++it) {
        *it = *it * 2;
    }
    for (vector<int>::const_iterator it = ve.begin(); it != ve.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}