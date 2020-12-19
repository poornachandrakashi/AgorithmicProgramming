#include <iostream>

int *stack;
int stack_idx = 0, stack_size;

void push(int x)
{
    if (stack_idx == stack_size)
    {
        std::cout << "\n Overflow ";
    }
    else
    {
        stack[stack_idx++] = x;
    }
}

void pop()
{
    if (stack_idx == 0)
    {
        std::cout << "\n Underflow";
    }
    else
    {
        std::cout << "\n"
                  << stack[--stack_idx] << "Deleted";
    }
}

void show()
{
    for (int i = 0; i < stack_idx; i++)
    {
        std::cout << stack[i] << "\n";
    }
}

void topmost()
{
    std::cout << "\n Topmost Element:" << stack[stack_idx - 1];
}
void bottom()
{
    std::cout << "\n Bottom Element:" << stack[0];
}

int main()
{
    std::cout << "Enter the stack_size of stack:";
    std::cin >> stack_size;

    stack = new int[stack_size];
    int ch, x;
    do
    {
        std::cout << "\n 0.Exit";
        std::cout << "\n 1.Push";
        std::cout << "\n 2.Pop";
        std::cout << "\n 3.Print";
        std::cout << "\n 4.Print Topmost element";
        std::cout << "\n 5.Print Bottom Elements";
        std::cout << "\n Enter your choice";
        std::cin >> ch;
        if (ch == 1)
        {
            std::cout << "\n Insert:";
            std::cin >> x;
            push(x);
        }
        else if (ch == 2)
        {
            pop();
        }
        else if (ch == 3)
        {
            show();
        }
        else if (ch == 4)
        {
            topmost();
        }
        else if (ch == 5)
        {
            bottom();
        }
    } while (ch != 0);

    delete[] stack;

    return 0;
}