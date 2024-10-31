#include <iostream>
#include <vector>

using namespace std;

int rec1(vector<int> v, int idx = 0) {
    if (v.size() == idx)
        return 0;
    int val = (idx % 2)? -v[idx] : v[idx];
    return val + rec1(v, idx + 1);
}

int rec2(vector<int> v, int idx, int coefficient = 1) {
    if (v.size() == idx)
        return 0;

    int val = coefficient * v[idx];
    return val + rec2(v, idx + 1, -coefficient);
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    cout << rec1(v, 0) << endl;
    cout << rec2(v, 0, 1) << endl;
}