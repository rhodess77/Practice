#include <stdio.h>

//���һ�������жϻ����Ĵ�С���洢
int main()
{
    int a=1;//0x 00 00 00 01

    //��charָ�뽫���ַ�ĵ�һλȡ��
    //һ�����͵Ĵ�С������Ӧ��ָ����ȡ�������ֽڵ������Ƕ�Ӧ��
    char *addr=(char*)&a;
    
    //���ݵ�һλ�Ƿ�Ϊ1�жϴ�С���ֽ���
    if(1==*addr)
    {//��λ�洢�ڵ͵�ַ
        printf("��ǰ����ΪС�˴洢");
    }
    else
    {//��λ�洢�ڸߵ�ַ
        printf("��ǰ����Ϊ��˴洢");
    }
    getchar();
    return 0;
}