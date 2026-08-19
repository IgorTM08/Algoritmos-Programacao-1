#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int matA[3][5], matB[3][5], matC[3][5];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matA[i][j] = rand()%9+1;
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            matB[i][j] = rand()%9+1;
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
    
    int i = 1;
    
    cout << "Linha 2 : \n";
    
    for(int j = 0; j < 5; j++){
        cout << matC[i][j] << "\t";
    }
    
    cout << "\n\n";
    
    int j = 2;
    
    cout << "Coluna 3: \n";
    
    for(int i = 0; i < 3; i++){
        cout << matC[i][j] << "\t";
        cout << endl;
    }

    return 0;
}