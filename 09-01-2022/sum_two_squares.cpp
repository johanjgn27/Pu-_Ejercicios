#include <iostream>
#include <cmath>

int main(){
    int N;
    double k_1;
    double k_2;
    int k=0;
    bool flag = false;
    std::cin >> N;

    while (flag == false && k<=N){
        k_1=sqrt(N-k^2);
        k_2=sqrt(N+k^2);
        if (k_1==int(k_1)) {
            flag==true;
        }

         if (k_2==int(k_2)) {
            flag==true;
        }
        k++;
    }
    flag?  std::cout << "YES" : std::cout << "NO";

    return 0;
}