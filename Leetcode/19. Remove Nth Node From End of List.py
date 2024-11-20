# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        temp = head
        iteration = 0
        while temp:
            iteration += 1
            temp = temp.next
        it_to = iteration - n
        if it_to == 0:
            return head.next
        temp = head
        while it_to > 1:
            temp = temp.next
            it_to -= 1
        temp.next = temp.next.next
        return head       