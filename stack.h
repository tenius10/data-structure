#ifndef STACK_H
#define STACK_H

// TODO: Stack 클래스 정의 작성
#include "linked_list.h"

class Stack:public LinkedList{
public:
    // Stack의 정의에 맞게 데이터를 삽입한다.
    void push(int data);

    // Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
    int pop();

    // Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
    int peek();

    // Stack에 데이터를 삽입한다. (push와 동일)
    void operator+=(int data);
};

#endif