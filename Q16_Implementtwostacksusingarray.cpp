

class twoStacks {
private:
    int* arr;     // Array to store elements
    int capacity; // Total capacity of the array
    int top1;     // Top index for the first stack
    int top2;     // Top index for the second stack

public:
      // Default constructor
    twoStacks() {
        capacity = 100;  // Default capacity
        arr = new int[capacity];
        top1 = -1;         // Initialize top index for stack 1
        top2 = capacity;   // Initialize top index for stack 2
    }

    // Constructor to initialize the two stacks with custom capacity
    twoStacks(int size) {
        capacity = size;
        arr = new int[size];
        top1 = -1;         // Initialize top index for stack 1
        top2 = capacity;   // Initialize top index for stack 2
    }

    // Function to push an integer into stack 1
    void push1(int x) {
        if (top1 + 1 < top2) {  // Check if there is space in the array
            arr[++top1] = x;   // Increment top1 and push the data
        } else {
            cout << "Stack Overflow: Stack 1 is full!" << endl;
        }
    }

    // Function to push an integer into stack 2
    void push2(int x) {
        if (top2 - 1 > top1) {   // Check if there is space in the array
            arr[--top2] = x;     // Decrement top2 and push the data
        } else {
            cout << "Stack Overflow: Stack 2 is full!" << endl;
        }
    }

    // Function to remove an element from the top of stack 1
    int pop1() {
        if (top1 >= 0) {     // Check if stack 1 is not empty
            return arr[top1--]; // Return and decrement top1
        } else {
            return -1;  // Return a default value indicating underflow
        }
    }

   // Function to remove an element from the top of stack 2
int pop2() {
    if (top2 < capacity) { // Check if stack 2 is not empty
        return arr[top2++]; // Return and increment top2
    } else {
        return -1;  // Return -1 indicating stack underflow
    }
}

};
