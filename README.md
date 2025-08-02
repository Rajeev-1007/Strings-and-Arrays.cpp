# Strings-and-Arrays.cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

# Aim: 
To study and implement C++ Arrays and Strings

# Software Used: 
VS Code

# Theory: 

**Arrays**

An array is a fixed-size collection of elements of the same data type stored in contiguous memory locations. It allows indexed access, where the first element is at index `0`.

Syntax:

    int arr[5] = {1, 2, 3, 4, 5};


Key Points:
- Size must be defined at compile time.
- Access via `arr[i]`.
- Useful for loop-based processing like sorting, searching, and pattern printing.
- Arrays in C++ don't have built-in methods—developers manually implement logic for traversal and manipulation.

**Strings**

Strings in C++ can be represented in two ways:  
1. C-style strings: Arrays of characters ending with a `'\0'` null terminator.
   
   char str[] = "hello";
  
2. `string` class(from `<string>` library): Offers rich functionality like length calculation, concatenation, and substring extraction.
   
       string s = "world";


Key Differences:
- C-style strings demand manual handling of size and termination.
- `string` objects simplify operations but may hide underlying logic, which is less suitable for low-level learning.

Arrays and C-style strings foster deep understanding of memory layout and indexing. They are essential for mastering logic-based algorithms in C++.

# Algorithm

1) Algorithm of array elements.

  i) Initialize an integer array
    - Define numbers[] = {1, 2, 3, 4, 5}
      
  ii) Calculate array size
    - Use arraySize = sizeof(numbers) / sizeof(numbers[0])
      (This computes the total number of elements in the array)
      
  iii) Display a header message
   - Print "Elements of the array:" to console
     
  iV) Traverse the array using a loop
   - Run a for loop with index i from 0 to arraySize - 1
   - On each iteration, print numbers[i] followed by a space
     
  V) Move to a new line after loop ends

  Vi) End the program

2) Algorithm of array search.
   
   i) Declare and Initialize Array
    - Define a static integer array: numbers[] = {1, 2, 3, 4, 5}
      
   ii) Calculate Array Size
    - Use formula: arraySize = sizeof(numbers) / sizeof(numbers[0])
    - This dynamically calculates the number of elements in the array
      
   iii) Output Header
    - Print "Elements of the array:" to indicate what's being displayed
      
   iV) Traverse and Display Elements
     - Start a loop: for i = 0 to arraySize - 1
     - On each iteration, output numbers[i] followed by a space
       
    V) Print Final Newline
    - After the loop ends, print a newline for clean output formatting
      
    Vi) Terminate Program
    - End execution using return 0
  

3) Algorithm of string palindrome.
   
   i) Initialize and declare variables
     - Set str = "madam" → input string to be checked
     - Compute n = str.length() → total length of the string
     - Declare flag isPalindrome = true
       
  ii) Iterate through half of the string
      - Use loop: for i = 0 to n/2 - 1
      - Compare characters from both ends:  str[i] vs. str[n - 1 - i]
      - If mismatch occurs:
      - Set isPalindrome = false
      - Exit loop using break
         
  iii) Decision based on the flag
  - If isPalindrome == true
     - Output: "Palindrome"
  - Else
     - Output: "Not a Palindrome"
       
  iV) Terminate program

4) Algorithm os string concatenation.
   
  i) Declare three string variables
   - str1 → will store the first user input
   - str2 → will store the second user input
   - concat → will store the combined result of str1 and str2
    
  ii) Prompt and accept first string
   - Display: "Enter string 1: "
   - Input: store user’s response in str1
    
  iii) Prompt and accept second string
   - Display: "Enter string 2: "
   - Input: store user’s response in str2
    
  iV) Concatenate strings with a space
   - Combine str1 + " " + str2 and assign to concat
    
  v) Display the concatenated result
   - Print value of concat
    
  Vi) Terminate program



# Conclusion

Arrays and strings in C++ form the backbone of structured data handling. Mastering their indexing, memory layout, and manipulation lays the foundation for deeper algorithmic logic and efficient program design.
