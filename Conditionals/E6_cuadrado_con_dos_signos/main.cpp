#include <iostream>
using namespace std;

int main() {
    int lado = 0;

    do{
        cout << "Ingrese numero de lado: \n";
        cin >> lado;
    }while (lado % 2 !=0);

    for(int i=1; i<=lado; i++)
    {
        for(int j=1; j<=lado; j++)
        {
            if(i==1 || i ==lado){
                cout << "*";
            }
            else if (j == 1|| j == lado)
            {
                cout <<"*";
            }
            else if (j > 1 && j < lado)
            {
                if((i >= lado / 2 && i <= lado/2+1) && (j>=lado/2 && j <=lado/2+1))
                {
                    cout << "+";
                }
                else
                {
                    cout << " ";
                }
            }
            if (j == lado)
            {
                cout << "\n";
            }
        }
    }
}
