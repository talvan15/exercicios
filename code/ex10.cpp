#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Digite o numero: " << endl;
    cin >> num;

    if (num > 0 && num < 10)
    {
        double div = num/2;
        cout << "Numero " << num <<" dividido por 2: " << " " << div << endl;
    }
    else if (num > 10){
        double var = sin(num);
        cout << "Seno do numero " << num << ": " << var;
    }
    
}