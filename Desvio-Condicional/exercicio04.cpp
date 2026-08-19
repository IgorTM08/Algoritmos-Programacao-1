#include <iostream>
using namespace std;

int main()
{
   float l1, l2, l3;
   
    cout<<"Digite três números inteiros: \n";
    cin>>l1>>l2>>l3;
    
    if (l1 != l2 && l1 != l3){
        cout<< "O triângulo é escaleno.";
    } else if (l1 == l2 && l1 != l3){
        cout<< "O triângulo é isósceles.";
    } else if (l1 != l2 && l1 == l3){
        cout<< "O triângulo é isósceles.";
    } else{
        cout<< "O triângulo é equilátero.";
    }

    return 0;
}