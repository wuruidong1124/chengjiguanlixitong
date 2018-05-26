#include <stdio.h>
#include <stdlib.h>
//#include "Add_Subject.h"
#include "Add_student_info.h"
int main()
{
//    Subject * subject_link;
//    subject_link = CreateSubjectLink_0();
//    Show_Subject(subject_link);

//    printf("添加元素！");
//    Add_end_subjict(subject_link);
//    Show_Subject(subject_link);
//    Show_Subject(subject_link);

//    printf("请输入想要删除科目的ID：");
//    int id;
//    scanf("%d",&id);
//    Delete_subject(subject_link , id);
//    Show_Subject(subject_link);

//    printf("请输入要删除学科的名称：");
//    char name[20];
//    scanf("%s",name);
//    Delete_subject_by_name(subject_link , name);
//    Show_Subject(subject_link);

//    printf("请输入你想要查找的科目的ID编号：");
//    scanf("%d",&id);
//    Find_subject_by_id(subject_link , id);
//    Show_Subject(subject_link );

//    char a[20];
//    printf("请输入要查找的姓名：");
//    scanf("%s",a);
//    Find_subject_by_name(subject_link , a);

//    printf("请输入想要修改的科目的编号：");
//    int id ;
//    scanf("%d",&id);
//    Recompose_subject_by_id(subject_link , id);
//    Show_Subject(subject_link);

//    printf("请输入要修改的学科名：");
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
//功能要求：  添加科目
//（1）添加学生的记录
//（2）查询学生（分别按学号和姓名）
//（3）对学生数据排序（分别按平均成绩和计算机成绩的降序）
//（4）删除学生记录
//（5）修改学生记录
//（6）班级成绩分析（各科平均成绩、最高分、最低分、及格率）
//（7）输出学生信息表











