#include <iostream>
#include <cmath>
#include <tuple>

using namespace std;

pair<int, int> invert_time(int hour, int minute);

int main() {
    int hour, minute;
    cin >> hour >> minute;

    int new_hour, new_minute;
    while (true) {
        tie(new_hour, new_minute) = invert_time(hour, minute);
        
        if (new_hour < 24 && new_minute < 60) {
            cout << hour << " " << minute << endl;
            break;
        }

        minute += 1;
        if (minute > 59) {
            minute = 0;
            hour += 1;
        } 
        if (hour > 23) {
            hour = 0;
        }
    }

    return 0;
}

pair<int, int> invert_time(int hour, int minute) {
    int hour_tens = floor(hour / 10);
    int hour_ones = hour % 10;

    int minute_tens = floor(minute / 10);
    int minute_ones = minute % 10;

    int new_hour = hour_tens * 10 + minute_tens;
    int new_minute = hour_ones * 10 + minute_ones;

    return {new_hour, new_minute};
}