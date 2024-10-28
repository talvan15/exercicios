#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1,x2,y1,y2;
    float distancia, p1, p2;
    cout << "Digite as coordenadas:" << endl;
    cout << "x1 ";
    cin >> x1;
    cout << "x2 ";
    cin >> x2;
    cout << "y1 ";
    cin >> y1;
    cout << "y2 ";
    cin >> y2;

    p1 = (x2 - x1)*(x2 - x1);
    p2 = (y2 - y1)*(x2 - x1);
    distancia = sqrt(p1 + p2);
    cout << distancia;
}