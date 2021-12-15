#include <stdio.h>
    int main() {
        
        char inputdatatype;
        int inputdecimal, a = 1, b = 1;
        long long c = 1, d = 1;
        
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
            printf ("Aprēķināt faktoriālu nav iespējams ar šo datu tipu.");
        }
        
        
        if('i' == inputdatatype){
                    if(0 == inputdecimal){
                        printf ("%d", 0);
                    }else{

                        while(a<=inputdecimal){
                                b=b*a;
                                a++;
                            }
                        printf("Faktoriālais lielums %d ir %d", inputdecimal, b);
                    }
        }

        
        if('l' == inputdatatype){
            
            long long inputlong = inputdecimal;
            
            if(0 == inputlong){
                        printf ("%d", 0);
                    }else{
                        while(c<=inputlong){
                                d=d*c;
                                c++;
                            }
                        
                        printf("Faktoriālais lielums %lld is %lld", inputlong, d);
                    }
        }
        
    }