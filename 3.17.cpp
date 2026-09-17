#include <iostream>

using namespace std;

int main()
{
    double n1;
    double n2;
    
    cout << "ingrese el primer numero: " << endl;
    cin >> n1;
    cout << "ingrese el segundo numero: " << endl;
    cin >> n2;
    
    if (n1 > n2){
        cout << n1 << " es mayor que " << n2 << endl;
    
    }else{
        
        cout << n2 << " es mayor que " << n1 << endl;
    }
    
    return 0;
        
    
    
    
}