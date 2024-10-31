#include <iostream>
#include <string>

using namespace std;

bool isdigit(char c) {
    return c >= '0' && c <= '9';
}

bool matloob(string s) {
    cout << s << endl;
    if (s.length() == 0)
        return true;
    if (!isdigit(s[0]))
        return matloob(s.substr(1));
    if (!isdigit(s[s.length()-1]))
        return matloob(s.substr(0, s.length()-1));
    return s[0] == s[s.length()-1] && matloob(s.substr(1, s.length()-2));
}

int main() {
    string s = "a0gd9gg 8s891 s";
    cout << matloob(s) << endl;
}