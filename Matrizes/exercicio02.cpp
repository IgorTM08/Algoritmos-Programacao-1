#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

#define t 5

int main()
{
    srand(time(NULL));
    
    int mat[t][t], soma = 0;
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++)mat[i][j] = rand()%9+1;
    }
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
    
    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++) soma += mat[i][j];
    }
    
    cout << "A soma de todos os elementos da matriz é: " << soma;

    return 0;
}