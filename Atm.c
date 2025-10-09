
/*
Name:Aphline Otieno 
Reg no:CT101/G/26529/25
Description:ATM
Date:07 October 2025
*/

#include<studio.h>
int main(){

int balance;
int amount_withdraw;

printf("enter balance:");
scanf("%d",&balance);


while(balance>0){
    
    printf("your balance is %d\n",balance);
    printf("enter amount to withdraw:");
    scanf("%d",&amount_withdraw);
    
    balance=balance-amount_withdraw;
    
    
}
printf("insufficient funds\n");
return 0;
    
}