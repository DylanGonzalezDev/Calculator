#include <iostream>
#include <math.h>

using namespace std;

void sum(double a, double b) {
        std::cout << "the result of your sum is: " << a + b << std::endl; 
}
void subtract(double a, double b) {
    std::cout << "the result of your subtract is: " << a - b << std::endl; 
}
void multiply(double a, double b) {
    std::cout << "the result of your multiply is: " << a * b << std::endl; 
}
void divide(double a, double b) {
    std::cout << "the result of your division is: " << a / b << std::endl; 
}
void potency(double a, double b) {
    std::cout << "the result of your potency is: " << pow(a,b) << std::endl; 
}
void squareRoot(double a, double b) {
    std::cout << "the result of your square root is: " << pow(a,(1/b)) << std::endl; 
}

int main(){   
    int Case = 0;
    int res = 1;
    double a;
    double b;
    while(res != 0){
        while(Case < 1 || Case > 6){
            std::cout << "CALCULATOR C++" << std::endl;
            std::cout << "\nadd press 1,\nsubtract press 2,\nmultiply press 3," << std::endl;
            std::cout << "divide press 4,\npotency press 5,\nsquare root press 6" << std::endl;
            std::cin >> Case;
        }
    std::cout << "enter your numbers" << std::endl;
    if (scanf("%lf", &a) && scanf("%lf", &b)){
    }else{
        printf("El dato introducido no es un numero\n");
    }
        
    switch(Case){
        case 1: {
            sum(a,b);
            break;
        }
        case 2: {
            subtract(a,b);
            break;
        }
        case 3:{ 
            multiply(a,b);
            break;
        }
        case 4: {
            divide(a,b);
            break;
        }
        case 5:{
            potency(a,b);
            break;
        }
        case 6:{
            squareRoot(a,b);
            break;
        }
    }
    
    std::cout << "out press 0, continue press 1" << std::endl;
    cin>> res;
    Case = 0;
    }
    std::cout << "byee" << std::endl;

    return 0;
}