/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode*& head, ListNode*& head2) {

        struct ListNode *current=head, *next, *prev=NULL;
        int num1=0, num2=0;
        while(current!=NULL){
            num1 = (num1*10) + (current->val);
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;

        current=head2; prev=NULL;
        while(current!=NULL){
            num2 = (num2*10) + (current->val);
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head2=prev;

        int sum1=0, sum2=0, total,left;
        while(num1>0) {
            sum1 = sum1*10 + num1%10;
            num1 /= 10;
        }

        while(num2>0) {
            sum2 = sum2*10 + num2%10;
            num2 /= 10;
        }

        total = sum1+sum2;
        cout << total;

        struct ListNode *ans = NULL;
        ListNode *newNode;
        while(total>0) {
            left=total%10;
            newNode = new ListNode;
            newNode->next=NULL;
            newNode->val=left;
            if(ans==NULL) ans=newNode;
            else{
                current=ans;
                while(current->next!=NULL){
                    current=current->next;
                }
                current->next=newNode;
            }
            total = total/10;
        }
        if(ans==NULL){
            ans = new ListNode;
            ans->next=NULL;
            ans->val=0;
        }
        return ans;
    }
};
