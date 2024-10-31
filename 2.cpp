#include <iostream>
#include <string>

using namespace std;

int compstr(string s, string t) {
    if (s < t) return -1;
    if (s == t) return 0;
    return 1;
}

int compstr2 (string s, string t, int idx = 0) {
    if (idx == s.length() || idx == t.length()) {
        if (s.length() < t.length()) return -1;
        if (s.length() == t.length()) return 0;
        return 1;
    }

    if (s[idx] < t[idx]) return -1;
    if (s[idx] > t[idx]) return 1;
    return compstr2(s, t, idx + 1);
}

int compstr3 (string s, string t) {
    cout << "s: " << s << endl;
    cout << "t: " << t << endl;
    if (s.empty() && t.empty()) return 0;
    if (s.empty()) return -1;
    if (t.empty()) return 1;

    if (s[0] < t[0]) return -1;
    if (s[0] > t[0]) return 1;
    return compstr3(s.substr(1), t.substr(1));
}


int main() {
    string s = "hello", t = "hi";
    cout << compstr(s, t) << endl;
    cout << compstr2(s, t) << endl;
    cout << compstr3(s, t) << endl;
    t = "ali";
    cout << compstr(s, t) << endl;
    cout << compstr2(s, t) << endl;
    cout << compstr3(s, t) << endl;
}