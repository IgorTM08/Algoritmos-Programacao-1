#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define t 4

int main()
{
    srand(time(NULL));

    int matrizG[t][t] = {}, opc, i1, j1, i2, j2, esc;
    int matrizP[t][t] = {1,4,5,2,7,2,8,7,3,6,1,4,6,5,3,8};

    do {

        int matrizJ[t][t] = {}, cont = 24, par = 0;

        opc = 1 + rand() % 4;

        switch(opc){

            case 1:  // Matriz gabarito é a cópia da matriz principal

                for(int i = 0; i < t; i++){
                    for(int j = 0; j < t; j++){
                        matrizG[i][j] = matrizP[i][j];
                    }
                }

                break;

            case 2:  // Matriz gabarito é a transposta da matriz principal

                for(int i = 0; i < t; i++){
                    for(int j = 0; j < t; j++){
                        matrizG[j][i] = matrizP[i][j];
                    }
                }

                break;

            case 3:  // Matriz gabarito é a matriz principal invertida por linhas

                for(int i = 0; i < t; i++){
                    for(int j = 0; j < t; j++){
                        int k = t - 1 - i;
                        matrizG[k][j] = matrizP[i][j];
                    }
                }

                break;

            case 4:  // Matriz gabarito é a matriz principal invertida por colunas

                for(int i = 0; i < t; i++){
                    for(int j = 0; j < t; j++){
                        int k = t - 1 - j;
                        matrizG[i][k] = matrizP[i][j];
                    }
                }

                break;
        }

        while(cont > 0){

            for(int i = 0; i < t; i++){
                for(int j = 0; j < t; j++){
                    cout << "\t" << matrizJ[i][j];
                }
                cout << endl;
            }

            cout << "\nTentativas: " << cont;
            cout << "\nDigite a linha e a coluna (respectivamente) da posição desejada: \n";
            cin >> i1 >> j1;

            if(i1 > 4 || i1 < 1 || j1 > 4 || j1 < 1){
                cout << "\033c";
                cout << "Posição inválida! A rodada foi invalidada.\n";
                cont++;
            } else {

                i1 = i1 - 1;
                j1 = j1 - 1;

                if(matrizJ[i1][j1] != 0){
                    cout << "Essa posição já foi descoberta!\n";
                    cont++;
                } else {

                    matrizJ[i1][j1] = matrizG[i1][j1];

                    for(int i = 0; i < t; i++){
                        for(int j = 0; j < t; j++){
                            cout << "\t" << matrizJ[i][j];
                        }
                        cout << endl;
                    }

                    cout << "Digite a linha e a coluna (respectivamente) da posição desejada: \n";
                    cin >> i2 >> j2;

                    if(i2 > 4 || i2 < 1 || j2 > 4 || j2 < 1){
                        cout << "\033c";
                        cout << "Posição inválida! A rodada foi invalidada.";
                        matrizJ[i1][j1] = 0;
                        cont++;
                    } else {

                        i2 = i2 - 1;
                        j2 = j2 - 1;

                        if(matrizJ[i2][j2] != 0){
                            cout << "Essa posição já está descoberta!\n";
                            matrizJ[i1][j1] = 0;
                            cont++;
                        } else {

                            matrizJ[i2][j2] = matrizG[i2][j2];

                            for(int i = 0; i < t; i++){
                                for(int j = 0; j < t; j++){
                                    cout << "\t" << matrizJ[i][j];
                                }
                                cout << endl;
                            }

                            if(matrizJ[i1][j1] == matrizJ[i2][j2]){
                                cout << "Jogada OK!";
                                par++;
                            } else {
                                matrizJ[i1][j1] = 0;
                                matrizJ[i2][j2] = 0;
                                cout << "Jogada NOK!";
                            }

                            cin.ignore();
                            cin.ignore();
                            cout << "\033c";

                            if(par == 8){
                                cout << "Parabéns, você ganhou!\n";
                                cont = -1;
                            }
                        }
                    }
                }
            }

            cont--;
        }

        if(cont == 0)
            cout << "Você perdeu!\n";

        do {
            cout << "Deseja jogar novamente?\n";
            cout << "1. Sim\n";
            cout << "2. Não\n";
            cin >> esc;

            if(esc < 1 || esc > 2)
                cout << "Opção inválida!\n";

        } while(esc < 1 || esc > 2);

    } while(esc == 1);

    cout << "Sessão encerrada!";

    return 0;
}