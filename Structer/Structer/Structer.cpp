#include <iostream>

typedef struct score
{
    char name[20];
    int E_score;
}S;

int main()
{
    S s1 = { "EAE", 82 };

    std::cout << s1.E_score << s1.name << std::endl;
}
