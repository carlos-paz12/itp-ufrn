#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    double n = 10;
    double somaAritmetica = 0.0, somaHarmonica = 0.0, produtoGeometrico = 1.0;

    for (int i = 0; i < n; i++)
    {
        double x;
        cin >> x;

        somaAritmetica += x;
        produtoGeometrico *= x;
        somaHarmonica += 1 / x;
    }

    double mediaAritmetica = somaAritmetica / n;
    double mediaGeometrica = pow(produtoGeometrico, (1.0 / n));
    double mediaHarmonica = n / somaHarmonica;

    double erroHarmonico = (mediaHarmonica - mediaAritmetica) / mediaAritmetica;
    double erroGeometrico = (mediaGeometrica - mediaAritmetica) / mediaAritmetica;
    double erroMedio = (erroHarmonico + erroGeometrico) / 0.02;

    cout << "Média aritmética é " << mediaAritmetica << endl;
    cout << "Média harmônica é " << mediaHarmonica << endl;
    cout << "Média geométrica é " << mediaGeometrica << endl;
    cout << "Erro médio é " << erroMedio << " %\n";

    return 0;
}
