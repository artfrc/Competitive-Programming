#include <bits/stdc++.h>
using namespace std;

// @ Merge Two Sorted Lists


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//    
//       
//};

int main(){

    ListNode *l1 =  NULL;

    if(l1 == NULL){
        cout << "Esta vazia\n";
    }else{
        ListNode * aux = l1;
        while(aux != NULL){
            cout << aux->val << endl;
            aux = aux->next;
        }
    }

}