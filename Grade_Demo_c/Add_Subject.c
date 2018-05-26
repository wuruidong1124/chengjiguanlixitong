#include "Add_Subject.h"
#include <string.h>
#include <stdio.h>

void Recompose_subject_by_name(Subject * subject_list , char name[])
{
    int judje = Find_subject_by_name(subject_list , name);

    if(judje == 0)
    {
        printf("没有改科目，无法修改！");
    }
    if(judje == 1)
    {
        Subject * temp_subject;
        temp_subject = (Subject *)malloc(sizeof(Subject));
        temp_subject = subject_list;
        while(temp_subject != NULL)
        {
            if(strcmp(temp_subject->subject_name , name) == 0)
            {
                printf("请输入新的编号:");
                scanf("%d",&temp_subject->id);
                printf("请输入新的学科:");
                scanf("%s",temp_subject->subject_name);
                break;
            }
            temp_subject = temp_subject->pNext;
        }
    }

}


void Recompose_subject_by_id(Subject * subject_list , int id)
{
    //先判断该链表中是否有该科目
    int judje = Find_subject_by_id(subject_list , id);
    if(judje == 0)
    {
        printf("没有改科目，无法修改！");
    }
    if(judje == 1)
    {
        //将指针指向该元素并对其进行修改
        Subject * temp_subject;
        temp_subject = (Subject *)malloc(sizeof(Subject));
        temp_subject = subject_list;
        while(temp_subject != NULL)
        {
            if(temp_subject->id == id)
            {
                printf("请输入新的编号:");
                scanf("%d",&temp_subject->id);
                printf("请输入新的学科:");
                scanf("%s",temp_subject->subject_name);
            }
            temp_subject = temp_subject->pNext;
        }
    }


}
int Find_subject_by_name(Subject * subject_list , char name[])
{
    //创建一个指针，并接收传进来的指针，防止修改原指针
    Subject * find_subject ;
    find_subject = (Subject * )malloc(sizeof(Subject));
    find_subject = subject_list;
    int n = 0;
    while(find_subject != NULL)
    {
        //int strcmp(char *a, char *b);
//该函数会对a和b的每个字符，按照ascii码值比较，如果二者完全相同返回0；如果a的ascii码值先出现较大者，会返回1；否则返回-1
        if(strcmp(find_subject->subject_name ,name )== 0)
        {
            n = 1;
            printf("找到了%s该学科!\n",find_subject->subject_name);
            return 1;
        }
        find_subject = find_subject->pNext;
    }
    if(n==0)
    {
        printf("抱歉，没有找到%s这门学科！！！",name);
        return 0;
    }
    return n;
}
int Find_subject_by_id(Subject * subject_list , int id )
{
    //创建一个指针，并接收传进来的指针，防止修改原指针
    Subject * find_subject ;
    find_subject = (Subject * )malloc(sizeof(Subject));
    find_subject = subject_list;
    int n = 0;
    while(find_subject != NULL)
    {
        if(find_subject->id == id)
        {
            n = 1;
            printf("找到了该元素，且该ID对应的学科为：%s\n",find_subject->subject_name);
//            return 1;
        }
        //循环变量
        find_subject = find_subject->pNext;
    }
    if(n==0)
    {
        printf("抱歉，没有找到你要找的科目（该链表中不存在该科目）！！！");
//        return 0 ;
    }
    return n;
}
void Delete_subject_by_name(Subject * subject_list , char name[])
{
    Subject * prev_subject;
    Subject * current_subject;
    prev_subject = current_subject = subject_list;

    while(current_subject != NULL)
    {
        if(strcmp(current_subject->subject_name , name) == 0)
        {
            prev_subject->pNext = current_subject->pNext;
            printf("找到该学科（%d—%s），并将其空间释放了！！！\n",current_subject->id , current_subject->subject_name);
            free(current_subject);

        }
        prev_subject = current_subject;
        current_subject = current_subject->pNext;
    }
}
void  Delete_subject_by_id(Subject * subject_list , int id)
{
    //先建立两个指针，分别指向要删除的元素和要删除元素的前一个元素
    Subject * prev_sbuject;
    Subject * current_subject;
//    prev_sbuject = (Subject * )malloc(sizeof(Subject));
//    current_subject = (Subject * )malloc(sizeof(Subject));
    //开始时需将两个指针指向传进来的指针
    prev_sbuject = current_subject = subject_list;
    //循环来查找需要删除的编号；当前指针指向空时结束循环
    int n=0;
    while(current_subject != NULL)
    {
        if(current_subject->id == id)
        {
            //此时找到需要删除的元素了，将前一个元素的p_next指向该元素的p-next
            prev_sbuject->pNext = current_subject->pNext;
            //将当前指向的指针内存释放掉
            free(current_subject);
            n++;
            printf("找到了%d个该ID，并成功将其释放！！！\n",n);
            break;
        }
        //循环变量
        prev_sbuject = current_subject;
        current_subject = current_subject->pNext;
    }
//    return subject_list;

}
/** 在尾元素位置添加新的科目 */
void Add_end_subjict(Subject * subject_list)
{
    Subject * p_new;
    p_new = (Subject * )malloc(sizeof(Subject));
    p_new->pNext = NULL;
    //输入新的元素
    printf("请输入新科目的编号：");
    scanf("%d",&p_new->id);
    printf("请输入新科目的名称：");
    scanf("%s",p_new->subject_name);
    //将这个元素添加在链表的末尾     ,先要将指针移动到末尾
    while(subject_list->pNext != NULL)
    {
        subject_list = subject_list->pNext;
    }
    subject_list->pNext = p_new;
    subject_list = p_new;
    printf("成功添加了一个新的科目！！！\n");

}
void Show_Subject(Subject * subject_list)
{
    //建立一个新的指针来接收传进来的指针，防止原指针修改
//    Subject * temp_subject = (Subject * )malloc(sizeof(Subject));
    Subject * temp_subject = subject_list;
    printf("编号\t名称\n");
    for( ;temp_subject != NULL ; temp_subject = temp_subject->pNext)
    {
        printf("%d\t%s\n",temp_subject->id,temp_subject->subject_name);
    }
}
Subject * CreateSubjectLink()
{
    /** 链表首元素的指针 */
    Subject * p_head = NULL;
    /** 链表尾元素的指针 */
    Subject * p_end;
    /** 链表当前元素的指针(暂时保存输入的元素，以便插入链表的末尾 */
    Subject * p_new;
    /** 链表中元素的个数(有多少门科目） */
    int subject_count = 0;
    while(1)
    {

//        创建新元素，为新元素赋空间
        p_new = (Subject * )malloc(sizeof(Subject));
        p_new->pNext = NULL;   //新元素的下一个元素一定是NULL，所以提前赋值，避免以往遗忘
        printf("请输入第%d门课程的编号：",subject_count+1);
        scanf("%d",&p_new->id);
        printf("请输入第%d门课程的名称：",subject_count+1);
        scanf("%s",p_new->subject_name);
        subject_count ++;

        //当录入的元素只有一个时，链表的首尾指针同时指向这个元素
        if(subject_count == 1)
        {
            p_head = p_new;
            p_end  = p_new;
            printf("链表中成功添加了%d个元素！！！\n",subject_count);

        }
        else
        {
            //先增加新的元素  每次在链表的尾部增加新元素
            p_end->pNext = p_new;
            //在设置新的尾巴  设置链表的 新尾巴（此时的尾巴为新输入进来的 元素）
            p_end = p_new;
            printf("链表中成功添加了%d个元素！！！\n",subject_count);
        }

        //退出选择
        char esc;
        printf("是否要退出添加科目？（输入0退出，按任意键继续输入）:");
        scanf("%s",&esc);
        if(esc == '0')
        {
            printf("一共录入了%d门课程！\n",subject_count);
            break;
        }
        else
        {
            printf("继续录入：\n");
        }
    }

    //返回链表的头元素指针，即返回了整个列CranteLinkedList表的数据结构
    return p_head;
}

