#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int l,i, lc, uc, dg, sp;
    lc = 0;
    uc = 0;
    dg = 0;
    sp = 0;    

    printf("Enter the string: ");
    gets(str);
    l = strlen(str);
    if (l==0){
        printf('\nInvalid string length');
    } else {
        for (i=0;i<=l;i++){
            if (str[i] >= 65 && str[i]<= 90){
                uc++;
                printf(str[i]);
            }
            else if (str[i] >= 97 && str[i] <= 122)
                lc++;
            else if (str[i] >= 48 && str[i] <= 57)
                dg++;
            else
                sp++;                
        }

        printf("\nNo. of upper case characters: %d", uc);        
        printf("\nNo. of upper case characters: %d", lc);
        printf("\nNo. of upper case characters: %d", dg);
        printf("\nNo. of upper case characters: %d", sp);
    }


}
