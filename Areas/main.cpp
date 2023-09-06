#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

float circleArea(float radius) { return M_PI * pow(radius, 2); }
float triangleArea(float base, float height) { return (base * height) / 2; }
float squareArea(float side) { return pow(side, 2); }

float calculator(int selection) {
    float result = 0;
    do {
        switch (selection) {
            case 1:
                cout << "Introduce el valor del radio: ";
                float radius; cin >> radius;
                result = circleArea(radius);
                break;
            case 2:
                cout << "Introduce el valor de la base: ";
                float base; cin >> base;
                cout << "Introduce el valor de la altura: ";
                float height; cin >> height;
                result = triangleArea(base, height);
                break;
            case 3:
                cout << "Introduce el valor del lado: ";
                float side; cin >> side;
                result = squareArea(side);
                break;
            case 4:
                exit(0);
                break;
            default:
                cout << "¿Qué deseas calcular?\n1. Área del círculo\n2. Área del triángulo\n3. Área de un cuadrado\n4. Salir\nTeclea la opción: ";
                int selection; cin >> selection;
                cout << "El resultado es: " + to_string(calculator(selection)) + "\n\n";
                break;
        }
    } while (!(selection > 0 && selection < 5));
    return result;
}

int main() {
    bool firstTime = true;
    while (true) {
        cout << string(firstTime ? "¿Qué deseas calcular?" : "¿Deseas calcular alguna otra cosa?") + "\n1. Área del círculo\n2. Área del triángulo\n3. Área de un cuadrado\n4. Salir\nTeclea la opción: ";
        int selection; cin >> selection;
        cout << "El resultado es: " + to_string(calculator(selection)) + "\n\n";
        if (firstTime) { firstTime = false; }
    }
    return 0;
}
