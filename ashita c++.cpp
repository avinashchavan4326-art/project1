#include<stdio.h>
int passed(int m1,int m2,int m3)
{
	if(m1>=40&&m2>=40&&m3>=40)
	return 1;
	else
	return 0;
}
int main()
{
	int sub1,sub2,sub3;
	printf("Enter marks for subject 1:");
	scanf("%f",&sub1);
	printf("Enter marks for subject 2:");
	scanf("%f",&sub2);
	printf("Enter marks for subject 3:");
	scanf("%f",&sub3);
    avgerage=(sub1+sub2+sub3)/3.0
	printf("Average marks:%2.0f\n",avgerage);
	if(passed(sub1,sub2,sub3))
    printf("Result:PASS\n");
	else
	printf("Result:FAIL\n");
	return 0;
}
