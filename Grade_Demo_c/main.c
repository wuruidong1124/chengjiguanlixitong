#include <stdio.h>
#include <stdlib.h>
//#include "Add_Subject.h"
#include "Add_student_info.h"
int main()
{
//    Subject * subject_link;
//    subject_link = CreateSubjectLink_0();
//    Show_Subject(subject_link);

//    printf("���Ԫ�أ�");
//    Add_end_subjict(subject_link);
//    Show_Subject(subject_link);
//    Show_Subject(subject_link);

//    printf("��������Ҫɾ����Ŀ��ID��");
//    int id;
//    scanf("%d",&id);
//    Delete_subject(subject_link , id);
//    Show_Subject(subject_link);

//    printf("������Ҫɾ��ѧ�Ƶ����ƣ�");
//    char name[20];
//    scanf("%s",name);
//    Delete_subject_by_name(subject_link , name);
//    Show_Subject(subject_link);

//    printf("����������Ҫ���ҵĿ�Ŀ��ID��ţ�");
//    scanf("%d",&id);
//    Find_subject_by_id(subject_link , id);
//    Show_Subject(subject_link );

//    char a[20];
//    printf("������Ҫ���ҵ�������");
//    scanf("%s",a);
//    Find_subject_by_name(subject_link , a);

//    printf("��������Ҫ�޸ĵĿ�Ŀ�ı�ţ�");
//    int id ;
//    scanf("%d",&id);
//    Recompose_subject_by_id(subject_link , id);
//    Show_Subject(subject_link);

//    printf("������Ҫ�޸ĵ�ѧ������");
//    char name [20];
//    scanf("%s",name);
//    Recompose_subject_by_name(subject_link , name);
//    Show_Subject(subject_link);

    Student * student_list;
    student_list = (Student * )malloc(sizeof(Student));
    student_list = CreateStudentLink();
    Show_student(student_list);
    return 0;
}

//
//����Ҫ��  ��ӿ�Ŀ
//��1�����ѧ���ļ�¼
//��2����ѯѧ�����ֱ�ѧ�ź�������
//��3����ѧ���������򣨷ֱ�ƽ���ɼ��ͼ�����ɼ��Ľ���
//��4��ɾ��ѧ����¼
//��5���޸�ѧ����¼
//��6���༶�ɼ�����������ƽ���ɼ�����߷֡���ͷ֡������ʣ�
//��7�����ѧ����Ϣ��











