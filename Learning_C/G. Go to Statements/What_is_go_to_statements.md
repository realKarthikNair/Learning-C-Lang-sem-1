# GOTO STATEMENTS

The goto statement allow us to unconditionally jump to a predefined label within the same function.

```c
    label:
    // CODE
    
    goto label; // Jumps to label
```

However, using goto is avoided these days since it makes the program less readable and complicated.
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
