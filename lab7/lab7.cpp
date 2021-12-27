#include <iostream>
#include<ctime>
#include<cmath>
#include<iomanip>

using namespace std;

void fill_array(double*, int);
double max(double*, int);
double min(double*, int);

int main()
{
    srand(time(NULL));

    int n;
    cout << "enter size of Array n = ";
    cin >> n;
    double* Array = new double[n];

    fill_array(Array, n);
    double Max, Min;
    Max = max(Array, n);
    Min = min(Array, n);
    cout << "Max = " << Max << endl;
    cout << "Min = " << Min << endl;

    delete[]Array;
}

void fill_array(double* array, int size) {


    for (int i = 0; i < size; i++)
    {
        array[i] = floor(((double)rand() / RAND_MAX * 40 - 20) * 10) / 10;
        cout << array[i] << setw(6);
    }
    cout << endl;
}

double max(double* array, int size) {
    double Max = abs(array[0] - array[1]);
    for (int i = 0; i < size; i++) {
        double maxAbs = abs(array[i] - array[i + 1]);
        if (maxAbs > Max) {
            Max = maxAbs;
        }
    }
    return Max;
}

double min(double* array, int size) {
    double Min = abs(array[0] - array[1]);
    for (int i = 0; i < size; i++) {
        double minAbs = abs(array[i] - array[i + 1]);
        if (minAbs < Min) {
            Min = minAbs;
        }
    }
    return Min;
}