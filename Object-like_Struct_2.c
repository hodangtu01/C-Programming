#include <stdio.h>
// // Function MakeDrink

// // void makeDrink(int drink){
// //     switch (drink)
// //     {
// //     case 0:
// //         printf("Cancel Order!\n");
// //         break;
// //     case 1:
// //         printf("Make a cup of coffee\n");
// //         break;
// //     case 2:
// //         printf("Make a cup of coffee milk\n");
// //         break;
// //     default:
// //         printf("Do you know how to make this drink\n");
// //         break;
// //     } 
// // }

// // int main(){

// //     int drink = 0 ;
// //     printf("Select a drink from the menu\n");
// //     printf("0: Cancel\n");
// //     printf("1: Coffee\n");
// //     printf("2: Coffe Milk\n");
// //     printf("Your choice:");
// //     scanf("%d", &drink);
// //     makeDrink(drink);
// //     return 0; 
// // }

// typedef void(*MakeDrinkfptr)();

// void CancelOrder(){
//     printf("Cancelled Order\n");
// }

// void MakeCoffee(){
//     printf("Make a cup of Coffee\n");
// }

// void MakeCoffeMilk(){
//     printf("Make a cup of Coffee Milk\n");
// }

// MakeDrinkfptr menu[3] = {
//     CancelOrder,
//     MakeCoffee,
//     MakeCoffeMilk
// };

// int main(){

//     int drink = 0;
//     int n = 0;
//     printf("Select a drink from the menu \n");
//     printf("0: Cancel\n");
//     printf("1: Coffee\n");
//     printf("2: Coffee Milk\n");
//     printf("Your choice:\n");
//     scanf("%d", &drink);

//     if(drink < 3){
//         menu[drink]();
//     }
//     else
//         printf("Do you know how to make this drink\n");
//     return 0;
// }

/////////////////////// Khong Su Dung Struct va Khong luu cac ham duoi dang Mang chua dia chi cac ham/////////

// void CancelOrder();
// void Display_make(int input);
// void MakeCoffee();
// void MakeCoffeeMilk();

// typedef void(*Makedrinkfptr)(); // fptr fptr1 = func1 ... 

// Makedrinkfptr fptr0 = Display_make;
// Makedrinkfptr fptr1 = CancelOrder;
// Makedrinkfptr fptr2 = MakeCoffee;
// Makedrinkfptr fptr3 = MakeCoffeeMilk;

// void CancelOrder(){
//     printf("Cancelled Order\n");
// }

// void MakeCoffee(){
//     printf("Make a cup of Coffee\n");
// }

// void MakeCoffeeMilk(){
//     printf("Make a cup of Coffee Milk\n");
// }
// void Display_make(int input){
//     switch (input)
//     {
//     case 0:
//         // printf("Cancel Order!\n");
//         fptr1();
//         break;
//     case 1:
//         // printf("Make a cup of coffee\n");
//         fptr2();
//         break;
//     case 2:
//         // printf("Make a cup of coffee milk\n");
//         fptr3();
//         break;
//     default:
//         printf("Do you know how to make this drink\n");
//         break;
//     } 
// }

// int main(){
    
    
//     int drink = 0;
//     printf("Select a drink from the menu \n");
//     printf("0: Cancel\n");
//     printf("1: Coffee\n");
//     printf("2: Coffee Milk\n");
//     printf("Your choice:\n");
//     scanf("%d", &drink);
//     fptr0(drink);

//     return 0;
// }


/////////////////////////////////////////////////// Su dung Object-like Struct mo phong OOP /////////////////

typedef void(*MakeDrinkfptr)();
typedef struct Makedrink{
    MakeDrinkfptr make;
} Make_drink;

void CancelOrder(){
    printf("Cancelled Order\n");
}

void MakeCoffee(){
    printf("Make a cup of Coffee\n");
}

void MakeCoffeeMilk(){
    printf("Make a cup of Coffee Milk\n");
}

void Display_select(){
    printf("Select a drink from the menu \n");
    printf("0: Cancel\n");
    printf("1: Coffee\n");
    printf("2: Coffee Milk\n");
    printf("Your choice:\n");
}
MakeDrinkfptr fptr0 = Display_select;

MakeDrinkfptr make[3] = {
    CancelOrder,
    MakeCoffee,
    MakeCoffeeMilk
};

int main(){
    Make_drink make0 = {CancelOrder};
    Make_drink make1 = {MakeCoffee};
    Make_drink make2 = {MakeCoffeeMilk};

    int drink = 0;
    fptr0();
    scanf("%d", &drink);

    //// Su dung mang luu dia chi ham

    // if(drink < 3){
    //     make[drink]();
    // }
    // else
    //     printf("Do you know how to make this drink\n");

    ///// Su dung Object-like Struct mo phong OOP
    switch (drink)
    {
    case 0:
        make0.make();
        break;
    case 1:
        make1.make();
        break;
    case 2:
        make2.make();
        break;
    default:
        printf("Do you know how to make this drink\n");
        break;
    } 

    return 0;
}