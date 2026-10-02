#include <iostream>
using namespace std;

int main(){

    float R=0;
    cout << "R ="' << endl;
    cin >> R;

    float pole = 3.14 * R * R;

    float obwod = 2 * 3.14 * R;

    cout << fixed << setprecision(2);
    cout << "Obwód: " << obwod << endl; 

    cout << fixed << setprecision(2);
    cout << "Pole: " << pole << endl;

    return 0;
}