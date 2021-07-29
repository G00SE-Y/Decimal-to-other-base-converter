#include <stdio.h>
#include <stdlib.h>
//Coded by Ethan Woollet - January 2021
char decodeRem(int base, int* Rem);
int main(void){
    int base, num, rem, quot, Arr[100], temp=0;
    char help, trash;
    printf("Would you like to see the steps?(y or n)\n");
    scanf("%c", &help);
    if((help != 'y') && (help != 'n')){
        printf("\n'%c' is not \"yes\" or \"no\", you absolute Dum-Dum\n", help);
        return 0;
    }
    printf("Select the base you are converting to (the number of the base its in ** 2 < base < 20 **)\n");
    scanf("%c", &trash);
    scanf("%d", &base);
    printf("Enter the number you would like to convert:\n");
    scanf("%d", &num);
    if(help == 'y'){
       for(int i=0; ; i++){
            if(i==0){
            rem = num%base;
            quot = num/base;
            Arr[i] = rem;
            printf("%d / %d = %d + %d\n", num, base, quot, rem);
            }
            else{
                printf("%d ", quot);
                rem =quot%base;
                quot = quot/base;
                Arr[i] = rem;
                printf("/ %d = %d + %d\n", base, quot, rem);
            }
            if((quot*base)<base){
                temp = i;
                break;
            }
        }
           printf("%d converted from base 10 to base %d is:    ", num, base);
           for(int i=temp; i>=0; i--){
               if(Arr[i]>9){
                   printf("%c", 65+(Arr[i]-10));
               }
               else printf("%d", Arr[i]);
           }
    }
    else if(help == 'n'){
        for(int i=0; ; i++){
            if(i==0){
            rem = num%base;
            quot = num/base;
            Arr[i] = rem;
            }
            else{
                rem =quot%base;
                quot = quot/base;
                Arr[i] = rem;
            }
            if((quot*base)<base){
                temp = i;
                break;
            }
        }
           printf("%d in converted to from base 10 to base %d is:    ", num, base);
           for(int i=temp; i>=0; i--){
               if(Arr[i]>9){
                   printf("%c", 65+(Arr[i]-10));
               }
               else printf("%d", Arr[i]);
           }
    }


    return 0;
}
