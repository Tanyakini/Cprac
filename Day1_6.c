

 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    if(!(100 <= num && num <= 999)) {
        printf("Invalid Number");
        return 0;
    }
    
    if(((num/10)%10) % 3 == 0) { //791/10-> 79 %10 -> 9 %3 == 0
        printf("Trendy Number");
    }else{
        printf("Not a Trendy Number");
    }
     
    return 0;
}