#include <iostream>

int main() {
    // MARK: - For
    for (int i = 0; i < 20; i++) {
        std::cout << "Hello, World!\n";
    }
    
    // MARK: - Promedio
    std::cout << "¿Cuál es tu nombre?\n";
    std::string name; std::cin >> name;
    
    std::cout << "Introduce tu primera calificación: ";
    float c1; std::cin >> c1;
    
    std::cout << "Introduce tu segunda calificación: ";
    float c2; std::cin >> c2;
    
    std::cout << "Introduce tu tercera calificación: ";
    float c3; std::cin >> c3;
    
    float avg = (c1 + c2 + c3) / 3;
    
    std::string result = (avg < 6) ? "reprobado" : "aprobado";
    
    std::cout << name + ", tu promedio es: " + std::to_string(avg) + ", por lo que estás " + result + ".\n";
}
