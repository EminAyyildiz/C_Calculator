
//Written by Emin Ayyıldız


#include <stdio.h>
int run = 1;
int main() {
    while (run) {
        
        float number1,number2;
        float result;
        char choice;
        
        int faktoriyel1 = 1;
        int faktoriyel2 = 1;
        printf("***** CALCULATOR MENU ***** \n");
        printf("1- To addition = + \n2- To subtraction = - \n3- To division = / \n4- To multiplication = * \n5- To calculate the factorials of the numbers you enter = ! \n");
        printf("Please enter your choice : ");
        scanf("%c",&choice);
        

        if (choice == '+'){
            
            printf("Please enter first number :");
            scanf("%f",&number1);
            printf("Please enter second number :");
            scanf("%f",&number2);
            result = number1+number2;
            printf("Addition Result = %f \n",result);
        }
        else if (choice == '-'){
            
            printf("Please enter first number :");
            scanf("%f",&number1);
            printf("Please enter second number :");
            scanf("%f",&number2);
            result = number1-number2;
            printf("Subtraction Result = %f \n",result);
        }
        
        else if(choice == '*'){
            
            printf("Please enter first number :");
            scanf("%f",&number1);
            printf("Please enter second number :");
            scanf("%f",&number2);
            result = number1*number2;
            printf("Multiplication Result = %f \n",result);
        }
        
        else if (choice == '/'){
            
            printf("Please enter first number :");
            scanf("%f",&number1);
            printf("Please enter second number :");
            scanf("%f",&number2);
            result = number1/number2;
            printf("Division result = %f \n",result);
        }
        else if (choice == '!'){
            
            printf("Please enter first number :");
            scanf("%f",&number1);
            printf("Please enter second number :");
            scanf("%f",&number2);
            for(int i = number1; i >= 1; i--)
            {
                faktoriyel1 *= i;
            }
            for(int i = number2; i >= 1; i--)
            {
                faktoriyel2 *= i;
            }
            
            printf("%f First Number Factorial Result :%d\n",number1, faktoriyel1);
            printf("%f Second Number Factorial Result:%d\n",number2, faktoriyel2);
        }
        else if (choice == 'q'||choice == 'Q')  {
            run = 0;
            printf("Exiting....\n");
        }
        else {
            printf("Invalid chosen... \n");
        }
        
    getchar();
    }
   
}
