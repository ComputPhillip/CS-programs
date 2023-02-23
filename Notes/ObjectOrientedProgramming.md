# Object Oriented Programming

## Classes are user defined data types
### Prodedural Programming vs OOP
    - PP : focuses on the proceess/action that occur in a program
    - OOP: Based on the data and the function that operate on it. Objects are instances of aDTs that represent the data and its functions
        - Objects are instances of a abstract data types that represent the data and its function

### Limits of Procedural Programming
    - If the data structure change

### OOP Terminology
1. **Class**: Like a struct (allows bundling of related variables), but variables and function in the class can have different properties than in a struct.
    - a building block that leads to OOP
    - user defined data type similar to struct
    - holds its own data members and functions
    - class is a blueprint for an object
        **EXAMPLE:**
        ``` 
        class ClassName{
                Access specifier; // public, private or protected
                data members; // int float double string char
                data attributes; // another name for data members
                memberFunction(){} //
                declaration;
        };
        ```
### Declaring Objects
```
int main(){
    ClassName ObjectName; // this is the instance and where memory is allocated
    ObjectName.name // how to access 
}
```
1. Public members are also accessable outside the class
2. Private Access Specifiers: Are only accessable inside the class it was declared.
---
### Protected
 Access specifier is like private accesss specifier in the sense that it cant be accessed outside of it's class unless with the help of friend class.
 1. If it is declared a protected specifier then it can only be accessed by any subclass(derived class). **Done through inheritiance**

```
class Parent{
    protected: int id_protected;

class Child : public Parent{
    public: void setId(int id){
        id_protected = id;
    }
    void displayId(){
        cout << "id_protected is: << id_protected << endl;
    }
};

int main(){
    Child ID1;

    ID1.setId(81);
    ID1.displayId();
    return 0;
}
```
**ANOTHER EXAMPLE:**
```
class Rectangle(){
    private:
        double width;
        dobule length;
    public:
        void setWidth();
        double getWidth() const; // this is called an **accessor**
        double getLenght() const; // not meant to change the data it
        double getArea() const; 
}
```
## Defining a member function

When we defining a memner function: Put a complete definition of function member in class OR
```
void Rectangle::setWidth(double w)
{
     width = w;
}
```
### Accessor vs Mutator
1. Mutators: set or change the value in a private member variable
2. Accessor: does not change the value instead retrieves a value from a private member function **Identified with a const**

## Constructor
1. Purpose is to construct an object/Initialize a member function
    - it does not have a return
    - before any member function you put a constructor
        - different
            - same name as class itself
            - doesnet have a return type
            - automatically called when object is created
            - c++ will generate a defualt constructor is not created
2. Constructor are functions not member variables
3. Default Constructor vs Paramaterized Constructor
   **Default:**
        - Default constructor doesnt have any parameters
    **Paramaterized:** 
        - Example
        ```
        Rectangle::Rectangle(double w, double len){
            width = w;
            length = len;
        }
        ```

Example:
```
class defConstruct{
    public: int I, w;
    defconstruct(){
        I = 150;
        L = 350;
    }
};

int main(){
    construct set;
    cout << "length: " << set.I<< endl<< "width: " << set.w << endl;
}
```
**PASSING ARGUMENTS TO CONSTRUCTORS**


