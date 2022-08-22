// Source : https://leetcode.com/problems/implement-queue-using-stacks/

class MyQueue {
public:
  stack<int> S1, S2;

  MyQueue() {}

  void push(int x) { S1.push(x); }

  int pop() {
    int elem = peek();
    S2.pop();
    return elem;
  }

  int peek() {
    if (S2.empty()) {
      while (!S1.empty()) {
        S2.push(S1.top());
        S1.pop();
      }
    }
    return S2.top();
  }

  bool empty() { return S1.empty() && S2.empty(); }
};
