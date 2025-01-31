#include "main.hpp"

using namespace std;

template <typename T>
class MyStack
{

private:
	


public:
	MyStack() {}

	void push(int x)
	{

	}

	void pop()
	{

	}

	int top()
	{

	}

	bool isEmpty()
	{

	}

	int size()
	{

	}
};

int main()
{
	MyStack stack;
	string line;
	while (getline(cin, line))
	{
		stringstream ss(line);
		string cmd;
		ss >> cmd;
		if (cmd == "push")
		{
			int x;
			ss >> x;
			// push method
		}
		else if (cmd == "pop")
		{
			// pop method
		}
		else if (cmd == "top")
		{
			// return the top
		}
		else if (cmd == "isEmpty")
		{
			// return boolean based on if its empty or not
		}
		else if (cmd == "size")
		{
			// return the size of the stack
		}
	}
	return 0;
}