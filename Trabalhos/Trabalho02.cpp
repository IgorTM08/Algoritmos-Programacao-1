#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL)); // Inicializa os números aleatórios

    // Declaração das variáveis
    int esc;
    int n1, n2, n3, n4;
    int n5, n6, n7, n8;
    int valor;
    int i;
    int certo = 0;
    int errado;
    int posInc;

    // Menu principal
    do {

        cout << "Bem-vindo ao jogo Mastermind!\n";
        cout << "Escolha o número da opção desejada:\n";
        cout << "1. Jogar\n";
        cout << "2. Sobre\n";
        cout << "3. Sair\n\n";

        cin >> esc;

        switch(esc) {

            case 1: // Início do jogo

                // Gera os números secretos
                n1 = 1 + rand() % 6;

                do {
                    n2 = 1 + rand() % 6;
                } while(n2 == n1);

                do {
                    n3 = 1 + rand() % 6;
                } while(n3 == n1 || n3 == n2);

                do {
                    n4 = 1 + rand() % 6;
                } while(n4 == n1 || n4 == n2 || n4 == n3);

                certo = 0;
                cout << "\033c";

                // Máximo de 10 tentativas
                for(i = 0; i < 10 && certo != 4; i++) {

                    certo = 0;
                    errado = 0;
                    posInc = 0;

                    cout << "Digite um valor de 4 dígitos (entre 1 e 6): ";
                    cin >> valor;

                    // Verifica se possui 4 dígitos
                    if(valor > 9999 || valor < 1000) {

                        cout << "\033c";
                        cout << "Número inválido! A rodada foi invalidada.\n";
                        i--;

                    } else {

                        // Separa os dígitos
                        n5 = valor % 10;
                        valor = valor / 10;

                        n6 = valor % 10;
                        valor = valor / 10;

                        n7 = valor % 10;
                        valor = valor / 10;

                        n8 = valor;

                        // Verifica se os números estão entre 1 e 6
                        if(n5 < 1 || n5 > 6 ||
                           n6 < 1 || n6 > 6 ||
                           n7 < 1 || n7 > 6 ||
                           n8 < 1 || n8 > 6) {

                            cout << "\033c";
                            cout << "Digite apenas números entre 1 e 6!\n";
                            i--;

                        // Verifica se existem números repetidos
                        } else if(n5 == n6 || n5 == n7 || n5 == n8 ||
                                  n6 == n7 || n6 == n8 ||
                                  n7 == n8) {

                            cout << "\033c";
                            cout << "Não digite números repetidos!\n";
                            i--;

                        } else {

                            // Verifica as posições corretas
                            if(n8 == n1) certo++;
                            if(n7 == n2) certo++;
                            if(n6 == n3) certo++;
                            if(n5 == n4) certo++;

                            // Verifica os números corretos em posições incorretas
                            if(n8 == n2 || n8 == n3 || n8 == n4) posInc++;
                            if(n7 == n1 || n7 == n3 || n7 == n4) posInc++;
                            if(n6 == n1 || n6 == n2 || n6 == n4) posInc++;
                            if(n5 == n1 || n5 == n2 || n5 == n3) posInc++;

                            // Exibe o resultado da rodada
                            cout << "\nCertos: " << certo << endl;
                            cout << "Certos, mas em posição incorreta: " << posInc << endl;
                            cout << "\nTentativas restantes: " << 9 - i << endl << endl;

                            // Verifica se o jogador venceu
                            if(certo == 4) {

                                cout << "\033c";
                                cout << "Parabéns! Você acertou!\n\n";
                                cin.ignore();
                                cin.ignore();
                            }

                            // Verifica se o jogador perdeu
                            if(i == 9) {

                                cout << "\033c";
                                cout << "Limite de tentativas atingido!\n";
                                cout << "O número era: " << n1 << n2 << n3 << n4 << endl << endl;

                                cin.ignore();
                                cin.ignore();
                            }
                        }
                    }
                }

                cout << "\033c";
                break;

            case 2: // Sobre

                cout << "\033c";

                cout << "Sobre:\n\n";

                cout << "Este jogo foi desenvolvido em maio de 2026 por:\n\n";

                cout << "Igor Temmerman\n";
                cout << "Thiago Luiz Ransdorf\n";
                cout << "Rafael Miranda Veiga\n";
                cout << "Joao Pedro Dietrich da Silva\n";
                cout << "Caetano Pedroso de Freitas\n\n";

                cout << "Orientação do professor Rafael Martins\n";
                cout << "Disciplina de Algoritmos e Programação.\n\n";

                cin.ignore();
                cin.ignore();
                cout << "\033c";

                break;

            case 3: // Sair

                cout << "\033c";
                cout << "Sessão encerrada.\n";
                break;

            default: // Opção inválida

                cout << "\033c";
                cout << "Número digitado inválido!\n\n";
                break;
        }

    } while(esc != 3);

    return 0;
}