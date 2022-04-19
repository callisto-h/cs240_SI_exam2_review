/**
 * HELLO: there! I hope you had a nice long weekend.
 * I've unfortunately been out with COVID for the past
 * 2 weeks so I haven't been attending class. I did my
 * best with this review to cover what I think would
 * be on the exam, but it is in no way comprehensive. 
 * 
 * Let me know if you find any mistakes (it's been a 
 * WHILE since I did Huffman coding) and PLEASE do 
 * discuss material that isn't in this review!
 * 
 * Best,
 * CALLISTO:



/**
    * TOPIC: BST stuff
    * 

                    ┌───┐
                    │ 7 │
            ┌───────┴───┴──────┐
            │                  │
          ┌─▼─┐              ┌─▼─┐
          │ 4 │              │ 9 │
          └───┴──┐           └───┘
                 │
               ┌─▼─┐
               │ 5 │
               └───┘
    **/
/**
     * QUESTIONS:
     * 1. Given the above tree, what is
     *    the order of:
     *      a. Inorder traversal
     *      b. Preorder traversal
     *      c. Postorder traversal
     * NOTE: Remember the LNR/NLR/LRN trick!
     * 
     * 2. Which order traversal gives you:
     *      a. the nodes in ascending order
     *      b. the nodes bottom to top, left
     *         to right
     *      c. a depth-first traversal
     * 
     * 3. What is the height of the above tree?
     * 
     * 4. What are the 3 cases of node removal? How are each
     *    handled?
     * 
     * 5. If you were to remove the root node, which node *should*
     *    replace it. Why?
     * 
     * 6. Define the following:
     *      a. Perfect binary tree
     *      b. Complete binary tree
     *      c. Full binary tree
     *      d. Balanced binary tree
     * 
     * 7. When building a tree, what most affects it's shape?
     * 
     * 7.5. Which of the following would create the best shaped tree:
     *      a. Inserting values 0-9 in order
     *      b. Inserting values 0-9 in reverse order
     *      c. Inserting values 0-9 that have been randomly shuffled
     * 
     * 8. What is the maximum "height" of a tree with N nodes?
     * 
     * 9. What is the minumum "height" of a tree with N nodes?
     * ANSWERS:
     * 1. Order:
     *      a. 4 5 7 9
     *      b. 7 4 5 9
     *      c. 5 4 9 7
     * 
     * 2. Traversals:
     *      a. Inorder. Get it? "in-order"?
     *      b. Postorder. No fun way to remember it.
     *      c. Preorder. Same results as DFS
     *         on a tree.
     * 
     * 3. The height of the tree is 2. Remember, "Height"
     *    or "Depth" is the length of the longest path.
     *
     *  4. The three cases are:
     *      a. A node has no children. The node is removed.
     *      b. A node has one child. The node's parent is made to
     *         point to the node's child, and the node is removed.
     *      c. A node has two children. Either the leftmost node in
     *         the right subtree or the rightmost node in the left
     *         replace the node. 
     * 
     * 5. Either 5 or 9 could replace 7, but 5 should be selected
     *    to reduce the height of the tree (and increasing performance).
     * 
     * 6. Definitions:
     *      a. All levels are filled
     *      b. Levels 1 .. h-1 have all possible items,
     *         last level filled from left to right
     *      c. Nodes either have 2 children or 0 children
     *      d. Left and right subtrees of all items have 
     *         heights that differ by at most 1.
     * 
     * 7. Sort of a trick question. Obviously the values affect 
     *    the shape, but I would argue that the "most correct"
     *    answer would be "the order of insertion of values". 
     *    Inserting 0-9 in order yields a much different tree
     *    than [5, 2, 3, 4, 0, 7, 6, 8, 9] for example.
     * 
     * 7.5. Best shaped tree:
     *      a. Nope, worst case scenario. Straight line.
     *      b. Same as a.
     *      c. This one! It probably won't be super balanced,
     *         but it is POSSIBLE to be better than worst case.
     * 
     * 8. Maximum "height" would just be a straight line of nodes.
     *    Since we know that "height" refers to the longest path
     *    of a tree, the "height" would be N-1.
     *    N=3 example, with "height" of 2:
                      ┌───┐
                      │ 7 │
                      └───┴─────┐
                                │
                              ┌─▼─┐
                              │ 9 │
                              └───┴─┐ 
                                    │
                                  ┌─▼─┐
                                  │ 5 │
                                  └───┘ 
     * 9. Minumum "height" is floor(log2(N)).Try drawing a couple of small
          trees to visualize. We tend to refer to the height of trees
          in shorthand as "logN".
     */


    /**
    * TOPIC: HEAP stuff
    * 
                            ┌───┐
                            │ 3 │
                    ┌───────┴───┴───────┐
                    │                   │
                  ┌─▼─┐               ┌─▼─┐
                  │ 4 │               │ 8 │
              ┌───┴───┴───┐       ┌───┴───┘
              │           │       │  
            ┌─▼─┐       ┌─▼─┐   ┌─▼─┐
            │ 7 │       │ 5 │   │ 9 │
            └───┘       └───┘   └───┘ 
    */

