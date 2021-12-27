#include <iostream>
#include <math.h>

using namespace std;

int main()
{


    cout << "set the dimensions of the brick" << endl;
    float a, b, c;
    cin >> a >> b >> c;

    cout << "set the dimensions of the rectangular hole" << endl;
    float x, y;
    cin >> x >> y;

    bool result;

    if (a < x && b < y || a < y && b < x) {
        result = true;
    }
    else if (a < x && c < y || a < y && c < x) {
        result = true;
    }
    else if (b < x && c < y || b < y && c < x) {
        result = true;
    }
    else {
        result = false;
    }


    if (result == true) {
        cout << "will pass";
    }

    else {
        cout << "will not pass";
    }

    return 0;

}