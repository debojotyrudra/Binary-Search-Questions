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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int> st;
        while(temp!=NULL)
        {
            if(st.size()==0)
            st.push_back(head->val);
            else
            {
                while(!st.empty()&&st.back()<temp->val)
                    st.pop_back();
                st.push_back(temp->val);
            }
            temp=temp->next;
        }
        ListNode* ptr=new ListNode(st[0]);
        ListNode* p=ptr;
        for(int i=1;i<st.size();i++)
        {
            p->next=new ListNode(st[i]);
            p=p->next;
        }
        return ptr;
    }
};