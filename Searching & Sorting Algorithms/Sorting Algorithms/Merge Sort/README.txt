Merge Sort
----------------------------------------
The algorithm will divide the list into the
smallest possible number of sub-lists -- meaning
they have only one element in them -- them merge
them back together into one sorted list, sorting
each smaller list along the way. The growth function
is logarithmic, though the difference between this 
method and Quick Sort is the worst-case is also logarithmic. 
as opposed to the parabolic worst-case of Quick Sort. 

M(n) = nlog2(n) - 1.25n