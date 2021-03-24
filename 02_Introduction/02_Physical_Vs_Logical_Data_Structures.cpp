// Physical vs Logical Data Structures

/*
 * Physical
 * 
 * These two data structures are physical because they define how the memory should
 * be organized for storing the elements or the data. So, in essence these two
 * structures are more related to memory.
 * 
 * If you already know the size of the list and if it is fixed, go with an array.
 * If you don't know the size, you should go with a linked list.
 * 
 * 1. Array
 * 
 * int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
 * 
 * 2. Linked List
 * 
 * class Node
 * {
 *  public:
 *    int data;
 *    Node* next;
 * };
 */

/*
 * Logical
 * 
 * Logical data structures are actually used in algorithms. And for implementing
 * these data structures we have to choose between using an array or a linked list,
 * or even a combination of an array and a linked list.
 * 
 * Linear
 * 
 * LIFO (Last In First Out)
 * 1. Stack
 * FIFO (First In First Out)
 * 2. Queue
 * 
 * Non-Linear
 * 
 * A tree is a graph arranged in a heirarchy
 * 3. Tree
 * A graph is a collection of nodes and the links between the nodes
 * 4. Graph
 * 
 * Tabular
 * 
 * 5. Hash Table
 */