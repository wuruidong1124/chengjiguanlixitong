#ifndef ADD_SUBJECT_H_INCLUDED
#define ADD_SUBJECT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>







/** 使用了链表技术的科目结构体 */
struct _subject
{
    /** 科目的序号 */
    int id;
    /** 科目名称 */
    char subject_name[20];

    int score;
    /** 指向下一个科目的指针*/
    struct _subject * pNext;  //指向下一个元素的指针
};

typedef struct _subject Subject;

//1、向链表中添加元素
//2、显示链表中所有的元素（遍历链表）
//3、向链表的首位置插入新元素
//4、查找链表中是否有该元素
//5、修改链表中指定的某个元素
//6、删除链表中指定的某个元素

/** 通过学科名来修改该学科的信息 */
void Recompose_subject_by_name(Subject * subject_list , char name[]);

/** 通过ID编号来修改该学科的信息 */
void Recompose_subject_by_id(Subject * subject_list , int id);

/** 通过学科名来查找是否有该学科 */
int Find_subject_by_name(Subject * subject_list , char name[]);

/** 通过ID编号来查找是否有该学科 */
int Find_subject_by_id(Subject * subject_list , int id );

/** 通过学科名来删除学科 */
void Delete_subject_by_name(Subject * subject_list , char name[]);

/** 通过ID编号来删除学科 */
void  Delete_subject_by_id(Subject * subject_list , int id);

/** 在学科链表的末尾添加元素 */
void Add_end_subjict(Subject * subject_list);

/** 显示学科链表类容 */
void Show_Subject(Subject * subject_list);

/** 初始化链表，创造一个课程链表 */
Subject * CreateSubjectLink();

/** 系统默认的科目，方便尝试后面的类容 */
Subject * CreateSubjectLink_0();



//1、增添科目
//2、删除科目
//3、修改科目
//4、查找科目




















































#endif // ADD_SUBJECT_H_INCLUDED
