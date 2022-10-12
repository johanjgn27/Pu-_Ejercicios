#include<iostream>
#include<cmath>

bool esprimo(int n);
int buscar_primo(int m);
int main (){

    std::cout << buscar_primo(2);

    return 0;
}
bool esprimo(int n){
    bool flag= false;
    for(int i=1; i<=sqrt(n);i++){
        if (n%i==0){
            flag==true;
        }
    }
    return flag;
}
int buscar_primo(int m){
    bool romper=false;
    int k= 2*m+1;
    while (!romper){
        if (esprimo(k)){
            !romper;
        }
        k++;
    }
    return k;
}
