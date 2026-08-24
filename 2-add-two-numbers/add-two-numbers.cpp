class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*dummy=new ListNode(0);
        ListNode*result=dummy;

        int carry=0;
        while(carry || l1 || l2){
            int sum=carry;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            int num=sum%10;
            carry=sum/10;
            dummy->next=new ListNode(num);
            dummy=dummy->next;
        }
        return result->next;
    }
};