// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
int i,a,b,c;

printf("Escreva o valor de i: ");
    scanf("%f",&i);
    
printf("Escreva o valor de a: ");
    scanf("%f",&a);
    
    printf("Escreva o valor de b: ");
    scanf("%f",&b);
    
    printf("Escreva o valor de c: ");
    scanf("%f",&c);


if (i==1){
if(a>b&& b>c && a>c){
printf("%d %d %d\n", a, b, c);
}
else if (b>a && b>c && a>c){
printf("%d %d %d\n",b,a,c);
}
else if  (c>a && c>b && b>a){
printf("%d %d %d\n",c,b,a);
}
else if (a>b && a>c && c>b){
    printf("%d %d %d\n",a,c,b);
}
else if (b>c && b>a && c>a){
printf("%d %d %d\n", b,c,a);
}
else if (c>b && c>a && a>b){
printf ("%d %d %d\n", c,a,b);
}
}

if (i==2){
if(a<b && b<c && a<c){
printf("%d %d %d\n",a,b,c);
}
else if (b<a && b<c && a<c){
printf("%d %d %d\n",b,a,c);
}
else if  (c<a && c<b && b<a){
printf("%d %d %d\n",c,b,a);
}
else if (a<b && a<c && c<b){
    printf("%d %d %d\n",a,c,b);
}
else if (b<c && b<a && c<a){
printf("%d %d %d\n", b,c,a);
}
else if (c<b && c<a && a<b){
printf ("%d %d %d\n", c,a,b);
}    
}

if (i==3){
    if(a<b && b<c && a<c){
printf("%d %d %d\n",c,b,a);
}
else if (b<a && b<c && a<c){
printf("%d %d %d\n",c,a,b);
}
else if  (c<a && c<b && b<a){
printf("%d %d %d\n",a,b,c);
}
else if (a<b && a<c && c<b){
    printf("%d %d %d\n",b,c,a);
}
else if (b<c && b<a && c<a){
printf("%d %d %d\n",a,c,b);
}
else if (c<b && c<a && a<b){
printf ("%d %d %d\n", b,a,c);

}  
}
    return 0;
}
