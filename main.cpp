#include <chrono>
#include <climits>
#include <iostream>
#include <math.h>
#include <thread>

void pulisci_schermo() {
#if defined _WIN32
  system("cls");
#else
  system("clear");
#endif
}

int main() {
  std::string input;
  int a;
  int b;
  int c;
  float x;
  float x1;
  float x2;

  while (true) {
    pulisci_schermo();
    std::cout << "\n";
    std::cout << "ax^2 + bx + c = ?\n";
    std::cout << "\n";

    input = "";
    std::cout << "(Lascia vuoto per uscire dal programma!)\n";
    try {
      std::cout << "Inserisci il valore di a: ";
      std::getline(std::cin, input);
      a = std::stoi(input);

      std::cout << "Inserisci il valore di b: ";
      std::getline(std::cin, input);
      b = std::stoi(input);

      std::cout << "Inserisci il valore di c: ";
      std::getline(std::cin, input);
      c = std::stoi(input);
    } catch (...) {
      if (input == "") {
        break;
      }
      std::cout << "Input invalido!\n";
      std::this_thread::sleep_for(std::chrono::seconds(1));
      continue;
    }

    int delta = std::pow(b, 2) - (4 * a * c);
    std::cout << "\n";
    std::cout << a << "x^2 + " << b << "x + " << c << ":\n";

    if (delta < 0) {
      std::cout << "Questa equazione non ha soluzioni!\n";
    } else if (delta == 0) {
      x = (-b) / (2 * a);
      std::cout << "x = " << x << "\n";
    } else if (delta > 0) {
      x1 = (-b + std::sqrt(delta)) / (2 * a);
      x2 = (-b - std::sqrt(delta)) / (2 * a);
      std::cout << "x1 = " << x1 << "\n";
      std::cout << "x2 = " << x2 << "\n";
    }

    std::cout << "Premi [INVIO] per tornare al menu... ";
    std::getline(std::cin, input);
    continue;
  }
}
