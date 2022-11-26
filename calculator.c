#include<stdio.h>
#include<math.h>

int main()
{
    float number_a ;
    float number_b;
    float number_c;
    char sym;
    float result;
    float PI = 3.14;
    float  val = PI/180;
    
     printf("enter the operation you want to perform\n");
    printf("+,-,*,/,p,l,L,s,e,c.S,t\n");
    scanf("%s", &sym);

    if( sym == 'l' || sym == 'L' || sym == 's' || sym == 'e' || sym == 'c' || sym == 'S' || sym == 't')
    {

        printf("plese enter the value of the variable\n");
        scanf("%f", &number_c);
    }
else {
    printf("plese enter the value of 1st varible\n");
    scanf("%f", &number_a);

    printf("enter the value of 2nd variable\n");
    scanf("%f", &number_b);
}
   
    switch(sym){
        case '+': 
        result = number_a + number_b;
        printf("the result is %f", result);
        break;
        case '-':
        result =number_a - number_b;
        printf("the result is %f", result);
        break;
        case '*':
        result = number_a * number_b;
        printf("the result is %f", result);
        break;
        case '/':
        result = number_a/number_b;
        printf("the result is %f", result);
        break;
        case 'p':
        result = pow(number_a,number_b);
        printf("the result is %f", result);      // this calculates power
        break;
        case 'l':
        result =  log(number_c);
        printf("the log of the variable is %f", result);   //this is log base e.
        break;
        case 'L':
        result = log10(number_c);
        printf("the log 10 base of your varibale is %f", result); // this is for log base 10.
        break;
        case 's':
        result = sqrt (number_c);
        printf("the square root of the bumber is %f", result); // this is for sqrt root
        break;
        case 'e':
        result = exp(number_c);
        printf("the e raised to the variable entered is %f", result); // this is fir e^x x ix the variable user enters
        break;
        case 'c':
        val = PI / 180;                           //this method is used to calculate cos
        result = cos(number_c *val);
        printf("the result is %f", result);
        break;
        case'S':
        result = sin(number_c*val);           // this calculates sin 
        printf("the result is %f", result);
        break;
        case 't':
        result = tan(number_c*val);                //this calculate tan
        printf("the result is %f",result);
        break;
        default:
        printf("the variable or process you entered is wrong ");

        return 0;


         
    }


}