#include<stdio.h>
#include<math.h>
int main()
{
    int n, FirstDigit, DigitsCount, LastDigit, a, b, SwapNum;
 
  	printf("Enter the Number\n");
  	scanf("%d", &n);
  	
  	DigitsCount = log10(n); 	
  	FirstDigit = n/pow(10, DigitsCount);
  	
  	LastDigit= n % 10;
  	
  	a = FirstDigit * (pow(10, DigitsCount));
  	b = n % a;
  	n = b / 10;
  	
  	SwapNum = LastDigit * (pow(10, DigitsCount)) + (n * 10 + FirstDigit);
	    
	printf("The Number after Swapping First Digit and Last Digit =  %d", SwapNum);
 
  	return 0;
}