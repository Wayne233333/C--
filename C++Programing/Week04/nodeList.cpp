#include<iostream>
using namespace std;

class node {

public:

    node(int d = 0, node *n = nullptr) : data(d), next(n) {}
    int data;
    node *next;
};

class List {

    node *head;

public:

    List() : head(nullptr) {}
    
    List(const List &list){

        head = new node(list.head->data, list.head->next);
        node *p = head;
        while(p->next != nullptr){
            p->next = new node(p->next->data, p->next->next);
            p = p->next;
        }
        printf("Copy Constructing\n");
    }

    List(int arr[],int n){

        // head = new node(arr[n-1]);
        // for(int i = n-2; i >= 0; i--){
        //     InsertAtHead(arr[i]);
        // }
        head = new node(arr[0]);
        node *p = head;
        for(int i = 1; i < n; i++){
            p->next = new node(arr[i], p->next);
            p = p->next;
        }

    }

    ~List(){

        while(head != nullptr){
            node *p = head;
            // printf("Deleting %d\n", p->data);
            head = head->next;
            delete p;
        }
        printf("Memory Released\n");
    }

    void InsertAtHead(int d){

        head = new node(d, head);
    }

    void Display(){
        
        node *p = head;
        while(p != nullptr){
            printf("%d", p->data);
            if(p->next != nullptr){
                printf(",");
            }
            p = p->next;
        }
        printf("\n");

    }
};

int main() {

    int arr[] = {2, 5, 3, 5, 2, 8, 5, 9, 3};
    List list1(arr,9);
    printf("Original list1:");
    list1.Display();
    list1.InsertAtHead(3);
    printf("After Insertion:");
    list1.Display();

    List list2(list1);
    printf("List2 created\n");
    list2.Display();
    return 0;
}