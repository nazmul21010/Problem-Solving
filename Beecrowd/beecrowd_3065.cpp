#include <iostream>
#include <vector>
using namespace std;

int calcular(vector<int> operandos, vector<char> operadores)
{
    int resultado = operandos[0];
    for (int i = 0; i < operadores.size(); ++i)
    {
        if (operadores[i] == '+')
        {
            resultado += operandos[i + 1];
        }
        else if (operadores[i] == '-')
        {
            resultado -= operandos[i + 1];
        }
    }
    return resultado;
}

int main()
{
    while (true)
    {
        int m;
        cin >> m;
        if (m == 0)
            break;

        vector<int> operandos(m);
        vector<char> operadores(m - 1);
        for (int i = 0; i < m; ++i)
        {
            cin >> operandos[i];
            if (i < m - 1)
                cin >> operadores[i];
        }

        int resultado = calcular(operandos, operadores);

        cout << resultado << endl;
    }
    return 0;
}