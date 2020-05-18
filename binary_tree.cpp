/*Калиманов Иван, БИВ-194*/
/*
*II. Написать программу, которая создает бинарное дерево, состоящее из целых
*чисел, которые вводятся с клавиатуры. Затем программа выполняет
*преобразования в соответствии с номером варианта и печатает все числа
*исходного и преобразованного бинарного дерева (или другой результат работы
*программы).
*13. Находит сумму всех нечетных элементов дерева.
*/

#include <stdio.h>
#include <malloc.h>

using namespace std;

#define LINE_LEN 255
#define WORD_LEN 81
#define EDGE_LEN 5

typedef struct tree_node{
    int value;              /*значение в узле*/
    tree_node *left;        /*левый потомок*/
    tree_node *right;       /*правый потомок*/
} tree_node;


tree_node *init_root(int);
void set_left(tree_node *, int);
void set_right(tree_node *, int);
int sum_of_odd_in_tree(tree_node *);
int is_odd_in_tree(tree_node *);
tree_node *get_tree();
void print_tree(tree_node *, int);

int main()
{
    tree_node *tree = get_tree();
    if (!tree)
        puts("Tree is empty");
    else
        print_tree(tree, 0);
    if (is_odd_in_tree(tree)){
        int sum = sum_of_odd_in_tree(tree);
        printf("%s %d\n", "Sum of odd numbers in tree is", sum);
    }
    else
        puts("There are no odd numbers");

}

/*
*инизиализация узла дерева
*/
tree_node *init_root(int val)
{
    tree_node *root = (tree_node*)malloc(sizeof(tree_node));
    root->left = NULL;
    root->right = NULL;
    root->value = val;
}

/*
*задание левого потомка
*/
void set_left(tree_node *root, int val)
{
    root->left = init_root(val);
}

/*
*задание правого потомка
*/
void set_right(tree_node *root, int val)
{
    root->right = init_root(val);
}

/*
*считывание дерева из консоли
*/
tree_node *get_tree()
{
    int n;
    tree_node *root = NULL,*next,*temp;
    puts("Input integer numbers\nletter means that input is over");
    if(scanf("%d",&n) == 1){
        root = init_root(n);
        while(scanf("%d",&n) == 1)
        {
            next=temp=root;
            while (next != NULL)
            {
                temp=next;
                if (n < temp->value) 
                    next = temp->left;
                else next=temp->right;
            }
        if (n < temp->value) 
            set_left(temp, n);
        else
            set_right(temp, n);
        }
    }
    return root;
} 

/*
*печать дерева в консоль
*/
void print_tree(tree_node *root, int space)
{   
    if (root == NULL)
        return;

    space += EDGE_LEN;

    print_tree(root->right, space);

    printf("\n");

    for (int i = EDGE_LEN; i < space; i++)
        printf(" ");

    printf("%d\n", root->value);

    print_tree(root->left, space);

}

/*
*вернёт 1, если в дереве есть нечетное число, иначе 0
*/
int is_odd_in_tree(tree_node *root)
{
    if (root->value % 2 != 0)
        return 1;
    if (root->left != NULL)
        if (is_odd_in_tree(root->left))
            return 1;
    if (root->right != NULL)
        if (is_odd_in_tree(root->right))
            return 1;
    return 0;   
}

/*
*вернет сумму нечетных чисел в дереве
*/
int sum_of_odd_in_tree(tree_node *root)
{
    int sum = 0;
    if (root->value % 2 != 0)
        sum += root->value;
    if (root->left != NULL)
        sum += sum_of_odd_in_tree(root->left);
    if (root->right != NULL)
        sum += sum_of_odd_in_tree(root->right);
    return sum;
}
