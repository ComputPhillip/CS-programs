# How to Use Pointers Effectively

## You want to know how much memory to set aside for the program
### array pointers
```
#include <iostream>

using namespace std;

void arraypointer(){
    int val[3] = {3, 10, 15};
    int* ptr;

    ptr = val;

    for(int i {0}; i < 3; i++)
    cout << ptr[i] << ' ';
}

int main(){

    arraypointer();
    return 0;

}
```

## Pointer Explination

```
#include <iostream>

using namespace std;

void point(){
    int var {20};
    int* ptr;
    ptr = &var;

    cout << "Value at ptr: " << ptr << " [This value represents an address of the pointer]" << endl;
    cout << "Value at var: " << var << " [This value represents the int variable var]" << endl;
    cout << "Value at *ptr: " << *ptr << " [This value represents the value of the value assigned to var, which is being pointed to by (int*ptr)]"<< endl;
}

int main(){

    point();
    return 0;

}
```

## Pointer Size Example
```
#include <iostream>

using namespace std;

int fun(int ptr[]){
    int x {10};
    cout << "sizeof(ptr)= " << (int)sizeof(*ptr) << endl;

    //this allowed because ptr is a pointer, not array
    ptr = &x;
    cout << "*ptr = " << *ptr;
    return 0;
}

int main(){

    int arr[]={10,20,30,40,50,60};
    //Size of an a array is printed
    cout << "sizeof(arr)= " << (int)sizeof(arr) << endl;
    fun(arr);

    return 0;

}
```

## This program utilizes void funcitons
```
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
```
