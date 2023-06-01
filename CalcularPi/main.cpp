#include <iostream>
#include <iomanip>

using namespace std;

double calcular_pi() {
    double pi_estimado = 0.0;
    double signo = 1.0;
    int denominador = 1;

    while (true) {
        pi_estimado += signo / denominador;
        signo *= -1;
        denominador += 2;

        double error = pi_estimado * 4 - 3.141592;
        if (error >= -0.0000005 && error <= 0.0000005)
            break;
    }

    return pi_estimado * 4; // Multiplicamos por 4 para obtener el valor de π
}

int main() {
    double pi_calculado = calcular_pi();

    cout << fixed << setprecision(6);
    cout << "El valor aproximado de π es: " << pi_calculado << endl;

    return 0;
}