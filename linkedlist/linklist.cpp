#include <iostream>

int data[10];
int next[10];

//添加index节点添加节点p，值为value
void add(int index, int p, int value)
{ //插入节点时有效，不插入时被覆盖
    next[p] = next[index];

    next[index] = p;
    data[p] = value;
    return;
}

struct Node
{
    Node(int data) : data(data), next(NULL) {}
    int data;
    Node *next;
};

int main()
{
    //构造链表
    int head = 1;
    data[head] = 0;
    add(1, 5, 1);
    add(5, 3, 2);
    add(3, 7, 3);
    add(7, 9, 4);
    add(5, 4, 234);
    printf("\n");
    //访问链表
    int p = head;
    while (p != 0)
    {
        printf("%d->", data[p]);
        p = next[p];
    }
    printf("\n");
}
