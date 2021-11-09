#include <stdio.h>
 
int main() {
    
    int num1, num2, num3;
    int pick;
    int nul = 0;
    
    printf ("Ievadi trīs skaitļus spiežot pēc katra skaitļa ENTER: ");
    scanf ("%d %d %d", &num1, &num2, &num3);
    
    int num[] = {num1, num2, num3};
    int len = sizeof(num)/sizeof(num[0]);
    
    printf("Šķirot skaitļus augošā vai dilstošā secībā?\n");
    printf("Rakstiet 1 par augošu vai 2 par dilstošu secību.\n");
    scanf ("%d", &pick);
    
    
    if (pick == 1){
       for (int i = 0; i < len; i++) {     
            for (int d = i+1; d < len; d++) {     
                if(num[i] > num[d]) {    
                    nul = num[i];    
                    num[i] = num[d];    
                    num[d] = nul;    
                 }     
            }     
        }

        printf("Sašķiroti skaitļi augošā secībā: \n");    
            for (int i = 0; i < len; i++) {     
                printf("%d ", num[i]);    
        }
    }else{
        for (int i = 0; i < len; ++i) {     
            for (int d = i+1; d < len; ++d) {     
                if(num[i] < num[d]) {    
                    nul = num[i];    
                    num[i] = num[d];    
                    num[d] = nul;    
                 }     
            }     
        }
        printf("Sašķiroti skaitļi dilstošā secībā: \n");    
            for (int i = 0; i < len; i++) {     
                printf("%d ", num[i]);    
        }
    }
    return 0;    
}