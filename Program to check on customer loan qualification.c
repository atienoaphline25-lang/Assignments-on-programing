/*
Name:Aphline Atieno
Reg:CT101/G/26529/25
Description:program to Implement requirements for a loan 
Date:23 September 2025
*/

#include<stdio.h>

int main()//main function
  {
  //Declaration of variables 
  int age;
  float income;
   printf("Welcome to Aphline's bank ");//Welcome message
   printf("Service to all");
   
   printf("Enter  your age\n ");//Display to user
   scantf("years%d",age);//scan input from user
   
   printf("Enter your monthly income\n");//Display to 
   scantf("ksh%f",income);//scan input from user
   
   //Conditionton to  qualify for the loan
   if(age>=21,income>=21000);
   {
   printf("Congratulations u qualify for the loan\n");//Display to user if qualifying
   }else{
   printf("Sorry,cannot process u loan application for now,please try again later\n");//Displayto user if not qualified 
   }

   return 0;
} 