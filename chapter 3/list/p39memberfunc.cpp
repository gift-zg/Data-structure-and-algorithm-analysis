#include"_List_H.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
	int Element;
	Position Next;
};
/*�������LΪ�գ��򷵻�true*/
int IsEmpty(List L)
{
	return L->Next == nullptr;
};
/*���Ե�ǰλ���Ƿ�Ϊ�����ĩβλ�õĺ���*/
int IsLast(Position P, List L)
{
	return P->Next == nullptr;
};

/*Find ��������*/
Position Find(int X, List L)
{
	Position P;
	P = L->Next;
	while (P != nullptr && P->Element != X)
		P = P->Next;
	return P;
};

/*�����ɾ������*/
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

/*��Deleteһ��ʹ�õ�Find����*/
Position FindPrevious(int X, List L)
{
	Position P;
	P = L;
	while (P->Next != nullptr && P->Next->Element != X)
		P = P->Next;
	return P;
}

/*FatalError����*/
void FatalError(const string& s)
{
	cout << s << endl;
};

/*����Ĳ�������*/
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

