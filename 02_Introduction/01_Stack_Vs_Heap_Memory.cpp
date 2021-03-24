/*
 * Stack vs Heap Memory
 * 
 * Data Structures are formed in the main memory (RAM) of a computer during the execution
 * of a program.
 * 
 * Static vs Dynamic Memory Allocation
 * 
 * Memory is divided into individual bytes. They are linear. Let's take a close up look at
 * what happens to a small fraction of RAM. Let's have a look at memory from the address
 * 0 up to about 65535:
 * 
 * 0 - 65535 = 65536 = 64 x 1024 = 64 KB
 * 
 * This is approx. 64 KB which is the size of a 'segment'.
 * 
 *              _CPU_         ______RAM_____ 65535
 *             [     ]<----->[     Heap     ]
 *             [     ]<----->[              ]
 *             [_____]<----->[______________]
 *                           [     Stack    ]
 *                           [ int a;       ]
 *                           [ float b      ]
 *                           [______________]
 *                           [ Code Section ]
 *                           [    main()    ]<--------->[ PROGRAM ]
 *                           [              ]
 *                          0
 * 
 * Located in Stack as part of the Stack Frame in an Activation Record
 * int a;     2 bytes
 * float b;   4 bytes
 * 
 * Number of bytew for a data type depend on various things including choice of compiler,
 * OS, etc.
 * 
 * Memory allocation that is done at compile-time is called "static memory allocation".
 * What is static? The size of memory is static. When was it decided? At compile-time.
 * The currently executing function will access the top-most activation record. All of
 * this happens in the memory and behaves like a stack (LIFO). Unlike stack memory, heap
 * memory is not organized. Heap memory should be treated like a resource, and should be
 * carefully managed. In other words, only take what is required from heap memory and
 * when it is not needed anymore, release it so other programs can use it. Programs by
 * default cannot access heap memory directly. They can access it indirectly using
 * 'pointers'.
 * 
 * Whenever you see the word 'new':
 * 
 * int *p; // 4 bytes
 * p = new int[5];
 * 
 * Then a pointer is being used. In the C language, the word 'malloc' is used:
 * 
 * p = (int *)malloc(4 * 5)
 * 
 * The pointer provides the address to the variable located in heap memory.
 * 
 * In the same way the memrory is allocated, it then must be deallocated.
 * 
 * delete []p;
 * p = null;
 * 
 * Heap memory should be explicity requested, and later explicitly released. Loss of
 * memory, memory that has not been explicity released, is called 'memory leak'.
 */