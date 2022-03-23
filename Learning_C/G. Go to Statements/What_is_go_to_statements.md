# GOTO STATEMENTS

The goto statement allow us to unconditionally jump to a predefined label within the same function.

```c
    label: // Where the label must start with any character
    // CODE
    
    goto label; // Jumps to label
```
Here, the label is the position where the control is to be transferred.

However, using goto is avoided since it makes the program less readable and complicated.
That being said, goto can be useful sometimes. For example: to break from nested loops. 

### Example
```c
    test:
    // Code
    goto test1;
    
    test1:
    for (i=0; i<10; ++i){
        goto printnumber;
    }
    .... ....
```

## Should you use goto?

The main reason to avoid goto is that it leads unstructured and difficult-to-maintain code and very hard to follow. It is preferred if you want to jump out from nested loops. Using goto can lead to endless loops if not used carefully.
