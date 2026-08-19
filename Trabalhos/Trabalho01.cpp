#include <iostream>
using namespace std;

int main()
{
    int di, mont1, mont2, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, cpf;

    cout << "Insira seu CPF sem os 2 últimos dígitos: ";
    cin >> cpf;

    // Verifica se o número possui 9 dígitos
    if(cpf < 100000000 || cpf > 999999999) {
        cout << "CPF inválido!";
    } else {

        // Separa os 9 primeiros dígitos do CPF
        n9 = cpf % 10;
        cpf = cpf / 10;

        n8 = cpf % 10;
        cpf = cpf / 10;

        n7 = cpf % 10;
        cpf = cpf / 10;

        n6 = cpf % 10;
        cpf = cpf / 10;

        n5 = cpf % 10;
        cpf = cpf / 10;

        n4 = cpf % 10;
        cpf = cpf / 10;

        n3 = cpf % 10;
        cpf = cpf / 10;

        n2 = cpf % 10;
        cpf = cpf / 10;

        n1 = cpf % 10;

        // Calcula o primeiro dígito verificador
        mont1 = n1 * 10 + n2 * 9 + n3 * 8 + n4 * 7 +
                n5 * 6 + n6 * 5 + n7 * 4 + n8 * 3 + n9 * 2;

        if(mont1 % 11 < 2) {
            n10 = 0;
        } else {
            n10 = 11 - (mont1 % 11);
        }

        // Calcula o segundo dígito verificador
        mont2 = n1 * 11 + n2 * 10 + n3 * 9 + n4 * 8 +
                n5 * 7 + n6 * 6 + n7 * 5 + n8 * 4 +
                n9 * 3 + n10 * 2;

        if(mont2 % 11 < 2) {
            n11 = 0;
        } else {
            n11 = 11 - (mont2 % 11);
        }

        // Exibe o CPF completo com os dígitos verificadores
        cout << "Seu CPF é: "
             << n1 << n2 << n3 << n4 << n5
             << n6 << n7 << n8 << n9 << n10 << n11;
    }

    return 0;
}