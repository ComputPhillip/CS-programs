# Using Struct and Array of Structs

### Primative Data Types
    - Data type in c++ is a data type that can store only one value
    example: char, int, 

### Abstraction
    - A definition that captures general characteristics without details
### Data Types
    - Defines the values that can be stores in a variable and the operations that can be performed on it.
### Structured Data type
    - Can store more than one value of that type into a variable
    - Unlike array you can store multiple values of a different type into one structure
    - The struct allows for multiple variable to be grouped together
        EXAMPLE: 
        ```
        struct Student //struct is the reserve word then name the structure [structure tag]
        {
            int studentID;  [structure member]
            string name, address; // can seperate like data with commas
            short yearInSchool;
            double gpa;
            // primative data type are defined in this code block
            // no memory is allocated at this point
            // the primative data types are called attributes
        }; [where the structure ends]
        ```
#### Defining Variables
    struct declaration does not allocate memory or create variables
    to define variables, use structure tag as type name:
    ```
    Student stu1; //The beginning of memory allocation, with a Student type [user defined type]
    ```
#### Accessing Structure Members
    Use the dot(.) operator to refer to members of struct variables:
    in main declare: 
    ```Student stu1, stu2, stu3;
    cin >> stu1.studentID;
    getline(cin, stu1.name);
    stu1.yearsinschool =3;
    stu1.gpa = 3.75//member variable can be used in any manner appropriate for their data type
    ```
#### Error in Accessing
    Structure members must be accessed individually
    cout << stu1 // this will output an error due to the compiler not knowing which member function to call.
#### Initializing a Structure
    Struct variable can be initialized when defined:
    ``` Student stu1 = {1111, "Joan", 2, 3.75}
        ==
        struct Student={studentID, name, yearInSchool,  GPA, }
    ```
#### Nested Structure
    ```
    struct PersonInfo{
        string name, address, city;
    };
    //define another structure named student that inherits PersonInfo from the struct above
    struct Student{
        int studentID;
        PersonInfo pData; //tag of variable strucutre type // inherited data type
        short yearInSchool;
        double gpa;
    };
    Student stuUHD, stuHCC, stuAAM;//defined in main struct define before main
    ```
##### Member of Nested Strucutres
    use the dot operator multiple times to refer to fields of nested structures:
    Student stuUHD, stuHCC, stuAAM;
    stuUHD.pData.name = "Joanne";
### Structure as a function Args
    To use a struct in a function you need to send a parameter
    struct InventoryItem{
        int partNum;
    };
    void showItem(InventoryItem p){
        cout << "Part Number: " << p.partNum;
    }
    send p as a constant in order to not change the value;
        void showItem(const InventoryItem &p)
### Returning a structure from a Function
```
    Student getStudentID(){
        Student tempStu;
        cin >> tempStu.studentID;
        getline(cin, tempStu.pData.name);
        getline(cin, tempStu.pData.address);
        getline(cin, tempStu.pData.city);
        cin >> tempStu.yearInSchool;
        cin >> tempStu.gpa;
        return tempStu;
    }
```
    this return multiple values 
    using object oriented programming solves the issue of large programs
    Procedural programming can define all many different types to make the program easier to read and define less variable
### Pointers to Strucutres
    A structure variable has an address
    Pointers to structures area bariable that can hold the address of a strucutre
    ```
    Student *stuPtr;
    Can use & operator to assign address:
    stuPtr
    ```
### Accessing Strucutre Members via Pointer Variables
    Must use () to derefrence pointer variable not field within structureL
        cout << stu1.studentID;
        cout << (*stuPtr).studentID;
                    ==
        cout << stuPtr->StudentId;
        