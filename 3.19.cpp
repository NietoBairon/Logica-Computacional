#include <iostream>

using namespace std;

int main()
{
   int anyo;
   
   cout << "ingrese el anyo" << endl;
   cin >> anyo;
   
   int A = anyo % 19;
   int B = anyo % 4;
   int C = anyo % 7;
   int D = (19 * A + 24) % 30;
   int E = (2 * B + 4 * C + 6 * D + 5) % 7;
   int N = (22 + D + E);
   
   if(N <= 31){
       cout << "El Domingo de Pascua es el " << N << " de Marzo de " << anyo << endl;
   }else{
       int diaAbril = N - 31;
       cout << "El Domingo de Pascua es el " << diaAbril << " de Abril de " << anyo << endl;
   }
        
    return 0;    
}