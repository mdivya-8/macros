macros
OBJECT MACROS----->
#include<stdio.h>
#define PI 3.14
void main(){
float area,r=5;
area=PI*r*r;
printf("area of circle if %f",area);
}
FUNCTION MACROS----->
#include<stdio.h>
#define SUM(a,b) a+b
void main(){
int s,a=6,b=7;
s=SUM(a,b);
printf("addition is %d",s);
}
CONDITIONAL MACROS----->
#include<stdio.h>
#define X 1
#define UNIX 1
#define LINUX 2
#define WINDOWS 3
void main(){
#if(X==UNIX)
int a=10;
int b=60;
#elif(X==LINUX)
int a=40;
int b=80;
#else
int a=30;
int b=60;
#endif
int c=a+b;
printf("%d",c);
}

PREDEFINED MACROS----->
#include<stdio.h>
int main(){
	printf("\nfile = %s",__FILE__);
	printf("\ntime=%s",__TIME__);
	printf("\n%d",__LINE__);
	printf("\n%s",__DATE__);
	
}


#include <stdio.h>
#define MAX 8

void main(){
    int a[]={1,2,5,6,8};
    int l=0,s=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<MAX,i++){
        if(a[i]>MAX){
            MAX=a[i];
        }
    }
    printf("the largest element is %d",l);

# WAP to find second largest num in an array #
#include<stdio.h>
void main(){
    int a[]={7,9,11,9,6};
    int l=0,s=0,i=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++){
        if(a[i]>l){
            s=l;
            l=a[i];
        }
        else if(a[i]>s){
            s=a[i];
        }
    }
        printf("second largest is %d",s);
}
    
#include <stdio.h>
int arr_1[5]={1,2,3,4,5};//type-1
int arr_2[]={1,2,3,4,5};//type-2;
int arr_3[5];//type-3
a[0]=1;
a[1]=2;
a[2]=3;
a[3]=4;
a[4]=5;
int arr_[10]={0};//type-4

#include <stdio.h>
int main(){
int arr_1[5]={1,2,3,4,5};//type-1
//printf("%u",&arr_1[]);
//}
//int arr_2[]={1,2,3,4,5};//type-2;
//int arr_3[5];//type-3
//a[0]=1;
//a[1]=2;
//a[2]=3;
//a[3]=4;
//a[4]=5;
//int arr_[10]={0};//type-4
for(int i=0;i<5;i++){
   // scanf("%d",&arr[i]);
    printf("%u",&arr[i]);
}
#include <stdio.h>
int main(){
int arr_1[5]={1,2,3,4,5};//type-1
//printf("%u",&arr_1[]);
//}
//int arr_2[]={1,2,3,4,5};//type-2;
//int arr_3[5];//type-3
//a[0]=1;
//a[1]=2;
//a[2]=3;
//a[3]=4;
//a[4]=5;
//int arr_[10]={0};//type-4
for(int i=0;i<5;i++){
   // scanf("%d",&arr[i]);
    printf("%u",&arr[i]);
}


