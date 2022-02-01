#include <stdio.h>

void pirmafunkcija();
void otrafunkcija(int z);
int tresafunkcija();
int ceturtafunkcija(int, int);

int main()
{
    // funkcija 1.
    pirmafunkcija();
    
    // funkcija 2.
    int z;
    z = 25+44;
    otrafunkcija(z);
    
    // funkcija 3.
    int y;
    y=tresafunkcija();
    printf("\n%d", y);
    
    // funkcija 4.
    int k, a, d;
    k = 10;
    a = 12;
    d = ceturtafunkcija(k, a);
    printf("\n%d", d);
    
    
    
}



void pirmafunkcija(){
    int x;
    x = 10+20;
    printf("%d", x);
}

void otrafunkcija(int z){
    printf("\n%d", z);
}

int tresafunkcija(){
    int x;
    x = 10+40;
    return x;
}

int ceturtafunkcija(int k, int a){
    int d;
    d = k+a;
    return d;
}


