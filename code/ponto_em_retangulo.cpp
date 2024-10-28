#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, xp, yp;

    cout << "Digite as coordenadas de R1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Digite as coordenadas de R2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Digite as coordenadas do ponto P (xp yp): ";
    cin >> xp >> yp;

    int xie = min(x1, x2); 
    int yie = min(y1, y2); 
    int xsd = max(x1, x2);
    int ysd = max(y1, y2);

    if (xie == xsd || yie == ysd) {
        cout << "R1 e R2 não formam um retângulo válido." << endl;
        return 1;
    }

    // Verificação da posição do ponto P
    if (xp > xie && xp < xsd && yp > yie && yp < ysd) {
        cout << "O ponto P está dentro do retângulo." << endl;
    }
    else if ((xp == xie || xp == xsd) && (yp >= yie && yp <= ysd) ||
             (yp == yie || yp == ysd) && (xp >= xie && xp <= xsd)) {
        cout << "O ponto P está na borda do retângulo." << endl;
    }
    else {
        cout << "O ponto P está fora do retângulo." << endl;
    }

    return 0;
}
