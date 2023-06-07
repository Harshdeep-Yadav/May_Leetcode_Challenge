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
    int pairSum(ListNode* head) {
        vector<int>res;
        int maxi=INT_MIN;
    
        if(head==NULL) return 0;
        
        while(head){
            res.push_back(head->val);
            head=head->next;
        }
        
        int n =res.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int sum=res[i]+res[j];
            maxi=max(sum,maxi);
            i++;
            j--;
        }
        return maxi;
    }
};