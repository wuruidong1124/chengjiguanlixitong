#include "Add_Subject.h"
#include <string.h>
#include <stdio.h>

void Recompose_subject_by_name(Subject * subject_list , char name[])
{
    int judje = Find_subject_by_name(subject_list , name);

    if(judje == 0)
    {
        printf("û�иĿ�Ŀ���޷��޸ģ�");
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
                printf("�������µı��:");
                scanf("%d",&temp_subject->id);
                printf("�������µ�ѧ��:");
                scanf("%s",temp_subject->subject_name);
                break;
            }
            temp_subject = temp_subject->pNext;
        }
    }

}


void Recompose_subject_by_id(Subject * subject_list , int id)
{
    //���жϸ��������Ƿ��иÿ�Ŀ
    int judje = Find_subject_by_id(subject_list , id);
    if(judje == 0)
    {
        printf("û�иĿ�Ŀ���޷��޸ģ�");
    }
    if(judje == 1)
    {
        //��ָ��ָ���Ԫ�ز���������޸�
        Subject * temp_subject;
        temp_subject = (Subject *)malloc(sizeof(Subject));
        temp_subject = subject_list;
        while(temp_subject != NULL)
        {
            if(temp_subject->id == id)
            {
                printf("�������µı��:");
                scanf("%d",&temp_subject->id);
                printf("�������µ�ѧ��:");
                scanf("%s",temp_subject->subject_name);
            }
            temp_subject = temp_subject->pNext;
        }
    }


}
int Find_subject_by_name(Subject * subject_list , char name[])
{
    //����һ��ָ�룬�����մ�������ָ�룬��ֹ�޸�ԭָ��
    Subject * find_subject ;
    find_subject = (Subject * )malloc(sizeof(Subject));
    find_subject = subject_list;
    int n = 0;
    while(find_subject != NULL)
    {
        //int strcmp(char *a, char *b);
//�ú������a��b��ÿ���ַ�������ascii��ֵ�Ƚϣ����������ȫ��ͬ����0�����a��ascii��ֵ�ȳ��ֽϴ��ߣ��᷵��1�����򷵻�-1
        if(strcmp(find_subject->subject_name ,name )== 0)
        {
            n = 1;
            printf("�ҵ���%s��ѧ��!\n",find_subject->subject_name);
            return 1;
        }
        find_subject = find_subject->pNext;
    }
    if(n==0)
    {
        printf("��Ǹ��û���ҵ�%s����ѧ�ƣ�����",name);
        return 0;
    }
    return n;
}
int Find_subject_by_id(Subject * subject_list , int id )
{
    //����һ��ָ�룬�����մ�������ָ�룬��ֹ�޸�ԭָ��
    Subject * find_subject ;
    find_subject = (Subject * )malloc(sizeof(Subject));
    find_subject = subject_list;
    int n = 0;
    while(find_subject != NULL)
    {
        if(find_subject->id == id)
        {
            n = 1;
            printf("�ҵ��˸�Ԫ�أ��Ҹ�ID��Ӧ��ѧ��Ϊ��%s\n",find_subject->subject_name);
//            return 1;
        }
        //ѭ������
        find_subject = find_subject->pNext;
    }
    if(n==0)
    {
        printf("��Ǹ��û���ҵ���Ҫ�ҵĿ�Ŀ���������в����ڸÿ�Ŀ��������");
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
            printf("�ҵ���ѧ�ƣ�%d��%s����������ռ��ͷ��ˣ�����\n",current_subject->id , current_subject->subject_name);
            free(current_subject);

        }
        prev_subject = current_subject;
        current_subject = current_subject->pNext;
    }
}
void  Delete_subject_by_id(Subject * subject_list , int id)
{
    //�Ƚ�������ָ�룬�ֱ�ָ��Ҫɾ����Ԫ�غ�Ҫɾ��Ԫ�ص�ǰһ��Ԫ��
    Subject * prev_sbuject;
    Subject * current_subject;
//    prev_sbuject = (Subject * )malloc(sizeof(Subject));
//    current_subject = (Subject * )malloc(sizeof(Subject));
    //��ʼʱ�轫����ָ��ָ�򴫽�����ָ��
    prev_sbuject = current_subject = subject_list;
    //ѭ����������Ҫɾ���ı�ţ���ǰָ��ָ���ʱ����ѭ��
    int n=0;
    while(current_subject != NULL)
    {
        if(current_subject->id == id)
        {
            //��ʱ�ҵ���Ҫɾ����Ԫ���ˣ���ǰһ��Ԫ�ص�p_nextָ���Ԫ�ص�p-next
            prev_sbuject->pNext = current_subject->pNext;
            //����ǰָ���ָ���ڴ��ͷŵ�
            free(current_subject);
            n++;
            printf("�ҵ���%d����ID�����ɹ������ͷţ�����\n",n);
            break;
        }
        //ѭ������
        prev_sbuject = current_subject;
        current_subject = current_subject->pNext;
    }
//    return subject_list;

}
/** ��βԪ��λ������µĿ�Ŀ */
void Add_end_subjict(Subject * subject_list)
{
    Subject * p_new;
    p_new = (Subject * )malloc(sizeof(Subject));
    p_new->pNext = NULL;
    //�����µ�Ԫ��
    printf("�������¿�Ŀ�ı�ţ�");
    scanf("%d",&p_new->id);
    printf("�������¿�Ŀ�����ƣ�");
    scanf("%s",p_new->subject_name);
    //�����Ԫ������������ĩβ     ,��Ҫ��ָ���ƶ���ĩβ
    while(subject_list->pNext != NULL)
    {
        subject_list = subject_list->pNext;
    }
    subject_list->pNext = p_new;
    subject_list = p_new;
    printf("�ɹ������һ���µĿ�Ŀ������\n");

}
void Show_Subject(Subject * subject_list)
{
    //����һ���µ�ָ�������մ�������ָ�룬��ֹԭָ���޸�
//    Subject * temp_subject = (Subject * )malloc(sizeof(Subject));
    Subject * temp_subject = subject_list;
    printf("���\t����\n");
    for( ;temp_subject != NULL ; temp_subject = temp_subject->pNext)
    {
        printf("%d\t%s\n",temp_subject->id,temp_subject->subject_name);
    }
}
Subject * CreateSubjectLink()
{
    /** ������Ԫ�ص�ָ�� */
    Subject * p_head = NULL;
    /** ����βԪ�ص�ָ�� */
    Subject * p_end;
    /** ����ǰԪ�ص�ָ��(��ʱ���������Ԫ�أ��Ա���������ĩβ */
    Subject * p_new;
    /** ������Ԫ�صĸ���(�ж����ſ�Ŀ�� */
    int subject_count = 0;
    while(1)
    {

//        ������Ԫ�أ�Ϊ��Ԫ�ظ��ռ�
        p_new = (Subject * )malloc(sizeof(Subject));
        p_new->pNext = NULL;   //��Ԫ�ص���һ��Ԫ��һ����NULL��������ǰ��ֵ��������������
        printf("�������%d�ſγ̵ı�ţ�",subject_count+1);
        scanf("%d",&p_new->id);
        printf("�������%d�ſγ̵����ƣ�",subject_count+1);
        scanf("%s",p_new->subject_name);
        subject_count ++;

        //��¼���Ԫ��ֻ��һ��ʱ���������βָ��ͬʱָ�����Ԫ��
        if(subject_count == 1)
        {
            p_head = p_new;
            p_end  = p_new;
            printf("�����гɹ������%d��Ԫ�أ�����\n",subject_count);

        }
        else
        {
            //�������µ�Ԫ��  ÿ���������β��������Ԫ��
            p_end->pNext = p_new;
            //�������µ�β��  ��������� ��β�ͣ���ʱ��β��Ϊ����������� Ԫ�أ�
            p_end = p_new;
            printf("�����гɹ������%d��Ԫ�أ�����\n",subject_count);
        }

        //�˳�ѡ��
        char esc;
        printf("�Ƿ�Ҫ�˳���ӿ�Ŀ��������0�˳�����������������룩:");
        scanf("%s",&esc);
        if(esc == '0')
        {
            printf("һ��¼����%d�ſγ̣�\n",subject_count);
            break;
        }
        else
        {
            printf("����¼�룺\n");
        }
    }

    //���������ͷԪ��ָ�룬��������������CranteLinkedList������ݽṹ
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
    strcpy(s1->subject_name , "����");
    s2->id = 2;
    strcpy(s2->subject_name , "��ѧ");
    s3->id = 3;
    strcpy(s3->subject_name , "Ӣ��");
    s4->id = 4;
    strcpy(s4->subject_name , "����");
    s5->id = 5;
    strcpy(s5->subject_name , "��ѧ");
    s6->id = 6;
    strcpy(s6->subject_name , "����");

    s1->pNext = s2;
    s2->pNext = s3;
    s3->pNext = s4;
    s4->pNext = s5;
    s5->pNext = s6;
    s6->pNext = NULL;

//    printf("���\t����\n");
//    Subject * ptr_subject = s1;  //ָ��һ�Ź����ָ��
//    while(ptr_subject != NULL)   //������һ��Ԫ�ص�ʱ��
//    {
//        printf("%d\t%s\n",ptr_subject->id,ptr_subject->subject_name);
//        ptr_subject = ptr_subject->pNext;//�ؼ����裬�õ�ǰָ��ָ����һ��Ԫ��
//    }
    return s1;
}









