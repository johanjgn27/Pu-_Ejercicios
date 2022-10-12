#include<iostream>
#include<vector>
#include<sstream>
#include <algorithm>

int main(){
    int t;
    int a, b, c, d;
    std::vector<int> at;
    std::vector<int> rep;
    std::cin >> t;
    std::string linea1;
    std::string linea2;
    std::string linea;

    while (t--){
        a= b= c= d =0;
        rep.clear();
        std::getline(std::cin, linea1);
        std::getline(std::cin, linea2);
        linea=linea1+linea2;
        std::string::difference_type a = std::count(linea.begin(), linea.end(), linea[0]);
        std::string::difference_type b = std::count(linea.begin(), linea.end(), linea[1]);
        std::string::difference_type c = std::count(linea.begin(), linea.end(), linea[2]);
        std::string::difference_type d = std::count(linea.begin(), linea.end(), linea[3]);
        rep.push_back(a);
        rep.push_back(b);
        rep.push_back(c);
        rep.push_back(d);
        if ( count(rep.begin(), rep.end(),1)==4)
        {   at.push_back(3);
            /* code */
        }
        else if (count(rep.begin(), rep.end(),2)==2)
        {   at.push_back(2);
            /* code */
        }
        else if (count(rep.begin(), rep.end(),2)==4||count(rep.begin(), rep.end(),3)==3)
        {   at.push_back(1);
            /* code */
        }
        else {at.push_back(0);}
        
        
        
    }
for (int attempts : at){
    std::cout<<attempts<<'\n';
}

    return 0;
}