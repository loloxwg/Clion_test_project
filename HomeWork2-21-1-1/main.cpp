#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
//������ʽ�洢��ʳ���Ŷӳ������
#define maxsize 10001
/*����������*/
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
        else if (m <= q->data) //����һ��else��һ�����ں�
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
BiTree InitBiTree() //��ʼ��ͷ���
{
    BiTree root;
    root = (BiTree)malloc(sizeof(BiTNode));
    root->lchild = NULL;
    root->rchild = NULL;
    return root;
}
void midPrint(BiTree root) //�������
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

/*��ʽ�洢*/
typedef int Status;

//ѧ����Ϣ����
typedef struct {
    int no;   //��������
    char name[20]; //����
//    double price;     //�ɼ�
}student;

typedef student ElemType;

//����洢�ṹ
typedef struct LNode{
    ElemType   data;       //������
    struct LNode  *next;   //ָ����
}LNode,*LinkList;

//�����ʼ��
Status InitList(LinkList &L){
	L=new LNode;
	L->next=NULL;
	return 1;
}
//��ʾѧ������Ϣ
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
// �������ֽ��в���
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
// ��ָ��λ�ò���ĳ��ѧ������Ϣ
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
 // ɾ��ָ��λ�õ�ѧ����Ϣ
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
	printf("����:");	scanf("%s",e->name);
	printf("����:");	scanf("%d",&e->no);
//	printf("�ɼ�:");	scanf("%lf",&e->price);
	printf("�������\n\n");
}

void Output(ElemType *e)
{
	printf("����:%-20s\n����:%-10d\n\n",e->name,e->no);
}
void State(int size,ElemType *first,ElemType *least){
    printf("��ǰ�Ŷ�������%d ",size);
    printf("���ף�%s ",first->name);
    printf("��β��%s ",least->name);
}
//��ȡ������Ч�ڵ�ĸ���
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
//��ȡ�����һ��Ԫ��
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
//��ȡ�������һ��Ԫ��
Status GetElemLeast(LinkList L,ElemType &least,int i)//��n��i
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
        printf("\n1.��������\n");
        printf("2.����ѧ����Ϣ\n");
        printf("3.��ʾѧ������Ϣ\n");
        printf("4.�����������в���\n");
        printf("5.��ʾָ����λ��ѧ����Ϣ\n");
        printf("6.��ָ��λ�ò���ѧ����Ϣ\n");
        printf("7.ɾ��ָ��λ�õ�ѧ����¼\n");
        printf("8.ͳ��ѧ������\n");
        printf("9.���žͲ�\n");
        printf("10��������\n");
        printf("11.�˳�\n\n");
		printf("��ѡ��");
		scanf("%d",&choose);
		if(choose==11) break;
		switch(choose){
			case 1:if(InitList(p))
			           printf("�ɹ���������\n");
			        else
					   printf("ʧ��");
					break;
			case 2:	printf("������Ҫ¼���ѧ������:");
					scanf("%d",&n);
					for(int i=1;i<=n;i++)
					{
						printf("��%d��ѧ��:\n",i);
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
					printf("������Ҫ���ҵ�ѧ������:");
					scanf("%s",str);
					if(Search(L,str,p)){
					    d6=Search(L,str,p);
                        Output(&(p->data));
                        printf("λ�ã�%d",d6);
					}

					else
						printf("û�д�ѧ����Ϣ��\n");
					break;
			case 5:printf("������Ҫ��ѯ��λ��:");
					int d1;
					scanf("%d",&d1);
					GetElem(&L,d1,c);
					Output(&c);
					break;
			case 6:	printf ("������Ҫ�����λ��:");
					int d2;
					scanf("%d",&d2);
					printf("������ѧ����Ϣ:\n");
					Input(&c);
					if(ListInsert(&L,d2,c))
					{
						n++;
						puts("����ɹ�");
					}
					else
					{
						puts("����ʧ��");
					}
					break;
			case 7:printf("������Ҫɾ����λ��:");
					int d3;
					scanf("%d",&d3);
					if(ListDelete(&L,d3))
					{
						n--;
						puts("ɾ���ɹ�");
					}
					else
					{
						puts("ɾ��ʧ��");
					}
					break;
			case 8:printf("��¼���ѧ������Ϊ:%d\n\n",n);
				   break;
            case 9:printf("���žͲ�\n");
                    int d4;
                    d4=ListDeleteNUM1(&L);
                    if (d4)
                    {
                        n--;
                        puts("���žͲͳɹ�");


                    } else{
                        puts("���žͲ�ʧ��");
                    }
                    break;
            case 10:printf("����������");
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
