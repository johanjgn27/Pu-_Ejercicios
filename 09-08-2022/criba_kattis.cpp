#include <iostream>
#include <cmath>

bool esprimo(int n);
int buscar_primo(int m);
int main()
{
    int m;
    while (std::cin >> m)
    {
        if (m == 0)
        {
            break;
        }

        else
        {
            if (!esprimo(m))
            {
                 std::cout << buscar_primo(m);
                std::cout << " (" << m << " is not prime)\n";
            }
            else { std::cout << buscar_primo(m)<<'\n';}
        }
    }
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
{
    int k = 2 * m + 1;
    while (true)
    {
        if (esprimo(k))
        {
            return k;
        }
        else
        {
            k++;
        }
    }
}
