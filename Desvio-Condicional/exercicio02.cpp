#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"Digite um número: "<<endl;
    cin>> n;
    
    if(n>0){
        cout<<"Ele é positivo.";
    } else if (n<0){
        cout<<"Ele é negativo.";
    } else{
        cout<<"Ele é igual a zero.";
    }

    return 0;
}