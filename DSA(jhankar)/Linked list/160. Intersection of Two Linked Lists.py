# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> Optional[ListNode]:
        if headA is None or headB is None:
            return None
        
        tempA = headA
        tempB = headB

        while tempA != tempB:
            if tempA is None:
                tempA = headB
            else:
                tempA = tempA.next

            if tempB is None:
                tempB = headA
            else:
                tempB = tempB.next
        return tempA
