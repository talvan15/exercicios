#include <iostream>
using namespace std;

int fibonacci(int x){
    if (x == 0 || x == 1)
    {
        return x;
    }
    return fibonacci(x - 1) + fibonacci(x - 2);
    
}

int main()
{
    int l;
    cout << "Digite o termo: " << endl;
    cin >> l;
    int termo1 = 1;
    int termo2 = 1;
    cout << termo1 << " " << termo2 << " ";

    while(termo2 <= l){

        int temp = termo2;
        termo2 = termo2 + termo1;
        termo1 = temp;

        cout << termo2 << " ";
    }
    cout << endl;

    // pela função:
    int x;
    cout << "digite um numero: "<< endl;
    cin >> x;
    cout << fibonacci(x);
   
    return 0;
}