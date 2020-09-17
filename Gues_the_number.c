#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int counter=5,number=0,n;
	srand(time(0));
	number=rand()%100 + 1;
//	printf("random no=%d\n",number);
	printf("You have only 5 chance to guess then number\n");
	while(counter>0){
		printf("Guess the number between 1 to 100\n");
		scanf("%d",&n);
		
		if(n==number){
			printf("Congratulation you guess the correct number in %d attempt\n",counter);
			break;
		}
		else if(n>number){
			printf("You entered a larger number\n");
			counter--;
			printf("You have only %d chances left",counter);
		}
		else if(n<number){
			printf("You entered a smaller number\n");
			counter--;
			printf("You have only %d chances left\n",counter);
		}
		printf("---------------------------------------------\n");
			
		
	}
	
}
