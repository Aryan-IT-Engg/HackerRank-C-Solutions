#include <stdio.h>
int main(){
    int a,b,S,D;
    float p,q,s,d;
    
    scanf("%d%d",&a,&b);
    S=a+b;
    D=a-b;
    printf("%d %d\n",S,D);
    
    scanf("%f%f",&p,&q);
    s=p+q;
    d=p-q;
    printf("%.1f %.1f\n",s,d);
    
    return 0;
}