Subject * CreateSubjectLink_0()
{
    Subject * s1 ;
    Subject * s2 ;
    Subject * s3 ;
    Subject * s4 ;
    Subject * s5 ;
    Subject * s6 ;
    s1 = (Subject * )malloc(sizeof(Subject));
    s2 = (Subject * )malloc(sizeof(Subject));
    s3 = (Subject * )malloc(sizeof(Subject));
    s4 = (Subject * )malloc(sizeof(Subject));
    s5 = (Subject * )malloc(sizeof(Subject));
    s6 = (Subject * )malloc(sizeof(Subject));
    s1->id = 1;
    strcpy(s1->subject_name , "语文");
    s2->id = 2;
    strcpy(s2->subject_name , "数学");
    s3->id = 3;
    strcpy(s3->subject_name , "英语");
    s4->id = 4;
    strcpy(s4->subject_name , "物理");
    s5->id = 5;
    strcpy(s5->subject_name , "化学");
    s6->id = 6;
    strcpy(s6->subject_name , "生物");

    s1->pNext = s2;
    s2->pNext = s3;
    s3->pNext = s4;
    s4->pNext = s5;
    s5->pNext = s6;
    s6->pNext = NULL;

//    printf("编号\t名称\n");
//    Subject * ptr_subject = s1;  //指向一号怪物的指针
//    while(ptr_subject != NULL)   //当有下一个元素的时候
//    {
//        printf("%d\t%s\n",ptr_subject->id,ptr_subject->subject_name);
//        ptr_subject = ptr_subject->pNext;//关键步骤，让当前指针指向下一个元素
//    }
    return s1;
}









