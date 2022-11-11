#include <iostream>
using namespace std;

int main() {
    cout<<"Hello, World!"<<endl;
    //Qui si definiscono le variabili
    float a, b, c;
    cin >> a >> b >> c;

    //Scriviamo il codice necessario per eseguire i calcoli richiesti
    float AreaTriangolo = (a + b) / 2;
    float AreaQuadrato = a * a;
    float AreaRettangolo = a * b;
    float AreaTrapezio = ((a+b) * c) / 2;
    cout << AreaTriangolo << endl;
    cout << AreaQuadrato << endl;
    cout << AreaRettangolo << endl;
    cout << AreaTrapezio << endl;

    return 0;
}
