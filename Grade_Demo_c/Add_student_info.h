#ifndef ADD_STUDENT_INFO_H_INCLUDED
#define ADD_STUDENT_INFO_H_INCLUDED


#include <stdio.h>

struct _student
{
    /** ѧ����ѧ�� */
    long long id;
    /** ѧ�������� */
    char name[20];
    /** ѧ�����ĳɼ� */
    int score_chain;
    /** ѧ����ѧ�ɼ� */
    int score_math;
    /** ѧ��C���Գɼ� */
    int score_c;
    /** ָ����һ���ռ��ָ�� */
    struct _student * next;
};
/** ѧ����Ϣ�� */
typedef struct _student Student;


/** ����ѧ������ */
Student * CreateStudentLink();

/** ��ʾ�������� */
void Show_student( Student * );










#endif // ADD_STUDENT_INFO_H_INCLUDED
