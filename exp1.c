#include<stdio.h>
#include<stdbool.h>

bool conjuction(bool p,bool q){
	return (p&&q);
}

void display(bool p){
	if(p){
		printf("\tT");
	}else{
		printf("\tF");
	}
}

int main(){
	bool p[] = {true, true, false, false};
	bool q[] = {true, false, true, false};
	int i;
	
	printf("---------------------------------------------\n");
	printf("\tP\tQ\tP^Q\n");
	printf("---------------------------------------------\n");
	for(i=0;i<4;i++){
		display(p[i]);
		display(q[i]);
		display(conjuction(p[i],q[i]));
		printf("\n");
	}
	printf("---------------------------------------------\n");
	return 0;
}
