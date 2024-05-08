#include "stack.h"

// TODO: Stack 클래스 구현 작성

// Stack의 정의에 맞게 데이터를 삽입한다.
void Stack::push(int data){
    // stack에 push하는 것은 linked_list의 head에 앞에 데이터를 추가하는 것과 같다.
    LinkedList::insert(0, data);
}

// Stack의 정의에 맞게 데이터를 꺼내고 적절한 메모리를 해제한다.
int Stack::pop(){
    // stack에서 pop하는 것은 linked_list에서 head를 제거하는 것과 같다.
    LinkedList::remove(0);
}
    
// Stack의 정의에 맞게 다음에 pop 될 값을 미리 본다.
int Stack::peek(){
    // head가 가리키는 노드를 읽는다.
    Node* top=LinkedList::head_;
    return top->value_;
}