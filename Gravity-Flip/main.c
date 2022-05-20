/*
https://codeforces.com/contest/405/problem/A
*/

#include <stdio.h>

int main(){
    int arr[100]=0;
    int n = 0;

    scanf("%d",&n);
    int i,j;
    for (i = 0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for (i = 0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]^=arr[j];
                arr[j]^=arr[i];
                arr[i]^=arr[j];
            }
        }
    }
      for (i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

}