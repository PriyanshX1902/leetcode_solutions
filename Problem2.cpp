class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sum = new ListNode();
        ListNode* head = new ListNode(); 
        head  = sum;
        int carry = 0;
        
        while(l1!=NULL||l2!=NULL){
            int result = carry+(l1? l1->val:0)+(l2? l2->val:0);
            ListNode* p = new ListNode();
            if(result<=9){
               p->val = result;
                carry = 0;
            }
            else{
                carry = result/10;
                p->val = result%10;
            }
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
            
            
            sum->next = p;
            sum = sum->next;
            
        }
        if(carry){
            ListNode* p = new ListNode(carry);
            sum->next = p;
            sum = sum->next;
            
        }
        return head->next;
        
    }
};
