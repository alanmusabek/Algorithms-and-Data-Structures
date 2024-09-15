#include <iostream>
#include <vector>
using namespace std;

struct node{
    long long val;
    node * next;
    node * previous;
    node(long long x){
        val = x;
        next = NULL;
    }
};

struct queue{
    private:
        node * head;
        node * tail;
        long long len;
    
    public:
        queue(){
            head = tail = NULL;
            len = 0;
        }
        void add(long long x){
            node * n = new node(x);
            len++;
            if(head == NULL){
                head = tail = n;
            }else{
                tail->next = n;
                tail = n;
            }
        }
        void print(){
            node * cur = head;
            while(cur != NULL){
                cout << cur->val << " ";
                cur = cur->next;
            }
        }
        
        void is_young_before() {
            node * cur;
            node * point;

            cur = head;
            point = head;

            cout << -1 << " ";
            point = point -> next;

            while (point != NULL)
            {
                long long young = -1;
                while (cur != point)
                {
                    if(cur -> val <= point -> val) {
                        young = cur -> val;
                    }
                    cur = cur -> next;
                }
                if(young != -1) {
                    cout << young << " ";
                } else {
                    cout << young << " ";
                }
                point = point -> next;
                cur = head;
            };
        };
        // void is_young() {
        //     node * pointer = head;
        //     cout << -1 << " ";
        //     bool found_young = false;
        //     if(pointer == head) {
        //         node * cur;
        //         cur = pointer -> next;
        //         while (pointer != NULL)
        //         {
        //             while(cur != NULL && cur != pointer) {
        //                 if(cur -> val > pointer -> val) {
        //                     cout << pointer -> val << " ";
        //                     found_young = true;
        //                     break; 
        //                 } else {
        //                     cur = cur -> next;
        //                 }
        //             }
        //             if(!found_young) {
        //                 cout << -1 << " ";
        //             }
        //             cur = head;
        //             pointer = pointer -> next;
        //         }
        //    }
        //};
};

int main(){

    queue q;
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        int input;
        cin >> input;
        q.add(input);
    }

    q.is_young_before();
//    q.is_young();
    return 0;
}