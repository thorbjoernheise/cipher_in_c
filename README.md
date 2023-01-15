# Cipher in C

This is an implementation of the Caesar Cipher encryption algorithm written in C. The program takes a single command-line argument, a non-negative integer key, and prompts the user for plaintext. The program then encrypts the plaintext by "rotating" each letter by the key, preserving the case of the letter.

## Usage

To use the program, compile it with a C compiler and run it with the desired key as a command-line argument. For example:


```
./caesar 3
```


This will encrypt the plaintext entered by the user with a key of 3. Negative numbers are also supported, and it will decrypt the text:

```
./caesar -3
```

## Warning

As this program is written in C, it is important to be aware of potential security risks such as buffer overflows and other memory-related vulnerabilities. This implementation has been tested and is considered safe for use, but it's always a good practice to be cautious when working with low-level languages like C.

This problem is an enhancement of a problem set from [Harvards CS50](https://cs50.harvard.edu/x/2020/psets/2/caesar/).

