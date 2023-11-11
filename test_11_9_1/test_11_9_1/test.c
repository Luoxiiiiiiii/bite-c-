#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//standard input output
//标准输入输出

//main函数-主函数	
//main函数是程序的路口，程序都是从main函数的第一行开始执行
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

//int - 整型
//模板
//
//int main()
//{
//	//写代码
//	return 0;
//}
////
//////main函数只有一个，在一个文件或者一个项目中都只能有一个2
//
//int main()
//{
//	printf("hehe\n");//		\n:换行
//	printf("abcdcf");
//	printf("bbql\n");
//	printf("%d\n", 100);//	%d是打印整型的
//	printf("%c\n", 'w');//	%c是打印字符的
//	printf("%f\n", 3.5f);//	%f是打印小数的
//
//	//占位符 - 
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

	//关键字 int return do ....
	//char 字符 float 单精度浮点型 double 双精度浮点型
	//字符和ASCII码
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
//	printf("%d\n", 100);//整型
//	printf("%c\n", 100);//ASCII码 %c用来打印字符的
//
//	return 0;
//}
//
//int main()
//{
//	'a';
//	'w';
//	"abc";//字符串
//	"a";
//	"";//空字符串
////	//'坤';不行，汉字不是单个字符
////	return 0;
////}
//
//int main()
//{
//	printf("hehe\n");
//	printf("%s","haha 啊");//%s 是用来打印字符串的
//	return 0;
//}

//int main()
//{
	//"abcdef";//字符串的末尾隐藏一个\0字符
	//	\0是字符串的结束标志
//
//	//字符数组
//	//数组 - 一组数据
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
//// \0 - 转义字符
// \n - 转义字符

// 转义字符 - 转变了意思的字符

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

//%c 打印字符，对于数字，1.x--即视为ASCII码  2.'x'打印该数字，视为字符  3.'xyz'打印最后面的字符，即z


//int main()
//{
//	printf("%c",'\'');//  \'是转义字符
//	printf("%s", "\"");//	\"是转义字符
//	return 0;
//}

//int main()
//{
//	printf("c:\test\code\test.c");
//	return 0;
//	//无法正确输出 \t是转义字符
//}

//int main()
//{
//	//printf("c:\\test\\code\\test.c");//		\\也是转义字符
//
//	//printf("\a");//  好玩儿
//	//printf("abc\bdef");//退格符
//	//printf("ab\tdef\tq\txxxxxxx");  //制表符
//
//
//	return 0;
//}
	

///   \ddd 八进制  \130   X   (字符的八进制表示

//int main()
//{
//	printf("%c\n", '\130');//130(八进制）对应的ASCII码
//	return 0;
//}

//		\xdd d d表示2个十六进制数字  如： \x30  0
