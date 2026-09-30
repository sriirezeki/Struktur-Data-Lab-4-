#include <iostream>
#include <string>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

bool cekFull() {
    return top == MAX - 1;
}

bool cekEmpty() {
    return top == -1;
}

bool push(char data) {
    if (cekFull()) {
        return false;
    }
    top++;
    stack[top] = data;
    return true;
}

char pop() {
    if (cekEmpty()) {
        return '\0';
    }
    char dataDiPop = stack[top];
    top--;
    return dataDiPop;
}

int main() {
    system ("cls");
    string kata;

    cout << "Masukkan sebuah kata: ";
    cin >> kata;

    for (int i = 0; i < kata.length(); i++) {
        push(kata[i]);
    }

    string kataTerbalik = "";
    while (!cekEmpty()) {
        kataTerbalik += pop(); 
    }

    cout << "Hasil kata dibalik: " << kataTerbalik << endl;

    return 0;
}