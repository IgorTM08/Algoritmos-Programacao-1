#include <iostream>
using namespace std;

#define t 5

int main()
{
    int vet[t], cont = 0;
    
    for(int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> vet[i];
    }
    
    for (int i = 0; i < 5; i++){
        if (vet[i] == 7){
            cont++;
            cout << "O numero sete aparece na posição " << i << " pela " << cont << "a vez.\n";
        }
    }

    return 0;
}