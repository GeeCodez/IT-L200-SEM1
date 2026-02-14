### OPERATIONS THAT CAN BE PERFORMED ON ARRAYS

#### 1. Traversal

##### Algorithm
1. Start
2. Get array(A) and array size(S)
3. set initial index, i=0
4. While i < S
5. Print Array [index]
6. Increment Index 
7. Stop

#### 2. Insertion operation
**Insertion** means adding a new element at a specifig position in the array. To insert, shift all elements in the array a step forward, starting from the last to the position to insert to.

##### Algorithm
1. Start 
2. Get array and size (s)
3. Get element(e) and position(e)
4. Check if position valid , if p < s
5. shift elements from the last index to the posiion 
6. Insert the new element at the given position
7. Increase size by 1


#### 3. Deletion operation
Removing an element from a specific position in the array.


##### Algorithm
1. Start 
2. Input array and size
3. Input position to delete 
4. Check if position is valid (0 to size-1)
5. Shift elements from position+1 to the left 
6. Decrease size by 1
7. Print updated array
8. Stop

#### 4. Searching Operation (Linear search)
Finding the position of an element in an array

##### Algorithm
1. Start
2. Get array and size
3. Input the element to search(key)
4. Set a flag found=False
5. for each index i from 0 to size-1
  * if arr[i]==key -> print index, set found=true, break
6. if found==False, -> print "not found"
7. stop

#### 5. Updating 
Changing the value of an existing element at a specific position

##### Algorithm
1. Start
2. Input array and size
3. Input position to update
4. Check if position is valid (0 to size-1)
5. Input new value
6. Set arr[position] = new value
7. Print updated array
8. Stop


#### 6. Sorting
Arranging elements in a specific order

Start
1. Input array and size
2. For i = 0 to size-1
3. For j = 0 to size-i-2
4. If arr[j] > arr[j+1], swap them
5. Repeat until all elements are sorted
6. Print sorted array
7. Stop

#### 7. Merging
combining two sorted arrays
1. A new array is created with a size
equal to the sum of the size of both arrays.
2. Elements are then retrieved sequentially from the two
arrays and inserted into the new array.