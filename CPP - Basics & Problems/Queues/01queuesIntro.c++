// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if(back ==n-1){
            cout << "Queue Overflowed";
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }
    void pop(){
        if(front == -1 || front>back){
            cout << "no element in queue";
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front>back){
            cout << "no element in queue";
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front == -1 || front>back){
            // cout << "no element in queue";
            return 1;
        }
        return 0;
    }
};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    for(int i=0; i<5; i++){
        cout << q.peek() << " ";
        q.pop();
    }
    cout << '\n';
    cout << q.empty();
}
