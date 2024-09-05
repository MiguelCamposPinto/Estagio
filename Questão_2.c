#include <stdio.h>
#include <string.h>
int pertence(int num){
    int x =0;
    int y =1;
    int next;
    if (num==x || num==y)
        return 1;
    else
        next = x+y;
        while(next<=num){
            if(next==num)
            {
                return 1;
            }
            x=y;
            y=next;
            next=x+y;
        }
    return 0;
}
int main() {
    int num=611;
    if(pertence(num)==1)
    {
        printf("pertence");
    }
    else
        printf("Não pertence");
    
    return 0;
}
