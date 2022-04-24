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
           
        2. I would argue "yes, but not directly". Obviously you couldn't map 
           a value like 2.15 to an index, but you could use some function
           that perhaps normalizes values to non-decimal? Since a decimal can
           be represented by bits, I bet we could come up with a way to do it.
           
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

/**
    * TOPIC: Hash Tables!
    * 
    * Hash table example:
    * 
    * Hash function: f(n) = n % 5
    * 
    * Rules: -1 means never used
    *         0 means empty
    * 
    * The left column is the initial table, the column to it's right
    * should be updated after insert/delete, it's right after the next, etc
    * 
        ┌──┬──┬──┬──┬──┐
      0 │-1│-1│-1│-1│-1│
      1 │-1│-1│-1│-1│-1│
      2 │-1│-1│-1│-1│-1│
      3 │-1│-1│-1│-1│-1│
      4 │-1│-1│-1│-1│-1│
        └──┴──┴──┴──┴──┘

    * 
    */

/**
    * QUESTIONS:
    * 1. What are the characteristics of a good hash function?
    * 
    * 1.5 What causes data clusters in hash tables?
    * 
    * 2. Perform the following operations on the above hash table 
    *    using LINEAR PROBING collision resolution:
    *    a. insert 11
    *    b. insert 21
    *    c. delete 11
    *    d. delete 11 (How does the table know that 11 is not present?)
    * 
    * 3. What is double hashing?
    * 
    * 4. What are the two types of Hash Table structures that we have
    *    discussed? What are their primary differences?
    * 
    * 5. Why would it be a good idea to review linked list material?
    * 
    * 6. Which open-addressed table will perform better:
    *    a. A table with many "empty" signifiers
    *    b. A table with many "never used signifiers"
    * 
    * 7. How do you resize a hash table?
    *    Why does resizing a hash table increase it's performance?
    * 
    * 8. What is the big-O runtime complexity of insert/delete on 
    *    a hash table? Does OA vs Chaining make a difference?
    * 
    * 
    * ANSWERS:
    * 1. We may not have gone over ALL of these in class:
    *    a. The hash value is fully determined by the data being hashed
    *    b. The hash function uses all the input data
    *    c. The hash function "uniformly" distributes data [IMPORTANT]
    *    d. The hash function generates very different hash values for
    *       similar strings
    * 
    * 1.5 Two things:
    *    a. Inputs being too similar 
    *    b. Bad hash function
    * 
    * 2. Answer table:
    * 
    *         ┌──┬──┬──┬──┬──┐
            0 │-1│-1│-1│-1│-1│
            1 │-1│11│11│ 0│ 0│
            2 │-1│-1│21│21│21│
            3 │-1│-1│-1│-1│-1│
            4 │-1│-1│-1│-1│-1│
              └──┴──┴──┴──┴──┘
         On the 2nd "delete 11", the table checks position 1 for value 11.
         It doesn't see an 11, but because the value 0 indicates something
         WAS there, it linearly probes forwards until it reaches -1 and
         determines that 11 is not present.
    * 
    * 3. Double hashing is a collision resolution technique where a 2nd, different 
    *    hash function is used to place entries when two items map to the
    *    same location. Lewis' example was using the bottom digits of a number
    *    for the first hash and the top digits for the second.
    * 
    * 4. The two types of tables discussed have been "Open-Addressing" and 
    *    "Chaining" tables. 
    *    Open Addressed tables are a lot like lists, with one entry per "slot". 
    *    OA tables also require a collision resolution strategy. 
    *    Chained tables are like a list OF linked lists where everything
    *    that gets mapped to a "slot" gets put in the list.
    *    
    * 5. In case Professor Lewis asks a question about Chaining performance 
    *    with Double-ended Linked Lists vs Linked Lists with tail pointers, etc
    * 
    * 6. A table with lots of "never been used" signifiers (I used -1 in the example),
    *    will allow lookups to "short circuit" very quickly. Consider the example below:
    * 
         * ┌──┐  ┌──┐
         0 │-1│  │ 0│
         1 │11│  │11│
         2 │-1│  │ 0│
         3 │-1│  │ 0│
         4 │-1│  │ 0│
           └──┘  └──┘  
         If I asked the tables to find "21", the first would see 11, linearly probe once,
         and know that there was no 21 in the table. The second table would linearly probe
         allllllll the way back until it hit the 11 again. That second one sounds a whole lot
         like an O(n) operation...

    * 7. To resize a hash table you must:
         a. pick a new hash function that maps to a larger table
         b. iterate linearly through the table and perform insertions USING the new hash func.
         c. That's it! Do NOT copy the data 1-1 from hash table to hash table though. The
            hash functions might not be compatible!
         Resizing it reduces the number of "empty" signifiers and increases the number of
         "never used" signifiers! See #6.

    * 8. This is tricky. 
    
         There are a ton of edge cases, so feel free to argue with me here.
         Insert/Delete are commonly understood as O(1) because you're just doing math on
         the value to get the key. Inserting 15 into my hash table above doesn't depend
         on the size of the table. BUT, what if there are a ton of collisions? What if the
         entire hash table is full and you linearly probe? Isn't that an O(n) operation then?
         Additionally, a Chained table could just be a straight line (insert 10, 20, 30, 40, ... 100)
         and lookups of those values will potentially traverse all the values. Also O(n)!

         I would expect a question or two concerning this. The general rule of thumb is that as 
         long as the table is under a certain percent full (60-80%) and the data isn't clumped up,
         the table SHOULD perform insert/delete operations in O(1) on tables, but restrictions may
         apply!

    * 
    * 
    */

/**
 * TOPIC: Recursion
 */

int recursive_factorial(int arg)
{
   if (arg == 0)
   {
      return 1;
   }
   return arg * recursive_factorial(arg - 1);
}

int recursive_fibonnaci(int nth_element)
{

   if (nth_element == 0 or nth_element == 1)
   {
      return nth_element;
   }

   return recursive_fibonnaci(nth_element - 1) + recursive_fibonnaci(nth_element - 2);
}

/**
     * QUESTIONS:
     * 1. Identify the base case(s) in the above functions.
     *    Why do we need a base case?
     * 
     * 2. Are these functions direct or indirect recursion?
     * 
     * 3. Are these functions tail-recursive?
     * 
     * 4. Why is tail recursion beneficial?
     * 
     * 5. What could be done to improve these functions?
     * 
     * 6. What is memoization?
     * ANSWERS:
     * 1. Base cases:
     *      a. factorial: 'if arg == 0'
     *      b. fibonnaci: 'if(nth_element == 0 or nth_element == 1)'
     *      We need a base case to effectively "end" the recursive
     *      call stack. It is typically the smallest problem that
     *      the function/procedure could encounter; the trivial case.
     * 
     * 2. They are direct recursion, as they call themselves. If they
     *    called a caller function, it would be indirect recursion.
     * 
     * 3. They are not tail recursive. Tail recursion occurs when the last
     *    line in a function is just a recursive call.
     * 
     * 4. TAILRECURSION: When a function is called, it maintains local
     *    variables/an activation record. If that function calls another function,
     *    those local variables stick around until the other function finishes.
     *    If we passed those variables TO the next function, we wouldn't need
     *    to maintain every local variable in the call stack. Therefore, tail
     *    recursion frees up space by not maintaining every activation record.
     * 
     * 5. Both functions could be made tail recursive. The factorial function
     *    could be made to utilize memoization.
     * 
     * 6. MEMOIZATION: Store a record of results for given inputs so that
     *    the function/procedure doesn't need to calculate them again.
     */