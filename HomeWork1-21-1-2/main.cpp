#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
//˳��洢
#define MAXSIZE 100

typedef int Status;

//ѧ����Ϣ����
typedef struct {
    int no;   //8λѧ��
    char name[20]; //����
    double price;     //�ɼ�
} student;
typedef student ElemType;

//˳���洢�ṹ
typedef struct {
    ElemType *elem;
    int length;
} SqList;

//˳����ʼ��
Status InitList(SqList &L) {
    L.elem = new ElemType[MAXSIZE];
    if (!L.elem) exit(0);
    L.length = 0;
    return 1;
}
int State(SqList &L,int n){
    if (n==MAXSIZE){
        printf("״̬���Ѿ���������\n");
        return n=-1;
    } else if (n==0){
        printf("״̬��δ¼������\n");
        return n=0;
    } else{
        printf("״̬�����ܼ���¼������\n");
        return n;

    }
}
//����ѧ����Ϣ
ElemType GetElem(SqList L, int i) {
    return L.elem[i];
}

// �������ֲ���
int Search(SqList &L, char str[]) {
    for (int i = 1; i <= L.length; i++) {
        if (strcmp(L.elem[i].name, str) == 0)
            return i;
    }
    return 0;
}

//���ֲ���

int BinSearch(SqList &L, int id, int n) {
    int low = 0;
    int high = n;//
    int mid;

    while (low <= high) {
        // mid=(high+low)/2;
        //����ʽ���ʵ�ַ�ֹ�ڼӷ�����low+high���
        //�����д�ɼ���
        //�������ܴ�low+high�ĺʹ����з��������ļ���ֵ
        //�ͻᷢ�������ʹmid��Ϊһ������
        mid = low + (high - low) / 2;
        if (id > L.elem[mid].no) {
            low = low + 1;
        } else if (id < L.elem[mid].no) {
            high = high - 1;
        } else return mid;
    }
    return -1;
}

void InsertionSort(SqList &L) {

    for (int i = 1; i <= L.length; i++) {

        int temp = L.elem[i].no;
        ElemType temp1;
        temp1 = L.elem[i];
        int j;
        for (j = i - 1; j > 0 && L.elem[j].no > temp; j--) {
            L.elem[j + 1] = L.elem[j];
//           L.elem[j+1].name=L.elem[j].name;
//            strcpy(L.elem[j+1].name,L.elem[j].name);
//            L.elem[j+1].price=L.elem[j].price;
        }
        L.elem[j + 1] = temp1;
//        strcpy(L.elem[j+1].name,temp2);
//        L.elem[j+1].no=temp3;

    }

}

void InsertionSort2(SqList &L, int n) {
    int i, j;
    int temp;
    for (i = 1; i < n; i++) {
        if (L.elem[i].no < L.elem[i - 1].no) {
            temp = L.elem[i].no;

            for (j = i - 1; temp < L.elem[j].no; j--) {
                L.elem[j + 1].no = L.elem[j].no;
            }
            L.elem[j + 1].no = temp;

        }
    }

}

void InsertionSort3(SqList &L, int n) {
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = L.elem[i].no;
        for (j = i; j > 0 && L.elem[j - 1].no > temp; j--) {
            L.elem[j].no = L.elem[j - 1].no;
        }
        L.elem[j].no = temp;
    }
}

// �� iλ�ò���ĳ��ѧ������Ϣ
Status ListInsert(SqList &L, int i, ElemType e) {
    if ((i < 1) || (i > L.length + 1)) return 0;
    if (L.length == MAXSIZE) return 0;
    for (int j = L.length; j >= i; j--) {
        L.elem[j + 1] = L.elem[j];
    }
    L.elem[i] = e;
    ++L.length;
    return 1;
}

// ��˳�����ɾ�� iλ�õ�ѧ����Ϣ
Status ListDelete(SqList &L, int i) {
    if ((i < 1) || (i > L.length)) return 0;
    for (int j = i; j <= L.length; j++) {
        L.elem[j] = L.elem[j + 1];
    }
    --L.length;
    return 1;
}
Status ListDeleteNUM1(SqList &L) {
    int  i=L.length;
    if ((i < 1) || (i > L.length)) return 0;
    for (int j = i; j <= L.length; j++) {
        L.elem[j] = L.elem[j + 1];
    }
    --L.length;
    return 1;
}

