#ifndef ADD_SUBJECT_H_INCLUDED
#define ADD_SUBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>







/** ʹ�����������Ŀ�Ŀ�ṹ�� */
struct _subject
{
    /** ��Ŀ����� */
    int id;
    /** ��Ŀ���� */
    char subject_name[20];

    int score;
    /** ָ����һ����Ŀ��ָ��*/
    struct _subject * pNext;  //ָ����һ��Ԫ�ص�ָ��
};

typedef struct _subject Subject;

//1�������������Ԫ��
//2����ʾ���������е�Ԫ�أ���������
//3�����������λ�ò�����Ԫ��
//4�������������Ƿ��и�Ԫ��
//5���޸�������ָ����ĳ��Ԫ��
//6��ɾ��������ָ����ĳ��Ԫ��

/** ͨ��ѧ�������޸ĸ�ѧ�Ƶ���Ϣ */
void Recompose_subject_by_name(Subject * subject_list , char name[]);

/** ͨ��ID������޸ĸ�ѧ�Ƶ���Ϣ */
void Recompose_subject_by_id(Subject * subject_list , int id);

/** ͨ��ѧ�����������Ƿ��и�ѧ�� */
int Find_subject_by_name(Subject * subject_list , char name[]);

/** ͨ��ID����������Ƿ��и�ѧ�� */
int Find_subject_by_id(Subject * subject_list , int id );

/** ͨ��ѧ������ɾ��ѧ�� */
void Delete_subject_by_name(Subject * subject_list , char name[]);

/** ͨ��ID�����ɾ��ѧ�� */
void  Delete_subject_by_id(Subject * subject_list , int id);

/** ��ѧ�������ĩβ���Ԫ�� */
void Add_end_subjict(Subject * subject_list);

/** ��ʾѧ���������� */
void Show_Subject(Subject * subject_list);

/** ��ʼ����������һ���γ����� */
Subject * CreateSubjectLink();

/** ϵͳĬ�ϵĿ�Ŀ�����㳢�Ժ�������� */
Subject * CreateSubjectLink_0();



//1�������Ŀ
//2��ɾ����Ŀ
//3���޸Ŀ�Ŀ
//4�����ҿ�Ŀ




















































#endif // ADD_SUBJECT_H_INCLUDED
