#include <iostream>
using namespace std;

#define t 2

int main()
{
    float mat[t][t], maior, menor;
    int LM = 0, CM = 0;

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout << "Digite um valor real: ";
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout << "\t" << mat[i][j];
        }
        cout << endl;
    }

    maior = mat[0][0];

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                LM = i;
            }
        }
    }

    menor = mat[LM][0];

    for(int j = 0; j < t; j++){
        if(mat[LM][j] < menor){
            menor = mat[LM][j];
            CM = j;
        }
    }

    cout << "O valor minimax está em [" << LM+1 << "][" << CM+1 << "]";

    return 0;
}