//db
#include <iostream>
using namespace std;

int main()
{
    int start_h = 0, start_m = 0;
    int end_h = 0, end_m = 0;
    int time = 0;
    int cost = 0;
    cin >> start_h >> start_m;
    cin >> end_h >> end_m;
    time = (end_h * 60 + end_m) - (start_h * 60 + start_m);
    if (time >= 0 && time <= 120) {
        cost = (time / 30) * 30;
    }
    else if (time > 120 && time <= 240) {
        cost = 120 + (time - 120) / 30 * 40;
    }
    else {
        cost = 120 + 160 + ((time - 120) - 120) / 30 * 60;
    }
    cout << cost << endl;
}