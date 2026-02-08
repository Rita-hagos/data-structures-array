# data-structures-array

1. Explain how to create an array of 100 elements
    Creating an array of 100 elements using c++, I will use an integer array, the index starts at 0 and ends with 99. so create an array name "arr" that can store 100 integer values.

2. What the size of each element of an array?
    Since each element is an integer in the array. Genrally an integer taks up 4 bytes of memory and we can check using "sizeof" operator in the code.

   3. Number of steps for array operation (N = 100)
      ##Reading: Reading an element from an array takes one step because it allwos direct access by index.
      ##Searching for value not in array : Searching takes 100 steps because every single element must be checked.
      ##Insertion at the beginning: The beginning take 100 steps because the elements must be shifted.
      ##Insertion at the end: Whileas insertion at the end takes 1 step if space is available.
      ##Deletion at the beginning: Like insertion at the beginning, deletion also takes 100 steps the since the elements must be shifted.
      ##Deletion at the end: Deletion at the end take 1 step similar to insertion at the end because there's no shifting needed.

      4. How many steps would it take to find all the “apples”? Give your answer in terms of N. (theoretical) - 1 pts
         The array must be scanned from start to end to make sure every "apple" is found. The search cannot stop after the first match, it requires checking all N elements , so the totality number of steps is N.

      5. Research how to find the memory address of an array. You can use any programming language of your choice.(requires code) 1 pts
         In C++, the memory address of an array os represented by the name of the array.
         int arr[100];
         cout << arr << endl;
         cout <<&arr[0] << endl;
      
