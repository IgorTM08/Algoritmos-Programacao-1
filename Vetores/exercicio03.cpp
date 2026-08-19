#include <iostream>
using namespace std;

#define t 8

int main()
{
    int A[t], B[t], arm;
    
    for (int i = 0; i < 8; i++){
        cout << "Digite um valor para A: \n";
        cin >> A[i];
        cout << "Digite um valor para B: \n";
        cin >> B[i];
        arm = A[i];
        A[i] = B[i];
        B[i] = arm;
    }
    
    for (int i = 0; i < 8; i++)
        cout << "A: " << A[i] << "  |  B: " << B[i] << endl;

    return 0;
}