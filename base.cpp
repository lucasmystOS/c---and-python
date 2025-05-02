#include <iostream>
#include <cmath> // Para usar a função sqrt
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    cout << "Digite um número: ";
    int n;
    cin >> n;

    double raiz = sqrt(n);

    if (raiz == static_cast<int>(raiz))
    {
        cout << "A raiz quadrada de " << n << " é " << raiz << " e é exata." << endl;
    }
    else
    {
        cout << "A raiz quadrada de " << n << " é " << raiz << " e não é exata." << endl;
    }

    return 0;
}