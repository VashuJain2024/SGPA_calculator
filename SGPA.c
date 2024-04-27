#include <stdio.h>
void grade_point(int marks);
int credit_points(int Cr, int marks);
int main()
{
    int Physics, Chemistry, Mathematics_I, Electrical, Electronics, PPS, Mechanical, EVS, Soft_Skills, Physics_Lab, Chemistry_Lab, Electrical_Lab, Electronics_Lab, PPS_Lab, English_Lab, Graphics_Lab, Workshop_Lab;
    int a = Physics = Chemistry, b = Mathematics_I, c = Electrical = Electronics, d = PPS = Mechanical, e = EVS = Soft_Skills, f = Physics_Lab = Chemistry_Lab, g = Electrical_Lab = Electronics_Lab, h = PPS_Lab = English_Lab, i = Graphics_Lab = Workshop_Lab, semester;
    char cycle, P, C;
    int gp10 = 10, gp9 = 9, gp8 = 8, gp7 = 7, gp6 = 6, gp5 = 5, gp4 = 4, gp0 = 0;
    int Cr_a = 4, Cr_b = 4, Cr_c = 3, Cr_d = 3, Cr_e = 3, Cr_f = 1, Cr_g = 1, Cr_h = 1, Cr_i = 2;
    int cra, crb, crc, crd, cre, crf, crg, crh, cri;
    printf("Enter your semester:");
    scanf("%d", &semester);
    printf("Enter your CYCLE:P or C:");
    scanf("%s", &cycle);
    if (cycle == 80)
    {
        printf("1.Enter the marks of Enginnering Physics:");
        scanf("%d", &a);
        grade_point(a);
        cra = credit_points(Cr_a, a);
        printf("2.Enter the marks of Enginnering Mathematics-I:");
        scanf("%d", &b);
        grade_point(b);
        crb = credit_points(Cr_b, b);
        printf("3.Enter the marks of Fundamentals of Electrical Engineering:");
        scanf("%d", &c);
        grade_point(c);
        crc = credit_points(Cr_c, c);
        printf("4.Enter the marks of PPS:");
        scanf("%d", &d);
        grade_point(d);
        crd = credit_points(Cr_d, d);
        printf("5.Enter the marks of Environment and Ecology:");
        scanf("%d", &e);
        grade_point(e);
        cre = credit_points(Cr_e, e);
        printf("6.Enter the marks of Engineering Physics Lab:");
        scanf("%d", &f);
        grade_point(f);
        crf = credit_points(Cr_f, f);
        printf("7.Enter the marks of Basic Electrical Engineering Lab:");
        scanf("%d", &g);
        grade_point(g);
        crg = credit_points(Cr_g, g);
        printf("8.Enter the marks of PPS Lab:");
        scanf("%d", &h);
        grade_point(h);
        crh = credit_points(Cr_h, h);
        printf("9.Enter the marks of Engineering Graphics & Design Lab:");
        scanf("%d", &i);
        grade_point(i);
        cri = credit_points(Cr_i, i);
        int total_credit = cra + crb + crc + crd + cre + crf + crg + crh + cri;
        printf("Total Credits:%d\n", total_credit);
        float sgpa = (float)total_credit / 22;
        printf("SGPA:%f\n", sgpa);
        printf("THANK YOU!!!\n");
    }
    else if (cycle == 67)
    {
        printf("1.Enter the marks of Enginnering Chemistry:");
        scanf("%d", &a);
        grade_point(a);
        cra = credit_points(Cr_a, a);
        printf("2.Enter the marks of Enginnering Mathematics-I:");
        scanf("%d", &b);
        grade_point(b);
        crb = credit_points(Cr_b, b);
        printf("3.Enter the marks of Fundamentals of Electronics Engineering:");
        scanf("%d", &c);
        grade_point(c);
        crc = credit_points(Cr_c, c);
        printf("4.Enter the marks of Fundamentals of Mechanical Engineering:");
        scanf("%d", &d);
        grade_point(d);
        crd = credit_points(Cr_d, d);
        printf("5.Enter the marks of Soft Skills:");
        scanf("%d", &e);
        grade_point(e);
        cre = credit_points(Cr_e, e);
        printf("6.Enter the marks of  Engineering Chemistry Lab:");
        scanf("%d", &f);
        grade_point(f);
        crf = credit_points(Cr_f, f);
        printf("7.Enter the marks of Basic Electronics Engineering Lab:");
        scanf("%d", &g);
        grade_point(g);
        crg = credit_points(Cr_g, g);
        printf("8.Enter the marks of English Language Lab:");
        scanf("%d", &h);
        grade_point(h);
        crh = credit_points(Cr_h, h);
        printf("9.Enter the marks of Workshop Practice Lab:");
        scanf("%d", &i);
        grade_point(i);
        cri = credit_points(Cr_i, i);
        int total_credit = cra + crb + crc + crd + cre + crf + crg + crh + cri;
        float sgpa = (float)total_credit / 22;
        printf("SGPA:%f\n", sgpa);
        printf("THANK YOU!!!\n");
    }
    return 0;
}
void grade_point(int marks)
{
    int gp10 = 10, gp9 = 9, gp8 = 8, gp7 = 7, gp6 = 6, gp5 = 5, gp4 = 4, gp0 = 0;
    if (marks >= 90 && marks <= 100)
    {
        printf("Level:Outstanding\n");
        printf("Letter Grade:A+\n");
        printf("Grade Points:%d\n", gp10);
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Level:Excellent\n");
        printf("Letter Grade:A\n");
        printf("Grade Points:%d\n", gp9);
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Level:Very Good\n");
        printf("Letter Grade:B+\n");
        printf("Grade Points:%d\n", gp8);
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Level:Good\n");
        printf("Letter Grade:B\n");
        printf("Grade Points:%d\n", gp7);
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Level:Above Average\n");
        printf("Letter Grade:C\n");
        printf("Grade Points:%d\n", gp6);
    }
    else if (marks >= 45 && marks < 50)
    {
        printf("Level:Average\n");
        printf("Letter Grade:D\n");
        printf("Grade Points:%d\n", gp5);
    }
    else if (marks >= 40 && marks < 45)
    {
        printf("Level:Poor\n");
        printf("Letter Grade:E\n");
        printf("Grade Points:%d\n", gp4);
    }
    else if (marks < 40 && marks >= 0)
    {
        printf("Level:Fail\n");
        printf("Letter Grade:F\n");
        printf("Grade Points:%d\n", gp0);
    }
}
int credit_points(int Cr, int marks)
{
    int gp10 = 10, gp9 = 9, gp8 = 8, gp7 = 7, gp6 = 6, gp5 = 5, gp4 = 4, gp0 = 0;
    if (marks >= 90 && marks <= 100)
    {
        int point = Cr * gp10;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 80 && marks < 90)
    {
        int point = Cr * gp9;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 70 && marks < 80)
    {
        int point = Cr * gp8;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 60 && marks < 70)
    {
        int point = Cr * gp7;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 50 && marks < 60)
    {
        int point = Cr * gp6;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 45 && marks < 50)
    {
        int point = Cr * gp5;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks >= 40 && marks < 45)
    {
        int point = Cr * gp4;
        printf("Credit Points:%d\n", point);
        return point;
    }
    else if (marks < 40 && marks >= 0)
    {
        int point = Cr * gp0;
        printf("Credit Points:%d\n", point);
        return point;
    }
    return 0;
}