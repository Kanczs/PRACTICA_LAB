#include <iostream>
using namespace std;

int main(){

    int Pi = 3.1415;
    int Radio{};

    cout << "Ponga valor del radio:"; cin >> Radio;
    cout << "El valor del diametro es:"; cout << Radio * Radio << endl; 
    cout << "La circunferencia es:"; cout << 2*Pi*Radio << endl;
    cout << "El area total es:"; cout << Pi * (Radio * Radio) << endl;

    return 0;
}
