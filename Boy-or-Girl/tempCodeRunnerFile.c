#include<stdio.h>
#include<string.h>


int main(){

    char str[100];
    int count=0;
    int result=0;
    scanf("%s",str);

    int size = 'z'-'a';
    int arr[size];

    while(str[count]!='\0'){
        arr[(str[count]-1)]++;
        count++;
    }
    for(int i=0;i<size;i++){
        if(arr[i]>1){
            result++;
        }
    }
    if(result%2!=0){
        printf("IGNORE HIM!");
    }
    else{
        printf("CHAT WITH HER!");
    }
    return 0;
}