#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 10;
    int data[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int nilai) {
        if (isFull()) {
            cout << "Stack penuh!" << endl;
            return;
        }

        top++;
        data[top] = nilai;
        cout << nilai << " berhasil dimasukkan ke stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong!" << endl;
            return;
        }

        cout << data[top] << " dikeluarkan dari stack." << endl;
        top--;
    }

    void tampil() {
        if (isEmpty()) {
            cout << "Stack masih kosong." << endl;
            return;
        }

        cout << "isi stack (top -> bottom): " << endl;

        for (int i = top; i >= 0; i--) {
            cout << data[i] << endl;
        }
    }
};

int main() {

    Stack s;

    s.push(12);
    s.push(24);
    s.push(36);

    cout << endl;

    s.pop();

    cout << endl;

    s.tampil();

    return 0;
}
