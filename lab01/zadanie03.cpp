#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float P;
    cin >> P;
    
    int T;
    cin >> T;
    
    float R;
    cin >> R;

    float wynik = (P * T * R )/100;

    cout << fixed << setprecision(2);
    cout << "Wynik rzeczywisty: " << wynik << endl;
    cout << "Wynik całkowity: " << static_cast<int>(wynik)<< endl;




    return 0;
}