void Input(ElemType *e) {
    printf("����:");
    scanf("%s", e->name);
    printf("ѧ��:");
    scanf("%d", &e->no);
    printf("�ɼ�:");
    scanf("%lf", &e->price);
    printf("�������\n\n");
}

void Output(ElemType *e) {
    printf("����:%-20s\nѧ��:%-10d\n�ɼ�:%-10.1lf\n\n", e->name, e->no, e->price);
}
void Outputnext(ElemType *e) {
    printf("����:%s ѧ��:%d �ɼ�:%.1f \n", e->name, e->no, e->price);
}
int main() {
    SqList L;
    ElemType a, b, c, d,e;

    int n, choose;
    while (1) {
        printf("\n1.����˳���\n");
        printf("2.����ѧ����Ϣ\n");
        printf("3.��ʾѧ������Ϣ\n");
        printf("4.������������˳�����\n");
        printf("5.��ʾָ����λ��ѧ����Ϣ\n");
        printf("6.��ָ��λ�ò���ѧ����Ϣ\n");
        printf("7.ɾ��ָ��λ�õ�ѧ����¼\n");
        printf("8.ɾ����ǰ��ѧ����¼\n");
        printf("9.ͳ��ѧ������\n");
        printf("10.���ֲ���ѧ�ţ�id��\n");
        printf("11.��������\n");
        printf("12.�˳�\n\n");
        printf("��ѡ��");
        scanf("%d", &choose);
        if (choose == 12) break;
        switch (choose) {
            case 1:
                if (InitList(L))
                    printf("�ɹ�����˳���\n");
                else
                    printf("ʧ��");
                break;
            case 2:
                printf("������Ҫ¼���ѧ������:");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++) {
                    printf("��%d��ѧ��:\n", i);
                    Input(&L.elem[i]);
                }
                L.length = n;
                break;
            case 3:
                for (int i = 1; i <= n; i++)//��ʾ����
                {
                    a = GetElem(L, i);
                    Output(&a);
                }
                break;
            case 4:
                char str[15];
                printf("������Ҫ���ҵ�ѧ������:");
                scanf("%s", str);
                if (Search(L, str))
                    Output(&L.elem[Search(L, str)]);
                else
                    printf("û�д�ѧ����Ϣ��\n");
                break;
            case 10:
                int idd, k1;
                printf("������Ҫ���ҵ�ѧ��id:");
                scanf("%d", &idd);

                k1 = BinSearch(L, idd, L.length);
                if (k1!=-1) {
                    printf("�ҵ���\n");
                    Output(&L.elem[k1]);
                } else {
                    printf("û�ҵ�\n");
                }
                break;
            case 11:
                printf("��������\n");
                InsertionSort(L);
                for (int i = 1; i <= n; i++)//��ʾ����
                {
                    a = GetElem(L, i);
                    Output(&a);
                }
                printf("�����������\n");
                break;
            case 5:
                printf("������Ҫ��ѯ��λ��:");
                int id1;
                scanf("%d", &id1);
                b = GetElem(L, id1);
                Output(&b);
                break;
            case 6:
                printf("������Ҫ�����λ��:");
                int id2;
                scanf("%d", &id2);
                printf("������ѧ����Ϣ:\n");
                Input(&c);
                if (ListInsert(L, id2, c)) {
                    n++;
                    puts("����ɹ�");
                } else {
                    puts("����ʧ��");
                }
                break;
            case 7:
                printf("������Ҫɾ����λ��:");
                int id3;
                scanf("%d", &id3);
                if (ListDelete(L, id3)) {
                    n--;
                    puts("ɾ���ɹ�");
                } else {
                    puts("ɾ��ʧ��");
                }
                break;
            case 8:
                if (ListDeleteNUM1(L)) {
                    n--;
                    puts("ɾ���ɹ�");
                } else {
                    puts("ɾ��ʧ��");
                }
                break;
            case 9:
                printf("��¼���ѧ������Ϊ:%d\n\n", L.length);
                break;
        }
        printf("��¼���ѧ������ %d ",L.length);
        int stateout;
        stateout=State(L,L.length);
        if (stateout!=0){
            printf("���һ��¼������ݣ�\n");
            e = GetElem(L, n);
            Outputnext(&e);
        }

    }
    return 0;
}
