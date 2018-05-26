#ifndef ADD_STUDENT_INFO_H_INCLUDED
#define ADD_STUDENT_INFO_H_INCLUDED


#include <stdio.h>

struct _student
{
    /** 学生的学号 */
    long long id;
    /** 学生的姓名 */
    char name[20];
    /** 学生语文成绩 */
    int score_chain;
    /** 学生数学成绩 */
    int score_math;
    /** 学生C语言成绩 */
    int score_c;
    /** 指向下一个空间的指针 */
    struct _student * next;
};
/** 学生信息表 */
typedef struct _student Student;


/** 建立学生链表 */
Student * CreateStudentLink();

/** 显示链表类容 */
void Show_student( Student * );










#endif // ADD_STUDENT_INFO_H_INCLUDED
