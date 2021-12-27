#include <iostream>
#include <cmath>

using namespace std;

void input(double& a, double& b, double& c) {

    cin >> a; cin >> b; cin >> c;


    while (a + b <= c || a + c <= b || c + b <= a || a <= 0 || b <= 0 || c <= 0) {
        cout << "try again\n";
        cin >> a; cin >> b; cin >> c;
    }

}

double geron_area(double a, double b, double c) {
    double p = (a + b + c) / 2;
    double value = sqrt(p * (p - a) * (p - b) * (p - c));
    return value;
}


double max(double ftriangle, double striangle) {

    if (ftriangle > striangle) {
        return ftriangle;
    }
    else if (ftriangle < striangle) {
        return striangle;
    }
    else {
        return ftriangle;
    }
}



int main()
{
    double first, second, third;

    double a1, b1, c1, a2, b2, c2, a3, b3, c3;

    double thebiggest;

    cout << "write down the sides of the first triangle" << endl;
    input(a1, b1, c1);
    first = geron_area(a1, b1, c1);

    cout << "write down the sides of the second triangle" << endl;
    input(a2, b2, c2);
    second = geron_area(a2, b2, c2);

    cout << "write down the sides of the third triangle" << endl;
    input(a3, b3, c3);
    third = geron_area(a3, b3, c3);

    cout << first << endl << second << endl << third << endl;

    thebiggest = max(first, second);

    thebiggest = max(thebiggest, third);

    cout << "the biggest is " << thebiggest;
}

