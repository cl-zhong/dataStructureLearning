#ifndef _GLOBALDEFINE_
#define _GLOBALDEFINE_

#define maxSize 25
#define MIN 1e-6

/* 单链表 */
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;


/* 二叉树链式存储结构（二叉链表）定义 */
typedef struct BTNode
{
    char data;
    struct BTNode *lchild;
    struct BTNode *rchild;
}BTNode;


/* 线索二叉树结点定义 */
typedef struct TBTNode
{
    char data;
    int ltag, rtag;
    struct TBTNode *lchild;
    struct TBTNode *rchild;    
}TBTNode;



#endif