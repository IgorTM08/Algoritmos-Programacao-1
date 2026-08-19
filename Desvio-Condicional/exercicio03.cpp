#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3;
    
    cout << "Digite 3 valores: \n";
    cin >> n1 >> n2 >> n3;
    
    if (n1 <= n2 && n1 <= n3){
        cout << n1 << " é o menor.";
    } else if (n2 <= n1 && n2 <= n3){
        cout << n2 << " é o menor.";
    } else {
        cout << n3 << " é o menor.";
    }

    return 0;
}