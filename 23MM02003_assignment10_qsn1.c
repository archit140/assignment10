#include<stdio.h>
typedef union data{
    int Integer;
    float Float;
    char Character;

}DATA;
int main(){
    DATA a1;

    a1.Integer=10;
    printf("Integer value is %d\n",a1.Integer);
    a1.Float=32.72;
    printf("Float value is %f\n",a1.Float);
    a1.Character='a';
    printf("Character value is %c",a1.Character);

    

    


    
}