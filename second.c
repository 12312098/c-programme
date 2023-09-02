#include<stdio.h>
#include<conio.h>
void main(){
	char name[30],grade='B';
	int sub1=76,sub2=45,sub3=67,sub4=78,sub5=89;
	int total=sub1+sub2+sub3+sub4+sub5;
	float percentage=total*100/500;
	scanf("%s,%c",&name);
	printf("my name is %s my grade is %c my percectage is %f",name,grade,percentage);
	
}
