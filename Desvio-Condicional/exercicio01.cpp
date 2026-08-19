#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    
    cout<<"Digite 2 números: "<<endl;
    cin>>n1>>n2;
    
    if (n1>n2){
        cout<<"O número "<<n1<<" é maior.";
    } else if (n1 == n2){
        cout<<"Eles são iguais.";
    } else{
        cout<<"O número "<<n2<<" é maior.";
    }

    return 0;
}