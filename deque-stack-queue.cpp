/*
Deque = array whose size can be efficiently changed at both ends of the array. Like a vector, a deque provides the functions push_back and pop_back,
but it also includes the functions push_front and pop_front which are not available in a vector.

Stack = provides two O(1) time operations: adding an element to the top, and removing an element from the top. It is only possible to
access the top element of a stack.

Queue = provides two O(1) time operations: adding an element to the end of the queue, and removing the first element in the queue. It is only possible to
access the first and last element of a queue.
OBS: Priority queue = queue sorted by priority. The supported operations are insertion and retrieval and removal of either the minimum or maximum element. 
     Insertion and removal take O(logn) time, and retrieval takes O(1) time.

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    deque<int> d;
    
    d.push_back(5); // [5]
    d.push_back(2); // [5,2]
    d.push_front(3); // [3,5,2]
    d.pop_back(); // [3,5]
    d.pop_front(); // [5]

    stack<int> s;

    s.push(3); //empilha
    s.push(2);
    s.push(5); // [5, 2, 3]

    cout << s.top(); // 5]

    s.pop(); //desempilha - [2, 3]
    cout << s.top(); // 2

    queue<int> q;

    q.push(3); //enfileira
    q.push(2);
    q.push(5); //[3, 2, 5] 

    cout << q.front(); // 3

    q.pop(); //desenfilaira (tira primeiro) - [2, 5]
    cout << q.front(); // 2

    priority_queue<int> pq;

    pq.push(3); // "ordena" por prioridade (maior valor)
    pq.push(5);
    pq.push(7);
    pq.push(2); //[7, 5, 3, 2]

    cout << pq.top() << "\n"; // 7

    pq.pop(); //retira maior
    cout << pq.top() << "\n"; // 5

    pq.pop(); //[3, 2]
    pq.push(6); //[6, 3, 2]
    cout << pq.top() << "\n"; // 6

    return 0;
}