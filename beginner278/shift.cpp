#include <iostream>
#include <deque>

using namespace std;

int main() {
    int size, shift;
    cin >> size >> shift;

    deque<int> d;

    int x;
    for (int i = 0; i < size; i++) {
        cin >> x;
        d.push_back(x);
    }

    for (int i = 0; i < shift; i++) {
        d.pop_front();
        d.push_back(0);
    }

    for (int i = 0; i < size; i++) {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}