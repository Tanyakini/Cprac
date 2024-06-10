#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000
void readNumbers(int* numbers, int size){
    for(int I = 0; I < size; I++){
        scanf("%d",&numbers[I]);
    }
}
int findSum(int* numbers, int size){
    int S = 0;
    for(int I = 0; I < size; I++){
        S += numbers[I];
    }
    return S;
}
int main() {
    int sizeOne, sizeTwo;
    int firstNumbers[MAX_SIZE],secondNumbers[MAX_SIZE];
    scanf("%d%d",&sizeOne,&sizeTwo);
    if(sizeOne != sizeTwo){
        printf("Not Same");
        return 0;
    }
    readNumbers(firstNumbers, sizeOne);
    readNumbers(secondNumbers, sizeTwo);
    int firstSum = findSum(firstNumbers, sizeOne);
    int secondSum = findSum(secondNumbers, sizeTwo);
    if(firstSum == secondSum){
        printf("Same");
    }else {
        printf("Not Same");
    }
    return 0;
}
