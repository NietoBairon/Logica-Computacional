#include <iostream>

using namespace std;

int main()
{
    int mes;
    
    cout << "ingrese el numero de su mes del 1 al 12: " << endl;
    cin >> mes;
    
    if (mes ==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12)
        cout << "su mes tiene 31 dias" << endl;
        
    else{ if(mes==4 or mes==6 or mes==9 or mes==11){
            cout << "su mes tiene 30 dias " << endl;
        }   
        else{
            cout<< "su mes tiene 28 dias " << endl;
        }
    } 
}