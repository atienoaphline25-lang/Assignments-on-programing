/*
Name:Aphline Atieno
Reg no:CT101/G/26529/25
Date:28/09/2025
Description:C programme to check if a candidate is eligible for an Exam
*/
#include<stdio.h>//scant(),printf()

int main(){

   int attendance_score;
   int average_marks;
   
   printf("      ELIGIBILITY FOR FINAL EXAMS\n");//opening statement
   //prompt user to enter there attendance score
   printf("Enter your attendance score:");
   scanf("%d",&attendance_score);//scan input from  user
   
   //prompt user to enter there average marks
   printf("Enter your average marks:");
   scanf("%d",&average_marks);
   
   //condition for eligibility
   if(attendance_score>=75&&average_marks>=40)
   {
   printf("Eligible for the exams");
   }
   else {
   printf("Not Eligible");}
    






   return 0;

}