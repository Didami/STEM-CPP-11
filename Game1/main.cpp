#include <iostream>
#include <stdlib.h>

int main() {
    int attempts = 10, attempt = 0;
    int secret, guess;
    secret = rand() % 101;
    
    do {
        std::cout << "Adivina el número (1 al 100): ";
        std::cin >> guess;
        if (secret < guess) {
            std::cout << "El número es menor\n";
        } else if (secret > guess) {
            std::cout << "El número es mayor\n";
        }
        attempt++;
    } while (secret != guess && attempt < attempts);

    std::string message = (attempt < attempts) ? "Felicidades! adivinaste en " + std::to_string(attempt) + " intentos.\n" : "Perdiste! el número era " + std::to_string(secret) + ".\n";
    std::cout << message;
}
