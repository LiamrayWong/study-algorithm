#include <vector>
using namespace std;

//相当于JS中的对象，带有类型约束
struct Node
{
    //构造函数，创建Node对象时，传入data数据
    Node(int data) : data(data), next(NULL) {}
    int data;
    Node *next;
};

int main()
{
    Node *head = NULL;
    head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    Node *p = head;
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}
