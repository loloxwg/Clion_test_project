#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
//基于链式存储的食堂排队程序设计
#define maxsize 10001
/*二叉排序树*/
int key;
typedef struct BiTNode
{
    int data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

BiTree CreatBiTree(BiTree r, int m)
{
    BiTree p, q, w;
    p = (BiTree)malloc(sizeof(BiTNode));
    p->rchild = NULL;
    p->lchild = NULL;
    p->data = m;
    q = r;
    while (q)
    {
        if (m > q->data)
        {
            w = q;
            q = q->rchild;
        }
        else if (m <= q->data) //加了一个else，一个等于号
        {
            w = q;
            q = q->lchild;
        }
    }
    if (m > w->data)
        w->rchild = p;
    else
        w->lchild = p;
    return r;
}
BiTree InitBiTree() //初始化头结点
{
    BiTree root;
    root = (BiTree)malloc(sizeof(BiTNode));
    root->lchild = NULL;
    root->rchild = NULL;
    return root;
}
void midPrint(BiTree root) //中序输出
{
    if (root)
    {
        midPrint(root->lchild);
        if (key == 1)
        {
            key++;
            printf("%d", root->data);
        }
        else
            printf(" %d", root->data);

        midPrint(root->rchild);
    }
}

/*链式存储*/
typedef int Status;

//学生信息定义
typedef struct {
    int no;   //饭卡卡号
    char name[20]; //姓名
//    double price;     //成绩
}student;

typedef student ElemType;

//链表存储结构
typedef struct LNode{
    ElemType   data;       //数据域
    struct LNode  *next;   //指针域
}LNode,*LinkList;

//链表初始化
Status InitList(LinkList &L){
	L=new LNode;
	L->next=NULL;
	return 1;
}
//显示学生表信息
Status GetElem(LinkList L,int i,ElemType &e)
{
	LinkList p;
	p=L->next;
	int j=1;
	while(p&&j<i)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i)
	    return 0;
	e=p->data;
	return 1;
}
Status GetElemID(LinkList L,int i,ElemType &e)//
{
    LinkList p;
    p=L->next;
    int j=1;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i)
        return 0;
    p->data.no;
    return 1;
}
// 根据名字进行查找
Status Search(LNode L,char str[],LinkList &p)
{
    int i =1;
	p=L.next;
	while(p)
	{

		if(strcmp(p->data.name,str)==0){

            return i;
		}
		p=p->next;
        i++;
	}
	return 0;
}
/*Status Search(LNode L,char str[],LinkList &p)
{
	p=L.next;
	while(p)
	{
		if(strcmp(p->data.name,str)==0)
			return 1;
		p=p->next;
	}
	return 0;
}*/
// 在指定位置插入某个学生的信息
Status ListInsert(LinkList L,int i,ElemType e)
{
	LinkList p,s;
	p=L;
	int j=0;
	while(p&&j<i-1)
	{
		p=p->next;
		++j;
	}
	if(!p||j>i-1)
	    return 0;
	s=new LNode;
	s->data=e;
	s->next=p->next;
	p->next=s;
	return 1;
}
 // 删除指定位置的学生信息
Status ListDelete(LinkList p,int i)
{
	int j=0;
	while((p->next)&&(j<i-1))
	{
		p=p->next;
		++j;
	}
	if(!(p->next)||(j>i-1)){
        return 0;
	} else{
        LinkList q;
        q=p->next;
        p->next=q->next;
        delete q;
        return 1;
	}

}

Status ListDeleteNUM1(LinkList p)
{
    int j=0;
    int i=1;
    while((p->next)&&(j<i-1))
    {
        p=p->next;
        ++j;
    }
    if(!(p->next)||(j>i-1))	return 0;
    LinkList q;
    q=p->next;
    p->next=q->next;
    delete q;
    return 1;
}
/*Status ListDeleteNUM1(LinkList p)
{
    int j=0;

    while((p->next)&&(j<0))//
    {
        p=p->next;
        ++j;
    }
    if(!(p->next)||(j>0))	return 0;//
    LinkList q;
    q=p->next;
    p->next=q->next;
    delete q;
    return 1;
}*/
void Input(ElemType *e)
{
	printf("姓名:");	scanf("%s",e->name);
	printf("卡号:");	scanf("%d",&e->no);
//	printf("成绩:");	scanf("%lf",&e->price);
	printf("输入完成\n\n");
}

