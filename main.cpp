#include <iostream>
using namespace std;

int main() {
    int max(30), persone(0), eta(0), s(0);
    float posti(0), somma(0);

    while(somma<max)
    {
        cout<<"Inserire il numero di persone"<<endl;
        cin>>persone;

        cout<<"Inserire l'età"<<endl;
        cin>>eta;

        if (eta >= 18)
        {
            posti=persone;
        }
        else
        {
            posti=persone/2;
        }
        somma=somma+posti;
    }

    if (somma>max)
    {
        cout<<"La giostra non può partire"<<endl;
        
        s=somma-max;

        cout<<"Devono scendere "<<s<<" persone"<<endl;
        
    }
    else
    {
        cout<<"La giostra può partire"<<endl;
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
