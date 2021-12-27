
#include <iostream>
#include <math.h>


using namespace std;


int main()
{

    double a;
    cout << "enter a " << endl;
    cin >> a;


    while (a <= 0 || a > 2) {
        cout << "incorrect value of a" << endl;                 /*проверка одз*/
        cout << "try to enter a again" << endl;
        cin >> a;
    }

    double eps = pow(10, -6);
    double y = 0;
    int it = 1;
    double diff;



    do {

        diff = (pow(-1, it + 1) * pow(a - 1, it)) / it;
        y += diff;                                             /*y = y + diff*/
        it++;                                                  /*it = it + 1*/

    } while (abs(diff) >= eps);


    double ln_a = log(a);

    double ans = ln_a - y;

    it = it--;

    cout << "y = " << y << endl << "difference between series and standard function = " << ans << endl;
    cout << "number of iterations = " << it;




}

