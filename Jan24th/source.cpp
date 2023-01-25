#include <iostream>

using namespace std;

void increase(void *data, int ptrsize){
    if (ptrsize == sizeof(char)){
        char *ptrchar;
        ptrchar = (char*) data;
        (*ptrchar)++;
        cout << "*data points to a char" << '\n';
    }else if (ptrsize == sizeof(int)){
        int *ptrint;
        ptrint = (int*)data;
        (*ptrint)++;
        cout << "data points to an int" << '\n';
    }else
        cout << "data type is not of char or int";
}
void voidpointer(){
    char c='c';
    int i = 10;
    increase(&c, sizeof(c));
    cout << "The new value of c is: " <<c << '\n';
    increase(&i, sizeof(i));
    cout << "The new value of i is: " << i << '\n';
}

int main(){
    voidpointer();
}