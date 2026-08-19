#include <iostream>
using namespace std;

int main()
{
    int cont, num, mem = 10000;
    
    for (cont = 1; cont <= 20; cont++){
        cout << "Insira um número: ";
        cin >> num;
        if(num < mem){
            mem = num;
        }
    }
    
    cout << "O menor número é " << mem;

    return 0;
}