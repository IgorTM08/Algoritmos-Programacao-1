#include <iostream>
using namespace std;

#define T 5

int main()
{
    int n[T], nI[T], nP[T], par = 0, impar = 0;
    
    for (int i = 0; i < 5; i++){
        cout << "Digite um valor: ";
        cin >> n[i];
        if (n[i] % 2 == 0){
            nP[i] = n[i];
            par += nP[i];
        } else{
            nI[i] = n[i];
            impar += nI[i];
        }
    }
    
    if(par > impar){
        cout << "\nPar é maior: " << par;
    } else { cout << "\nÍmpar é maior: " << impar;
    }
    
    
    return 0;
}