/**
     * QUESTIONS:
     * 1. What are the big-O runtimes of:
     *      a. Inserting a value into a heap. Why? Can you describe
     *         the operation?
     *      b. Removing a value from a heap. Why? Can you describe
     *         the operation?
     *      c. Heap-Sorting N unordered nodes. Why? Can you 
     *         describe the operation?
     * 
     * 2. What is the array-representation equivalent of 
     *    the above heap?
     *          ┌─┬─┬─┬─┬─┬─┬─┐
                │ │ │ │ │ │ │ │ 
                └─┴─┴─┴─┴─┴─┴─┘
            i =  0 1 2 3 4 5 6
     * 
     * ANSWERS:
     * 1. Big-O runtimes:
     *      a. logN. Inserting a value into the heap consists of 
     *         placing it in the bottom "row" and comparing it to
     *         parents and swapping until it is in the right spot. 
     *         Since the heap's height is bounded by logN, the 
     *         maximum number of comparisons that can be made is logN.
     * 
     *      b. LogN. Removing a value from the heap consists of
     *         getting rid of the root and replacing it with 
     *         the last element in the heap. That value is then 
     *         compared with it's children and swapped until it
     *         is in the right spot. Since the heap's height is 
     *         bounded by logN, the maximum number of comparisons
     *         that can be made is logN.
     * 
     *      c. NlogN. You're removing (logN) a node, for every (N)
     *         node in the heap. NlogN!
     * 
     * 2. Array representation:
     *  
     *         ┌─┬─┬─┬─┬─┬─┬─┐
               │3│4│8│7│5│9│ │ 
               └─┴─┴─┴─┴─┴─┴─┘
           i =  0 1 2 3 4 5 6
        NOTE: Left child at 2i+1, Right at 2i+2, Parent at (i-1)/2
     * 
     */

/**
 * TOPIC: Huffman Codes
 * 
 * NOTE: I haven't been in class (covid) so I'm
 *       not 100% on how far in depth Prof Lewis
 *       went so... if this LOOKS familiar, do it.
 *       Otherwise, disregard!
 * 
 *      character   Frequency
            a           5
            b           9
            c           12
            d           13

 */

