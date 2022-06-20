// GFG practise solution
int getNthFromLast(Node *head, int n)
{
        Node *temp=head;
        int size=0,count=0;
        while(temp!=NULL)
        {
          size++;
          temp=temp->next;
        }
        temp=head;
        if(n>size)
        {
            return -1;
        }
        while(temp!=NULL && count<size-n)
        {
            count++;
            temp=temp->next;
        }
        return temp->data;
}
