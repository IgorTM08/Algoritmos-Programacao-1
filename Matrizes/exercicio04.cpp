#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

#define l 4
#define c 6

int main()
{
    srand(time(NULL));
    
    int mat1[l][c], mat2[c][l], matR[l][l] = {}, k;
    
    cout << "Matriz 1 (4x6)\n";
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            mat1[i][j] = rand()%9+1;
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\n\nMatriz 1 (6x4)\n";
    
    for(int i = 0; i < c; i++){
        for(int j = 0; j < l; j++){
            mat2[i][j] = rand()%9+1;
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\n\nMatriz Resultante (4x4):\n";
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            for(int k = 0; k < c; k++){
                matR[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << matR[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}