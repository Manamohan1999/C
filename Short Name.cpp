#include<stdio.h>
#include<ctype.h>
int main(){
	char name[80],fname[80],lname[80],shortname[80];
	int tag,count,scount;
	printf("Enter your Full Name:\n");
	scanf("%[^\n]",name);
	shortname[0]=toupper(name[0]);
	shortname[1]='.';
	for(count=0;name[count]!='\0';++count){
		if(name[count]!=' '){
			fname[count]=name[count];
		}
		else{
			tag=count+1;
			scount=count;
		}
	}
	printf("\nFirst Name:%s",fname);
	int c=0;
	for(tag;name[tag]!='\0';++tag){
		if(tag==scount+1){
		lname[c]=toupper(name[tag]);
		shortname[c+2]=toupper(name[tag]);
	}else{
		lname[c]=name[tag];
		shortname[c+2]=name[tag];
	}
		
		++c;
	}
	printf("\nLast Name:%s",lname);
	printf("\nShort Name:Mr. %s",shortname);
	
}
