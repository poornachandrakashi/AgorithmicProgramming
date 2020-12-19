#inlcude < iostream>

struct node
{
    int val,
        node *next;
};

node *top_var;

void push(int x)
{
    node *n = new node;
    n->val = x;
    n->next = top_var;
    top_var = n;
}

void pop()
{
    if (top_var == Null)
    {
        std::cout << "\nUnderflow";
    }
    else
    {
        node *t = top_var;
        std::cout << "\n"
                  << t->val << "deleted";
        top_var = top_var->next;
        delete t;
    }
}

void show()
{
}
