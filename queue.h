#ifndef QUEUE_H
#define QUEUE_H

// TODO: Queue 클래스 정의 작성

#include "linked_list.h"

class Queue:public LinkedList{
public:
    // Queue의 정의에 맞게 데이터를 삽입한다.
    void push(int data);

    // Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
    int pop();

    // Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
    int peek();

    // 큐에 데이터를 삽입한다. (push와 동일)
    void operator+=(int data);
};

#endif