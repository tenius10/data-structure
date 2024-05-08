#include "queue.h"

// TODO: Queue 클래스 구현 작성

// Queue의 정의에 맞게 데이터를 삽입한다.
void Queue::push(int data){
    // LinkedList의 맨 뒤에 노드 삽입
    LinkedList::insert(LinkedList::size_, data);
}

// Queue의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
int Queue::pop(){
    // LinkedList의 head를 읽고, 제거
    int front=LinkedList::get(0);
    LinkedList::remove(0);
    return front;
}

// Queue의 정의에 맞게 다음에 pop 될 값을 미리 본다.
int Queue::peek(){
    return LinkedList::get(0);
}

// 큐에 데이터를 삽입한다. (push와 동일)
void Queue::operator+=(int data){
    Queue::push(data);
}