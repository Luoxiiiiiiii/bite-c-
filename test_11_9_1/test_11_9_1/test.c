#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//standard input output
//��׼�������

//main����-������	
//main�����ǳ����·�ڣ������Ǵ�main�����ĵ�һ�п�ʼִ��
////int main()
//{
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	printf("hello C\n");
//	return 0;
//}

//int - ����
//ģ��
//
//int main()
//{
//	//д����
//	return 0;
//}
////
//////main����ֻ��һ������һ���ļ�����һ����Ŀ�ж�ֻ����һ��2
//
//int main()
//{
//	printf("hehe\n");//		\n:����
//	printf("abcdcf");
//	printf("bbql\n");
//	printf("%d\n", 100);//	%d�Ǵ�ӡ���͵�
//	printf("%c\n", 'w');//	%c�Ǵ�ӡ�ַ���
//	printf("%f\n", 3.5f);//	%f�Ǵ�ӡС����
//
//	//ռλ�� - 
//
//	return 0;
//
// }
//
////int main()
////{
//	int sign = 1;
//	float deno = 2.0, sum = 1.0, term;
//	while (deno <= 100)
//	{
//		sign = -sign;
//		term = sign / deno;
//		sum = sum + term;
//		deno = deno + 1;
//
//	}
//	printf("The sum is %f", sum);
//	return 0;
//}

	//�ؼ��� int return do ....
	//char �ַ� float �����ȸ����� double ˫���ȸ�����
	//�ַ���ASCII��
//int main()
//{
//	//32-127
//	int i = 0;
//	for (i = 32; i <= 127; i++)
//	{
//		if (i % 16 == 0)
//			printf("\n");
//		printf("%c ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", 100);//����
//	printf("%c\n", 100);//ASCII�� %c������ӡ�ַ���
//
//	return 0;
//}
//
//int main()
//{
//	'a';
//	'w';
//	"abc";//�ַ���
//	"a";
//	"";//���ַ���
////	//'��';���У����ֲ��ǵ����ַ�
////	return 0;
////}
//
//int main()
//{
//	printf("hehe\n");
//	printf("%s","haha ��");//%s ��������ӡ�ַ�����
//	return 0;
//}

//int main()
//{
	//"abcdef";//�ַ�����ĩβ����һ��\0�ַ�
	//	\0���ַ����Ľ�����־
//
//	//�ַ�����
//	//���� - һ������
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	char arr3[] = "abc\0def";
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//
//		
//	return 0;
//}
//
//// \0 - ת���ַ�
// \n - ת���ַ�

// ת���ַ� - ת������˼���ַ�

//int main()
//{
//	printf("abc\ndef");
//	return 0;
//}
//
//
//int main()
//{
//	printf("%c", 'x');
//	return 0;
//}
//
//
//int main()
//{
//	printf("%c",'123');
//		return 0;
//}

//%c ��ӡ�ַ����������֣�1.x--����ΪASCII��  2.'x'��ӡ�����֣���Ϊ�ַ�  3.'xyz'��ӡ�������ַ�����z


//int main()
//{
//	printf("%c",'\'');//  \'��ת���ַ�
//	printf("%s", "\"");//	\"��ת���ַ�
//	return 0;
//}

//int main()
//{
//	printf("c:\test\code\test.c");
//	return 0;
//	//�޷���ȷ��� \t��ת���ַ�
//}

//int main()
//{
//	//printf("c:\\test\\code\\test.c");//		\\Ҳ��ת���ַ�
//
//	//printf("\a");//  �����
//	//printf("abc\bdef");//�˸��
//	//printf("ab\tdef\tq\txxxxxxx");  //�Ʊ��
//
//
//	return 0;
//}
	

///   \ddd �˽���  \130   X   (�ַ��İ˽��Ʊ�ʾ

//int main()
//{
//	printf("%c\n", '\130');//130(�˽��ƣ���Ӧ��ASCII��
//	return 0;
//}

//		\xdd d d��ʾ2��ʮ����������  �磺 \x30  0
