#include <iostream>

using namespace std;
int main() {
    int count=0, colision=0;
    double mercurio=(0.05,0.4),venus=(0.8,0.9),tierra=(1,1),marte=(0.1,0.5),jupiter=(318,11),saturno=(95,9),urano=(15,4),neptuno=(17,4);
    double a=mercurio,b=venus,c=tierra,d=marte,e=jupiter,f=saturno,g=urano,h=neptuno;
    srand(time(nullptr));
    float distancia=(rand()%3000)/100.0;
    cout<<distancia<<" distancia";
    if (distancia<0.5);
        cout<<"Colisionan "<<a<<"y "<<b;
    
    return 0;
}
