#include <stdio.h>

// typedef enum Dogtype {Chihuahua, Husky} Dogtype;

// typedef struct Dog{
//     Dogtype type; 
// } Dog;

// void bark(Dog *dog){
//     if(dog -> type == Chihuahua){
//         printf("Ang ang \n");
//     }
//     else if(dog ->type == Husky){
//         printf("Grr...Gau gau\n");
//     }
//     else{
//         printf("Moew Moew\n");
//     }
// }

// int main(){
//     Dog coho1 = {Chihuahua};
//     Dog coho2 = {Husky};
//     bark(&coho1);
//     bark(&coho2);
//     return 0; 
// }

// Su dung function pointer de lam bai tren

typedef void (*Barkfptr)();

typedef struct Dog{
    Barkfptr typebark;
} Dog;

void ChihuahuaBark(){
    printf("Ang ang\n");
}

void HuskyBark(){
    printf("Gr... Gau gau\n");
}

int main(){
    
    Dog coho1 = {ChihuahuaBark};
    Dog coho2 = {HuskyBark};

    coho1.typebark();
    coho2.typebark();


    return 0;
}

