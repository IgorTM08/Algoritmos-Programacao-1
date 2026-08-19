#include <iostream>
using namespace std;

int main()
{
    int num, contP, contI, contR;
    
    for (contP = 0, contI = 0, contR = 1; contR <= 20; contR++){
        cout << "Insira uma valor: ";
        cin >> num;
        
        if (num % 2 == 0){
            contP++;
        } else if (num % 2 != 0){
            contI++;
        }
    }
    
    cout << "Quantidades de números pares: " << contP << endl;
    cout << "Quantidades de números ímpares: " << contI;

    return 0;
}