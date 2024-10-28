#include <iostream>
using namespace std;

int raizes(float a, float b, float c){
    int delta;

    delta = (b * b) - 4*(a*c);
    cout << delta << endl;

    if (delta > 0)
    {
        cout << "A equacao possui duas raizes " << endl;
    }
    else if(delta == 0)
    {
        cout << "A equacao possui 1 raiz " << endl;
    }
    else{
        cout << "A equacao nao possui raizes " << endl;
    }  
}
int main()
{
    int a, b, c;
    cout << "Digite os coeficientes da equacao: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    raizes(a,b,c);
}