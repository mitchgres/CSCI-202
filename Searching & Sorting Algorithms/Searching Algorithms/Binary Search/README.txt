Binary Search
----------------------------------------
The algorithm can only be used on already 
sorted lists, and should only be used on 
array-based structures as it will commonly 
access middle elements of list. It'll go to
the middle of the list and see if the target 
is greater than or less than the middle. If less
than it'll cut the list in half and go to the middle
of the smaller half -- this will repeat until the
target is found. 

As the size of the array increases (n) the 
time which is taken is logarithmic. 

B(n) = 2log2(n) 

The logarithmic growth is multiplied by two
since two key comparisons are made each iteration. 

