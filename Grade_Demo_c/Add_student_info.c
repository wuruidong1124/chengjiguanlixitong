#include "Add_student_info.h"
#include <stdio.h>
#include <string.h>



void Show_student(Student * student_list)
{
    printf("学号\t\t姓名\t语文\t数学\tC语言\n");
    while(student_list != NULL)
    {

        printf("%lld\t%s\t%d\t%d\t%d\n",student_list->id , student_list->name ,
                student_list->score_chain , student_list->score_math , student_list->score_c );

        student_list = student_list->next;
    }
}

Student * CreateStudentLink()
{
    Student * p_head = NULL;
    Student * p_end;
    Student * p_new;

//    p_head = (Student *)malloc(sizeof(Student));
//    p_end = (Student *)malloc(sizeof(Student));

    int student_const = 0;
    while(1)
    {
        //重新给p_head赋空间
        p_new = (Student *)malloc(sizeof(Student));
        p_new->next = NULL;
        printf("请输入学生的学号：");
        scanf("%lld",&p_new->id);
        //自理定退出条件，当学生的学号为负数时退出
        if(p_new->id < 0)
        {
            break;
        }
        printf("请输入该学生的姓名：");
        scanf("%s",p_new->name);
        printf("请输入该学生的各科成绩（语文、数学、C语言）");
        scanf("%d %d %d",&p_new->score_chain , &p_new->score_math , &p_new->score_c);

        student_const ++;
        if(student_const = 1)
        {
            p_head = p_new;
            p_end = p_new;
        }
        else
        {
            p_end->next = p_new;
            p_end = p_new;
        }


    }



    return p_head;
}








