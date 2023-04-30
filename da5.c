#include<stdio.h>
#include<math.h>
int main(){
    int a,i,c=0,d=0,m,k,q=0,g;
    float f;
    printf("Enter a number:");
    scanf("%d",&a);
    m=a;
    if(a==1){
        printf("%d is a neither a prime nor a composite number\n",a);
    }
    else{
        for(i=2;i<(a/2)+1;i++){
            if(a%i==0){
                c++;
                printf("%d is not a prime number\n",a);
                break;
            }
        }
        if(c==0){
            printf("%d is a prime number\n",a);
        }
    }
    while(m!=0){
        m=m/10;
        d++;
    }
    m=a;
    while(m!=0){
        k=m%10;
        m=m/10;
        f+=pow((float)k,(float)d);
    }
    if((int)f==a){
        printf("%d is armstrong number\n",a);
    }
    else{
        printf("%d is not a armstrog number\n",a);
    }
    for(i=1;i<(a/2)+1;i++){
        if(a%i==0){
            q+=i;
        }
    }
    if(q==a){
        printf("%d is a perfect number");
    }
    else{
        printf("%d is not a perfect number");
        return 0;
    }
}

