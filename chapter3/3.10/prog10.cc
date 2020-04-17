#include <iostream>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    string s;
    getline(cin, s);
    string res;
    for (string::size_type i = 0; i != s.size(); ++i) {
        if (!ispunct(s[i])) res+=s[i];
    }
    cout << res << endl;
    return 0;
}