/**
     * QUESTIONS:
     * 1. Build a huffman coding tree for
     *    the above table. Steps are included in the
     *    answers, but give it a shot first. I put the
     *    characters where the 'x' is and quantaties where
     *    the '#' is.
     *    Tree diagram:
     * HINT: Smallest 2 quantaties get grouped.
     * 
                          ┌─────┐
                          │  #  │
                ┌─────────┴─────┴────────┐
                │                        │
             ┌──▼──┐                  ┌──▼──┐
             │  #  │                  │ #   │
          ┌──┴─────┴─┐             ┌──┴─────┴───┐
          │          │             │            │
        ┌─▼──┐     ┌─▼──┐        ┌─▼──┐       ┌─▼──┐
        │x│# │     │x│# │        │x│# │       │x│# │
        └─┴──┘     └─┴──┘        └─┴──┘       └─┴──┘

     * 
     * 2. What are the code-words for each character?
     * NOTE: We might have different answers depending on
     *       if a+b went in the left or right.
     * 
     * 
     * 
     * ANSWERS:
     * 1. Tree:
     * 
                          ┌─────┐
                          │  39 │
                ┌─────────┴─────┴────────┐
                │                        │
             ┌──▼──┐                  ┌──▼──┐
             │ 14  │                  │ 25  │
          ┌──┴─────┴─┐             ┌──┴─────┴───┐
          │          │             │            │
        ┌─▼──┐     ┌─▼──┐        ┌─▼──┐       ┌─▼──┐
        │a│ 5│     │b│ 9│        │c│12│       │d│13│
        └─┴──┘     └─┴──┘        └─┴──┘       └─┴──┘
     * 
     * STEPS:
     *      a. Start with the two smallest frequencies, a and b.
     *         They get their own nodes with quantities and 
     *         a parent node equal to their sum. Add a+b to list
     *         and remove a and b:
     * 
     *       character   Frequency
     *         a+b          14
                c           12
                d           13
     * 
     *      b. The next two smallest frequencies, c and d get 
     *         their own nodes and a parent equal to their sum.
     *         Add c+d to list, remove c and d.
     * 
     *      character   Frequency
     *         a+b          14
               c+d          25

     *      c. The next two smallest frequencies (a+b parent) and
     *         (c+d parent) get a parent node equal to their sum. 
     *          Remove a+b and c+d, add a+b+c+d
     * 
     *      character   Frequency
     *       a+b+c+d        39
     * 
     * 2. Codes are generated by associating a 0 with left
     *    paths and a 1 with right paths. Then just follow the paths!
     * 
     *                    ┌─────┐
                          │  39 │
                ┌─────────┴─────┴────────┐
                │ [0]                    │ [1]
             ┌──▼──┐                  ┌──▼──┐
             │ 14  │                  │ 25  │
          ┌──┴─────┴─┐             ┌──┴─────┴───┐
          │ [0]      │ [1]         │ [0]        │ [1]
        ┌─▼──┐     ┌─▼──┐        ┌─▼──┐       ┌─▼──┐
        │a│ 5│     │b│ 9│        │c│12│       │d│13│
        └─┴──┘     └─┴──┘        └─┴──┘       └─┴──┘
     * 
     *  Characters   code-words
     *      a           00
     *      b           01
     *      c           10
     *      d           11
     * 
     */


/**
     * TOPIC: Count Sort
     * 
     *      Input Data (set 1):
     *      3, 2, 3, 0, 3, 2, 1
     * 
     *      Input Data (set 2):
     *      -140, 30000, 1923, 12, -44
     * 
     *      Input Data (set 3):
     *      A, B, C, ... X, Y, Z
     * 
     */

/**
     * QUESTIONS:
     * 1. Describe the general count sort algorithm 
     * 
     * 2. Can count sort be performed on non-integer values?
     * 
     * 3. Can count sort be performed on:
     *      a. set 1? How?
     *      b. set 2? How?
     *      c. set 3? How?
     * 
     * ANSWERS:
     * 1. Objects are transformed into integer values
     *    and mapped to an array. The quantity in each
     *    array index indicates the quantity of the 
     *    corresponding object. 
     *    Example:
     *         ┌─┬─┬─┬─┬─┬─┬─┐
               │3│1│2│0│0│0│0│ 
               └─┴─┴─┴─┴─┴─┴─┘
           i =  0 1 2 3 4 5 6

           This array indicates 3 0s, 1 1s, and 2 2s.
           
        2. I would argue "no, not directly". One could perform
           count sort on a character by treating the ASCII values
           as the count-sortable objects (A = 65, B = 66,...,Z = 90)
           and then put those in the appropriate indexes. However,
           I can't think of an easy way to do that with floating point
           values. Maybe multiply them all by a power of 10 large
           enough to make them all ints...?
           
           Would love to hear your thoughts!

        3. Sort:
            a. Yes, since set 1 is restricted between two values [0, 3],
               the values can map easily to indexes. Array:
                    ┌─┬─┬─┬─┬─┬─┬─┐
                    │1│1│2│3│0│0│0│ 
                    └─┴─┴─┴─┴─┴─┴─┘
                i =  0 1 2 3 4 5 6
            
            b. Yes, set 2 is restricted as well! An intuitive solution might
               be to normalize all values to 0 (ie, add 140 to all of them) 
               in order to map them nicely to indexes. Then, when reading the
               resulting array, subtract 140 from them all to get the "real"
               values. This way, the array only needs to be of size equal to
               the range of values (30,000 + 140) to fit them all!

            c. Sure! Restricted values! We can easily subtract 65 from all the
               ASCII values of these characters to normalize to 0 and pretty
               much do the same thing as above.
     */