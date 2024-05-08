#include <iostream>
#include "linked_list.h"

// TODO: LinkedList 클래스 구현 작성

LinkedList::LinkedList(){
    head_=nullptr;
    size_=0;
}

LinkedList::~LinkedList(){
    Node* cur=head_;
    Node* removeNode;
    while(cur!=nullptr){
        removeNode=cur;
        cur=cur->next_;
        delete removeNode;   
    }
}
void LinkedList::print(){
    Node* cur=head_;
    while(cur!=nullptr){
        std::cout<<cur->value_<<" ";
        cur=cur->next_;
    }
    std::cout<<"\n";
}

void LinkedList::insert(int index, int value){
    // 주의 : index가 0인 경우 head가 바뀌어야 하니까 조심
    Node* node=new Node(value);
    if(index==0){
        // 새로운 노드가 head가 되고, 이전 head를 next_에 할당
        node->next_=head_;
        head_=node;
    }
    else{
        // (index-1)번 링크를 타서 도착한 노드 뒤에 새로운 노드를 삽입한다.
        Node* cur=head_;
        for(int i=0;i<index-1 && cur!=nullptr;i++){
            cur=cur->next_;
        }
        node->next_=cur->next_;
        cur->next_=node;
    }
    
    // 노드 추가했으니 size 증가
    size_++;
}

int LinkedList::get(int index){
    // 주의 : 중간에 인덱스 벗어나는 경우도 고려해주자.
    if(index<0 || index>=size_) return -1;

    Node* cur=head_;
    for(int i=0;i<index && cur!=nullptr;i++){
        cur=cur->next_;
    }

    return cur->value_;
}

void LinkedList::remove(int index){
    // 주의 : index가 0인 경우 head가 바뀌어야 하니까 조심
    // (index-1)번 링크를 타서 도착한 노드 뒤에 노드를 삭제
    Node* removeNode;
    if(index==0){
        // head를 삭제하는 경우 그냥 head 위치만 옮겨주고 삭제하면 된다
        removeNode=head_;
        head_=removeNode->next_;
    }
    else{
        Node* cur=head_;
        for(int i=0;i<index-1 && cur!=nullptr;i++){
            cur=cur->next_;
        }
        removeNode=cur->next_;
        cur->next_=removeNode->next_;
    }
    delete removeNode;

    // 노드 삭제했으니 size 감소
    size_--;
}