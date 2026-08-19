#include <iostream>
using namespace std;

int main()
{
    int cont, num, mem = 10000, mem1 = 0;
    
    for (cont = 1; cont <= 25; cont++){
        cout << "Insira o peso de alguém: ";
        cin >> num;
        if(num < mem){
            mem = num;
        } if(num > mem1){
            mem1 = num;
        }
    }
    
    cout << "O menor peso é " << mem << endl;
    cout << "O maior peso é " << mem1;

    return 0;
}