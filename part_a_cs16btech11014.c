#include <stdio.h>

int i=0, n, a; //Declare integers

int reverse(int n); //Declare functions

int main (){
	
    printf ("Enter a number to be reversed :");
    scanf ("%d", &n); //Take the input from the user
    
    a=reverse(n); //Call the function
    
    printf("%0*d\n",i, a); /*This ensures that inputs like 100 are printed as 001 and not 1*/

return 0;
}

int reverse(int n){

    int remainder;
	int reversed_int=0;
	
	do 
        { 
	     remainder = n%10;                      /*This reverses the number digit by digit*/ 
             reversed_int=reversed_int*10+remainder;  
             n=n/10;
             i++;
         } while (n!=0);
 
return reversed_int;

}/*Input 10-- Output 01
  Input 543-- Output 345
  Input 001-- Output 1 */ 
