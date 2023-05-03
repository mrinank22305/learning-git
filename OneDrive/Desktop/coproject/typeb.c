#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

static bool ans[16];

void toBinary(int num, int brr[]) {
    for (int i = 6; i >= 0; i--) {
        brr[i] = (num >> i) & 1;
    }
}


void  typeb(bool opcode[], bool reg1[], int a){
    for(int i = 0; i < 5; i++){
        ans[i] = opcode[i];
    }

    ans[5]=0;

    int j = 6;
    for(int i = 0; i < 3; i++){
        ans[j+i] = reg1[i];
        }

    int brr[7];   

    toBinary(a,brr); 

    for(int i=9;i<16;i++){
        ans[i]=brr[i-9];
    }   

}

int main(){
    bool opcode[5];
    for(int i=0;i<5;i++){
        printf("enter the %d index of opcode: ",i);
        scanf("%d",&opcode[i]);
    }
    
    bool reg1[3];
    for(int i=0;i<3;i++){
        printf("enter the %d index of reg1: ",i);
        scanf("%d",&reg1[i]);
    }
    int a;
    printf("enter the value of a: ");
    scanf("%d",&a);
    typeb(opcode,reg1,a);

    for(int i=0;i<16;i++){
        printf("%d",ans[i]);
    }
    return 0;

}






