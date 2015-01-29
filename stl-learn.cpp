//heap learn
#include"stl-learn.h"
void PrintfVectorInt(vector<int> &vet)
{
	for (vector<int>::iterator pos = vet.begin(); pos != vet.end(); pos++)
		printf("%d ", *pos);
	putchar('\n');
}
void heap_play()
{
	const int MAXN = 10;
	int a[MAXN];
	int i;
	for (i = 0; i < MAXN; ++i)
		a[i] = rand() % (MAXN * 2);

	//动态申请vector 并对vector建堆
	vector<int> *pvet = new vector<int>(40);
	pvet->assign(a, a + MAXN);
	PrintfVectorInt(*pvet);
	//建堆
	make_heap(pvet->begin(), pvet->end());
	PrintfVectorInt(*pvet);

	//加入新数据 先在容器中加入，再调用push_heap()
	pvet->push_back(25);
	push_heap(pvet->begin(), pvet->end());
	PrintfVectorInt(*pvet);

	//删除数据  要先调用pop_heap()，再在容器中删除
	pop_heap(pvet->begin(), pvet->end());
	pvet->pop_back();
	pop_heap(pvet->begin(), pvet->end());
	pvet->pop_back();
	PrintfVectorInt(*pvet);

	//堆排序
	sort_heap(pvet->begin(), pvet->end());
	PrintfVectorInt(*pvet);

	delete pvet;
}
int set_play()
{
	printf("--set使用 by MoreWindows( http://blog.csdn.net/MoreWindows ) --\n\n");
	const int MAXN = 15;
	int a[MAXN];
	int i;
	srand(time(NULL));
	for (i = 0; i < MAXN; ++i)
		a[i] = rand() % (MAXN * 2);

	set<int> iset;   
	set<int>::iterator pos; 

	//插入数据 insert()有三种重载
	iset.insert(a, a + MAXN);

	//当前集合中个数 最大容纳数据量
	printf("当前集合中个数: %d     最大容纳数据量: %d\n", iset.size(), iset.max_size());

	//依次输出
	printf("依次输出集合中所有元素-------\n");
	for (pos = iset.begin(); pos != iset.end(); ++pos)
		printf("%d ", *pos);
	putchar('\n');

	//查找
	int findNum = MAXN;
	printf("查找 %d是否存在-----------------------\n", findNum);
	pos = iset.find(findNum);
	if (pos != iset.end())
		printf("%d 存在\n", findNum);
	else
		printf("%d 不存在\n", findNum);

	//在最后位置插入数据，如果给定的位置不正确，会重新找个正确的位置并返回该位置
	pos  = iset.insert(--iset.end(), MAXN * 2); 
	printf("已经插入%d\n", *pos);

	//删除
	iset.erase(MAXN);
	printf("已经删除%d\n", MAXN);

	//依次输出
	printf("依次输出集合中所有元素-------\n");
	for (pos = iset.begin(); pos != iset.end(); ++pos)
		printf("%d ", *pos);
	putchar('\n');
	return 0;
}