void Output(ElemType *e)
{
	printf("姓名:%-20s\n卡号:%-10d\n\n",e->name,e->no);
}
void State(int size,ElemType *first,ElemType *least){
    printf("当前排队人数：%d ",size);
    printf("队首：%s ",first->name);
    printf("队尾：%s ",least->name);
}
//获取链表有效节点的个数
int SListSize(LinkList L)
{
    LinkList p;
    p=L->next;
    int count = 0;
    while (p) {
        p=p->next;
        count++;
    }
    return count;
}
//获取链表第一个元素
Status GetElemFirst(LinkList L,ElemType &first)
{
    int i=1;
    LinkList p;
    p=L->next;
    int j=1;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i)
        return 0;
//    return *p->data.name;
    first=p->data;
    return 1;
}
//获取链表最后一个元素
Status GetElemLeast(LinkList L,ElemType &least,int i)//传n给i
{

    LinkList p;
    p=L->next;
    int j=1;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i)
        return 0;
//    return *p->data.name;
    least=p->data;
    return 1;
}

int main(){
	LNode L;
	LinkList p;
	ElemType a,b,c,d,first,least;

	int n,choose;
	while(1) {
        printf("\n1.构造链表\n");
        printf("2.输入学生信息\n");
        printf("3.显示学生表信息\n");
        printf("4.根据姓名进行查找\n");
        printf("5.显示指定的位置学生信息\n");
        printf("6.在指定位置插入学生信息\n");
        printf("7.删除指定位置的学生记录\n");
        printf("8.统计学生人数\n");
        printf("9.安排就餐\n");
        printf("10二叉排序\n");
        printf("11.退出\n\n");
		printf("请选择：");
		scanf("%d",&choose);
		if(choose==11) break;
		switch(choose){
			case 1:if(InitList(p))
			           printf("成功建立链表\n");
			        else
					   printf("失败");
					break;
			case 2:	printf("请输入要录入的学生人数:");
					scanf("%d",&n);
					for(int i=1;i<=n;i++)
					{
						printf("第%d个学生:\n",i);
						Input(&a);
						ListInsert(&L,i,a);
					}
					break;
			case 3:for(int i=1;i<=n;i++)
					{
						GetElem(&L,i,b);
						Output(&b);
					}
					break;
			case 4:	char str[15];
			        int d6;
					printf("请输入要查找的学生姓名:");
					scanf("%s",str);
					if(Search(L,str,p)){
					    d6=Search(L,str,p);
                        Output(&(p->data));
                        printf("位置：%d",d6);
					}

					else
						printf("没有此学生信息！\n");
					break;
			case 5:printf("请输入要查询的位置:");
					int d1;
					scanf("%d",&d1);
					GetElem(&L,d1,c);
					Output(&c);
					break;
			case 6:	printf ("请输入要插入的位置:");
					int d2;
					scanf("%d",&d2);
					printf("请输入学生信息:\n");
					Input(&c);
					if(ListInsert(&L,d2,c))
					{
						n++;
						puts("插入成功");
					}
					else
					{
						puts("插入失败");
					}
					break;
			case 7:printf("请输入要删除的位置:");
					int d3;
					scanf("%d",&d3);
					if(ListDelete(&L,d3))
					{
						n--;
						puts("删除成功");
					}
					else
					{
						puts("删除失败");
					}
					break;
			case 8:printf("已录入的学生个数为:%d\n\n",n);
				   break;
            case 9:printf("安排就餐\n");
                    int d4;
                    d4=ListDeleteNUM1(&L);
                    if (d4)
                    {
                        n--;
                        puts("安排就餐成功");


                    } else{
                        puts("安排就餐失败");
                    }
                    break;
            case 10:printf("二叉排序结果");
//                    scanf("%d", &m);
                    BiTree root;
                    int a[maxsize], i;
                    key = 1;
                    root = InitBiTree();
//                    scanf("%d", &root->data);
                    a[0]=L.next->data.no;
                    root->data=a[0];
                    LinkList p;
                    p=L.next;

                    for (i = 1; i <= n - 1; i++)
                    {
                        p=p->next;
//                        scanf("%d", &a[i]);
                        a[i]=p->data.no;
                        CreatBiTree(root, a[i]);
//                        L.next->data=L.next->data;

                    }
                    midPrint(root);
                    printf("\n");
                    break;
		}
		int size;
		size=SListSize(&L);
		GetElemFirst(&L,first);
		GetElemLeast(&L,least,n);
		printf("\n");
        State(size,&first,&least);
	}
	return 0;
}
