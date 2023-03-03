# Encapsulation, Inheritance, Polymorphism, and Virtual Functions

## Encapsulation
- Combining function and data and 
- Wrapping data and information under a single unit
- Encapsulation helps to control the modification of our data members
    - using access modifiers
        - Private, Public, and Protected
- member variables to be private
- member functions to be public

```
class Rectangle{
    public:
    int length;
    int width;

    Rectangle(int len, int wid){
        length = len;
        width = wid;
    }
}