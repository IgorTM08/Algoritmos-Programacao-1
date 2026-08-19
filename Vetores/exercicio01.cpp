#include <iostream>
using namespace std;

int main()
{
    int vet[5], vetI[5], i;
    
    for(i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> vet[i];
    }
    
    for(i = 0; i < 5; i++){
        vetI[i] = vet[i] * -1;
        cout << vetI[i] << endl;
    }

    return 0;
}