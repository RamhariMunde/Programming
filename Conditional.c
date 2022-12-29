#include<stdio.h>
// int main()
// {
//     int age ;
//     printf("enter age : ");
//     scanf("%d",&age);

//     if (age > 18){
//         printf("You are adult ");
//     }
//     else{
//         printf(
//             "You are not adult" ); // else aasel kivha nasel garaj nahi
                                 
//     }
//     return 0;
// }

// int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d",&age);

//     if (age >18){
//         printf("your are adult: ");
//     }
//     else if(age > 13 && age <18){
//         printf("teenager\n ");
//     }
//     else {
//         printf(" Your are child : ");
//     }
//     return 0;
// }

// int main()
// {
//     int number=0;
//     printf("Enter a number \n");
//     scanf("%d",&number);

//     if (number >= 0) {
//         printf("positive \n ");
//         if (number % 2 == 0){
//             printf("it is a even number \n ");

//         }
//         else{
//             printf("add \n");
//         }
//     }
//     else{
//         printf("negative \n");
//     }
//     return 0;
// }

// Ternary Operators ******************** 

// int main()
// {
//     int age = 0;
//     printf("Enter your age ");
//     scanf("%d",&age);

//     age >= 18 ? printf("You are adult") : printf("you are not adult");
//     return 0;
// }


// Switch Operators ****************

// int main(){
//     int day; // 1-mon; 2-tues; 3-wed
//     printf("enter day (1-7) ");
//     scanf("%d",&day);

//     switch (day) {
//         case 1 : printf("monday \n");
//         break;
//         case 2 : printf("tuesday \n");
//         break;
//         case 3 : printf("wednesday \n");
//         break;
//         case 4 : printf("thursday \n");
//         break ;
//         case 5 : printf("friday \n" );
//         break ;
//         case 6 : printf(" saturday \n");
//         break;
//         case 7 : printf("sunday \n");
//         break ;

//         default : printf(" not a valid day \n");
//     }
//       return 0;
// }

// int main(){
//     char day; // m-mon; t-tues; w-wed
//     printf("enter day (1-7) ");
//     scanf("%s",&day);

//     switch (day) {
//         case 'm' : printf("monday \n");
//         break;
//         case 't' : printf("tuesday \n");
//         break;
//         case 'w' : printf("wednesday \n");
//         break;
//         case 'T' : printf("thursday \n");
//         break ;
//         case 'f' : printf("friday \n" );
//         break ;
//         case 's' : printf(" saturday \n");
//         break;
//         case 'S' : printf("sunday \n");
//         break ;

//         default : printf(" not a valid day \n");
//     }
//       return 0;
// }

// int main()
// {
//     int marks;
//     printf("enter number (0-100) : ");
//     scanf("%d",&marks);
    
//     if (marks >= 0 && marks <= 30){
//         printf("FALL \n");
        
//     } else if (marks > 30 && marks <= 100){
//         printf("PASS \n");

//     } else {
//         printf("worng marks");
     
//      marks <= 30 ? printf("worng marks"); // 1
//     }

//      marks <= 30 ? printf("FAIL \n") : printf("PASS \n");//2
//      return 0;
// }


// int mai () {
//     int marks;
//     printf("enter number (0-100 :");
//     scanf("%d", &marks);

//     if (marks < 30 ){
//         printf("C \n");
//     }
//     else if (marks >= 30 && marks < 70 ){
//         printf("B \n");

//     }
//     else if (marks >= 70 && marks <90){
//         printf("A \n");
//     }
//     else {
//         printf("A+ \n");
//     }

//     return 0;
// }

int main ()
{
    char ch;
    printf(" enter  charecter : ");
    scanf("%c",&ch);


    if (ch >= 'A' && ch <= 'Z'){
        printf("upper case");
    }
    else if ( ch >= 'a' && ch <= 'z'){
        printf(" lover case \n");
    }
    else {
        printf(" %c not english letter \n");
    }
    return 0;
}
