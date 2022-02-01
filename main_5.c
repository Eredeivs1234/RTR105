#include <stdio.h>
    int main() {
        
        char inputdatatype;
        int inputdecimal, i, a = 1;
        long long c = 1;
        
        printf ("Ievadiet vienu decimālu skaitli: ");
        scanf ("%d", &inputdecimal);
        
        if(0 > inputdecimal){
                printf ("Negatīvi decimālie skaitļi nav atļauti.");
                return 0;
        }
        
        
        printf ("Izvēlaties datu tipu");
        printf ("(char = c, int = i vai long long = l): ");
        scanf (" %c", &inputdatatype);
        
        if ('c' == inputdatatype){
            printf ("\nAprēķināt faktoriālu nav iespējams ar šo datu tipu.");
        }
        
        
        if('i' == inputdatatype){
                    if(0 == inputdecimal){
                        printf ("%d", 0);
                    }else{
                        for(i=1;i<=inputdecimal;i++){    
                            a=a*i;    
                        }    
                        printf("Faktoriālais lielums %d ir %d", inputdecimal, a);
                    }
        }

        
        if('l' == inputdatatype){
            long long inputlong = inputdecimal;
            if(0 == inputlong){
                        printf ("%d", 0);
                    }else{
                        for(i=1;i<=inputdecimal;i++){    
                            c=c*i;    
                        } 
                        
                        printf("Faktoriālais lielums %lld is %lld", inputlong, c);
                    }
        }
        else{
            printf("\nIevadiet derīgu decimālo skaitli.");
        }
        
    }