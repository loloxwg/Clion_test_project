#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STR_LEN 20
#define MAX_STUDENT_NUM 10
/*单一结构体
 * v1.0
 * 实现了二分查找
 * 插入排序
 * 单结构体和多结构体的插入排序有些小不同
 * 调试了很久的在多结构体
 * 以后可以看看
 */
/*定义Student结构体
    参数：
    id:学号
    name:姓名
    phone：电话号码
*/
typedef struct student{
    int id;
    char name[20];
    int phone;
}STUDENT;
//插入学生信息//
int Insert(STUDENT student[],int num);
//打印学生信息
void PrintLine(STUDENT student[],int num);
//插入排序
void InsertionSort(STUDENT student[],int n);
//按学号进行二分查找
int BinSearch(STUDENT student[],int student_id ,int num);
//查询学生信息
int Search(STUDENT student[],char student_name[]);
//删除学生信息
int Delete(STUDENT student[],int student_id);
//
void Output(STUDENT student[],int i);
int main(){
    STUDENT a[MAX_STUDENT_NUM];
    STUDENT student;
    int res,num,student_id;
    char student_name[20];
    int command;
    char home[]="********************\n"
                "1.Insert student\n"
                "2.Del student\n"
                "3.Search student\n"
                "4.Display all student\n"
                "5.exit\n"
                "6.BinSearch\n";

    while(1){
        printf("%s",home);
        scanf("%d",&command);
        fflush(stdin);
        switch(command){
            case 1:
                printf("输入需要插入的学生数量：\n");
                scanf("%d",&num);
                fflush(stdin);
                if(num>MAX_STUDENT_NUM){
                    printf("Exceeds the maximum\n");
                    continue;
                }
                res=Insert(a,num);
                if(res==2){
                    printf("success!\n");
                }else{
                    printf("false!\n");
                }
                break;
            case 2:
                printf("input the student id you want to del:\n");
                scanf("%d",&student_id);
                fflush(stdin);
                res=BinSearch(a,student_id,num);
                if(res==-1){
                    printf("the student is not exist\n");
                }else{
                    Delete(a,res);
                    num=num-1;
                }
                break;
            case 3:
                printf("input the student name you want to search\n");
                scanf("%19s",student_name);
                fflush(stdin);
                res=Search(a,student_name);
                if(res==-1){
                    printf("the student is not exist\n");
                }else{
                    printf("该学生位于：%d\n",res);
                    Output(a,res-1);
                }
                break;
            case 4:
                PrintLine(a,num);
                break;
            case 5:
                return 0;
            case 6:
                printf("输入你要查找的学生的 id\n");
                scanf("%d",&student_id);
                fflush(stdin);
                InsertionSort(a,num);
                res=BinSearch(a,student_id,num);
                if(res==-1){
                    printf("the student is not exist\n");
                }else{
                    printf("该学生位于：%d\n",res);
                    Output(a,res-1);
                }
                break;
            default :
                printf("input error!\n");
                break;
        }


    }



}
int Insert(STUDENT student[],int num){
    int i;
    int res;
    for(i=0;i<=num-1;i++){
        printf("input the student id:\n");
        res=scanf("%d",&student[i].id);
        fflush(stdin);
        if(res==0){
            printf("error!input again\n");
            res=scanf("%d",&student[i].id);
        }
        printf("input the student name:\n");
        scanf("%s",&student[i].name);
        printf("input the student phone\n");
        scanf("%d",&student[i].phone);
        fflush(stdin);
        if(res==0){
            printf("error!input again\n");
            res=scanf("%d",&student[i].id);
        }

    }
    return 2;
}
void PrintLine(STUDENT student[],int num){
    int i;
    if(num==0){
        printf("the student array is null\n");
    }else{
        for(i=0;i<num;i++){

            printf("学号:%d,名字:%s,电话:%d",student[i].id,student[i].name,student[i].phone);
            printf("\n");

        }


    }
}

void Output(STUDENT student[],int i)
{
    printf("姓名:%-20s\n学号:%-10d\n电话:%-10.2d\n\n",student[i].name,student[i].id,student[i].phone);
}
int Search(STUDENT student[],char student_name[]){
    int i;
    for(i=0;i<=MAX_STUDENT_NUM;i++){
        if(strcmp(student[i].name,student_name)==0){
            return i+1;
        }
    }
    return -1;
}
void InsertionSort(STUDENT student[],int n)
{

    for (int i = 0; i < n; i++)
    {
        int temp=student[i].id;
        int j;
        for ( j = i-1; j >= 0&&student[j].id>temp; j--)
        {
            student[j+1].id=student[j].id;
        }
        student[j+1].id=temp;

    }


}
int BinSearch(STUDENT student[],int student_id,int num )
{
    int low=0;
    int high=num-1;
    int mid;

    while (low<=high)
    {
        // mid=(high+low)/2;
        //防御式编程实现防止在加法运算low+high溢出
        //这里改写成减法
        //如果数组很大，low+high的和大于有符号整数的极限值
        //就会发生溢出，使mid成为一个负数
        mid=low+(high-low)/2;
        if (student_id>student[mid].id)
        {
            low=low+1;
        }
        else if (student_id<student[mid].id)
        {
            high=high-1;
        }
        else return mid+1;
    }
    return -1;
}

int Delete(STUDENT student[],int student_id){
    int j;
    for(j=student_id;j<=MAX_STUDENT_NUM;j++){
        student[j-1].id=student[j].id;
        *student[j-1].name=*student[j].name;
        student[j-1].phone=student[j].phone;
    }
    printf("success!\n");
    return 1;

}
