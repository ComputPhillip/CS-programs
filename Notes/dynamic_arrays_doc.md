# Dynamic Arrays
##### A solid understanding of how dynamic memory really works in C++ is essential to becoming a professional C++ programmer.
***
## How to Picture Memory
1. shown below is a visual representation of the state of memory after the following code is executed.
```
int i = 7;
```
![Alt text](https://learning.oreilly.com/api/v2/epubs/urn%3Aorm%3Abook%3A9781119695400/files/images/c07f001.png)
- **i** is a so-called automatic variable allocated on the stack. It is automatically deallocated when the program flow leaves the score in which the variable is declared. 
    - When using the new keyword, memory is allocated on the free store. The following code creates a variable ptr on the stack initialized with nullptr and the allocates memory on the free store to which ptr points. 
    - shown below is a visual representation of the state of memory after the following code is executed.
```
int* ptr {new int};
```
![Alt text](https://learning.oreilly.com/api/v2/epubs/urn%3Aorm%3Abook%3A9781119695400/files/images/c07f002.png)
2. **ptr** still lives on the stack even though it points to memory on the free store. A pointer is just a variable and can live on either the stack or the free store, **Dynamic Memory is always allocated on the free store.**
3. Pointers can live on both the stack and the free store. An example of this is listed below.
```
1. int** handle {nullptr};
2. handle = new int*;
3. handle = new int;
```
3. 2. 1. **Line 1:** Declares a pointer to a pointer to an integer [int**] and names it "handle". 
3. 2. 2. **Line 2:** Then dynamically allocates enough memory to hold a pointer to an interger, storing the pointer to the new memory in "handle"
3. 2. 3. **Line 3:** *handle is assigned a pointer to another section of dynamic memory that is big enough to hold the integer
![Alt text](https://learning.oreilly.com/api/v2/epubs/urn%3Aorm%3Abook%3A9781119695400/files/images/c07f003.png)
3. 3. Where would this be used?

4. **Using new and Delete**
4. - **new** keyword is used when allocating a block of memory with the type for which you need space.
4. 2. - **new** returns a pointer to that memory location, although it is up to you to store that pointer in a variable.
4. 2. - Ignoring the return value of new or if the pointer variable goes out of scopre, the memory becomes orphaned because you no longer have a way to access it. **This is called a memory leak**
```void leaky()
{
   new int; // BUG! Orphans/leaks memory!
   cout << "I just leaked an int!" << endl;
}
```