#include <stdio.h>
#include <math.h>

void main() {
    double a,b,c,x, sk1=0,sk2,sk3,sk4;
    int k,n=2;
    
    printf("Lūdzu ievadiet pirmo vērtību: ");
    scanf("%lf", &a);
    printf("\nLūdzu ievadiet otro vērtību: ");
    scanf("%lf", &b);
    printf("\nLūdzu ievadiet precizitātes vērtību: ");
    scanf("%lf", &c);
    
    sk2=(b-a)*(j1(a)+j1(b))/n;
    while(fabs(sk2-sk1)>c){
        n*=2;
		x=(b-a)/n;
		sk1=sk2;
		sk2=0;
		for(k=0;k<n;k++)
			sk2=(sin(a)/a)-(sin(b)/b);
	}
	
    sk3=(b-a)*(j1(a)+j1(b))/n;
	while(fabs(sk3-sk1)>c){
		n*=2;
		x=(b-a)/n;
		sk1=sk3;
		sk3=0;
		for(k=0;k<n;k++)
		    sk3=(b-(a))*0.5*(j1(a)+j1(b));
	
}
    sk4=(b-a)*(j1(a)+j1(b))/n;
    while(fabs(sk4-sk1)>c){
        n *= 2;
        x = (-b-(-a))/n;
        sk1 = sk4;
        sk4 = 0;
        for(k=0;k<n;k++)
            sk4=(b-(a))*(1/6)*(j1(a)+4*j1(0.5*(a+(b)))+j1(b));
        }

    printf("Integrals taisnsturu metodei: %f",sk2);
    printf("\nIntegrals trapecu metodei: %f", sk3);
    printf("\nIntegrals simpsona metodei: %f", sk4);
}
