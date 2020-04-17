#include <iostream>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    string s;
    vector<string> svec;
    while (cin >> s) {
        svec.push_back(s);
    }
    int cnt = 0;
    for (vector<string>::size_type i = 0; i != svec.size(); ++i) {
        for (string::size_type j = 0; j != svec[i].size(); ++j) {
            svec[i][j] = toupper(svec[i][j]);
        }
        cout << svec[i] << " ";
        if (++cnt % 8 == 0) cout << endl;
    }
    return 0;
}