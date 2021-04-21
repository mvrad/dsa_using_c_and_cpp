/*
 * Array Data Type (ADT)
 * 
 * The term 'array' is often used to mean array data type, a kind of data type provided by
 * most high-level programming languages that consists of a collection of values or
 * variables that can be selected by one or more indices computed at run-time.
 */

#include <iostream>

using namespace std;

// Construct the Array
struct Array
{
  int A[10], size, length;
};

// Swap x and y
void Swap(int *x, int *y)
{
  int temp = *x; *x=*y; *y=temp;
}

// Display the contents of the array
// Asymptotic Complexity | Time: O(n)
void Display(struct Array arr)
{
  for (int i = 0; i < arr.length; i++)
    cout << arr.A[i] << " ";
  cout << "\n";
}

// Add an element to the end of an array
// Asymptotic Complexity | Time: O(n)
void Append(struct Array *arr, int x)
{
  // Store the value of x at the end of the array
  arr -> A[arr -> length++] = x;
}

// Insert an element at a given index and shift elements to the right
// Asymptotic Complexity | Time: O(n)
void Insert(struct Array *arr, int index, int x)
{
  // Check if the index given is valid or not
  if (index >= 0 && index <= arr -> length)
    // Shift free space for the new element
    for(int i = arr -> length; i > index; i--)
      // Previous element will be copied at this location
      arr -> A[i] = arr -> A[i - 1];
    // Write element
    arr -> A[index] = x;
    // Increment the length of the array because a new element was inserted
    arr -> length++;
}

// Delete an element at the given index
// Asymptotic Complexity | Time: O(n)
void Delete(struct Array *arr, int index)
{
  int x = 0;
  // Check if the index given is valid or not
  if (index >= 0 && index <= arr -> length)
    // Get the value from the array at the given index
    x = arr -> A[index];
    // Shift all elements
    for (int i = index; i < arr -> length - 1; i++)
      // Copy an element at A[i + 1] to shift all the elements
      arr -> A[i] = arr -> A[i + 1];
    // The array must be decremented
    arr -> length--;
}

// Linear Search
// Asymptotic Complexity | Time: O(n), Space: O(1)
int Linear(struct Array *arr, int key)
{
  for (int i = 0; i < arr -> length; i++)
    // Move key element one step forward, "transposition"
    if (key == arr -> A[i])
    {
      // Move key element to front/head
      Swap(&arr -> A[i], &arr -> A[0]);
      return i;
    }
  return -1;
}

// Binary Search (Iterative)
// Asymptotic Complexity | Time: O(log n), Space: O(1)
int Binary(struct Array arr, int key)
{
  int l = 0, h = arr.length - 1, mid;
  while (l <= h){
    mid = (l + h) / 2;
    if (key == arr.A[mid]) {
      return mid; cout << "\n";
    }
    else if (key < arr.A[mid]) {
      h = mid - 1;
    }
    else {
      l = mid + 1;
    }
  }
  cout << "Unsuccessful" << " ";
  return -1; cout << "\n";
}

// Binary Search (Recursive)
// Asymptotic Complexity | Time: O(log n), Space: O(log n)
int RBinary(int a[], int l, int h, int key)
{
  int mid;
  if (l <= h)
    mid = (l + h) / 2;
    if (key == a[mid])
      return mid;
    else if (key < a[mid])
      return RBinary(a, l, mid - 1, key);
    else
      return RBinary(a, mid + l, h, key);
  return -1;
}

// Get an element at the given index
int Get(struct Array arr, int index) // Time: O(1)
{
  if (index >= 0 && index < arr.length)
    return arr.A[index];
  return -1;
}

// Set an element at the given index
void Set(struct Array *arr, int index, int x) // Time: O(1)
{
  if (index >= 0 && index < arr -> length)
    arr -> A[index] = x;
}

// Get the maximum valued element
int Max(struct Array arr) // Time: O(n)
{ // --------------------------------------- f(n)
  int max = arr.A[0]; // ------------------- 1
  for (int i = 0; i < arr.length; i++) // -- n
    if (arr.A[i] > max) // ----------------- n - 1
      max = arr.A[i]; // ------------------- May or may not execute
  return max; // --------------------------- 1
} // --------------------------------------- 2n + 1 = O(n)

// Get the minimum valued element
int Min(struct Array arr) // Time: O(n)
{
  int min = arr.A[0];
  for (int i = 0; i < arr.length; i++)
    if (arr.A[i] < min)
      min = arr.A[i];
  return min;
}

// Get the sum of all the elements
int Sum(struct Array arr)
{ // --------------------------------------- f(n)
  int s = 0; // ---------------------------- 1
  for (int i = 0; i < arr.length; i++) // -- n + 1
    s += arr.A[i]; // ---------------------- n
  return s; // ----------------------------- 1
} // --------------------------------------- 2n + 3 = O(n)

// Average
float Avg(struct Array arr)
{
  return (float)Sum(arr) / arr.length;
}

// Reverse

void Reverse(struct Array *arr)
{
  int i, j;
  for (i = 0, j = arr -> length - 1; i < j; i++, j--)
  {
    Swap (&arr -> A[i], &arr -> A[j]);
  }
}

void Reverse2(int a[], int start, int end)
{
  if (start >= end)
  return;

  int temp = a[start];
  a[start] = a[end];
  a[end] = temp;

  Reverse2(a, start + 1, end - 1);
}

// Left Shift



// Left Rotate



// Right Shift



// Right Rotate



int main()
{
  struct Array arr1 = {{2, 3, 4, 5, 6}, 5, 5};
  cout << "Starting array: "; Display(arr1);
  // &arr1 is the address of arr1, append 10 to the end of arr1
  Append(&arr1, 10);
  // Insert 12 at index 0 in arr1
  Insert(&arr1, 0, 12);
  // Delete element at index 2 in arr1
  Delete(&arr1, 2);
  // Display the elements in the array
  cout << "Updated array elements: "; Display(arr1);
  // Perform linear search
  cout << "Element of value 12 is at index: " << Linear(&arr1, 12) << "\n";
  // Perform binary search
  cout << "Element of value 10 is at index: " << Binary(arr1, 10) << "\n";
  // Perform recursive binary search
  cout << "Element of value 5 is at index: " << RBinary(arr1.A, 0, arr1.length, 5) << "\n";
  // Perform get
  cout << "Get element at index 4: " << Get(arr1, 4) << "\n";
  // Perform set
  Set(&arr1, 1, 5);
  cout << "Set new element 5 at index 1: "; Display(arr1);
  // Perform max
  cout << "Maximum value of array is: " << Max(arr1) << "\n";
  // Perform min
  cout << "Minimum value of array is: " << Min(arr1) << "\n";
  // Perform sum
  cout << "Sum of all the elements: " << Sum(arr1) << "\n";
  // Perform avg
  cout << "Average of all the elements: " << Avg(arr1) << "\n";
  // Display Array 1
  cout << "Array 1 before reversal: "; Display(arr1);
  // Reverse method 1
  Reverse(&arr1);
  cout << "Reverse method 1: "; Display (arr1);
  // Reverse method 2
  Reverse2(arr1.A, 0, 5);
  cout << "Reverse method 2: "; Display (arr1);
}