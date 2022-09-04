#include<iostream>
#include<vector>

using namespace std;

void printStack(const vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	/*// int *v_ptr = new int[3] {1,2,3} 과 비슷함

	vector<int> v{ 1,2,3 }; // vector에는 size 와 capacity 가 있음 -> new와 delete을 최대한 적게 사용하기

	v.reserve(1024);
	v.resize(2);

	for (auto& element : v)
	{
		cout << element << " ";
	}
	cout << endl;

	
	cout << v.size() << v.capacity() << endl;

	int* ptr = v.data();
	cout << ptr[2] << endl; // 없는척 하는걸 억지로 가져옴*/

	vector <int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(100);
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);

	return 0;

}