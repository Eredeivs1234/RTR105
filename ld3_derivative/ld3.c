#include <stdio.h>
#include <math.h>

void main() {
    double a,b,c,f1,f2,x, aa,ab,ac,ad,ae;
    
    printf("Lūdzu ievadiet pirmo vērtību: ");
    scanf("%lf", &a);
    printf("\nLūdzu ievadiet otro vērtību: ");
    scanf("%lf", &b);
    printf("\nLūdzu ievadiet precizitātes vērtību: ");
    scanf("%lf", &c);

    printf("\n        x            j1(-x)          j1\'(-x)            j1\'(-x)             j1\'\'(-x)          j1\'\'(-x)  \n"
           "                                analytical formula  finite difference analytical formula finite difference\n");
    printf("\n");
    
   x = a;
   while(x < b){
      
       aa=(j1(-x));
       ab=(1/(pow(-x,2)+1));
       ac=(j1(-x)-j1(-x-c))/c;
       ad=(-2*(-x))/(pow(-x,4)+2*pow(-x,2)+1);
       f1=(1/(1+pow(-x+c,2)));
       f2=(1/(1+pow(-x,2)));
       ae=((f1-f2)/c);
       
       printf(" %10.3f\t%10.3f\t %10.3f\t   %10.3f\t       %10.3f\t   %10.3f\n",x,aa,ab,ac,ad,ae);
        x+=c;
   }
}