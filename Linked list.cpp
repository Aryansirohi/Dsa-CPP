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
 
    
    head->data = 7;
    head->next = second;
 
   
    second->data = 11;
    second->next = third;
 
    
    third->data = 41;
    third->next = fourth;
 

    fourth->data = 66;
    fourth->next = NULL;
 
    linkedListTraversal(head);
    return 0;
    
}