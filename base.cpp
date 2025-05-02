#include <iostream>
#include <cmath> // Para usar a função sqrt
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    cout << "Digite um número: ";
    int n;
    cin >> n;

    cout << "Raiz quadrada de " << n << " é: " << sqrt(n) << endl;
    cout << "Raiz cúbica de " << n << " é: " << cbrt(n) << endl;   
    cout << "Raiz quarta de " << n << " é: " << pow(n, 0.25) << endl;
    cout << "Raiz quinta de " << n << " é: " << pow(n, 0.2) << endl;
    cout << "Raiz sexta de " << n << " é: " << pow(n, 1.0/6) << endl;
    cout << "Raiz sétima de " << n << " é: " << pow(n, 1.0/7) << endl;
    cout << "Raiz oitava de " << n << " é: " << pow(n, 1.0/8) << endl;
    cout << "Raiz nona de " << n << " é: " << pow(n, 1.0/9) << endl;
    cout << "Raiz décima de " << n << " é: " << pow(n, 1.0/10) << endl;
    cout << "Raiz décima primeira de " << n << " é: " << pow(n, 1.0/11) << endl;
    cout << "Raiz décima segunda de " << n << " é: " << pow(n, 1.0/12) << endl;
    cout << "Raiz décima terceira de " << n << " é: " << pow(n, 1.0/13) << endl;
    cout << "Raiz décima quarta de " << n << " é: " << pow(n, 1.0/14) << endl;
    cout << "Raiz décima quinta de " << n << " é: " << pow(n, 1.0/15) << endl;
    cout << "Raiz décima sexta de " << n << " é: " << pow(n, 1.0/16) << endl;
    cout << "Raiz décima sétima de " << n << " é: " << pow(n, 1.0/17) << endl;
    cout << "Raiz décima oitava de " << n << " é: " << pow(n, 1.0/18) << endl;
    cout << "Raiz décima nona de " << n << " é: " << pow(n, 1.0/19) << endl;
    cout << "Raiz vigésima de " << n << " é: " << pow(n, 1.0/20) << endl;

    return 0;
}