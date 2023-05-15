# Pointers and Modular Programming

## POINTERS

- A memory cell that stores the address of a data item.

## INDIRECT REFERENCE

- Accessing the contents of a memory cell through a pointer variable that store its
address.

## PARAMETER VS ARGUMENT

- **Parameter** &rarr; is the variable listed inside the parentheses in the function definition.
- **Argument** &rarr; is the value that is sent to the function when it is called.

### Example

``` testing
function test(a, b, c)  // a, b, and c are parameters
{
 // code

}

// Calling the function
test(1, 2, 3); // the 1, 2, 3, are the arguments.
```

## QUESTION AND ANSWER

- Why do we need the address of variables instead of its value?

- One common reason to take the address of a variable would be to allow a variable defined in one function to be changed in another. In C, all parameters to functions are passed by value. So if you want a function to change the value of a variable defined in some other function, you need to pass its address

## MEANING OF * SYMBOL

The *’s in the declarations of the function’s formal parameters are part of the names of the parameters’ data types. These*’s should be read as “pointer to.” Thus the declaration

``` snippet code.
char *signp; 
```

tells the compiler that the type of parameter signp is “pointer to char .”

## SORTING

- Rearranging  data in a particular  sequence (increasingor decreasing)

## SCOPE OF NAMES

- Scope of a name the region in a program where a particular meaning of a name is visible.
