#include"_List_H.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
	int Element;
	Position Next;
};
/*如果链表L为空，则返回true*/
int IsEmpty(List L)
{
	return L->Next == nullptr;
};
/*测试当前位置是否为链表的末尾位置的函数*/
int IsLast(Position P, List L)
{
	return P->Next == nullptr;
};

/*Find 查找例程*/
Position Find(int X, List L)
{
	Position P;
	P = L->Next;
	while (P != nullptr && P->Element != X)
		P = P->Next;
	return P;
};

/*链表的删除例程*/
void Delete(int X, List L)
{
	Position P, TmpCell;
	P = FindPrevious(X, L);
	if (!IsLast(P, L))
	{
		TmpCell = P->Next;
		P->Next = TmpCell->Next;
		free(TmpCell);
	}
};

/*与Delete一起使用的Find例程*/
Position FindPrevious(int X, List L)
{
	Position P;
	P = L;
	while (P->Next != nullptr && P->Next->Element != X)
		P = P->Next;
	return P;
}

/*FatalError函数*/
void FatalError(const string& s)
{
	cout << s << endl;
};

/*链表的插入例程*/
void Insert(int X, List L, Position P)
{
	Position TmpCell;
	TmpCell = (Position)malloc(sizeof(struct Node));
	if (TmpCell == nullptr)
		FatalError("Out of space!!!");
	TmpCell->Element = X;
	TmpCell->Next = P->Next;
	P->Next = TmpCell;
}

