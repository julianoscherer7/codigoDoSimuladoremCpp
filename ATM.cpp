#include <iostream>
#include <array>
using namespace std;

// Função de separação das notas por valor
array<int, 4> contaNotas(int saque) {
    array<int, 4> notasSeparadas;
    notasSeparadas[0] = (saque / 50);
    notasSeparadas[1] = ((saque % 50) / 20);
    notasSeparadas[2] = (((saque % 50) % 20) / 10);
    notasSeparadas[3] = ((((saque % 50) % 20) % 10) / 5);
    return notasSeparadas;
}

// Fluxo principal do código
int main() {
    // Declara variáveis
    int saque;
    array<int, 4> qtdNotas;

    // Le valor a ser sacado do Caixa Eletrônico
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    // Executa função para separar quantidade de notas por seu valor
    qtdNotas = contaNotas(saque);

    // Simula saída de notas do Caixa Eletrônico
    cout << "Qtd. Notas de 50: " << qtdNotas[0] << "\n";
    cout << "Qtd. Notas de 20: " << qtdNotas[1] << "\n";
    cout << "Qtd. Notas de 10: " << qtdNotas[2] << "\n";
    cout << "Qtd. Notas de 5: " << qtdNotas[3] << "\n";

    // Final do main
    return 0;
}