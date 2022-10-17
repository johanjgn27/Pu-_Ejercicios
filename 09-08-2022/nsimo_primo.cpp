#include <iostream>
#include <cmath>
#include <vector>
bool esprimo(int n);
int buscar_primo(int m);
int main(){   
    int n;
    std::vector<bool> criba(2000000, true);
    std::cin>> n;
    std::cout << buscar_primo(n);
   
    return 0;
}
bool esprimo(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int buscar_primo(int m)
{   int k=0;
    int i=2;

    while (true)
    {
        if (esprimo(i))
        {   k++;
            if (k==m){
                return i;
            }
            else {i++;}
        }
        else
        {
            i++;
        }
    }
}