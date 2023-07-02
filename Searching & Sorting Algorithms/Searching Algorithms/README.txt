-----------------------------------------------
M03/M04 Searching & Sorting Algorithms
-----------------------------------------------

Each element in a data structure must be able to be
able to be identified from all the other elements. 
To identify these elements keys are used, key comparison
is used to see how effective an algorithm is. It is the 
number of times that the search item is compared to an 
item in the list. 

Sequential Search Algorithm -- Also known as a Linear Search 
    it'll iterate through the list from front, to the back 
    comparing the target - the search item - to the elements 
    in the list. As mentioned, the number of key comparisons 
    will determine the best-case, average-case, and worst-case 
    for the algorithm. 
    - Best-Case: The search element is the first element in the
            list. Therefore, one key comparison is made. 
    - Average-Case: Half of the list will needed to be searched
            before the target can be found. Therefore half of the 
            length of the list will be the number of key 
            comparisons will be made. As a result large lists
            shouldn't be searched with this algorithm.
    - Worst-Case: The element is at the end of the list and the
            whole list will needed to be searched

Binary Search Algorithm -- Is very efficent as long as the list given
    has already been sorted. It works by going to the middle of the list
    and sees if the middle is less than or greater than the middle. If 
    less than then go to the left, and if greater than then go to the
    middle of the list to the right. The benefit is that each key comparison
    will get rid of half of the rest of the list. Because the algorithm must
    constantly get elements from the middle of a list it's best 
    suited for array-based structures with random-access. The algorithm is 
    base-two logarithmic in its growth pattern with increasing size. Since
    two key comparison are made each iteration we can multiply this by two to
    get a formula. 
    - Formula for Preformance w/ Size (n): B(n) = 2log2(n)