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
 * 
 * 
 * 
 * 
 * 
 * 
 */