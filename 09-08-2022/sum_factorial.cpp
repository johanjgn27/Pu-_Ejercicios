#include<iostream>

int factorial(int num);

int main(){
    int x, y;
    std::cin>> x >> y;
    std::cout<< factorial(x)+factorial(y);


    return 0;
}

int factorial(int num){
    int i=1;
    int j=1;
    while (--num){
        j++;
        i *=j;
    }
    return i;

}