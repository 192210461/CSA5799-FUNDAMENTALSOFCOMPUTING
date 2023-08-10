#include<stdio.h>
  
  int isprime(int num){
  	if(num<=1)
  	return 0;
  	
  	for(int i=2;i*i<=num;i++){
  		if(num%i==0)
  		return 0;
	  }
	  return 1;
  }
  
  int main(){
  	int num;
  	
  	printf("enter a positive integer");
  	scanf("%d",&num);
  	
  	if(isprime(num))
  	printf("%d is a prime number",num);
  	
  	else
  	printf("%d is not a prime number",num);
  	
  	
  	return 0;
  	
  
}
