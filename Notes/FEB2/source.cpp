#include <iostream>

using namespace std;

struct Point{
    int x, y;
};

int main(){
    Point center = {12, 7};
    cout << "x: "<< center.x << " y:" << center.y;
}