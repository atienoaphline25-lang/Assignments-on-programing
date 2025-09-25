
/*
Name:Aphline Atieno
Reg:CT101/G/26529/25
Describtion:programme to promt user to fill required input

*/
#include <stdio.h> // Preprocessor Directive

int main() { // main function
    int age; // Declaration
    float height;
    int id_card_number;
    int bank_balance;
    
    printf("1:Enter your age: "); // to display message
    scanf("%d", &age); // to scan input from user
    
    printf("2:Enter your height in meters:");//to display message
    scanf("%f", &height);//to scan input from user
    
    printf("3:Enter your id_card_number: ");//to display message
    scanf("%d", &id_card_number); //to scan input from user
    
    printf("4:Enter bank_balance  is:", "bank_balance\n");
    scanf("%d",&bank_balance);//to scan input from user
    return 0;
}
 
    