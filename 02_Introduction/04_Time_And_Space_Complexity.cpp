/*
 * Time And Space Complexity
 * 
 * On the order of n, or O(n). Order and degree are the same thing. Important: Not every
 * for loop will be O(n), a for loop can also be O(log n). Check very carefully. If the
 * counter is getting divided by 2 for every iteration, then the time complexity for the
 * loop is O(log n), or "Order of log n base 2".
 * 
 * If the for loop is not incremented by 1 each time, "i++", then a while loop is
 * preferred.
 * 
 * A matrix of size 4 x 4 will take O(n^2) time complexity if you are processing all of
 * its elements. If you are processing a single row or column, the time complexity will
 * be O(n).
 * 
 * In a binary tree, if you are processing all its elements the time complexity of that
 * operation will be O(n), it will be O(log n) if processing just one path.
 */