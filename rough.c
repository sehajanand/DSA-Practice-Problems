# include<stdio.h>

union a{
    int b;
    char c;
    float d;
};

int main(){
    union a z;
    z.b=1;
    z.c='x';
    z.d=1.2;
    printf("%d\n",z.b);
    printf("%c\n",z.c);
    printf("%f\n",z.d);
    return 0;
}