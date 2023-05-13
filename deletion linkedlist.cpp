   #include <bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
       cout << "Element " <<  ptr->data<<endl;
        ptr = ptr->next;
    }
}
  //case 1 = delet a first nord 
struct Node*deletfirst(struct Node *head){
struct Node *ptr=head;
head=head->next;
free(ptr);
return head;
}

// case 2 = deleting a element at given index 
struct Node*deletAtindex(struct Node * head , int index)
{
struct Node *p=head;
struct Node *q=p->next;
for (int i = 0; i < index-1; ++i)
{
    p=p->next;
    q=q->next;
};                                   
  p->next=q->next;                                    
free(q);
return head;
}

// case 3 = deleting last node from the linked list
struct Node*deletAtlast(struct Node * head )
{
struct Node *p=head;
struct Node *q=p->next;
while(q->next!=NULL)
{
    p=p->next;
    q=q->next;
};                                   
  p->next= NULL;                                    
free(q);
return head;
}

// case 4 Delet a element with given value
struct Node*deletAtindex(struct Node * head , int index)
{
struct Node *p=head;
struct Node *q=p->next;
while(q->data !=value && q->next!=NULL)
{
    p=p->next;
    q=q->next;
};                                   
  if (q->data=value)
                                      {
                                          p->next=q->next;
                                          free(q);
                                      }                                    

return head;
}



  int main()
  {
#ifndef  ONLINE_JUDGE
    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);
#endif
  struct Node *head;
    struct Node *second; 
    struct Node *third;
    struct Node *fourth;
 
        head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    
    head->data = 4;
    head->next = second;
 
   
    second->data = 3;
    second->next = third;
 
    
    third->data = 8;
    third->next = fourth;
 

    fourth->data = 1;
    fourth->next = NULL;
      cout<<"Linkedlist before deletion"<<endl;
    linkedListTraversal(head);

   // head = deletfirst(head);
    //cout<<"Linkedlist after deletion"<<endl;
   // head =deletAtindex( head,3);
    //cout<<"Linkedlist delet at any index"<<endl;
    head=deletAtlast(head);
    cout<<"Delet at last"<<endl;

    linkedListTraversal(head);
    return 0;
    
}