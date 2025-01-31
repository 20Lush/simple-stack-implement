**C++ Stack Implementation Interview Question**

**Problem Statement:**  
Create a `MyStack` class in C++ that mimics a stack with a maximum capacity of 1000 elements. Implement the following methods:  
- `void push(int x)`: Adds `x` to the top of the stack if not full.  
- `void pop()`: Removes the top element if the stack is not empty.  
- `int top()`: Returns the top element. If empty, return `-1`.  
- `bool isEmpty()`: Returns `true` if the stack is empty.  
- `int size()`: Returns the number of elements in the stack.  

Then, write a program to process a series of commands from standard input and output results for queries.  

**Input/Output Format:**  
- **Input:** Commands via standard input (one per line):  
  - `push X`: Push integer `X` onto the stack.  
  - `pop`: Remove the top element.  
  - `top`: Print the top element.  
  - `isEmpty`: Print `true`/`false`.  
  - `size`: Print the current size.  
- **Output:** For each `top`, `isEmpty`, or `size` command, print the result on a new line.  

---

**Sample Input 1:**  
```
push 5
top
push 3
top
pop
top
push 7
top
pop
pop
pop
top
isEmpty
```  

**Sample Output 1:**  
```
5
3
5
7
5
-1
true
```  

**Sample Input 2:**  
```
push 1
push 2
push 3
push 4
top
size
pop
top
```  

**Sample Output 2:**  
```
3
3
3
2
```  

---

**Example Solution Code:**  
```cpp
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MyStack {
private:
    static const int MAX_CAPACITY = 1000;
    int arr[MAX_CAPACITY];
    int topIndex;

public:
    MyStack() : topIndex(-1) {}

    void push(int x) {
        if (topIndex < MAX_CAPACITY - 1) {
            arr[++topIndex] = x;
        }
    }

    void pop() {
        if (!isEmpty()) {
            topIndex--;
        }
    }

    int top() {
        return isEmpty() ? -1 : arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    int size() {
        return topIndex + 1;
    }
};

int main() {
    MyStack stack;
    string line;
    while (getline(cin, line)) {
        stringstream ss(line);
        string cmd;
        ss >> cmd;
        if (cmd == "push") {
            int x;
            ss >> x;
            stack.push(x);
        } else if (cmd == "pop") {
            stack.pop();
        } else if (cmd == "top") {
            cout << stack.top() << endl;
        } else if (cmd == "isEmpty") {
            cout << (stack.isEmpty() ? "true" : "false") << endl;
        } else if (cmd == "size") {
            cout << stack.size() << endl;
        }
    }
    return 0;
}
```  

**Explanation:**  
- The `MyStack` class uses an array to store elements and tracks the top index.  
- `push`/`pop` modify the top index conditionally.  
- Queries like `top` and `size` return results based on the current state.  
- The program reads commands line-by-line and executes them against the stack.  

This problem tests understanding of stack operations, array management, and input parsing in C++.