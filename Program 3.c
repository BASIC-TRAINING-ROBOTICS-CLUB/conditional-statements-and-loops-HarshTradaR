#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(sqrt(a*a+b*b) == c){
printf(" True " );
}
else{
printf(" False " );
}
return 0;
}