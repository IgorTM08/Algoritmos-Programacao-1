#include <iostream>
using namespace std;

int main()
{
    int num, res = 1;
    
    cout << "Insira um número inteiro: ";
    cin >> num;
    
    for (int cont = 1; cont <= num; cont++){
        res = res * cont;
    }
    
    cout << "O fatorial do número digitado é: " << res;
    
    return 0;
}