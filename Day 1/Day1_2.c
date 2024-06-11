

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float principle, years, roi;
    float interest, amount, discount, net_amount;
    scanf("%f%f%f",&principle, &years, &roi);
    interest = (principle * years * roi) / 100.0;
    amount = principle + interest;
    discount = interest * 0.02; 
    net_amount = amount - discount;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n",
            interest, amount, discount, net_amount);
    
    
    return 0;
}
