# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        seen = set()
        current = head
        prev = None
        while current:
            if current.val in seen:
                prev.next = current.next
                current = current.next
            else:
                seen.add(current.val)
                prev = current
                current = current.next
        return head
        