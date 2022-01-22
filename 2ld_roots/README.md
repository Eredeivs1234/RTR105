
# Laboratorijas darbs - dihotomijas metode.

## Kods

```bash
#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x, delta_x, funkca, funkcb;
    int k=0;

    printf("1. Lūdzu, izvēlieties x-ass kreiso vērtību: \n");
    scanf("%lf", &a);
    printf("2. lūdzu, izvēlieties x-ass labo vērtību: \n");
    scanf("%lf", &b);
    printf("3. Lūdzu izvēlieties c vērtību: \n");
    scanf("%lf", &c);
    printf("4. Lūdzu izvēlieties precizitātes vērtību: \n ");
    scanf("%lf", &delta_x);

    funkca = j1(a);
    funkcb = j1(b);
    
    if(b < a){
		printf("Kreisās malas vērtība nedrīkst būt lielāka par labās malas vērtību.\n");
		return 1;
	}
	if (c>1){
	    printf("C vērtība nedrīkst būt lielāka par 1 .\n");
		return 1; 
	}
	
    if(funkca*funkcb>0){
		printf("Intervāls: [%lf; %lf] j1(x) funkcijai. ", a, b);
		printf("Sakņu nav vai sakņu skaits ir pāra!\n");
		return 1;
    }

	while((b-a)>delta_x){
		k++;
		x = (a+b)/2;
		
		if(j1(x) > c )
            b=x;
        else 
            a=x;
            
        printf("%2d%10.5f%10.5f%10.5f%10.5f\n", k, a, b, x, j1(x));
           
        }
    printf("Sakne atrodas x=%.3f un j1(x) ir vienāds ar %.3f\n", x, j1(x));
	return 0;
}
```

