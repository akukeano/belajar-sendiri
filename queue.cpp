#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAX = 10;
    string data[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    bool isEmpty() {
        return rear < front;
    }

    void enqueue(string nama) {
        if (rear == MAX - 1) {
            cout << "Antrean penuh!" << endl;
            return;
        }

        rear++;
        data[rear] = nama;
        cout << nama << " masuk antrean" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrean kosong!" << endl;
            return;
        }

        cout << data[front] << " dipanggil" << endl;
        front++;
    }

    void frontQueue() {
        if (isEmpty()) {
            cout << "Antrean kosong" << endl;
        } else {
            cout << "Paling depan: " << data[front] << endl;
        }
    }
};

int main() {

    Queue q;
    
    cout << "TIGA SERANGKAI!!! " << endl << endl;

    q.enqueue("EJA");
    q.enqueue("ABO");
    q.enqueue("KEANO");

    cout << endl;

    q.frontQueue();

    q.dequeue();

    cout << endl;

    q.frontQueue();

    return 0;
}
