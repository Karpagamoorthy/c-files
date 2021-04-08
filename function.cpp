#include<stdio.h>
#include<conio.h>
int add(int ,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
	printf("the addition id:%d\n",add(2,3));
	printf("the subtraction is:%d\n",sub(5,4));
	printf("the multiplication is:%d\n",mul(2,3));
	printf("the division is:%d",div(5,5));
	
}
int add(int a,int b){
	int c=a+b;
	return c;
}
int sub(int d,int e){
	int f=d-e;
	return f;
}
int mul(int s,int t){
	int g=s*t;
	return g;
}
int div(int n,int m){
	int h=n/m;
	return h;
}

