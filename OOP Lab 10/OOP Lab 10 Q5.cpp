#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028
 
*/

template <typename T>
class DynamicArray {
public:
    virtual ~DynamicArray() {}
    virtual bool isFull() = 0;
    virtual bool isEmpty() = 0;
    virtual int size() = 0;
    virtual T& Front() = 0;
    virtual T& Rear() = 0;
    virtual void resize(int newSize) = 0;
    virtual void enqueue(const T& item) = 0;
    virtual void dequeue() = 0;
};

template <typename T>
class Queue : public DynamicArray<T> {
private:
    T* arr;
    int capacity;
    int front;
    int back;
    int currentSize;

public:
    Queue(int size = 10) {
        capacity = size;
        arr = new T[capacity];
        front = 0;
        back = -1;
        currentSize = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull() {
        if (currentSize == capacity) {
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (currentSize == 0) {
            return true;
        }
        return false;
    }

    int size() {
        return currentSize;
    }

    T& Front() {
        return arr[front];
    }

    T& Rear() {
        return arr[back];
    }

    void resize(int newSize) {
        if (newSize <= capacity) {
            return;
        }
        T* newArr = new T[newSize];
        int j = 0;
        for (int i = front; i < capacity; i++) {
            newArr[j++] = arr[i];
        }
        for (int i = 0; i < back + 1; i++) {
            newArr[j++] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        front = 0;
        back = currentSize - 1;
        capacity = newSize;
    }

    void enqueue(const T& item) {
        if (isFull()) {
            resize(capacity * 2);
        }
        back = (back + 1) % capacity;
        arr[back] = item;
        currentSize++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, no job to dequeue.\n";
            return;
        }
        front = (front + 1) % capacity;
        currentSize--;
    }
};

void printJob(int jobID) {
    cout << "Printing job " << jobID << "...\n";
    cout << "Job " << jobID << " printed.\n\n";
}

int main() {
    Queue<int>* printQueue = new Queue<int>(5);

    cout << "Adding print jobs to the queue...\n\n";
    printQueue->enqueue(1);
    printQueue->enqueue(2);
    printQueue->enqueue(3);
    printQueue->enqueue(4);
    printQueue->enqueue(5);

    while (!printQueue->isEmpty()) {
        int currentJob = printQueue->Front();
        printQueue->dequeue();
        printJob(currentJob);
    }

    cout << "All print jobs completed.\n\n";
    cout << "After dequeue, Front: " << printQueue->Front() << "\n";
    delete printQueue;
    return 0;
}
