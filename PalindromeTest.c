#include<stdio.h>

int checkPalindrome(int n){
    int arr[10], flag=1, j=0, i=0;
    
    while(n>0){
        arr[i] = n%10;
        i++;
        n = n/10;
    }

    while(j<i){
        i--;
        if(arr[j++]==arr[i]){
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}


int main(){
    if(checkPalindrome(15651)){
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
    return 0;
}
