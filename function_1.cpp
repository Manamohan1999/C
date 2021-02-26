#include<stdio.h>
char lower_to_upper(char c1){
	char c2;
	c2=(c1>='a' && c1<='z') ? ('A' + c1 - 'a') : c1;
	return(c2);
}
int main(){
	char l,u;
	printf("\nEnter a lower case character:");
	l=getchar();
	u=lower_to_upper(l);
	printf("Character in upper case is:%c",u);
}
