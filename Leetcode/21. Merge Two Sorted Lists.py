# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        temp1 = list1
        temp2 = list2
        if not temp1:
            return temp2
        if not temp2:
            return temp1
        while temp1 and temp2:
            if temp1.val < temp2.val:
                temp1.next = self.mergeTwoLists(temp1.next, temp2)
                return temp1
            else:
                temp2.next = self.mergeTwoLists(temp1, temp2.next)
                return temp2
        return temp1 or temp2