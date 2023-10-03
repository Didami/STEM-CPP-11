#include <iostream>

using namespace std;

int main() {
    int base;
    int potencia;
    
    do {
        cout << "Introduce el valor de la base (debe ser un valor positivo): ";
        cin >> base;
    } while (base < 0);
    
    do {
        cout << "Introduce el valor de la potencia (debe ser un valor positivo): ";
        cin >> potencia;
    } while (potencia < 0);
    
    int result = base;
    for (int i = 0; i < potencia; i++) {
        if (i == 0) { continue; }
        result = result * base;
    }
    
    cout << "El resultado es: " + to_string(result) + "\n";
    
    return 0;
}
