class Solution
{
public:
Listnode* middleNode(Listnode* head)
{
  Listnode* fastPointer = head;
  Listnode* slowPointer = head;

  while(fastPointer != nullptr && fastPointer->next != nullptr)
    {
      slowPointer = slowPointer->next;
      fastPointer = fastPointer->next->next;
    }
  return slowPointer;
}
};
