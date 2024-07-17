This is an alx 0x1E-search-algorithms repo

Search algorithms are algorithms designed to retrieve information from a set of data or data structure. 

Linear search -> This algorithms sequencially checks all the elements of a data structure until it finds the target or checks the entire database/list/data structure

-> Has a linear time complexity of 0(n) in the worst case
    -> Best case 0(1)


Binary searching -> An algorithm used to find a target value in a sorted array. The search takes place in the following steps
        -> It compares the target value to the middle element of array.
        -> if they are not equal, the half in which the element cannot lie is eliminated.
        -> The remaining half is searched againg following the same steps until the target is found. (Recursion)

    -> Worst case - 0(log n) logarithmic time
    -> Best case - 0(1)