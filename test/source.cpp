#include<iostream>

using namespace std;

class Number{
    public:
    std::string name = "Phillip";
    void funct(){
        std::cout << name;
    }
    Number(){
        std::string name = " Mike";
        std::cout << name;
    }
    
};

int main(){
    Number num1;

}