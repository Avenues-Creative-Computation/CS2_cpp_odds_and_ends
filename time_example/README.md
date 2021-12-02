# time library example
This is an example of how to get the current date (time, day, year) from your system. It uses the ctime library

ctime (time.h) is a C library that is included in the C++ standard library with a few changes from the original C implementation

##References

[C Library](https://www.cplusplus.com/reference/clibrary/) Official documentation for the C library
[ctime](https://www.cplusplus.com/reference/ctime/) Official documentation for C time


##Understanding struct
The time library creates a struct to hold the current time data, so to work with it, you have to understand what a struct is. 

A struct is a user-created data structure that allows you to store different datatypes in a singer structure. These datatypes are variables that are members of the struct. Think of it as an object without methods.

Here's an example of a struct:

```
struct student {
    string first_name;
    string last_name;
    int admit_yr;
    int grad_yr;
} 
```

Just like classes, structs use dot notation to get and set member values.

```
struct student1;

student1.first_name = "Minnie";
student2.last_name = "Mouse";

cout << student.first_name;
```

[Data structures] (https://www.cplusplus.com/doc/tutorial/structures/) - Official reference for struct

##Arrow Notation

However, our example uses a pointer to the time_t struct. When we are trying to access members of a struct using a point, we have to use arrow notation, which looks like this:

```
student_ptr->first_name;
```

The arrow operation dereferences the struct member. This notation can be used to access the values of other data collection types as well.

[shared_ptr::operator ->] (https://www.cplusplus.com/reference/memory/shared_ptr/operator-%3E/)

