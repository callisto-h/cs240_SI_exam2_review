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
     */