#include <stdio.h>
#include<math.h>
void main(){
    double x,y,a,b,S;
    int k=0;

    long long fact(long x) {
        if(x == 0)
        return 1;
    }
    
    printf("Ievadiet x vertibu(ar vismaz vienu ciparu aiz komata): \n");
    scanf("%lf",&x);
    y = j1(x);
    printf("bessj(%.2f)=%.2f\n",x,y);
    
    b = (pow(-1,k)*pow(x,2*k))/(fact(k)*fact(k+1)*pow(x,2*k));
    a = (x/2)*b;
    S = a;
    
    while(k<1000){
        k++;
        a = a * x/k;
        S = S + a;
        
        if (k == 499){
            printf("a499 - %e\tS499 - %.2f\n",a,S);
            
        }
        if (k == 1000){
        printf("a1000 - %e\tS1000 - %.2f\n",a,S);
        
        }
    }
printf(
"                          1000  " "\n"
"                         ----- " "\n"
"                          \\   " "\n"
"                      x    \\    "      "  (-1)^k * x^2*k      " "\n"
" bessj(x) =     = >  ---  *    "    "     -----------------    , kur -∞ < x < ∞"  "\n"
"                      2   /      "      "k! * (k+1)! * 2^2*k          " "\n"
"                         /    " "\n"
"                         ----- " "\n"
"                          k=0  " "\n"
"\n");
}