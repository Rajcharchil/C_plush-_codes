// 1. Reverse a linked list

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}


////=======================================================================================



// . Reverse a linked list

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* nextNode = nullptr;

    while (current != nullptr) {
        nextNode = current->next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }

    return prev;
}

//===============================================================================



// Implement a stack using arrays/linked list

#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;
public:
    void push(int val) {
        elements.push_back(val);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        }
    }

    int top() const {
        return elements.empty() ? -1 : elements.back();
    }

    bool isEmpty() const {
        return elements.empty();
    }
};



//===================================================================================================
//  Check if a linked list has a loop

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

bool hasLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; // Loop detected
        }
    }

    return false; // No loop
}


//===================================================================================================
// Find the middle element of a linked list

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}



//===================================================================================================




//  Implement a queue using stacks

#include <iostream>
#include <stack>

class QueueUsingStacks {
private:
    std::stack<int> inputStack;
    std::stack<int> outputStack;

public:
    void enqueue(int val) {
        inputStack.push(val);
    }

    int dequeue() {
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }

        if (outputStack.empty()) {
            std::cerr << "Queue is empty\n";
            return -1;
        }

        int frontValue = outputStack.top();
        outputStack.pop();
        return frontValue;
    }

    bool isEmpty() const {
        return inputStack.empty() && outputStack.empty();
    }
};



//===================================================================================================
//  Binary search in a sorted array

#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Element not found
}


//===================================================================================================
// Merge two sorted arrays

#include <iostream>
#include <vector>

std::vector<int> mergeSortedArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> mergedArray;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}


//===================================================================================================
// Find the factorial of a number using recursion

#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


//===================================================================================================
//  Implement quicksort algorithm

#include <iostream>
#include <vector>

int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quicksort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quicksort(arr, low, pivotIndex - 1);
        quicksort(arr, pivotIndex + 1, high);
    }
}


//===================================================================================================
// Implement depth-first search (DFS) for a graph

#include <iostream>
#include <vector>
#include <stack>

class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;

public:
    Graph(int v) : vertices(v), adjacencyList(v) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    void dfs(int startVertex) {
        std::vector<bool> visited(vertices, false);
        std::stack<int> stack;

        stack.push(startVertex);
        visited[startVertex] = true;

        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();
            std::cout << currentVertex << " ";

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    stack.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};


//===================================================================================================

// Implement breadth-first search (BFS) for a graph

#include <iostream>
#include <vector>
#include <queue>

class Graph {
private:
    int vertices;
    std::vector<std::vector<int>> adjacencyList;

public:
    Graph(int v) : vertices(v), adjacencyList(v) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    void bfs(int startVertex) {
        std::vector<bool> visited(vertices, false);
        std::queue<int> queue;

        queue.push(startVertex);
        visited[startVertex] = true;

        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            std::cout << currentVertex << " ";

            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    queue.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};



//===================================================================================================
// Check if a string is a palindrome

#include <iostream>
#include <string>

bool isPalindrome(const std::string& str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}


//===================================================================================================
//  Implement a binary tree and perform an in-order traversal

#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inOrderTraversal(TreeNode* root) {
    if (root != nullptr) {
        inOrderTraversal(root->left);
        std::cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
14. Calculate the Fibonacci sequence using recursion
cpp
Copy code
#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


//===================================================================================================
//  Find the shortest path in a weighted graph using Dijkstra's algorithm

#include <iostream>
#include <vector>
#include <queue>
#include <climits>

class Graph {
private:
    int vertices;
    std::vector<std::vector<std::pair<int, int>>> adjacencyList;

public:
    Graph(int v) : vertices(v), adjacencyList(v) {}

    void addEdge(int u, int v, int weight) {
        adjacencyList[u].push_back({v, weight});
        adjacencyList[v].push_back({u, weight});
    }

    void dijkstra(int startVertex) {
        std::vector<int> distance(vertices, INT_MAX);
        distance[startVertex] = 0;

        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
        pq.push({0, startVertex});

        while (!pq.empty()) {
            int currentVertex = pq.top().second;
            pq.pop();

            for (const auto& neighbor : adjacencyList[currentVertex]) {
                int nextVertex = neighbor.first;
                int weight = neighbor.second;

                if (distance[currentVertex] + weight < distance[nextVertex]) {
                    distance[nextVertex] = distance[currentVertex] + weight;
                    pq.push({distance[nextVertex], nextVertex});
                }
            }
        }

        std::cout << "Shortest distances from vertex " << startVertex << ":\n";
        for (int i = 0; i < vertices; ++i) {
            std::cout << "To vertex " << i << ": " << distance[i] << "\n";
        }
    }
};