//program to promt user to enter the right password
//continuosly promt user to enter password till its right
/*
Name:Aphline Otieno
Reg no:CT101/G/26529/25
Date:6 October 2025
Description:"enter password:" should continuosly reccur till password is right
*/
#include<stdio.h>

int main(){
    int password;

    do{
        printf("Enter password:");
        scanf("%d",&password);
        if(password!=1234){
			printf("Access denied\n");
		}
    }while
        (password !=1234);
		{
            printf("Acess Granted\n");
        }


    return 0;
}