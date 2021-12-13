#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int l,i;

    printf("Enter the string: ");
    gets(str);
    l = strlen(str);
    if (l==0){
        printf('\nInvalid string length');
    } else {
        for (i=0;i<=l;i++){
            if (str[i] >= 65 && str[i]<= 90) {
                str[i] = str[i] + 32;                                
                //printf(str[i]);
            }
            else if (str[i] >= 97 && str[i] <= 122){
                str[i] = str[i] - 32;                                
                //printf(str[i]);
            }
        }

        printf("\nNew converted string: %d", str[0]);        
        
        
        
    }


}
