#include "Add_student_info.h"
#include <stdio.h>
#include <string.h>



void Show_student(Student * student_list)
{
    printf("ѧ��\t\t����\t����\t��ѧ\tC����\n");
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
        //���¸�p_head���ռ�
        p_new = (Student *)malloc(sizeof(Student));
        p_new->next = NULL;
        printf("������ѧ����ѧ�ţ�");
        scanf("%lld",&p_new->id);
        //�����˳���������ѧ����ѧ��Ϊ����ʱ�˳�
        if(p_new->id < 0)
        {
            break;
        }
        printf("�������ѧ����������");
        scanf("%s",p_new->name);
        printf("�������ѧ���ĸ��Ƴɼ������ġ���ѧ��C���ԣ�");
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








