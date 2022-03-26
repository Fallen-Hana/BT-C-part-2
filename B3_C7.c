#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


 struct hoten{
    char ho[100];
    char tendem[100];
    char ten[100];
};
 struct quequan{
    char xa[100];
    char huyen[100];
    char tinh[100];
};
 struct diem{
    float diemtoan;
    float diemly;
    float diemhoa;
};
 struct sinhvien{
    struct hoten ht;
    struct quequan qq ;
    char truong[100];
    int tuoi;
    int sbd;
    struct diem d ;
 };
int main()
{
    struct sinhvien sv;
    for(int i=0;i<20;i++)
    {
    printf("nhap thong tin thi sinh %d\n",i+1);
    printf("SBD: ");
    scanf("%d", &sv.sbd);
    fflush(stdin);
    printf("Truong: ");
    gets(sv.truong);
    printf("Tuoi: ");
    scanf("%d", &sv.tuoi);
    fflush(stdin);
    printf("Ho va ten:\n");
    printf("ho: ");
    gets( sv.ht.ho);
    fflush(stdin);
    printf("Ten dem: ");
    gets(sv.ht.tendem);
    fflush(stdin);
    printf("Ten: ");
    gets(sv.ht.ten);
    fflush(stdin);
    printf("Que quan: \n");
    printf("Xa: ");
    gets(sv.qq.xa);
    fflush(stdin);
    printf("Huyen: ");
    gets(sv.qq.huyen);
    fflush(stdin);
    printf("Tinh: ");
    gets(sv.qq.tinh);
    fflush(stdin);
    printf("Diem: \n");
    printf("Diem Toan: ");
    scanf("%d", &sv.d.diemtoan);
    fflush(stdin);
    printf("Diem Ly: ");
    scanf("%d", &sv.d.diemly);
    fflush(stdin);
    printf("Diem Hoa: ");
    scanf("%d", &sv.d.diemhoa);
    fflush(stdin);
    printf("*******************************************************\n");
    }
    return 0;


}